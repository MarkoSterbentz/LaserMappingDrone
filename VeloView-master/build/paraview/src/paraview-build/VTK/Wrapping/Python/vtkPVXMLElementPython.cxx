// python wrapper for vtkPVXMLElement
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkPVXMLElement.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVXMLElement(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVXMLElementNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVXMLElement_Doc();


static PyObject *
PyvtkPVXMLElement_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVXMLElement::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVXMLElement::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVXMLElement::NewInstance());

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
PyvtkPVXMLElement_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVXMLElement *tempr = vtkPVXMLElement::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetName(temp0);
      }
    else
      {
      op->vtkPVXMLElement::SetName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkPVXMLElement::GetName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetId() :
      op->vtkPVXMLElement::GetId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_GetAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetAttribute(temp0) :
      op->vtkPVXMLElement::GetAttribute(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_GetAttributeOrEmpty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeOrEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeOrEmpty(temp0) :
      op->vtkPVXMLElement::GetAttributeOrEmpty(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_GetAttributeOrDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeOrDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeOrDefault(temp0, temp1) :
      op->vtkPVXMLElement::GetAttributeOrDefault(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_GetCharacterData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCharacterData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetCharacterData() :
      op->vtkPVXMLElement::GetCharacterData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_GetScalarAttribute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
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
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetScalarAttribute(temp0, temp1) :
      op->vtkPVXMLElement::GetScalarAttribute(temp0, temp1));

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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkPVXMLElement_GetScalarAttribute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
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

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetScalarAttribute(temp0, temp1) :
      op->vtkPVXMLElement::GetScalarAttribute(temp0, temp1));

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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkPVXMLElement_GetScalarAttribute_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetScalarAttribute(temp0, temp1) :
      op->vtkPVXMLElement::GetScalarAttribute(temp0, temp1));

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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyMethodDef PyvtkPVXMLElement_GetScalarAttribute_Methods[] = {
  {NULL, PyvtkPVXMLElement_GetScalarAttribute_s1, METH_VARARGS,
   (char*)"@zO *i"},
  {NULL, PyvtkPVXMLElement_GetScalarAttribute_s2, METH_VARARGS,
   (char*)"@zO *d"},
  {NULL, PyvtkPVXMLElement_GetScalarAttribute_s3, METH_VARARGS,
   (char*)"@zO *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPVXMLElement_GetScalarAttribute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVXMLElement_GetScalarAttribute_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarAttribute");
  return NULL;
}



static PyObject *
PyvtkPVXMLElement_GetVectorAttribute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  int temp1;
  int *temp2 = NULL;
  int *save2 = NULL;
  int small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new int[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->GetVectorAttribute(temp0, temp1, temp2) :
      op->vtkPVXMLElement::GetVectorAttribute(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyObject *
PyvtkPVXMLElement_GetVectorAttribute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  int temp1;
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

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->GetVectorAttribute(temp0, temp1, temp2) :
      op->vtkPVXMLElement::GetVectorAttribute(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyObject *
PyvtkPVXMLElement_GetVectorAttribute_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  int temp1;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new vtkIdType[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->GetVectorAttribute(temp0, temp1, temp2) :
      op->vtkPVXMLElement::GetVectorAttribute(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyMethodDef PyvtkPVXMLElement_GetVectorAttribute_Methods[] = {
  {NULL, PyvtkPVXMLElement_GetVectorAttribute_s1, METH_VARARGS,
   (char*)"@ziO *i"},
  {NULL, PyvtkPVXMLElement_GetVectorAttribute_s2, METH_VARARGS,
   (char*)"@ziO *d"},
  {NULL, PyvtkPVXMLElement_GetVectorAttribute_s3, METH_VARARGS,
   (char*)"@ziO *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPVXMLElement_GetVectorAttribute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVXMLElement_GetVectorAttribute_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVectorAttribute");
  return NULL;
}



static PyObject *
PyvtkPVXMLElement_GetCharacterDataAsVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCharacterDataAsVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  int temp0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
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
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetCharacterDataAsVector(temp0, temp1) :
      op->vtkPVXMLElement::GetCharacterDataAsVector(temp0, temp1));

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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkPVXMLElement_GetCharacterDataAsVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCharacterDataAsVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  int temp0;
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

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetCharacterDataAsVector(temp0, temp1) :
      op->vtkPVXMLElement::GetCharacterDataAsVector(temp0, temp1));

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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkPVXMLElement_GetCharacterDataAsVector_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCharacterDataAsVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  int temp0;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetCharacterDataAsVector(temp0, temp1) :
      op->vtkPVXMLElement::GetCharacterDataAsVector(temp0, temp1));

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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyMethodDef PyvtkPVXMLElement_GetCharacterDataAsVector_Methods[] = {
  {NULL, PyvtkPVXMLElement_GetCharacterDataAsVector_s1, METH_VARARGS,
   (char*)"@iO *i"},
  {NULL, PyvtkPVXMLElement_GetCharacterDataAsVector_s2, METH_VARARGS,
   (char*)"@iO *d"},
  {NULL, PyvtkPVXMLElement_GetCharacterDataAsVector_s3, METH_VARARGS,
   (char*)"@iO *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPVXMLElement_GetCharacterDataAsVector(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVXMLElement_GetCharacterDataAsVector_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCharacterDataAsVector");
  return NULL;
}



static PyObject *
PyvtkPVXMLElement_GetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetParent() :
      op->vtkPVXMLElement::GetParent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_GetNumberOfNestedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNestedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfNestedElements() :
      op->vtkPVXMLElement::GetNumberOfNestedElements());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_GetNestedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNestedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetNestedElement(temp0) :
      op->vtkPVXMLElement::GetNestedElement(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_FindNestedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindNestedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->FindNestedElement(temp0) :
      op->vtkPVXMLElement::FindNestedElement(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_FindNestedElementByName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindNestedElementByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->FindNestedElementByName(temp0) :
      op->vtkPVXMLElement::FindNestedElementByName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPVXMLElement_FindNestedElementByName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindNestedElementByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  vtkCollection *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCollection"))
    {
    if (ap.IsBound())
      {
      op->FindNestedElementByName(temp0, temp1);
      }
    else
      {
      op->vtkPVXMLElement::FindNestedElementByName(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVXMLElement_FindNestedElementByName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPVXMLElement_FindNestedElementByName_s1(self, args);
    case 2:
      return PyvtkPVXMLElement_FindNestedElementByName_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindNestedElementByName");
  return NULL;
}



static PyObject *
PyvtkPVXMLElement_RemoveAllNestedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllNestedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllNestedElements();
      }
    else
      {
      op->vtkPVXMLElement::RemoveAllNestedElements();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_RemoveNestedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNestedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    if (ap.IsBound())
      {
      op->RemoveNestedElement(temp0);
      }
    else
      {
      op->vtkPVXMLElement::RemoveNestedElement(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_LookupElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->LookupElement(temp0) :
      op->vtkPVXMLElement::LookupElement(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_AddAttribute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddAttribute(temp0, temp1);
      }
    else
      {
      op->vtkPVXMLElement::AddAttribute(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVXMLElement_AddAttribute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddAttribute(temp0, temp1);
      }
    else
      {
      op->vtkPVXMLElement::AddAttribute(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVXMLElement_AddAttribute_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  double temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->AddAttribute(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVXMLElement::AddAttribute(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVXMLElement_AddAttribute_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddAttribute(temp0, temp1);
      }
    else
      {
      op->vtkPVXMLElement::AddAttribute(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVXMLElement_AddAttribute_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddAttribute(temp0, temp1);
      }
    else
      {
      op->vtkPVXMLElement::AddAttribute(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVXMLElement_AddAttribute_Methods[] = {
  {NULL, PyvtkPVXMLElement_AddAttribute_s1, METH_VARARGS,
   (char*)"@zz"},
  {NULL, PyvtkPVXMLElement_AddAttribute_s2, METH_VARARGS,
   (char*)"@zd"},
  {NULL, PyvtkPVXMLElement_AddAttribute_s4, METH_VARARGS,
   (char*)"@zi"},
  {NULL, PyvtkPVXMLElement_AddAttribute_s5, METH_VARARGS,
   (char*)"@zL"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPVXMLElement_AddAttribute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVXMLElement_AddAttribute_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPVXMLElement_AddAttribute_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddAttribute");
  return NULL;
}



static PyObject *
PyvtkPVXMLElement_RemoveAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveAttribute(temp0);
      }
    else
      {
      op->vtkPVXMLElement::RemoveAttribute(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_SetAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAttribute(temp0, temp1);
      }
    else
      {
      op->vtkPVXMLElement::SetAttribute(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_AddNestedElement_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNestedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddNestedElement(temp0, temp1);
      }
    else
      {
      op->vtkPVXMLElement::AddNestedElement(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVXMLElement_AddNestedElement_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNestedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    if (ap.IsBound())
      {
      op->AddNestedElement(temp0);
      }
    else
      {
      op->vtkPVXMLElement::AddNestedElement(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVXMLElement_AddNestedElement(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPVXMLElement_AddNestedElement_s1(self, args);
    case 1:
      return PyvtkPVXMLElement_AddNestedElement_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddNestedElement");
  return NULL;
}



static PyObject *
PyvtkPVXMLElement_PrintXML(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintXML");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrintXML();
      }
    else
      {
      op->vtkPVXMLElement::PrintXML();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_Merge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Merge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Merge(temp0, temp1);
      }
    else
      {
      op->vtkPVXMLElement::Merge(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_GetElementsByName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementsByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  vtkCollection *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCollection"))
    {
    if (ap.IsBound())
      {
      op->GetElementsByName(temp0, temp1);
      }
    else
      {
      op->vtkPVXMLElement::GetElementsByName(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVXMLElement_GetElementsByName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementsByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  char *temp0 = NULL;
  vtkCollection *temp1 = NULL;
  bool temp2 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCollection") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->GetElementsByName(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVXMLElement::GetElementsByName(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVXMLElement_GetElementsByName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPVXMLElement_GetElementsByName_s1(self, args);
    case 3:
      return PyvtkPVXMLElement_GetElementsByName_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetElementsByName");
  return NULL;
}



static PyObject *
PyvtkPVXMLElement_Encode(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Encode");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkStdString tempr = vtkPVXMLElement::Encode(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_Equals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Equals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    bool tempr = (ap.IsBound() ?
      op->Equals(temp0) :
      op->vtkPVXMLElement::Equals(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_CopyTo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    if (ap.IsBound())
      {
      op->CopyTo(temp0);
      }
    else
      {
      op->vtkPVXMLElement::CopyTo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLElement_CopyAttributesTo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributesTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    if (ap.IsBound())
      {
      op->CopyAttributesTo(temp0);
      }
    else
      {
      op->vtkPVXMLElement::CopyAttributesTo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVXMLElement_Methods[] = {
  {(char*)"GetClassName", PyvtkPVXMLElement_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVXMLElement_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVXMLElement_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVXMLElement\nC++: vtkPVXMLElement *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVXMLElement_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVXMLElement\nC++: vtkPVXMLElement *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetName", PyvtkPVXMLElement_SetName, METH_VARARGS,
   (char*)"V.SetName(string)\nC++: void SetName(char *)\n\nSet/Get the name of the element.  This is its XML tag. (<Name\n/>).\n"},
  {(char*)"GetName", PyvtkPVXMLElement_GetName, METH_VARARGS,
   (char*)"V.GetName() -> string\nC++: char *GetName()\n\nSet/Get the name of the element.  This is its XML tag. (<Name\n/>).\n"},
  {(char*)"GetId", PyvtkPVXMLElement_GetId, METH_VARARGS,
   (char*)"V.GetId() -> string\nC++: char *GetId()\n\nGet the id of the element. This is assigned by the XML parser and\ncan be used as an identifier to an element.\n"},
  {(char*)"GetAttribute", PyvtkPVXMLElement_GetAttribute, METH_VARARGS,
   (char*)"V.GetAttribute(string) -> string\nC++: const char *GetAttribute(const char *name)\n\nGet the attribute with the given name.  If it doesn't exist,\nreturns NULL.\n"},
  {(char*)"GetAttributeOrEmpty", PyvtkPVXMLElement_GetAttributeOrEmpty, METH_VARARGS,
   (char*)"V.GetAttributeOrEmpty(string) -> string\nC++: const char *GetAttributeOrEmpty(const char *name)\n\nGet the attribute with the given name.  If it doesn't exist,\nreturns \"\".\n"},
  {(char*)"GetAttributeOrDefault", PyvtkPVXMLElement_GetAttributeOrDefault, METH_VARARGS,
   (char*)"V.GetAttributeOrDefault(string, string) -> string\nC++: const char *GetAttributeOrDefault(const char *name,\n    const char *notFound)\n\nGet the attribute with the given name. If it doesn't exist,\nreturns the provided notFound value.\n"},
  {(char*)"GetCharacterData", PyvtkPVXMLElement_GetCharacterData, METH_VARARGS,
   (char*)"V.GetCharacterData() -> string\nC++: const char *GetCharacterData()\n\nGet the character data for the element.\n"},
  {(char*)"GetScalarAttribute", PyvtkPVXMLElement_GetScalarAttribute, METH_VARARGS,
   (char*)"V.GetScalarAttribute(string, [int, ...]) -> int\nC++: int GetScalarAttribute(const char *name, int *value)\nV.GetScalarAttribute(string, [float, ...]) -> int\nC++: int GetScalarAttribute(const char *name, double *value)\nV.GetScalarAttribute(string, [int, ...]) -> int\nC++: int GetScalarAttribute(const char *name, vtkIdType *value)\n\nGet the attribute with the given name converted to a scalar\nvalue.  Returns whether value was extracted.\n"},
  {(char*)"GetVectorAttribute", PyvtkPVXMLElement_GetVectorAttribute, METH_VARARGS,
   (char*)"V.GetVectorAttribute(string, int, [int, ...]) -> int\nC++: int GetVectorAttribute(const char *name, int length,\n    int *value)\nV.GetVectorAttribute(string, int, [float, ...]) -> int\nC++: int GetVectorAttribute(const char *name, int length,\n    double *value)\nV.GetVectorAttribute(string, int, [int, ...]) -> int\nC++: int GetVectorAttribute(const char *name, int length,\n    vtkIdType *value)\n\nGet the attribute with the given name converted to a scalar\nvalue.  Returns length of vector read.\n"},
  {(char*)"GetCharacterDataAsVector", PyvtkPVXMLElement_GetCharacterDataAsVector, METH_VARARGS,
   (char*)"V.GetCharacterDataAsVector(int, [int, ...]) -> int\nC++: int GetCharacterDataAsVector(int length, int *value)\nV.GetCharacterDataAsVector(int, [float, ...]) -> int\nC++: int GetCharacterDataAsVector(int length, double *value)\nV.GetCharacterDataAsVector(int, [int, ...]) -> int\nC++: int GetCharacterDataAsVector(int length, vtkIdType *value)\n\nGet the character data converted to a scalar value.  Returns\nlength of vector read.\n"},
  {(char*)"GetParent", PyvtkPVXMLElement_GetParent, METH_VARARGS,
   (char*)"V.GetParent() -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetParent()\n\nGet the parent of this element.\n"},
  {(char*)"GetNumberOfNestedElements", PyvtkPVXMLElement_GetNumberOfNestedElements, METH_VARARGS,
   (char*)"V.GetNumberOfNestedElements() -> int\nC++: unsigned int GetNumberOfNestedElements()\n\nGet the number of elements nested in this one.\n"},
  {(char*)"GetNestedElement", PyvtkPVXMLElement_GetNestedElement, METH_VARARGS,
   (char*)"V.GetNestedElement(int) -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetNestedElement(unsigned int index)\n\nGet the element nested in this one at the given index.\n"},
  {(char*)"FindNestedElement", PyvtkPVXMLElement_FindNestedElement, METH_VARARGS,
   (char*)"V.FindNestedElement(string) -> vtkPVXMLElement\nC++: vtkPVXMLElement *FindNestedElement(const char *id)\n\nFind a nested element with the given id. Not that this searches\nonly the immediate children of this vtkPVXMLElement.\n"},
  {(char*)"FindNestedElementByName", PyvtkPVXMLElement_FindNestedElementByName, METH_VARARGS,
   (char*)"V.FindNestedElementByName(string) -> vtkPVXMLElement\nC++: vtkPVXMLElement *FindNestedElementByName(const char *name)\nV.FindNestedElementByName(string, vtkCollection)\nC++: void FindNestedElementByName(const char *name,\n    vtkCollection *elements)\n\nLocate a nested element with the given tag name.\n"},
  {(char*)"RemoveAllNestedElements", PyvtkPVXMLElement_RemoveAllNestedElements, METH_VARARGS,
   (char*)"V.RemoveAllNestedElements()\nC++: void RemoveAllNestedElements()\n\nRemoves all nested elements.\n"},
  {(char*)"RemoveNestedElement", PyvtkPVXMLElement_RemoveNestedElement, METH_VARARGS,
   (char*)"V.RemoveNestedElement(vtkPVXMLElement)\nC++: void RemoveNestedElement(vtkPVXMLElement *)\n\nRemove a particular element.\n"},
  {(char*)"LookupElement", PyvtkPVXMLElement_LookupElement, METH_VARARGS,
   (char*)"V.LookupElement(string) -> vtkPVXMLElement\nC++: vtkPVXMLElement *LookupElement(const char *id)\n\nLookup the element with the given id, starting at this scope.\n"},
  {(char*)"AddAttribute", PyvtkPVXMLElement_AddAttribute, METH_VARARGS,
   (char*)"V.AddAttribute(string, string)\nC++: void AddAttribute(const char *attrName,\n    const char *attrValue)\nV.AddAttribute(string, float)\nC++: void AddAttribute(const char *attrName, double attrValue)\nV.AddAttribute(string, float, int)\nC++: void AddAttribute(const char *attrName, double attrValue,\n    int precision)\nV.AddAttribute(string, int)\nC++: void AddAttribute(const char *attrName, int attrValue)\nV.AddAttribute(string, int)\nC++: void AddAttribute(const char *attrName, vtkIdType attrValue)\n\nGiven it's name and value, add an attribute.\n"},
  {(char*)"RemoveAttribute", PyvtkPVXMLElement_RemoveAttribute, METH_VARARGS,
   (char*)"V.RemoveAttribute(string)\nC++: void RemoveAttribute(const char *attrName)\n\nRemove the attribute from the current element\n"},
  {(char*)"SetAttribute", PyvtkPVXMLElement_SetAttribute, METH_VARARGS,
   (char*)"V.SetAttribute(string, string)\nC++: void SetAttribute(const char *attrName,\n    const char *attrValue)\n\nGiven it's name and value, set an attribute. If an attribute with\nthe given name already exists, it replaces the old attribute.\nchars that need to be XML escaped will be done so internally for\nexample \" will be converted to &quot;\n"},
  {(char*)"AddNestedElement", PyvtkPVXMLElement_AddNestedElement, METH_VARARGS,
   (char*)"V.AddNestedElement(vtkPVXMLElement, int)\nC++: void AddNestedElement(vtkPVXMLElement *element, int setPrent)\nV.AddNestedElement(vtkPVXMLElement)\nC++: void AddNestedElement(vtkPVXMLElement *element)\n\nAdd a sub-element. The parent element keeps a reference to\nsub-element. If setParent is true, the nested element's parent is\nset as this.\n"},
  {(char*)"PrintXML", PyvtkPVXMLElement_PrintXML, METH_VARARGS,
   (char*)"V.PrintXML()\nC++: void PrintXML()\n\nSerialize (as XML) in the given stream.\n"},
  {(char*)"Merge", PyvtkPVXMLElement_Merge, METH_VARARGS,
   (char*)"V.Merge(vtkPVXMLElement, string)\nC++: void Merge(vtkPVXMLElement *element,\n    const char *attributeName)\n\nMerges another element with this one, both having the same name.\nIf any attribute, character data or nested element exists in\nboth, the passed in one will override this one's.  If they don't\nexist, they'll be added.  If nested elements have the same names,\nthe optional attributeName maybe passed in as another criteria to\ndetermine what to merge in case of same names.\n"},
  {(char*)"GetElementsByName", PyvtkPVXMLElement_GetElementsByName, METH_VARARGS,
   (char*)"V.GetElementsByName(string, vtkCollection)\nC++: void GetElementsByName(const char *name,\n    vtkCollection *elements)\nV.GetElementsByName(string, vtkCollection, bool)\nC++: void GetElementsByName(const char *name,\n    vtkCollection *elements, bool recursively)\n\nSimilar to DOM sepecific getElementsByTagName(). Returns a list\nof vtkPVXMLElements with the given name in the order in which\nthey will be encountered in a preorder traversal of the sub-tree\nunder this node. The elements are populated in the vtkCollection\npassed as an argument.\n"},
  {(char*)"Encode", PyvtkPVXMLElement_Encode, METH_VARARGS | METH_STATIC,
   (char*)"V.Encode(string) -> string\nC++: static vtkStdString Encode(const char *plaintext)\n\nEncode a string.\n"},
  {(char*)"Equals", PyvtkPVXMLElement_Equals, METH_VARARGS,
   (char*)"V.Equals(vtkPVXMLElement) -> bool\nC++: bool Equals(vtkPVXMLElement *other)\n\nReturn true if the current object has the same content as the\nother. The comparison implementation is pretty weak in the mean\nthat we compare resulting XML string.\n"},
  {(char*)"CopyTo", PyvtkPVXMLElement_CopyTo, METH_VARARGS,
   (char*)"V.CopyTo(vtkPVXMLElement)\nC++: void CopyTo(vtkPVXMLElement *other)\n\nCopy the current XML element content into the provided one\n"},
  {(char*)"CopyAttributesTo", PyvtkPVXMLElement_CopyAttributesTo, METH_VARARGS,
   (char*)"V.CopyAttributesTo(vtkPVXMLElement)\nC++: void CopyAttributesTo(vtkPVXMLElement *other)\n\nCopy the attributes from current XML element content into the\nprovided one.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVXMLElement_StaticNew()
{
  return vtkPVXMLElement::New();
}

PyObject *PyVTKClass_vtkPVXMLElementNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVXMLElement_StaticNew,
    PyvtkPVXMLElement_Methods,
    "vtkPVXMLElement", modulename,
    NULL, NULL,
    PyvtkPVXMLElement_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPVXMLElement_Doc()
{
  static const char *docstring[] = {
    "vtkPVXMLElement represents an XML element and those nested inside.\n\n",
    "Superclass: vtkObject\n\n",
    "This is used by vtkPVXMLParser to represent an XML document starting\nat the root element.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVXMLElement(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVXMLElementNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVXMLElement", o) != 0)
    {
    Py_DECREF(o);
    }

}

