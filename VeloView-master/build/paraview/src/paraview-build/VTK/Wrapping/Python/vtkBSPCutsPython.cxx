// python wrapper for vtkBSPCuts
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBSPCuts.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBSPCuts(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBSPCutsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectNew
#endif

static const char **PyvtkBSPCuts_Doc();


static PyObject *
PyvtkBSPCuts_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBSPCuts::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPCuts_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBSPCuts::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPCuts_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBSPCuts *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBSPCuts::NewInstance());

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
PyvtkBSPCuts_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBSPCuts *tempr = vtkBSPCuts::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPCuts_CreateCuts_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  int temp1;
  int *temp2 = NULL;
  int *save2 = NULL;
  int small2[8];
  int size2 = 0;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  int *temp4 = NULL;
  int *save4 = NULL;
  int small4[8];
  int size4 = 0;
  int *temp5 = NULL;
  int *save5 = NULL;
  int small5[8];
  int size5 = 0;
  double *temp6 = NULL;
  double *save6 = NULL;
  double small6[8];
  int size6 = 0;
  double *temp7 = NULL;
  double *save7 = NULL;
  double small7[8];
  int size7 = 0;
  int *temp8 = NULL;
  int *save8 = NULL;
  int small8[8];
  int size8 = 0;
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
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new int[2*size2];
      }
    save2 = &temp2[size2];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new double[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new int[2*size4];
      }
    save4 = &temp4[size4];
    size5 = ap.GetArgSize(5);
    temp5 = small5;
    if (size5 > 4)
      {
      temp5 = new int[2*size5];
      }
    save5 = &temp5[size5];
    size6 = ap.GetArgSize(6);
    temp6 = small6;
    if (size6 > 4)
      {
      temp6 = new double[2*size6];
      }
    save6 = &temp6[size6];
    size7 = ap.GetArgSize(7);
    temp7 = small7;
    if (size7 > 4)
      {
      temp7 = new double[2*size7];
      }
    save7 = &temp7[size7];
    size8 = ap.GetArgSize(8);
    temp8 = small8;
    if (size8 > 4)
      {
      temp8 = new int[2*size8];
      }
    save8 = &temp8[size8];
    }

  if (op && ap.CheckArgCount(9) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetArray(temp7, size7) &&
      ap.GetArray(temp8, size8))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);
    ap.SaveArray(temp6, save6, size6);
    ap.SaveArray(temp7, save7, size7);
    ap.SaveArray(temp8, save8, size8);

    if (ap.IsBound())
      {
      op->CreateCuts(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }
    else
      {
      op->vtkBSPCuts::CreateCuts(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (ap.ArrayHasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(6, temp6, size6);
      }

    if (ap.ArrayHasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(7, temp7, size7);
      }

    if (ap.ArrayHasChanged(temp8, save8, size8) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(8, temp8, size8);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }
  if (temp5 && temp5 != small5)
    {
    delete [] temp5;
    }
  if (temp6 && temp6 != small6)
    {
    delete [] temp6;
    }
  if (temp7 && temp7 != small7)
    {
    delete [] temp7;
    }
  if (temp8 && temp8 != small8)
    {
    delete [] temp8;
    }

  return result;
}

static PyObject *
PyvtkBSPCuts_CreateCuts_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  vtkKdNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkKdNode"))
    {
    if (ap.IsBound())
      {
      op->CreateCuts(temp0);
      }
    else
      {
      op->vtkBSPCuts::CreateCuts(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBSPCuts_CreateCuts(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 9:
      return PyvtkBSPCuts_CreateCuts_s1(self, args);
    case 1:
      return PyvtkBSPCuts_CreateCuts_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CreateCuts");
  return NULL;
}



static PyObject *
PyvtkBSPCuts_GetKdNodeTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKdNodeTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkKdNode *tempr = (ap.IsBound() ?
      op->GetKdNodeTree() :
      op->vtkBSPCuts::GetKdNodeTree());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPCuts_GetNumberOfCuts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCuts() :
      op->vtkBSPCuts::GetNumberOfCuts());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPCuts_GetArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  int temp0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  int *temp3 = NULL;
  int *save3 = NULL;
  int small3[8];
  int size3 = 0;
  int *temp4 = NULL;
  int *save4 = NULL;
  int small4[8];
  int size4 = 0;
  double *temp5 = NULL;
  double *save5 = NULL;
  double small5[8];
  int size5 = 0;
  double *temp6 = NULL;
  double *save6 = NULL;
  double small6[8];
  int size6 = 0;
  int *temp7 = NULL;
  int *save7 = NULL;
  int small7[8];
  int size7 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new double[2*size2];
      }
    save2 = &temp2[size2];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new int[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new int[2*size4];
      }
    save4 = &temp4[size4];
    size5 = ap.GetArgSize(5);
    temp5 = small5;
    if (size5 > 4)
      {
      temp5 = new double[2*size5];
      }
    save5 = &temp5[size5];
    size6 = ap.GetArgSize(6);
    temp6 = small6;
    if (size6 > 4)
      {
      temp6 = new double[2*size6];
      }
    save6 = &temp6[size6];
    size7 = ap.GetArgSize(7);
    temp7 = small7;
    if (size7 > 4)
      {
      temp7 = new int[2*size7];
      }
    save7 = &temp7[size7];
    }

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetArray(temp7, size7))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);
    ap.SaveArray(temp6, save6, size6);
    ap.SaveArray(temp7, save7, size7);

    int tempr = (ap.IsBound() ?
      op->GetArrays(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkBSPCuts::GetArrays(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (ap.ArrayHasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(6, temp6, size6);
      }

    if (ap.ArrayHasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(7, temp7, size7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }
  if (temp5 && temp5 != small5)
    {
    delete [] temp5;
    }
  if (temp6 && temp6 != small6)
    {
    delete [] temp6;
    }
  if (temp7 && temp7 != small7)
    {
    delete [] temp7;
    }

  return result;
}


static PyObject *
PyvtkBSPCuts_Equals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Equals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  vtkBSPCuts *temp0 = NULL;
  double temp1 = 0.0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkBSPCuts") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    int tempr = (ap.IsBound() ?
      op->Equals(temp0, temp1) :
      op->vtkBSPCuts::Equals(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPCuts_PrintTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrintTree();
      }
    else
      {
      op->vtkBSPCuts::PrintTree();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBSPCuts_PrintArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrintArrays();
      }
    else
      {
      op->vtkBSPCuts::PrintArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBSPCuts_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkBSPCuts *tempr = vtkBSPCuts::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkBSPCuts_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkBSPCuts *tempr = vtkBSPCuts::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBSPCuts_GetData_Methods[] = {
  {NULL, PyvtkBSPCuts_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkBSPCuts_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkBSPCuts_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBSPCuts_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkBSPCuts_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkBSPCuts_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkBSPCuts::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBSPCuts_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkBSPCuts::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBSPCuts_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkBSPCuts::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBSPCuts_Methods[] = {
  {(char*)"GetClassName", PyvtkBSPCuts_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBSPCuts_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBSPCuts_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBSPCuts\nC++: vtkBSPCuts *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBSPCuts_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBSPCuts\nC++: vtkBSPCuts *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CreateCuts", PyvtkBSPCuts_CreateCuts, METH_VARARGS,
   (char*)"V.CreateCuts([float, ...], int, [int, ...], [float, ...], [int,\n    ...], [int, ...], [float, ...], [float, ...], [int, ...])\nC++: void CreateCuts(double *bounds, int ncuts, int *dim,\n    double *coord, int *lower, int *upper, double *lowerDataCoord,\n     double *upperDataCoord, int *npoints)\nV.CreateCuts(vtkKdNode)\nC++: void CreateCuts(vtkKdNode *kd)\n\nInitialize the cuts with arrays of information.  This type of\n  information would be obtained from a graph partitioning\nsoftware\n  package like Zoltan.\n\n\n  bounds - the bounds (xmin, xmax, ymin, ymax, zmin, zmax) of the\n            space being partitioned\n  ncuts - the number cuts, also the size of the following arrays\n  dim   - the dimension along which the cut is made (x/y/z -\n0/1/2)\n  coord - the location of the cut along the axis\n  lower - array index for the lower region bounded by the cut\n  upper - array index for the upper region bounded by the cut\n  lowerDataCoord - optional upper bound of the data in the lower\nregion\n  upperDataCoord - optional lower bound of the data in the upper\nregion\n  npoints - optional number of points in the spatial region\n"},
  {(char*)"GetKdNodeTree", PyvtkBSPCuts_GetKdNodeTree, METH_VARARGS,
   (char*)"V.GetKdNodeTree() -> vtkKdNode\nC++: vtkKdNode *GetKdNodeTree()\n\nReturn a tree of vtkKdNode's representing the cuts specified\n  in this object.  This is our copy, don't delete it.\n"},
  {(char*)"GetNumberOfCuts", PyvtkBSPCuts_GetNumberOfCuts, METH_VARARGS,
   (char*)"V.GetNumberOfCuts() -> int\nC++: int GetNumberOfCuts()\n\nGet the number of cuts in the partitioning, which also the size\nof\n  the arrays in the array representation of the partitioning.\n"},
  {(char*)"GetArrays", PyvtkBSPCuts_GetArrays, METH_VARARGS,
   (char*)"V.GetArrays(int, [int, ...], [float, ...], [int, ...], [int, ...],\n     [float, ...], [float, ...], [int, ...]) -> int\nC++: int GetArrays(int len, int *dim, double *coord, int *lower,\n    int *upper, double *lowerDataCoord, double *upperDataCoord,\n    int *npoints)\n\nGet the arrays representing the cuts in the partitioning.\n"},
  {(char*)"Equals", PyvtkBSPCuts_Equals, METH_VARARGS,
   (char*)"V.Equals(vtkBSPCuts, float) -> int\nC++: int Equals(vtkBSPCuts *other, double tolerance=0.0)\n\nCompare these cuts with those of the other tree.  Returns true if\nthe two trees are the same.\n"},
  {(char*)"PrintTree", PyvtkBSPCuts_PrintTree, METH_VARARGS,
   (char*)"V.PrintTree()\nC++: void PrintTree()\n\n"},
  {(char*)"PrintArrays", PyvtkBSPCuts_PrintArrays, METH_VARARGS,
   (char*)"V.PrintArrays()\nC++: void PrintArrays()\n\n"},
  {(char*)"GetData", PyvtkBSPCuts_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkBSPCuts\nC++: static vtkBSPCuts *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkBSPCuts\nC++: static vtkBSPCuts *GetData(vtkInformationVector *v, int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {(char*)"Initialize", PyvtkBSPCuts_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nRestore data object to initial state,\n"},
  {(char*)"ShallowCopy", PyvtkBSPCuts_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *src)\n\nShallow copy.  These copy the data, but not any of the pipeline\nconnections.\n"},
  {(char*)"DeepCopy", PyvtkBSPCuts_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *src)\n\nShallow copy.  These copy the data, but not any of the pipeline\nconnections.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBSPCuts_StaticNew()
{
  return vtkBSPCuts::New();
}

PyObject *PyVTKClass_vtkBSPCutsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBSPCuts_StaticNew,
    PyvtkBSPCuts_Methods,
    "vtkBSPCuts", modulename,
    NULL, NULL,
    PyvtkBSPCuts_Doc(),
    PyVTKClass_vtkDataObjectNew(modulename));
  return cls;
}

const char **PyvtkBSPCuts_Doc()
{
  static const char *docstring[] = {
    "vtkBSPCuts - This class represents an axis-aligned Binary Spatial\n\n",
    "Superclass: vtkDataObject\n\n",
    "This class converts between the vtkKdTree\n   representation of a tree of vtkKdNodes (used by\nvtkDistributedDataFilter)\n   and a compact array representation that might be provided by a\n   graph partitioning library like Zoltan.  Such a representation\n   could be used in message passing.\n\nSee Also:\n\n\n     vtkKdTree vtkKdNode vtkDistributedDataFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBSPCuts(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBSPCutsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBSPCuts", o) != 0)
    {
    Py_DECREF(o);
    }

}

