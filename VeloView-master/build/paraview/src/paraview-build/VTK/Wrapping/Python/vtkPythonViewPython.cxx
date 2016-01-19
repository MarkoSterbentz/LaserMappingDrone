// python wrapper for vtkPythonView
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPythonView.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPythonView(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPythonViewNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVViewNew
extern "C" { PyObject *PyVTKClass_vtkPVViewNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVViewNew
#endif

static const char **PyvtkPythonView_Doc();


static PyObject *
PyvtkPythonView_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPythonView::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPythonView::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPythonView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPythonView::NewInstance());

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
PyvtkPythonView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPythonView *tempr = vtkPythonView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_REQUEST_DELIVER_DATA_TO_CLIENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_DELIVER_DATA_TO_CLIENT");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationRequestKey *tempr = vtkPythonView::REQUEST_DELIVER_DATA_TO_CLIENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkPythonView::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkPythonView::GetRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkPythonView::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkPythonView::GetRenderWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->SetRenderWindow(temp0);
      }
    else
      {
      op->vtkPythonView::SetRenderWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_SetScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScript(temp0);
      }
    else
      {
      op->vtkPythonView::SetScript(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_GetScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetScript() :
      op->vtkPythonView::GetScript());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_SetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMagnification(temp0);
      }
    else
      {
      op->vtkPythonView::SetMagnification(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_GetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMagnification() :
      op->vtkPythonView::GetMagnification());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_GetNumberOfVisibleDataObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVisibleDataObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVisibleDataObjects() :
      op->vtkPythonView::GetNumberOfVisibleDataObjects());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_GetVisibleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPythonRepresentation *tempr = (ap.IsBound() ?
      op->GetVisibleRepresentation(temp0) :
      op->vtkPythonView::GetVisibleRepresentation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_GetVisibleDataObjectForSetup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibleDataObjectForSetup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetVisibleDataObjectForSetup(temp0) :
      op->vtkPythonView::GetVisibleDataObjectForSetup(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_GetVisibleDataObjectForRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibleDataObjectForRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetVisibleDataObjectForRendering(temp0) :
      op->vtkPythonView::GetVisibleDataObjectForRendering(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_GetNumberOfAttributeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAttributeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAttributeArrays(temp0, temp1) :
      op->vtkPythonView::GetNumberOfAttributeArrays(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_GetAttributeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeArrayName(temp0, temp1, temp2) :
      op->vtkPythonView::GetAttributeArrayName(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_SetAttributeArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  int temp0;
  int temp1;
  char *temp2 = NULL;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetAttributeArrayStatus(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPythonView::SetAttributeArrayStatus(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_GetAttributeArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  int temp0;
  int temp1;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->GetAttributeArrayStatus(temp0, temp1, temp2) :
      op->vtkPythonView::GetAttributeArrayStatus(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_EnableAllAttributeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllAttributeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableAllAttributeArrays();
      }
    else
      {
      op->vtkPythonView::EnableAllAttributeArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_DisableAllAttributeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllAttributeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableAllAttributeArrays();
      }
    else
      {
      op->vtkPythonView::DisableAllAttributeArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_StillRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StillRender();
      }
    else
      {
      op->vtkPythonView::StillRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_InteractiveRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InteractiveRender();
      }
    else
      {
      op->vtkPythonView::InteractiveRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonView_SetImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetImageData(temp0);
      }
    else
      {
      op->vtkPythonView::SetImageData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPythonView_Methods[] = {
  {(char*)"GetClassName", PyvtkPythonView_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPythonView_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPythonView_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPythonView\nC++: vtkPythonView *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPythonView_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPythonView\nC++: vtkPythonView *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"REQUEST_DELIVER_DATA_TO_CLIENT", PyvtkPythonView_REQUEST_DELIVER_DATA_TO_CLIENT, METH_VARARGS | METH_STATIC,
   (char*)"V.REQUEST_DELIVER_DATA_TO_CLIENT() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_DELIVER_DATA_TO_CLIENT(\n    )\n\nThis is a pass for delivering data from the server nodes to the\nclient.\n"},
  {(char*)"Update", PyvtkPythonView_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nOverrides the base class method to request an addition pass that\nmoves data from the server to the client.\n"},
  {(char*)"GetRenderer", PyvtkPythonView_GetRenderer, METH_VARARGS,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\nGets the renderer for this view.\n"},
  {(char*)"SetRenderer", PyvtkPythonView_SetRenderer, METH_VARARGS,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *ren)\n\n"},
  {(char*)"GetRenderWindow", PyvtkPythonView_GetRenderWindow, METH_VARARGS,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetRenderWindow()\n\nGet a handle to the render window.\n"},
  {(char*)"SetRenderWindow", PyvtkPythonView_SetRenderWindow, METH_VARARGS,
   (char*)"V.SetRenderWindow(vtkRenderWindow)\nC++: virtual void SetRenderWindow(vtkRenderWindow *win)\n\nSet the render window for this view. Note that this requires\nspecial handling in order to do correctly - see the notes in the\ndetailed description of vtkRenderViewBase.\n"},
  {(char*)"SetScript", PyvtkPythonView_SetScript, METH_VARARGS,
   (char*)"V.SetScript(string)\nC++: void SetScript(char *)\n\nGet/Set the Python script.\n"},
  {(char*)"GetScript", PyvtkPythonView_GetScript, METH_VARARGS,
   (char*)"V.GetScript() -> string\nC++: char *GetScript()\n\nGet/Set the Python script.\n"},
  {(char*)"SetMagnification", PyvtkPythonView_SetMagnification, METH_VARARGS,
   (char*)"V.SetMagnification(int)\nC++: void SetMagnification(int a)\n\nMagnification is needed to inform Python of the requested size of\nthe plot\n"},
  {(char*)"GetMagnification", PyvtkPythonView_GetMagnification, METH_VARARGS,
   (char*)"V.GetMagnification() -> int\nC++: int GetMagnification()\n\nMagnification is needed to inform Python of the requested size of\nthe plot\n"},
  {(char*)"GetNumberOfVisibleDataObjects", PyvtkPythonView_GetNumberOfVisibleDataObjects, METH_VARARGS,
   (char*)"V.GetNumberOfVisibleDataObjects() -> int\nC++: int GetNumberOfVisibleDataObjects()\n\nGets the number of visible data objects in the view.\n"},
  {(char*)"GetVisibleRepresentation", PyvtkPythonView_GetVisibleRepresentation, METH_VARARGS,
   (char*)"V.GetVisibleRepresentation(int) -> vtkPythonRepresentation\nC++: vtkPythonRepresentation *GetVisibleRepresentation(\n    int visibleObjectIndex)\n\nGet the representation for the visible data object at the given\nindex.\n"},
  {(char*)"GetVisibleDataObjectForSetup", PyvtkPythonView_GetVisibleDataObjectForSetup, METH_VARARGS,
   (char*)"V.GetVisibleDataObjectForSetup(int) -> vtkDataObject\nC++: vtkDataObject *GetVisibleDataObjectForSetup(\n    int visibleObjectIndex)\n\nGet a local copy of the visible data object at an index. The\nindex must be between 0 and\nthis->GetNumberOfVisibleDataObjects(). If outside this range,\nreturns NULL. This will return a shallow copy of the data object\ninput to the representation.\n\nWARNING: this method is intended to be called only from within\nthe setup_data() function in the Python Script set for this\ninstance.\n"},
  {(char*)"GetVisibleDataObjectForRendering", PyvtkPythonView_GetVisibleDataObjectForRendering, METH_VARARGS,
   (char*)"V.GetVisibleDataObjectForRendering(int) -> vtkDataObject\nC++: vtkDataObject *GetVisibleDataObjectForRendering(\n    int visibleObjectIndex)\n\nGet the client's copy of the visible data object at an index. The\nindex must be between 0 and\nthis->GetNumberOfVisibleDataObjects(). If outside this range,\nreturns NULL.\n\nWARNING: this method should be called only from within the\nrender() function in the Python Script set for this instance.\n"},
  {(char*)"GetNumberOfAttributeArrays", PyvtkPythonView_GetNumberOfAttributeArrays, METH_VARARGS,
   (char*)"V.GetNumberOfAttributeArrays(int, int) -> int\nC++: int GetNumberOfAttributeArrays(int visibleObjectIndex,\n    int attributeType)\n\nGet number of arrays in an attribute (e.g., vtkDataObject::POINT,\nvtkDataObject::CELL, vtkDataObject::ROW,\nvtkDataObject::FIELD_DATA) for the visible object at the given\nindex.\n"},
  {(char*)"GetAttributeArrayName", PyvtkPythonView_GetAttributeArrayName, METH_VARARGS,
   (char*)"V.GetAttributeArrayName(int, int, int) -> string\nC++: const char *GetAttributeArrayName(int visibleObjectIndex,\n    int attributeType, int arrayIndex)\n\nFrom the visible object at the given index, get the name of\nattribute array at index for the given attribute type.\n"},
  {(char*)"SetAttributeArrayStatus", PyvtkPythonView_SetAttributeArrayStatus, METH_VARARGS,
   (char*)"V.SetAttributeArrayStatus(int, int, string, int)\nC++: void SetAttributeArrayStatus(int visibleObjectIndex,\n    int attributeType, const char *name, int status)\n\nSet the array status for the visible object at the given index. A\nstatus of 1 means that the array with the given name for the\ngiven attribute will be copied to the client. A status of 0 means\nthe array will not be copied to the client. The status is 0 by\ndefault.\n"},
  {(char*)"GetAttributeArrayStatus", PyvtkPythonView_GetAttributeArrayStatus, METH_VARARGS,
   (char*)"V.GetAttributeArrayStatus(int, int, string) -> int\nC++: int GetAttributeArrayStatus(int visibleObjectIndex,\n    int attributeType, const char *name)\n\nGet the status indicating whether the array with the given name\nand attribute type in the visible object will be copied to the\nclient. Status is 0 by default.\n"},
  {(char*)"EnableAllAttributeArrays", PyvtkPythonView_EnableAllAttributeArrays, METH_VARARGS,
   (char*)"V.EnableAllAttributeArrays()\nC++: void EnableAllAttributeArrays()\n\nEnable all attribute arrays.\n"},
  {(char*)"DisableAllAttributeArrays", PyvtkPythonView_DisableAllAttributeArrays, METH_VARARGS,
   (char*)"V.DisableAllAttributeArrays()\nC++: void DisableAllAttributeArrays()\n\nDisable all attribute arrays.\n"},
  {(char*)"StillRender", PyvtkPythonView_StillRender, METH_VARARGS,
   (char*)"V.StillRender()\nC++: virtual void StillRender()\n\n"},
  {(char*)"InteractiveRender", PyvtkPythonView_InteractiveRender, METH_VARARGS,
   (char*)"V.InteractiveRender()\nC++: virtual void InteractiveRender()\n\n"},
  {(char*)"SetImageData", PyvtkPythonView_SetImageData, METH_VARARGS,
   (char*)"V.SetImageData(vtkImageData)\nC++: void SetImageData(vtkImageData *)\n\nSet the vtkImageData that will be displayed. This is an internal\nmethod meant only to be called from the python side, but must be\nexposed to be wrapped.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPythonView_StaticNew()
{
  return vtkPythonView::New();
}

PyObject *PyVTKClass_vtkPythonViewNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPythonView_StaticNew,
    PyvtkPythonView_Methods,
    "vtkPythonView", modulename,
    NULL, NULL,
    PyvtkPythonView_Doc(),
    PyVTKClass_vtkPVViewNew(modulename));
  return cls;
}

const char **PyvtkPythonView_Doc()
{
  static const char *docstring[] = {
    "vtkPythonView\n\n",
    "Superclass: vtkPVView\n\n",
    "vtkPythonView is a view for displaying data via a Python script that\nuses matplotlib to generate a plot.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPythonView(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPythonViewNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPythonView", o) != 0)
    {
    Py_DECREF(o);
    }

}

