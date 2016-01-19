// python wrapper for vtkTIFFReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTIFFReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTIFFReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTIFFReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageReader2New
extern "C" { PyObject *PyVTKClass_vtkImageReader2New(const char *); }
#define DECLARED_PyVTKClass_vtkImageReader2New
#endif

static const char **PyvtkTIFFReader_Doc();


static PyObject *
PyvtkTIFFReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTIFFReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTIFFReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTIFFReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTIFFReader::NewInstance());

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
PyvtkTIFFReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTIFFReader *tempr = vtkTIFFReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkTIFFReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetFileExtensions() :
      op->vtkTIFFReader::GetFileExtensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDescriptiveName() :
      op->vtkTIFFReader::GetDescriptiveName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_SetOrientationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationType(temp0);
      }
    else
      {
      op->vtkTIFFReader::SetOrientationType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_GetOrientationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetOrientationType() :
      op->vtkTIFFReader::GetOrientationType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_GetOrientationTypeSpecifiedFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationTypeSpecifiedFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetOrientationTypeSpecifiedFlag() :
      op->vtkTIFFReader::GetOrientationTypeSpecifiedFlag());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_SetOriginSpecifiedFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginSpecifiedFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOriginSpecifiedFlag(temp0);
      }
    else
      {
      op->vtkTIFFReader::SetOriginSpecifiedFlag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_GetOriginSpecifiedFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginSpecifiedFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetOriginSpecifiedFlag() :
      op->vtkTIFFReader::GetOriginSpecifiedFlag());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_OriginSpecifiedFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OriginSpecifiedFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OriginSpecifiedFlagOn();
      }
    else
      {
      op->vtkTIFFReader::OriginSpecifiedFlagOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_OriginSpecifiedFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OriginSpecifiedFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OriginSpecifiedFlagOff();
      }
    else
      {
      op->vtkTIFFReader::OriginSpecifiedFlagOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_SetSpacingSpecifiedFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacingSpecifiedFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSpacingSpecifiedFlag(temp0);
      }
    else
      {
      op->vtkTIFFReader::SetSpacingSpecifiedFlag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_GetSpacingSpecifiedFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacingSpecifiedFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetSpacingSpecifiedFlag() :
      op->vtkTIFFReader::GetSpacingSpecifiedFlag());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_SpacingSpecifiedFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpacingSpecifiedFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SpacingSpecifiedFlagOn();
      }
    else
      {
      op->vtkTIFFReader::SpacingSpecifiedFlagOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_SpacingSpecifiedFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpacingSpecifiedFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SpacingSpecifiedFlagOff();
      }
    else
      {
      op->vtkTIFFReader::SpacingSpecifiedFlagOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTIFFReader_Methods[] = {
  {(char*)"GetClassName", PyvtkTIFFReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTIFFReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTIFFReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTIFFReader\nC++: vtkTIFFReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTIFFReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTIFFReader\nC++: vtkTIFFReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CanReadFile", PyvtkTIFFReader_CanReadFile, METH_VARARGS,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *fname)\n\nIs the given file name a tiff file?\n"},
  {(char*)"GetFileExtensions", PyvtkTIFFReader_GetFileExtensions, METH_VARARGS,
   (char*)"V.GetFileExtensions() -> string\nC++: virtual const char *GetFileExtensions()\n\nGet the file extensions for this format. Returns a string with a\nspace separated list of extensions in the format .extension\n"},
  {(char*)"GetDescriptiveName", PyvtkTIFFReader_GetDescriptiveName, METH_VARARGS,
   (char*)"V.GetDescriptiveName() -> string\nC++: virtual const char *GetDescriptiveName()\n\nReturn a descriptive name for the file format that might be\nuseful in a GUI.\n"},
  {(char*)"SetOrientationType", PyvtkTIFFReader_SetOrientationType, METH_VARARGS,
   (char*)"V.SetOrientationType(int)\nC++: void SetOrientationType(unsigned int orientationType)\n\nSet orientation type ORIENTATION_TOPLEFT         1       (row 0\ntop, col 0 lhs) ORIENTATION_TOPRIGHT        2       (row 0 top,\ncol 0 rhs) ORIENTATION_BOTRIGHT        3       (row 0 bottom, col\n0 rhs) ORIENTATION_BOTLEFT         4       (row 0 bottom, col 0\nlhs) ORIENTATION_LEFTTOP         5       (row 0 lhs, col 0 top)\nORIENTATION_RIGHTTOP        6       (row 0 rhs, col 0 top)\nORIENTATION_RIGHTBOT        7       (row 0 rhs, col 0 bottom)\nORIENTATION_LEFTBOT         8       (row 0 lhs, col 0 bottom)\nUser need to explicitly include vtk_tiff.h header to have access\nto those #define\n"},
  {(char*)"GetOrientationType", PyvtkTIFFReader_GetOrientationType, METH_VARARGS,
   (char*)"V.GetOrientationType() -> int\nC++: unsigned int GetOrientationType()\n\nSet orientation type ORIENTATION_TOPLEFT         1       (row 0\ntop, col 0 lhs) ORIENTATION_TOPRIGHT        2       (row 0 top,\ncol 0 rhs) ORIENTATION_BOTRIGHT        3       (row 0 bottom, col\n0 rhs) ORIENTATION_BOTLEFT         4       (row 0 bottom, col 0\nlhs) ORIENTATION_LEFTTOP         5       (row 0 lhs, col 0 top)\nORIENTATION_RIGHTTOP        6       (row 0 rhs, col 0 top)\nORIENTATION_RIGHTBOT        7       (row 0 rhs, col 0 bottom)\nORIENTATION_LEFTBOT         8       (row 0 lhs, col 0 bottom)\nUser need to explicitly include vtk_tiff.h header to have access\nto those #define\n"},
  {(char*)"GetOrientationTypeSpecifiedFlag", PyvtkTIFFReader_GetOrientationTypeSpecifiedFlag, METH_VARARGS,
   (char*)"V.GetOrientationTypeSpecifiedFlag() -> bool\nC++: bool GetOrientationTypeSpecifiedFlag()\n\nGet method to check if orientation type is specified.\n"},
  {(char*)"SetOriginSpecifiedFlag", PyvtkTIFFReader_SetOriginSpecifiedFlag, METH_VARARGS,
   (char*)"V.SetOriginSpecifiedFlag(bool)\nC++: void SetOriginSpecifiedFlag(bool a)\n\nSet/get methods to see if manual origin has been set.\n"},
  {(char*)"GetOriginSpecifiedFlag", PyvtkTIFFReader_GetOriginSpecifiedFlag, METH_VARARGS,
   (char*)"V.GetOriginSpecifiedFlag() -> bool\nC++: bool GetOriginSpecifiedFlag()\n\nSet/get methods to see if manual origin has been set.\n"},
  {(char*)"OriginSpecifiedFlagOn", PyvtkTIFFReader_OriginSpecifiedFlagOn, METH_VARARGS,
   (char*)"V.OriginSpecifiedFlagOn()\nC++: void OriginSpecifiedFlagOn()\n\nSet/get methods to see if manual origin has been set.\n"},
  {(char*)"OriginSpecifiedFlagOff", PyvtkTIFFReader_OriginSpecifiedFlagOff, METH_VARARGS,
   (char*)"V.OriginSpecifiedFlagOff()\nC++: void OriginSpecifiedFlagOff()\n\nSet/get methods to see if manual origin has been set.\n"},
  {(char*)"SetSpacingSpecifiedFlag", PyvtkTIFFReader_SetSpacingSpecifiedFlag, METH_VARARGS,
   (char*)"V.SetSpacingSpecifiedFlag(bool)\nC++: void SetSpacingSpecifiedFlag(bool a)\n\nSet/get if the spacing flag has been specified.\n"},
  {(char*)"GetSpacingSpecifiedFlag", PyvtkTIFFReader_GetSpacingSpecifiedFlag, METH_VARARGS,
   (char*)"V.GetSpacingSpecifiedFlag() -> bool\nC++: bool GetSpacingSpecifiedFlag()\n\nSet/get if the spacing flag has been specified.\n"},
  {(char*)"SpacingSpecifiedFlagOn", PyvtkTIFFReader_SpacingSpecifiedFlagOn, METH_VARARGS,
   (char*)"V.SpacingSpecifiedFlagOn()\nC++: void SpacingSpecifiedFlagOn()\n\nSet/get if the spacing flag has been specified.\n"},
  {(char*)"SpacingSpecifiedFlagOff", PyvtkTIFFReader_SpacingSpecifiedFlagOff, METH_VARARGS,
   (char*)"V.SpacingSpecifiedFlagOff()\nC++: void SpacingSpecifiedFlagOff()\n\nSet/get if the spacing flag has been specified.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTIFFReader_StaticNew()
{
  return vtkTIFFReader::New();
}

PyObject *PyVTKClass_vtkTIFFReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTIFFReader_StaticNew,
    PyvtkTIFFReader_Methods,
    "vtkTIFFReader", modulename,
    NULL, NULL,
    PyvtkTIFFReader_Doc(),
    PyVTKClass_vtkImageReader2New(modulename));
  return cls;
}

const char **PyvtkTIFFReader_Doc()
{
  static const char *docstring[] = {
    "vtkTIFFReader - read TIFF files\n\n",
    "Superclass: vtkImageReader2\n\n",
    "vtkTIFFReader is a source object that reads TIFF files. It should be\nable to read almost any TIFF file\n\nSee Also:\n\nvtkTIFFWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTIFFReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTIFFReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTIFFReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

