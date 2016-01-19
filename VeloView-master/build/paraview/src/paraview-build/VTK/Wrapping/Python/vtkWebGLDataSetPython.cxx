// python wrapper for vtkWebGLDataSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkWebGLDataSet.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkWebGLDataSet(PyObject *, const char *); }

#ifndef DECLARED_PyWebGLObjectTypes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyWebGLObjectTypes_Type;
#define DECLARED_PyWebGLObjectTypes_Type
#endif
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkWebGLDataSetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkWebGLDataSet_Doc();


static PyObject *
PyvtkWebGLDataSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkWebGLDataSet::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWebGLDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWebGLDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWebGLDataSet::NewInstance());

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
PyvtkWebGLDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkWebGLDataSet *tempr = vtkWebGLDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_SetVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  int temp1;
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
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetVertices(temp0, temp1);
      }
    else
      {
      op->vtkWebGLDataSet::SetVertices(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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

  return result;
}


static PyObject *
PyvtkWebGLDataSet_SetIndexes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  short *temp0 = NULL;
  short *save0 = NULL;
  short small0[8];
  int size0 = 0;
  int temp1;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new short[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetIndexes(temp0, temp1);
      }
    else
      {
      op->vtkWebGLDataSet::SetIndexes(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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

  return result;
}


static PyObject *
PyvtkWebGLDataSet_SetNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
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
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetNormals(temp0);
      }
    else
      {
      op->vtkWebGLDataSet::SetNormals(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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

  return result;
}


static PyObject *
PyvtkWebGLDataSet_SetColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  unsigned char *temp0 = NULL;
  unsigned char *save0 = NULL;
  unsigned char small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned char[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetColors(temp0);
      }
    else
      {
      op->vtkWebGLDataSet::SetColors(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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

  return result;
}


static PyObject *
PyvtkWebGLDataSet_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  int temp1;
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
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetPoints(temp0, temp1);
      }
    else
      {
      op->vtkWebGLDataSet::SetPoints(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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

  return result;
}


static PyObject *
PyvtkWebGLDataSet_SetTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
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
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetTCoords(temp0);
      }
    else
      {
      op->vtkWebGLDataSet::SetTCoords(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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

  return result;
}


static PyObject *
PyvtkWebGLDataSet_SetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
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
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetMatrix(temp0);
      }
    else
      {
      op->vtkWebGLDataSet::SetMatrix(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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

  return result;
}


static PyObject *
PyvtkWebGLDataSet_SetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  WebGLObjectTypes temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, &PyWebGLObjectTypes_Type))
    {
    if (ap.IsBound())
      {
      op->SetType(temp0);
      }
    else
      {
      op->vtkWebGLDataSet::SetType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_GetBinaryData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetBinaryData() :
      op->vtkWebGLDataSet::GetBinaryData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_GetBinarySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinarySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBinarySize() :
      op->vtkWebGLDataSet::GetBinarySize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_GenerateBinaryData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateBinaryData();
      }
    else
      {
      op->vtkWebGLDataSet::GenerateBinaryData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_HasChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasChanged() :
      op->vtkWebGLDataSet::HasChanged());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLDataSet_GetMD5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMD5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLDataSet *op = static_cast<vtkWebGLDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    std::string tempr = (ap.IsBound() ?
      op->GetMD5() :
      op->vtkWebGLDataSet::GetMD5());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkWebGLDataSet_Methods[] = {
  {(char*)"GetClassName", PyvtkWebGLDataSet_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWebGLDataSet_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWebGLDataSet_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkWebGLDataSet\nC++: vtkWebGLDataSet *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWebGLDataSet_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWebGLDataSet\nC++: vtkWebGLDataSet *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVertices", PyvtkWebGLDataSet_SetVertices, METH_VARARGS,
   (char*)"V.SetVertices([float, ...], int)\nC++: void SetVertices(float *v, int size)\n\n"},
  {(char*)"SetIndexes", PyvtkWebGLDataSet_SetIndexes, METH_VARARGS,
   (char*)"V.SetIndexes([int, ...], int)\nC++: void SetIndexes(short *i, int size)\n\n"},
  {(char*)"SetNormals", PyvtkWebGLDataSet_SetNormals, METH_VARARGS,
   (char*)"V.SetNormals([float, ...])\nC++: void SetNormals(float *n)\n\n"},
  {(char*)"SetColors", PyvtkWebGLDataSet_SetColors, METH_VARARGS,
   (char*)"V.SetColors([int, ...])\nC++: void SetColors(unsigned char *c)\n\n"},
  {(char*)"SetPoints", PyvtkWebGLDataSet_SetPoints, METH_VARARGS,
   (char*)"V.SetPoints([float, ...], int)\nC++: void SetPoints(float *p, int size)\n\n"},
  {(char*)"SetTCoords", PyvtkWebGLDataSet_SetTCoords, METH_VARARGS,
   (char*)"V.SetTCoords([float, ...])\nC++: void SetTCoords(float *t)\n\n"},
  {(char*)"SetMatrix", PyvtkWebGLDataSet_SetMatrix, METH_VARARGS,
   (char*)"V.SetMatrix([float, ...])\nC++: void SetMatrix(float *m)\n\n"},
  {(char*)"SetType", PyvtkWebGLDataSet_SetType, METH_VARARGS,
   (char*)"V.SetType()\nC++: void SetType(WebGLObjectTypes t)\n\n"},
  {(char*)"GetBinaryData", PyvtkWebGLDataSet_GetBinaryData, METH_VARARGS,
   (char*)"V.GetBinaryData() -> (int, ...)\nC++: unsigned char *GetBinaryData()\n\n"},
  {(char*)"GetBinarySize", PyvtkWebGLDataSet_GetBinarySize, METH_VARARGS,
   (char*)"V.GetBinarySize() -> int\nC++: int GetBinarySize()\n\n"},
  {(char*)"GenerateBinaryData", PyvtkWebGLDataSet_GenerateBinaryData, METH_VARARGS,
   (char*)"V.GenerateBinaryData()\nC++: void GenerateBinaryData()\n\n"},
  {(char*)"HasChanged", PyvtkWebGLDataSet_HasChanged, METH_VARARGS,
   (char*)"V.HasChanged() -> bool\nC++: bool HasChanged()\n\n"},
  {(char*)"GetMD5", PyvtkWebGLDataSet_GetMD5, METH_VARARGS,
   (char*)"V.GetMD5() -> string\nC++: std::string GetMD5()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWebGLDataSet_StaticNew()
{
  return vtkWebGLDataSet::New();
}

PyObject *PyVTKClass_vtkWebGLDataSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWebGLDataSet_StaticNew,
    PyvtkWebGLDataSet_Methods,
    "vtkWebGLDataSet", modulename,
    NULL, NULL,
    PyvtkWebGLDataSet_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkWebGLDataSet_Doc()
{
  static const char *docstring[] = {
    "vtkWebGLDataSet\n\n",
    "Superclass: vtkObject\n\n",
    "vtkWebGLDataSet represent vertices, lines, polygons, and triangles.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWebGLDataSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWebGLDataSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWebGLDataSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

