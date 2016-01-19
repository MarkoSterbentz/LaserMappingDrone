// python wrapper for vtkSMUtilities
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMUtilities.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMUtilities(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMUtilitiesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMUtilities_Doc();


static PyObject *
PyvtkSMUtilities_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUtilities *op = static_cast<vtkSMUtilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMUtilities::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUtilities *op = static_cast<vtkSMUtilities *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMUtilities::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUtilities *op = static_cast<vtkSMUtilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMUtilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMUtilities::NewInstance());

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
PyvtkSMUtilities_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMUtilities *tempr = vtkSMUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMUtilities_SaveImage_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SaveImage");

  vtkImageData *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = vtkSMUtilities::SaveImage(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMUtilities_SaveImage_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SaveImage");

  vtkImageData *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetValue(temp1))
    {
    int tempr = vtkSMUtilities::SaveImage(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMUtilities_SaveImage_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SaveImage");

  vtkImageData *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = vtkSMUtilities::SaveImage(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMUtilities_SaveImage_Methods[] = {
  {NULL, PyvtkSMUtilities_SaveImage_s1, METH_VARARGS | METH_STATIC,
   (char*)"Ozi *vtkImageData"},
  {NULL, PyvtkSMUtilities_SaveImage_s3, METH_VARARGS | METH_STATIC,
   (char*)"Ozz *vtkImageData"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMUtilities_SaveImage(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMUtilities_SaveImage_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMUtilities_SaveImage_s2(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SaveImage");
  return NULL;
}



static PyObject *
PyvtkSMUtilities_SaveImageOnProcessZero(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SaveImageOnProcessZero");

  vtkImageData *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = vtkSMUtilities::SaveImageOnProcessZero(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMUtilities_CreateOrbit_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateOrbit");

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  int temp2;
  double temp3[3];
  const int size3 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
    {
    vtkPoints *tempr = vtkSMUtilities::CreateOrbit(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMUtilities_CreateOrbit_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateOrbit");

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  double temp2;
  int temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkPoints *tempr = vtkSMUtilities::CreateOrbit(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMUtilities_CreateOrbit_Methods[] = {
  {NULL, PyvtkSMUtilities_CreateOrbit_s1, METH_VARARGS | METH_STATIC,
   (char*)"OOiO *d *d *d"},
  {NULL, PyvtkSMUtilities_CreateOrbit_s2, METH_VARARGS | METH_STATIC,
   (char*)"OOdi *d *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMUtilities_CreateOrbit(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMUtilities_CreateOrbit_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CreateOrbit");
  return NULL;
}



static PyObject *
PyvtkSMUtilities_Merge(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Merge");

  vtkImageData *temp0 = NULL;
  vtkImageData *temp1 = NULL;
  int temp2 = 0;
  unsigned char *temp3 = NULL;
  unsigned char small3[4];
  int size3 = 0;
  PyObject *result = NULL;

  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new unsigned char[size3];
    }

  if (ap.CheckArgCount(2, 4) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp3, size3)))
    {
    vtkSMUtilities::Merge(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}


static PyObject *
PyvtkSMUtilities_FillImage(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FillImage");

  vtkImageData *temp0 = NULL;
  int temp1[6];
  const int size1 = 6;
  unsigned char temp2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    vtkSMUtilities::FillImage(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMUtilities_Methods[] = {
  {(char*)"GetClassName", PyvtkSMUtilities_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMUtilities_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMUtilities_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMUtilities\nC++: vtkSMUtilities *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMUtilities_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMUtilities\nC++: vtkSMUtilities *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SaveImage", PyvtkSMUtilities_SaveImage, METH_VARARGS | METH_STATIC,
   (char*)"V.SaveImage(vtkImageData, string, int) -> int\nC++: static int SaveImage(vtkImageData *image,\n    const char *filename, int quality)\nV.SaveImage(vtkImageData, string) -> int\nC++: static int SaveImage(vtkImageData *image,\n    const char *filename)\nV.SaveImage(vtkImageData, string, string) -> int\nC++: static int SaveImage(vtkImageData *image,\n    const char *filename, const char *writerName)\n\nSave the image to a file. The file is created on the process on\nwhich this method is called. Return vtkErrorCode::NoError (0) on\nsuccess, otherwise returns the error code. / quality [0,100] -- 0\n= low, 100=high, -1=default\n"},
  {(char*)"SaveImageOnProcessZero", PyvtkSMUtilities_SaveImageOnProcessZero, METH_VARARGS | METH_STATIC,
   (char*)"V.SaveImageOnProcessZero(vtkImageData, string, string) -> int\nC++: static int SaveImageOnProcessZero(vtkImageData *image,\n    const char *filename, const char *writerName)\n\nCalls SaveImage(image, filename, writerName) only on process 0.\nOther processes will recieve the return code through a broadcast.\n"},
  {(char*)"CreateOrbit", PyvtkSMUtilities_CreateOrbit, METH_VARARGS | METH_STATIC,
   (char*)"V.CreateOrbit((float, float, float), (float, float, float), int, (\n    float, float, float)) -> vtkPoints\nC++: static vtkPoints *CreateOrbit(const double center[3],\n    const double normal[3], int resolution,\n    const double startPoint[3])\nV.CreateOrbit((float, float, float), (float, float, float), float,\n     int) -> vtkPoints\nC++: static vtkPoints *CreateOrbit(const double center[3],\n    const double normal[3], double radius, int resolution)\n\nReturns the points an orbit to revolve around the center at a\ndistance of radius in the plane defined by the center and the\nnormal. The number of points returned is equal to resolution.\nReturns a new instance of vtkPoints. The caller is responsible\nfor freeing the allocated memory.\n"},
  {(char*)"Merge", PyvtkSMUtilities_Merge, METH_VARARGS | METH_STATIC,
   (char*)"V.Merge(vtkImageData, vtkImageData, int, (int, ...))\nC++: static void Merge(vtkImageData *dest, vtkImageData *src,\n    int borderWidth=0, const unsigned char *borderColorRGB=NULL)\n\nConvenience method used to merge a smaller image ( src) into a\nlarger one ( dest). The location of the smaller image in the\nlarger image are determined by their extents.\n"},
  {(char*)"FillImage", PyvtkSMUtilities_FillImage, METH_VARARGS | METH_STATIC,
   (char*)"V.FillImage(vtkImageData, (int, int, int, int, int, int), (int,\n    int, int))\nC++: static void FillImage(vtkImageData *image,\n    const int extent[6], const unsigned char rgb[3])\n\nFill the specified extents in the image with the given color.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMUtilities_StaticNew()
{
  return vtkSMUtilities::New();
}

PyObject *PyVTKClass_vtkSMUtilitiesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMUtilities_StaticNew,
    PyvtkSMUtilities_Methods,
    "vtkSMUtilities", modulename,
    NULL, NULL,
    PyvtkSMUtilities_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMUtilities_Doc()
{
  static const char *docstring[] = {
    "vtkSMUtilities - collection of utility methods.\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMUtilities defines a collection of useful static methods.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMUtilities(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMUtilitiesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMUtilities", o) != 0)
    {
    Py_DECREF(o);
    }

}

