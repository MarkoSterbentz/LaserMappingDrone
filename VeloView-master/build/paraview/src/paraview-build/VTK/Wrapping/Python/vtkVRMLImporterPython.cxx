// python wrapper for vtkVRMLImporter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVRMLImporter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVRMLImporter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVRMLImporterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImporterNew
extern "C" { PyObject *PyVTKClass_vtkImporterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImporterNew
#endif

static const char **PyvtkVRMLImporter_Doc();


static PyObject *
PyvtkVRMLImporter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVRMLImporter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLImporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVRMLImporter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLImporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVRMLImporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVRMLImporter::NewInstance());

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
PyvtkVRMLImporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVRMLImporter *tempr = vtkVRMLImporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLImporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkVRMLImporter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLImporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkVRMLImporter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLImporter_SetShapeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShapeResolution(temp0);
      }
    else
      {
      op->vtkVRMLImporter::SetShapeResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLImporter_GetShapeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShapeResolution() :
      op->vtkVRMLImporter::GetShapeResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLImporter_GetVRMLDEFObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVRMLDEFObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetVRMLDEFObject(temp0) :
      op->vtkVRMLImporter::GetVRMLDEFObject(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVRMLImporter_Methods[] = {
  {(char*)"GetClassName", PyvtkVRMLImporter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVRMLImporter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVRMLImporter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVRMLImporter\nC++: vtkVRMLImporter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVRMLImporter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVRMLImporter\nC++: vtkVRMLImporter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkVRMLImporter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify the name of the file to read.\n"},
  {(char*)"GetFileName", PyvtkVRMLImporter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify the name of the file to read.\n"},
  {(char*)"SetShapeResolution", PyvtkVRMLImporter_SetShapeResolution, METH_VARARGS,
   (char*)"V.SetShapeResolution(int)\nC++: void SetShapeResolution(int a)\n\nSpecify the resolution for Sphere, Cone and Cylinder shape\nsources. Default is 12.\n"},
  {(char*)"GetShapeResolution", PyvtkVRMLImporter_GetShapeResolution, METH_VARARGS,
   (char*)"V.GetShapeResolution() -> int\nC++: int GetShapeResolution()\n\nSpecify the resolution for Sphere, Cone and Cylinder shape\nsources. Default is 12.\n"},
  {(char*)"GetVRMLDEFObject", PyvtkVRMLImporter_GetVRMLDEFObject, METH_VARARGS,
   (char*)"V.GetVRMLDEFObject(string) -> vtkObject\nC++: vtkObject *GetVRMLDEFObject(const char *name)\n\nIn the VRML spec you can DEF and USE nodes (name them), This\nroutine will return the associated VTK object which was created\nas a result of the DEF mechanism Send in the name from the VRML\nfile, get the VTK object. You will have to check and correctly\ncast the object since this only returns vtkObjects.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVRMLImporter_StaticNew()
{
  return vtkVRMLImporter::New();
}

PyObject *PyVTKClass_vtkVRMLImporterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVRMLImporter_StaticNew,
    PyvtkVRMLImporter_Methods,
    "vtkVRMLImporter", modulename,
    NULL, NULL,
    PyvtkVRMLImporter_Doc(),
    PyVTKClass_vtkImporterNew(modulename));
  return cls;
}

const char **PyvtkVRMLImporter_Doc()
{
  static const char *docstring[] = {
    "vtkVRMLImporter - imports VRML 2.0 files.\n\n",
    "Superclass: vtkImporter\n\n",
    "vtkVRMLImporter imports VRML 2.0 files into VTK.\n\nCaveats:\n\nThese nodes are currently supported:\n     Appearance                              IndexedFaceSet\n     Box                                     IndexedLineSet\n     Color                                   Material\n     Cone                                    Shape\n     Coordinate                              Sphere\n     Cylinder             ",
    "                   Transform\n     DirectionalLight\n\nAs you can see this implementation focuses on getting the geometry\ntranslated.  The routes and scripting nodes are ignored since they\ndeal with directly accessing a nodes internal structure based on the\nVRML spec. Since this is a translation the internal data structures\ndiffer greatly from the VRML spec and the External Authoring\nInterface (see t",
    "he VRML spec). The DEF/USE mechanism does allow the\nVTK user to extract objects from the scene and directly manipulate\nthem using the native language (Tcl, Python, Java, or whatever\nlanguage VTK is wrapped in). This, in a way, removes the need for the\nroute and script mechanism (not completely though). Texture\ncoordinates are attached to the mesh is available but image textures\nare not loaded. Vie",
    "wpoints (camera presets) are not imported.\n\nThanks:\n\n\n Thanks to Russ Coucher of Areva for numerous bug fixes and a new\ntest.\n\nSee Also:\n\nvtkImporter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVRMLImporter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVRMLImporterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVRMLImporter", o) != 0)
    {
    Py_DECREF(o);
    }

}

