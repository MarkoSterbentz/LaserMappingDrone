// python wrapper for vtkWebGLExporter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkWebGLExporter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkWebGLExporter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkWebGLExporterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkWebGLExporter_Doc();


static PyObject *
PyvtkWebGLExporter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkWebGLExporter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWebGLExporter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWebGLExporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWebGLExporter::NewInstance());

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
PyvtkWebGLExporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkWebGLExporter *tempr = vtkWebGLExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLExporter_parseScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "parseScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  vtkRendererCollection *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRendererCollection") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->parseScene(temp0, temp1, temp2);
      }
    else
      {
      op->vtkWebGLExporter::parseScene(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLExporter_exportStaticScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "exportStaticScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  vtkRendererCollection *temp0 = NULL;
  int temp1;
  int temp2;
  std::string temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRendererCollection") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->exportStaticScene(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkWebGLExporter::exportStaticScene(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLExporter_GenerateMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GenerateMetadata() :
      op->vtkWebGLExporter::GenerateMetadata());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLExporter_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetId() :
      op->vtkWebGLExporter::GetId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLExporter_GetWebGLObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWebGLObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkWebGLObject *tempr = (ap.IsBound() ?
      op->GetWebGLObject(temp0) :
      op->vtkWebGLExporter::GetWebGLObject(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLExporter_GetNumberOfObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfObjects() :
      op->vtkWebGLExporter::GetNumberOfObjects());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLExporter_hasChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "hasChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->hasChanged() :
      op->vtkWebGLExporter::hasChanged());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLExporter_SetCenterOfRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterOfRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetCenterOfRotation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkWebGLExporter::SetCenterOfRotation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLExporter_SetMaxAllowedSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxAllowedSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMaxAllowedSize(temp0, temp1);
      }
    else
      {
      op->vtkWebGLExporter::SetMaxAllowedSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWebGLExporter_SetMaxAllowedSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxAllowedSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxAllowedSize(temp0);
      }
    else
      {
      op->vtkWebGLExporter::SetMaxAllowedSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWebGLExporter_SetMaxAllowedSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkWebGLExporter_SetMaxAllowedSize_s1(self, args);
    case 1:
      return PyvtkWebGLExporter_SetMaxAllowedSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMaxAllowedSize");
  return NULL;
}



static PyObject *
PyvtkWebGLExporter_ComputeMD5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeMD5");

  unsigned char *temp0 = NULL;
  unsigned char small0[4];
  int size0 = 0;
  int temp1;
  std::string temp2;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new unsigned char[size0];
    }

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkWebGLExporter::ComputeMD5(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
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

static PyMethodDef PyvtkWebGLExporter_Methods[] = {
  {(char*)"GetClassName", PyvtkWebGLExporter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWebGLExporter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWebGLExporter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkWebGLExporter\nC++: vtkWebGLExporter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWebGLExporter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWebGLExporter\nC++: vtkWebGLExporter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"parseScene", PyvtkWebGLExporter_parseScene, METH_VARARGS,
   (char*)"V.parseScene(vtkRendererCollection, string, int)\nC++: void parseScene(vtkRendererCollection *renderers,\n    const char *viewId, int parseType)\n\nGet all the needed information from the vtkRenderer\n"},
  {(char*)"exportStaticScene", PyvtkWebGLExporter_exportStaticScene, METH_VARARGS,
   (char*)"V.exportStaticScene(vtkRendererCollection, int, int, string)\nC++: void exportStaticScene(vtkRendererCollection *renderers,\n    int width, int height, std::string path)\n\n"},
  {(char*)"GenerateMetadata", PyvtkWebGLExporter_GenerateMetadata, METH_VARARGS,
   (char*)"V.GenerateMetadata() -> string\nC++: const char *GenerateMetadata()\n\n"},
  {(char*)"GetId", PyvtkWebGLExporter_GetId, METH_VARARGS,
   (char*)"V.GetId() -> string\nC++: const char *GetId()\n\n"},
  {(char*)"GetWebGLObject", PyvtkWebGLExporter_GetWebGLObject, METH_VARARGS,
   (char*)"V.GetWebGLObject(int) -> vtkWebGLObject\nC++: vtkWebGLObject *GetWebGLObject(int index)\n\n"},
  {(char*)"GetNumberOfObjects", PyvtkWebGLExporter_GetNumberOfObjects, METH_VARARGS,
   (char*)"V.GetNumberOfObjects() -> int\nC++: int GetNumberOfObjects()\n\n"},
  {(char*)"hasChanged", PyvtkWebGLExporter_hasChanged, METH_VARARGS,
   (char*)"V.hasChanged() -> bool\nC++: bool hasChanged()\n\n"},
  {(char*)"SetCenterOfRotation", PyvtkWebGLExporter_SetCenterOfRotation, METH_VARARGS,
   (char*)"V.SetCenterOfRotation(float, float, float)\nC++: void SetCenterOfRotation(float a1, float a2, float a3)\n\n"},
  {(char*)"SetMaxAllowedSize", PyvtkWebGLExporter_SetMaxAllowedSize, METH_VARARGS,
   (char*)"V.SetMaxAllowedSize(int, int)\nC++: void SetMaxAllowedSize(int mesh, int lines)\nV.SetMaxAllowedSize(int)\nC++: void SetMaxAllowedSize(int size)\n\n"},
  {(char*)"ComputeMD5", PyvtkWebGLExporter_ComputeMD5, METH_VARARGS | METH_STATIC,
   (char*)"V.ComputeMD5((int, ...), int, string)\nC++: static void ComputeMD5(const unsigned char *content,\n    int size, std::string &hash)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWebGLExporter_StaticNew()
{
  return vtkWebGLExporter::New();
}

PyObject *PyVTKClass_vtkWebGLExporterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWebGLExporter_StaticNew,
    PyvtkWebGLExporter_Methods,
    "vtkWebGLExporter", modulename,
    NULL, NULL,
    PyvtkWebGLExporter_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkWebGLExporter_Doc()
{
  static const char *docstring[] = {
    "vtkWebGLExporter\n\n",
    "Superclass: vtkObject\n\n",
    "vtkWebGLExporter export the data of the scene to be used in the\nWebGL.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWebGLExporter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWebGLExporterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWebGLExporter", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_ONLYCAMERA", VTK_ONLYCAMERA },
        { "VTK_ONLYWIDGET", VTK_ONLYWIDGET },
        { "VTK_PARSEALL", VTK_PARSEALL },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

