// python wrapper for vtkLogoRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLogoRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLogoRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLogoRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkBorderRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkBorderRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkBorderRepresentationNew
#endif

static const char **PyvtkLogoRepresentation_Doc();


static PyObject *
PyvtkLogoRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogoRepresentation *op = static_cast<vtkLogoRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLogoRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLogoRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogoRepresentation *op = static_cast<vtkLogoRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLogoRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLogoRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogoRepresentation *op = static_cast<vtkLogoRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLogoRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLogoRepresentation::NewInstance());

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
PyvtkLogoRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLogoRepresentation *tempr = vtkLogoRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLogoRepresentation_SetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogoRepresentation *op = static_cast<vtkLogoRepresentation *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetImage(temp0);
      }
    else
      {
      op->vtkLogoRepresentation::SetImage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLogoRepresentation_GetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogoRepresentation *op = static_cast<vtkLogoRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetImage() :
      op->vtkLogoRepresentation::GetImage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLogoRepresentation_SetImageProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogoRepresentation *op = static_cast<vtkLogoRepresentation *>(vp);

  vtkProperty2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
    {
    if (ap.IsBound())
      {
      op->SetImageProperty(temp0);
      }
    else
      {
      op->vtkLogoRepresentation::SetImageProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLogoRepresentation_GetImageProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogoRepresentation *op = static_cast<vtkLogoRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetImageProperty() :
      op->vtkLogoRepresentation::GetImageProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLogoRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogoRepresentation *op = static_cast<vtkLogoRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkLogoRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLogoRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogoRepresentation *op = static_cast<vtkLogoRepresentation *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors2D(temp0);
      }
    else
      {
      op->vtkLogoRepresentation::GetActors2D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLogoRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogoRepresentation *op = static_cast<vtkLogoRepresentation *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkLogoRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLogoRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogoRepresentation *op = static_cast<vtkLogoRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkLogoRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLogoRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkLogoRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK class methods.\n"},
  {(char*)"IsA", PyvtkLogoRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK class methods.\n"},
  {(char*)"NewInstance", PyvtkLogoRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLogoRepresentation\nC++: vtkLogoRepresentation *NewInstance()\n\nStandard VTK class methods.\n"},
  {(char*)"SafeDownCast", PyvtkLogoRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLogoRepresentation\nC++: vtkLogoRepresentation *SafeDownCast(vtkObject* o)\n\nStandard VTK class methods.\n"},
  {(char*)"SetImage", PyvtkLogoRepresentation_SetImage, METH_VARARGS,
   (char*)"V.SetImage(vtkImageData)\nC++: virtual void SetImage(vtkImageData *img)\n\nSpecify/retrieve the image to display in the balloon.\n"},
  {(char*)"GetImage", PyvtkLogoRepresentation_GetImage, METH_VARARGS,
   (char*)"V.GetImage() -> vtkImageData\nC++: vtkImageData *GetImage()\n\nSpecify/retrieve the image to display in the balloon.\n"},
  {(char*)"SetImageProperty", PyvtkLogoRepresentation_SetImageProperty, METH_VARARGS,
   (char*)"V.SetImageProperty(vtkProperty2D)\nC++: virtual void SetImageProperty(vtkProperty2D *p)\n\nSet/get the image property (relevant only if an image is shown).\n"},
  {(char*)"GetImageProperty", PyvtkLogoRepresentation_GetImageProperty, METH_VARARGS,
   (char*)"V.GetImageProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetImageProperty()\n\nSet/get the image property (relevant only if an image is shown).\n"},
  {(char*)"BuildRepresentation", PyvtkLogoRepresentation_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nSatisfy the superclasses' API.\n"},
  {(char*)"GetActors2D", PyvtkLogoRepresentation_GetActors2D, METH_VARARGS,
   (char*)"V.GetActors2D(vtkPropCollection)\nC++: virtual void GetActors2D(vtkPropCollection *pc)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkLogoRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"RenderOverlay", PyvtkLogoRepresentation_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLogoRepresentation_StaticNew()
{
  return vtkLogoRepresentation::New();
}

PyObject *PyVTKClass_vtkLogoRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLogoRepresentation_StaticNew,
    PyvtkLogoRepresentation_Methods,
    "vtkLogoRepresentation", modulename,
    NULL, NULL,
    PyvtkLogoRepresentation_Doc(),
    PyVTKClass_vtkBorderRepresentationNew(modulename));
  return cls;
}

const char **PyvtkLogoRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkLogoRepresentation - represent the vtkLogoWidget\n\n",
    "Superclass: vtkBorderRepresentation\n\n",
    "See Also:\n\nvtkLogoWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLogoRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLogoRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLogoRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

