// python wrapper for vtkXMLDataElement
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLDataElement.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLDataElement(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLDataElementNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkXMLDataElement_Doc();


static PyObject *
PyvtkXMLDataElement_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLDataElement::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLDataElement::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLDataElement::NewInstance());

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
PyvtkXMLDataElement_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLDataElement *tempr = vtkXMLDataElement::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkXMLDataElement::GetName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

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
      op->vtkXMLDataElement::SetName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetId() :
      op->vtkXMLDataElement::GetId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetId(temp0);
      }
    else
      {
      op->vtkXMLDataElement::SetId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetAttribute(temp0) :
      op->vtkXMLDataElement::GetAttribute(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SetAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

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
      op->vtkXMLDataElement::SetAttribute(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SetCharacterData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCharacterData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetCharacterData(temp0, temp1);
      }
    else
      {
      op->vtkXMLDataElement::SetCharacterData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_AddCharacterData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCharacterData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  size_t temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddCharacterData(temp0, temp1);
      }
    else
      {
      op->vtkXMLDataElement::AddCharacterData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetCharacterData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCharacterData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetCharacterData() :
      op->vtkXMLDataElement::GetCharacterData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetScalarAttribute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarAttribute(temp0, temp1) :
      op->vtkXMLDataElement::GetScalarAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLDataElement_GetScalarAttribute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarAttribute(temp0, temp1) :
      op->vtkXMLDataElement::GetScalarAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLDataElement_GetScalarAttribute_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  unsigned long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarAttribute(temp0, temp1) :
      op->vtkXMLDataElement::GetScalarAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLDataElement_GetScalarAttribute_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  long long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarAttribute(temp0, temp1) :
      op->vtkXMLDataElement::GetScalarAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLDataElement_GetScalarAttribute_Methods[] = {
  {NULL, PyvtkXMLDataElement_GetScalarAttribute_s1, METH_VARARGS,
   (char*)"@zi"},
  {NULL, PyvtkXMLDataElement_GetScalarAttribute_s2, METH_VARARGS,
   (char*)"@zd"},
  {NULL, PyvtkXMLDataElement_GetScalarAttribute_s3, METH_VARARGS,
   (char*)"@zk"},
  {NULL, PyvtkXMLDataElement_GetScalarAttribute_s4, METH_VARARGS,
   (char*)"@zL"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkXMLDataElement_GetScalarAttribute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkXMLDataElement_GetScalarAttribute_Methods;
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
PyvtkXMLDataElement_SetIntAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetIntAttribute(temp0, temp1);
      }
    else
      {
      op->vtkXMLDataElement::SetIntAttribute(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SetFloatAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFloatAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetFloatAttribute(temp0, temp1);
      }
    else
      {
      op->vtkXMLDataElement::SetFloatAttribute(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SetDoubleAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDoubleAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetDoubleAttribute(temp0, temp1);
      }
    else
      {
      op->vtkXMLDataElement::SetDoubleAttribute(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SetUnsignedLongAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnsignedLongAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  unsigned long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetUnsignedLongAttribute(temp0, temp1);
      }
    else
      {
      op->vtkXMLDataElement::SetUnsignedLongAttribute(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetVectorAttribute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

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
      op->vtkXMLDataElement::GetVectorAttribute(temp0, temp1, temp2));

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
PyvtkXMLDataElement_GetVectorAttribute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

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
      op->vtkXMLDataElement::GetVectorAttribute(temp0, temp1, temp2));

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
PyvtkXMLDataElement_GetVectorAttribute_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  int temp1;
  unsigned long *temp2 = NULL;
  unsigned long *save2 = NULL;
  unsigned long small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new unsigned long[2*size2];
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
      op->vtkXMLDataElement::GetVectorAttribute(temp0, temp1, temp2));

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
PyvtkXMLDataElement_GetVectorAttribute_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  int temp1;
  long long *temp2 = NULL;
  long long *save2 = NULL;
  long long small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new long long[2*size2];
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
      op->vtkXMLDataElement::GetVectorAttribute(temp0, temp1, temp2));

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

static PyMethodDef PyvtkXMLDataElement_GetVectorAttribute_Methods[] = {
  {NULL, PyvtkXMLDataElement_GetVectorAttribute_s1, METH_VARARGS,
   (char*)"@ziO *i"},
  {NULL, PyvtkXMLDataElement_GetVectorAttribute_s2, METH_VARARGS,
   (char*)"@ziO *d"},
  {NULL, PyvtkXMLDataElement_GetVectorAttribute_s3, METH_VARARGS,
   (char*)"@ziO *k"},
  {NULL, PyvtkXMLDataElement_GetVectorAttribute_s4, METH_VARARGS,
   (char*)"@ziO *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkXMLDataElement_GetVectorAttribute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkXMLDataElement_GetVectorAttribute_Methods;
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
PyvtkXMLDataElement_SetVectorAttribute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  int temp1;
  int *temp2 = NULL;
  int small2[4];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new int[size2];
      }
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    if (ap.IsBound())
      {
      op->SetVectorAttribute(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXMLDataElement::SetVectorAttribute(temp0, temp1, temp2);
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
PyvtkXMLDataElement_SetVectorAttribute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  int temp1;
  double *temp2 = NULL;
  double small2[4];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new double[size2];
      }
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    if (ap.IsBound())
      {
      op->SetVectorAttribute(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXMLDataElement::SetVectorAttribute(temp0, temp1, temp2);
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
PyvtkXMLDataElement_SetVectorAttribute_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  int temp1;
  unsigned long *temp2 = NULL;
  unsigned long small2[4];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new unsigned long[size2];
      }
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    if (ap.IsBound())
      {
      op->SetVectorAttribute(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXMLDataElement::SetVectorAttribute(temp0, temp1, temp2);
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
PyvtkXMLDataElement_SetVectorAttribute_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  int temp1;
  long long *temp2 = NULL;
  long long small2[4];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new long long[size2];
      }
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    if (ap.IsBound())
      {
      op->SetVectorAttribute(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXMLDataElement::SetVectorAttribute(temp0, temp1, temp2);
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

static PyMethodDef PyvtkXMLDataElement_SetVectorAttribute_Methods[] = {
  {NULL, PyvtkXMLDataElement_SetVectorAttribute_s1, METH_VARARGS,
   (char*)"@ziO *i"},
  {NULL, PyvtkXMLDataElement_SetVectorAttribute_s2, METH_VARARGS,
   (char*)"@ziO *d"},
  {NULL, PyvtkXMLDataElement_SetVectorAttribute_s3, METH_VARARGS,
   (char*)"@ziO *k"},
  {NULL, PyvtkXMLDataElement_SetVectorAttribute_s4, METH_VARARGS,
   (char*)"@ziO *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkXMLDataElement_SetVectorAttribute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkXMLDataElement_SetVectorAttribute_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVectorAttribute");
  return NULL;
}



static PyObject *
PyvtkXMLDataElement_GetWordTypeAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWordTypeAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetWordTypeAttribute(temp0, temp1) :
      op->vtkXMLDataElement::GetWordTypeAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetNumberOfAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAttributes() :
      op->vtkXMLDataElement::GetNumberOfAttributes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeName(temp0) :
      op->vtkXMLDataElement::GetAttributeName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetAttributeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeValue(temp0) :
      op->vtkXMLDataElement::GetAttributeValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_RemoveAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

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
      op->vtkXMLDataElement::RemoveAttribute(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_RemoveAllAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllAttributes();
      }
    else
      {
      op->vtkXMLDataElement::RemoveAllAttributes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->GetParent() :
      op->vtkXMLDataElement::GetParent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  vtkXMLDataElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
    {
    if (ap.IsBound())
      {
      op->SetParent(temp0);
      }
    else
      {
      op->vtkXMLDataElement::SetParent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->GetRoot() :
      op->vtkXMLDataElement::GetRoot());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetNumberOfNestedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNestedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNestedElements() :
      op->vtkXMLDataElement::GetNumberOfNestedElements());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetNestedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNestedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->GetNestedElement(temp0) :
      op->vtkXMLDataElement::GetNestedElement(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_AddNestedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNestedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  vtkXMLDataElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
    {
    if (ap.IsBound())
      {
      op->AddNestedElement(temp0);
      }
    else
      {
      op->vtkXMLDataElement::AddNestedElement(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_RemoveNestedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNestedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  vtkXMLDataElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
    {
    if (ap.IsBound())
      {
      op->RemoveNestedElement(temp0);
      }
    else
      {
      op->vtkXMLDataElement::RemoveNestedElement(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_RemoveAllNestedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllNestedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllNestedElements();
      }
    else
      {
      op->vtkXMLDataElement::RemoveAllNestedElements();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_FindNestedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindNestedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->FindNestedElement(temp0) :
      op->vtkXMLDataElement::FindNestedElement(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_FindNestedElementWithName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindNestedElementWithName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->FindNestedElementWithName(temp0) :
      op->vtkXMLDataElement::FindNestedElementWithName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_FindNestedElementWithNameAndId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindNestedElementWithNameAndId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->FindNestedElementWithNameAndId(temp0, temp1) :
      op->vtkXMLDataElement::FindNestedElementWithNameAndId(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_FindNestedElementWithNameAndAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindNestedElementWithNameAndAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->FindNestedElementWithNameAndAttribute(temp0, temp1, temp2) :
      op->vtkXMLDataElement::FindNestedElementWithNameAndAttribute(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_LookupElementWithName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupElementWithName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->LookupElementWithName(temp0) :
      op->vtkXMLDataElement::LookupElementWithName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_LookupElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->LookupElement(temp0) :
      op->vtkXMLDataElement::LookupElement(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetXMLByteIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLByteIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    long long tempr = (ap.IsBound() ?
      op->GetXMLByteIndex() :
      op->vtkXMLDataElement::GetXMLByteIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SetXMLByteIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMLByteIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXMLByteIndex(temp0);
      }
    else
      {
      op->vtkXMLDataElement::SetXMLByteIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_IsEqualTo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEqualTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  vtkXMLDataElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
    {
    int tempr = (ap.IsBound() ?
      op->IsEqualTo(temp0) :
      op->vtkXMLDataElement::IsEqualTo(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  vtkXMLDataElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkXMLDataElement::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SetAttributeEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeEncoding(temp0);
      }
    else
      {
      op->vtkXMLDataElement::SetAttributeEncoding(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetAttributeEncodingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeEncodingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAttributeEncodingMinValue() :
      op->vtkXMLDataElement::GetAttributeEncodingMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetAttributeEncodingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeEncodingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAttributeEncodingMaxValue() :
      op->vtkXMLDataElement::GetAttributeEncodingMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetAttributeEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAttributeEncoding() :
      op->vtkXMLDataElement::GetAttributeEncoding());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_PrintXML(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintXML");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->PrintXML(temp0);
      }
    else
      {
      op->vtkXMLDataElement::PrintXML(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetCharacterDataWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCharacterDataWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCharacterDataWidth() :
      op->vtkXMLDataElement::GetCharacterDataWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SetCharacterDataWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCharacterDataWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCharacterDataWidth(temp0);
      }
    else
      {
      op->vtkXMLDataElement::SetCharacterDataWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLDataElement_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLDataElement_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLDataElement_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLDataElement_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLDataElement\nC++: vtkXMLDataElement *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLDataElement_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLDataElement\nC++: vtkXMLDataElement *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetName", PyvtkXMLDataElement_GetName, METH_VARARGS,
   (char*)"V.GetName() -> string\nC++: char *GetName()\n\nSet/Get the name of the element.  This is its XML tag.\n"},
  {(char*)"SetName", PyvtkXMLDataElement_SetName, METH_VARARGS,
   (char*)"V.SetName(string)\nC++: virtual void SetName(const char *_arg)\n\nSet/Get the name of the element.  This is its XML tag.\n"},
  {(char*)"GetId", PyvtkXMLDataElement_GetId, METH_VARARGS,
   (char*)"V.GetId() -> string\nC++: char *GetId()\n\nSet/Get the value of the id attribute of the element, if any.\n"},
  {(char*)"SetId", PyvtkXMLDataElement_SetId, METH_VARARGS,
   (char*)"V.SetId(string)\nC++: void SetId(char *)\n\nSet/Get the value of the id attribute of the element, if any.\n"},
  {(char*)"GetAttribute", PyvtkXMLDataElement_GetAttribute, METH_VARARGS,
   (char*)"V.GetAttribute(string) -> string\nC++: const char *GetAttribute(const char *name)\n\nGet the attribute with the given name.  If it doesn't exist,\nreturns 0.\n"},
  {(char*)"SetAttribute", PyvtkXMLDataElement_SetAttribute, METH_VARARGS,
   (char*)"V.SetAttribute(string, string)\nC++: void SetAttribute(const char *name, const char *value)\n\nSet the attribute with the given name and value. If it doesn't\nexist, adds it.\n"},
  {(char*)"SetCharacterData", PyvtkXMLDataElement_SetCharacterData, METH_VARARGS,
   (char*)"V.SetCharacterData(string, int)\nC++: void SetCharacterData(const char *c, int length)\n\nSet/Get the character data between XML start/end tags.\n"},
  {(char*)"AddCharacterData", PyvtkXMLDataElement_AddCharacterData, METH_VARARGS,
   (char*)"V.AddCharacterData(string, int)\nC++: void AddCharacterData(const char *c, size_t length)\n\nSet/Get the character data between XML start/end tags.\n"},
  {(char*)"GetCharacterData", PyvtkXMLDataElement_GetCharacterData, METH_VARARGS,
   (char*)"V.GetCharacterData() -> string\nC++: char *GetCharacterData()\n\nSet/Get the character data between XML start/end tags.\n"},
  {(char*)"GetScalarAttribute", PyvtkXMLDataElement_GetScalarAttribute, METH_VARARGS,
   (char*)"V.GetScalarAttribute(string, int) -> int\nC++: int GetScalarAttribute(const char *name, int &value)\nV.GetScalarAttribute(string, float) -> int\nC++: int GetScalarAttribute(const char *name, double &value)\nV.GetScalarAttribute(string, int) -> int\nC++: int GetScalarAttribute(const char *name,\n    unsigned long &value)\nV.GetScalarAttribute(string, int) -> int\nC++: int GetScalarAttribute(const char *name, long long &value)\n\nGet the attribute with the given name and converted to a scalar\nvalue.  Returns whether value was extracted.\n"},
  {(char*)"SetIntAttribute", PyvtkXMLDataElement_SetIntAttribute, METH_VARARGS,
   (char*)"V.SetIntAttribute(string, int)\nC++: void SetIntAttribute(const char *name, int value)\n\nSet the attribute with the given name. We can not use the same\nGetScalarAttribute() construct since the compiler will not be\nable to resolve between SetAttribute(..., int) and\nSetAttribute(..., unsigned long).\n"},
  {(char*)"SetFloatAttribute", PyvtkXMLDataElement_SetFloatAttribute, METH_VARARGS,
   (char*)"V.SetFloatAttribute(string, float)\nC++: void SetFloatAttribute(const char *name, float value)\n\nSet the attribute with the given name. We can not use the same\nGetScalarAttribute() construct since the compiler will not be\nable to resolve between SetAttribute(..., int) and\nSetAttribute(..., unsigned long).\n"},
  {(char*)"SetDoubleAttribute", PyvtkXMLDataElement_SetDoubleAttribute, METH_VARARGS,
   (char*)"V.SetDoubleAttribute(string, float)\nC++: void SetDoubleAttribute(const char *name, double value)\n\nSet the attribute with the given name. We can not use the same\nGetScalarAttribute() construct since the compiler will not be\nable to resolve between SetAttribute(..., int) and\nSetAttribute(..., unsigned long).\n"},
  {(char*)"SetUnsignedLongAttribute", PyvtkXMLDataElement_SetUnsignedLongAttribute, METH_VARARGS,
   (char*)"V.SetUnsignedLongAttribute(string, int)\nC++: void SetUnsignedLongAttribute(const char *name,\n    unsigned long value)\n\nSet the attribute with the given name. We can not use the same\nGetScalarAttribute() construct since the compiler will not be\nable to resolve between SetAttribute(..., int) and\nSetAttribute(..., unsigned long).\n"},
  {(char*)"GetVectorAttribute", PyvtkXMLDataElement_GetVectorAttribute, METH_VARARGS,
   (char*)"V.GetVectorAttribute(string, int, [int, ...]) -> int\nC++: int GetVectorAttribute(const char *name, int length,\n    int *value)\nV.GetVectorAttribute(string, int, [float, ...]) -> int\nC++: int GetVectorAttribute(const char *name, int length,\n    double *value)\nV.GetVectorAttribute(string, int, [int, ...]) -> int\nC++: int GetVectorAttribute(const char *name, int length,\n    unsigned long *value)\nV.GetVectorAttribute(string, int, [int, ...]) -> int\nC++: int GetVectorAttribute(const char *name, int length,\n    long long *value)\n\nGet the attribute with the given name and converted to a scalar\nvalue.  Returns length of vector read.\n"},
  {(char*)"SetVectorAttribute", PyvtkXMLDataElement_SetVectorAttribute, METH_VARARGS,
   (char*)"V.SetVectorAttribute(string, int, (int, ...))\nC++: void SetVectorAttribute(const char *name, int length,\n    const int *value)\nV.SetVectorAttribute(string, int, (float, ...))\nC++: void SetVectorAttribute(const char *name, int length,\n    const double *value)\nV.SetVectorAttribute(string, int, (int, ...))\nC++: void SetVectorAttribute(const char *name, int length,\n    const unsigned long *value)\nV.SetVectorAttribute(string, int, (int, ...))\nC++: void SetVectorAttribute(const char *name, int length,\n    long long const *value)\n\nSet the attribute with the given name.\n"},
  {(char*)"GetWordTypeAttribute", PyvtkXMLDataElement_GetWordTypeAttribute, METH_VARARGS,
   (char*)"V.GetWordTypeAttribute(string, int) -> int\nC++: int GetWordTypeAttribute(const char *name, int &value)\n\nGet the attribute with the given name and converted to a word\ntype such as VTK_FLOAT or VTK_UNSIGNED_LONG.\n"},
  {(char*)"GetNumberOfAttributes", PyvtkXMLDataElement_GetNumberOfAttributes, METH_VARARGS,
   (char*)"V.GetNumberOfAttributes() -> int\nC++: int GetNumberOfAttributes()\n\nGet the number of attributes.\n"},
  {(char*)"GetAttributeName", PyvtkXMLDataElement_GetAttributeName, METH_VARARGS,
   (char*)"V.GetAttributeName(int) -> string\nC++: const char *GetAttributeName(int idx)\n\nGet the n-th attribute name. Returns 0 if there is no such\nattribute.\n"},
  {(char*)"GetAttributeValue", PyvtkXMLDataElement_GetAttributeValue, METH_VARARGS,
   (char*)"V.GetAttributeValue(int) -> string\nC++: const char *GetAttributeValue(int idx)\n\nGet the n-th attribute value. Returns 0 if there is no such\nattribute.\n"},
  {(char*)"RemoveAttribute", PyvtkXMLDataElement_RemoveAttribute, METH_VARARGS,
   (char*)"V.RemoveAttribute(string)\nC++: virtual void RemoveAttribute(const char *name)\n\nRemove one or all attributes.\n"},
  {(char*)"RemoveAllAttributes", PyvtkXMLDataElement_RemoveAllAttributes, METH_VARARGS,
   (char*)"V.RemoveAllAttributes()\nC++: virtual void RemoveAllAttributes()\n\nRemove one or all attributes.\n"},
  {(char*)"GetParent", PyvtkXMLDataElement_GetParent, METH_VARARGS,
   (char*)"V.GetParent() -> vtkXMLDataElement\nC++: vtkXMLDataElement *GetParent()\n\nSet/Get the parent of this element.\n"},
  {(char*)"SetParent", PyvtkXMLDataElement_SetParent, METH_VARARGS,
   (char*)"V.SetParent(vtkXMLDataElement)\nC++: void SetParent(vtkXMLDataElement *parent)\n\nSet/Get the parent of this element.\n"},
  {(char*)"GetRoot", PyvtkXMLDataElement_GetRoot, METH_VARARGS,
   (char*)"V.GetRoot() -> vtkXMLDataElement\nC++: virtual vtkXMLDataElement *GetRoot()\n\nGet root of the XML tree this element is part of.\n"},
  {(char*)"GetNumberOfNestedElements", PyvtkXMLDataElement_GetNumberOfNestedElements, METH_VARARGS,
   (char*)"V.GetNumberOfNestedElements() -> int\nC++: int GetNumberOfNestedElements()\n\nGet the number of elements nested in this one.\n"},
  {(char*)"GetNestedElement", PyvtkXMLDataElement_GetNestedElement, METH_VARARGS,
   (char*)"V.GetNestedElement(int) -> vtkXMLDataElement\nC++: vtkXMLDataElement *GetNestedElement(int index)\n\nGet the element nested in this one at the given index.\n"},
  {(char*)"AddNestedElement", PyvtkXMLDataElement_AddNestedElement, METH_VARARGS,
   (char*)"V.AddNestedElement(vtkXMLDataElement)\nC++: void AddNestedElement(vtkXMLDataElement *element)\n\nAdd nested element\n"},
  {(char*)"RemoveNestedElement", PyvtkXMLDataElement_RemoveNestedElement, METH_VARARGS,
   (char*)"V.RemoveNestedElement(vtkXMLDataElement)\nC++: virtual void RemoveNestedElement(vtkXMLDataElement *)\n\nRemove nested element.\n"},
  {(char*)"RemoveAllNestedElements", PyvtkXMLDataElement_RemoveAllNestedElements, METH_VARARGS,
   (char*)"V.RemoveAllNestedElements()\nC++: virtual void RemoveAllNestedElements()\n\nRemove all nested elements.\n"},
  {(char*)"FindNestedElement", PyvtkXMLDataElement_FindNestedElement, METH_VARARGS,
   (char*)"V.FindNestedElement(string) -> vtkXMLDataElement\nC++: vtkXMLDataElement *FindNestedElement(const char *id)\n\nFind the first nested element with the given id, given name, or\ngiven name and id. WARNING: the search is only performed on the\nchildren, not the grand-children.\n"},
  {(char*)"FindNestedElementWithName", PyvtkXMLDataElement_FindNestedElementWithName, METH_VARARGS,
   (char*)"V.FindNestedElementWithName(string) -> vtkXMLDataElement\nC++: vtkXMLDataElement *FindNestedElementWithName(\n    const char *name)\n\nFind the first nested element with the given id, given name, or\ngiven name and id. WARNING: the search is only performed on the\nchildren, not the grand-children.\n"},
  {(char*)"FindNestedElementWithNameAndId", PyvtkXMLDataElement_FindNestedElementWithNameAndId, METH_VARARGS,
   (char*)"V.FindNestedElementWithNameAndId(string, string)\n    -> vtkXMLDataElement\nC++: vtkXMLDataElement *FindNestedElementWithNameAndId(\n    const char *name, const char *id)\n\nFind the first nested element with the given id, given name, or\ngiven name and id. WARNING: the search is only performed on the\nchildren, not the grand-children.\n"},
  {(char*)"FindNestedElementWithNameAndAttribute", PyvtkXMLDataElement_FindNestedElementWithNameAndAttribute, METH_VARARGS,
   (char*)"V.FindNestedElementWithNameAndAttribute(string, string, string)\n    -> vtkXMLDataElement\nC++: vtkXMLDataElement *FindNestedElementWithNameAndAttribute(\n    const char *name, const char *att_name, const char *att_value)\n\nFind the first nested element with the given id, given name, or\ngiven name and id. WARNING: the search is only performed on the\nchildren, not the grand-children.\n"},
  {(char*)"LookupElementWithName", PyvtkXMLDataElement_LookupElementWithName, METH_VARARGS,
   (char*)"V.LookupElementWithName(string) -> vtkXMLDataElement\nC++: vtkXMLDataElement *LookupElementWithName(const char *name)\n\nFind the first nested element with given name. WARNING: the\nsearch is performed on the whole XML tree.\n"},
  {(char*)"LookupElement", PyvtkXMLDataElement_LookupElement, METH_VARARGS,
   (char*)"V.LookupElement(string) -> vtkXMLDataElement\nC++: vtkXMLDataElement *LookupElement(const char *id)\n\nLookup the element with the given id, starting at this scope.\n"},
  {(char*)"GetXMLByteIndex", PyvtkXMLDataElement_GetXMLByteIndex, METH_VARARGS,
   (char*)"V.GetXMLByteIndex() -> int\nC++: vtkTypeInt64 GetXMLByteIndex()\n\nSet/Get the offset from the beginning of the XML document to this\nelement.\n"},
  {(char*)"SetXMLByteIndex", PyvtkXMLDataElement_SetXMLByteIndex, METH_VARARGS,
   (char*)"V.SetXMLByteIndex(int)\nC++: void SetXMLByteIndex(vtkTypeInt64 a)\n\nSet/Get the offset from the beginning of the XML document to this\nelement.\n"},
  {(char*)"IsEqualTo", PyvtkXMLDataElement_IsEqualTo, METH_VARARGS,
   (char*)"V.IsEqualTo(vtkXMLDataElement) -> int\nC++: virtual int IsEqualTo(vtkXMLDataElement *elem)\n\nCheck if the instance has the same name, attributes, character\ndata and nested elements contents than the given element (this\nmethod is applied recursively on the nested elements, and they\nmust be stored in the same order). Warning: Id, Parent,\nXMLByteIndex are ignored.\n"},
  {(char*)"DeepCopy", PyvtkXMLDataElement_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkXMLDataElement)\nC++: virtual void DeepCopy(vtkXMLDataElement *elem)\n\nCopy this element from another of the same type (elem),\nrecursively. Old attributes and nested elements are removed, new\nones are created given the contents of 'elem'. Warning: Parent is\nignored.\n"},
  {(char*)"SetAttributeEncoding", PyvtkXMLDataElement_SetAttributeEncoding, METH_VARARGS,
   (char*)"V.SetAttributeEncoding(int)\nC++: void SetAttributeEncoding(int)\n\nGet/Set the internal character encoding of the attributes.\nDefault type is VTK_ENCODING_UTF_8. Note that a vtkXMLDataParser\nhas its own AttributesEncoding ivar. If this ivar is set to\nsomething other than VTK_ENCODING_NONE, it will be used to set\nthe attribute encoding of each vtkXMLDataElement created by this\nvtkXMLDataParser.\n"},
  {(char*)"GetAttributeEncodingMinValue", PyvtkXMLDataElement_GetAttributeEncodingMinValue, METH_VARARGS,
   (char*)"V.GetAttributeEncodingMinValue() -> int\nC++: int GetAttributeEncodingMinValue()\n\nGet/Set the internal character encoding of the attributes.\nDefault type is VTK_ENCODING_UTF_8. Note that a vtkXMLDataParser\nhas its own AttributesEncoding ivar. If this ivar is set to\nsomething other than VTK_ENCODING_NONE, it will be used to set\nthe attribute encoding of each vtkXMLDataElement created by this\nvtkXMLDataParser.\n"},
  {(char*)"GetAttributeEncodingMaxValue", PyvtkXMLDataElement_GetAttributeEncodingMaxValue, METH_VARARGS,
   (char*)"V.GetAttributeEncodingMaxValue() -> int\nC++: int GetAttributeEncodingMaxValue()\n\nGet/Set the internal character encoding of the attributes.\nDefault type is VTK_ENCODING_UTF_8. Note that a vtkXMLDataParser\nhas its own AttributesEncoding ivar. If this ivar is set to\nsomething other than VTK_ENCODING_NONE, it will be used to set\nthe attribute encoding of each vtkXMLDataElement created by this\nvtkXMLDataParser.\n"},
  {(char*)"GetAttributeEncoding", PyvtkXMLDataElement_GetAttributeEncoding, METH_VARARGS,
   (char*)"V.GetAttributeEncoding() -> int\nC++: int GetAttributeEncoding()\n\nGet/Set the internal character encoding of the attributes.\nDefault type is VTK_ENCODING_UTF_8. Note that a vtkXMLDataParser\nhas its own AttributesEncoding ivar. If this ivar is set to\nsomething other than VTK_ENCODING_NONE, it will be used to set\nthe attribute encoding of each vtkXMLDataElement created by this\nvtkXMLDataParser.\n"},
  {(char*)"PrintXML", PyvtkXMLDataElement_PrintXML, METH_VARARGS,
   (char*)"V.PrintXML(string)\nC++: void PrintXML(const char *fname)\n\nPrints element tree as XML.\n"},
  {(char*)"GetCharacterDataWidth", PyvtkXMLDataElement_GetCharacterDataWidth, METH_VARARGS,
   (char*)"V.GetCharacterDataWidth() -> int\nC++: int GetCharacterDataWidth()\n\nGet/Set the width (in number of fields) that character data (that\nbetween open and closing tags ie. <X> ... </X>) is printed. If\nthe width is less than one the tag's character data is printed\nall on one line. If it is greater than one the character data is\nstreamed insterting line feeds every width number of fields. See\nPrintXML.\n"},
  {(char*)"SetCharacterDataWidth", PyvtkXMLDataElement_SetCharacterDataWidth, METH_VARARGS,
   (char*)"V.SetCharacterDataWidth(int)\nC++: void SetCharacterDataWidth(int a)\n\nGet/Set the width (in number of fields) that character data (that\nbetween open and closing tags ie. <X> ... </X>) is printed. If\nthe width is less than one the tag's character data is printed\nall on one line. If it is greater than one the character data is\nstreamed insterting line feeds every width number of fields. See\nPrintXML.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLDataElement_StaticNew()
{
  return vtkXMLDataElement::New();
}

PyObject *PyVTKClass_vtkXMLDataElementNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLDataElement_StaticNew,
    PyvtkXMLDataElement_Methods,
    "vtkXMLDataElement", modulename,
    NULL, NULL,
    PyvtkXMLDataElement_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkXMLDataElement_Doc()
{
  static const char *docstring[] = {
    "vtkXMLDataElement - Represents an XML element and those nested inside.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkXMLDataElement is used by vtkXMLDataParser to represent an XML\nelement.  It provides methods to access the element's attributes and\nnested elements in a convenient manner.  This allows easy traversal\nof an input XML file by vtkXMLReader and its subclasses.\n\nSee Also:\n\nvtkXMLDataParser\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLDataElement(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLDataElementNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLDataElement", o) != 0)
    {
    Py_DECREF(o);
    }

}

