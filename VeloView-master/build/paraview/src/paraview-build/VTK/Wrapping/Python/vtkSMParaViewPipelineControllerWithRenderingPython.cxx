// python wrapper for vtkSMParaViewPipelineControllerWithRendering
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMParaViewPipelineControllerWithRendering.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMParaViewPipelineControllerWithRendering(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMParaViewPipelineControllerWithRenderingNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMParaViewPipelineControllerNew
extern "C" { PyObject *PyVTKClass_vtkSMParaViewPipelineControllerNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMParaViewPipelineControllerNew
#endif

static const char **PyvtkSMParaViewPipelineControllerWithRendering_Doc();


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMParaViewPipelineControllerWithRendering::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMParaViewPipelineControllerWithRendering::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMParaViewPipelineControllerWithRendering *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMParaViewPipelineControllerWithRendering::NewInstance());

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
PyvtkSMParaViewPipelineControllerWithRendering_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMParaViewPipelineControllerWithRendering *tempr = vtkSMParaViewPipelineControllerWithRendering::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_Show(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Show");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  int temp1;
  vtkSMViewProxy *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSMViewProxy"))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->Show(temp0, temp1, temp2) :
      op->vtkSMParaViewPipelineControllerWithRendering::Show(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_Hide_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  int temp1;
  vtkSMViewProxy *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSMViewProxy"))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->Hide(temp0, temp1, temp2) :
      op->vtkSMParaViewPipelineControllerWithRendering::Hide(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_Hide_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMProxy *temp0 = NULL;
  vtkSMViewProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMViewProxy"))
    {
    if (ap.IsBound())
      {
      op->Hide(temp0, temp1);
      }
    else
      {
      op->vtkSMParaViewPipelineControllerWithRendering::Hide(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_Hide(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSMParaViewPipelineControllerWithRendering_Hide_s1(self, args);
    case 2:
      return PyvtkSMParaViewPipelineControllerWithRendering_Hide_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Hide");
  return NULL;
}



static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  int temp1;
  vtkSMViewProxy *temp2 = NULL;
  bool temp3 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSMViewProxy") &&
      ap.GetValue(temp3))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->SetVisibility(temp0, temp1, temp2, temp3) :
      op->vtkSMParaViewPipelineControllerWithRendering::SetVisibility(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_GetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  int temp1;
  vtkSMViewProxy *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSMViewProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->GetVisibility(temp0, temp1, temp2) :
      op->vtkSMParaViewPipelineControllerWithRendering::GetVisibility(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_ShowInPreferredView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowInPreferredView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  int temp1;
  vtkSMViewProxy *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSMViewProxy"))
    {
    vtkSMViewProxy *tempr = (ap.IsBound() ?
      op->ShowInPreferredView(temp0, temp1, temp2) :
      op->vtkSMParaViewPipelineControllerWithRendering::ShowInPreferredView(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_GetPreferredViewType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreferredViewType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPreferredViewType(temp0, temp1) :
      op->vtkSMParaViewPipelineControllerWithRendering::GetPreferredViewType(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_RegisterRepresentationProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterRepresentationProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->RegisterRepresentationProxy(temp0) :
      op->vtkSMParaViewPipelineControllerWithRendering::RegisterRepresentationProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_SetHideScalarBarOnHide(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetHideScalarBarOnHide");

  bool temp0 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMParaViewPipelineControllerWithRendering::SetHideScalarBarOnHide(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_SetInheritRepresentationProperties(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetInheritRepresentationProperties");

  bool temp0 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMParaViewPipelineControllerWithRendering::SetInheritRepresentationProperties(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_GetInheritRepresentationProperties(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInheritRepresentationProperties");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    bool tempr = vtkSMParaViewPipelineControllerWithRendering::GetInheritRepresentationProperties();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_WriteImage_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    bool tempr = (ap.IsBound() ?
      op->WriteImage(temp0, temp1, temp2, temp3) :
      op->vtkSMParaViewPipelineControllerWithRendering::WriteImage(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_WriteImage_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMViewLayoutProxy *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkSMViewLayoutProxy") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    bool tempr = (ap.IsBound() ?
      op->WriteImage(temp0, temp1, temp2, temp3) :
      op->vtkSMParaViewPipelineControllerWithRendering::WriteImage(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMParaViewPipelineControllerWithRendering_WriteImage_Methods[] = {
  {NULL, PyvtkSMParaViewPipelineControllerWithRendering_WriteImage_s1, METH_VARARGS,
   (char*)"@Ozii *vtkSMViewProxy"},
  {NULL, PyvtkSMParaViewPipelineControllerWithRendering_WriteImage_s2, METH_VARARGS,
   (char*)"@Ozii *vtkSMViewLayoutProxy"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_WriteImage(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMParaViewPipelineControllerWithRendering_WriteImage_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "WriteImage");
  return NULL;
}



static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_PostInitializeProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostInitializeProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->PostInitializeProxy(temp0) :
      op->vtkSMParaViewPipelineControllerWithRendering::PostInitializeProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_RegisterViewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMProxy *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->RegisterViewProxy(temp0, temp1) :
      op->vtkSMParaViewPipelineControllerWithRendering::RegisterViewProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_RegisterLayoutProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterLayoutProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMProxy *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    bool tempr = (ap.IsBound() ?
      op->RegisterLayoutProxy(temp0, temp1) :
      op->vtkSMParaViewPipelineControllerWithRendering::RegisterLayoutProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMParaViewPipelineControllerWithRendering_Methods[] = {
  {(char*)"GetClassName", PyvtkSMParaViewPipelineControllerWithRendering_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMParaViewPipelineControllerWithRendering_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMParaViewPipelineControllerWithRendering_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMParaViewPipelineControllerWithRendering\nC++: vtkSMParaViewPipelineControllerWithRendering *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMParaViewPipelineControllerWithRendering_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkSMParaViewPipelineControllerWithRendering\nC++: vtkSMParaViewPipelineControllerWithRendering *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"Show", PyvtkSMParaViewPipelineControllerWithRendering_Show, METH_VARARGS,
   (char*)"V.Show(vtkSMSourceProxy, int, vtkSMViewProxy) -> vtkSMProxy\nC++: virtual vtkSMProxy *Show(vtkSMSourceProxy *producer,\n    int outputPort, vtkSMViewProxy *view)\n\nShow the output data in the view. If data cannot be shown in the\nview, returns NULL. If view is NULL, this simply calls\nShowInPreferredView().\n"},
  {(char*)"Hide", PyvtkSMParaViewPipelineControllerWithRendering_Hide, METH_VARARGS,
   (char*)"V.Hide(vtkSMSourceProxy, int, vtkSMViewProxy) -> vtkSMProxy\nC++: virtual vtkSMProxy *Hide(vtkSMSourceProxy *producer,\n    int outputPort, vtkSMViewProxy *view)\nV.Hide(vtkSMProxy, vtkSMViewProxy)\nC++: virtual void Hide(vtkSMProxy *repr, vtkSMViewProxy *view)\n\nOpposite of Show(). Locates the representation for the producer\nand then hides it, if found. Returns that representation, if\nfound.\n"},
  {(char*)"SetVisibility", PyvtkSMParaViewPipelineControllerWithRendering_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(vtkSMSourceProxy, int, vtkSMViewProxy, bool)\n    -> vtkSMProxy\nC++: vtkSMProxy *SetVisibility(vtkSMSourceProxy *producer,\n    int outputPort, vtkSMViewProxy *view, bool visible)\n\nAlternative method to call Show and Hide using a visibility flag.\n"},
  {(char*)"GetVisibility", PyvtkSMParaViewPipelineControllerWithRendering_GetVisibility, METH_VARARGS,
   (char*)"V.GetVisibility(vtkSMSourceProxy, int, vtkSMViewProxy) -> bool\nC++: virtual bool GetVisibility(vtkSMSourceProxy *producer,\n    int outputPort, vtkSMViewProxy *view)\n\nReturns whether the producer/port are shown in the given view.\n"},
  {(char*)"ShowInPreferredView", PyvtkSMParaViewPipelineControllerWithRendering_ShowInPreferredView, METH_VARARGS,
   (char*)"V.ShowInPreferredView(vtkSMSourceProxy, int, vtkSMViewProxy)\n    -> vtkSMViewProxy\nC++: virtual vtkSMViewProxy *ShowInPreferredView(\n    vtkSMSourceProxy *producer, int outputPort,\n    vtkSMViewProxy *view)\n\nSame as Show() except that if the view is NULL or not the\n\"preferred\" view for the producer's output, this method will\ncreate a new view and show the data in that new view. Returns the\nview in which the data ends up being shown, if any. It may return\nNULL if the view is not the \"preferred\" view and \"preferred\" view\ncould not be determined or created.\n"},
  {(char*)"GetPreferredViewType", PyvtkSMParaViewPipelineControllerWithRendering_GetPreferredViewType, METH_VARARGS,
   (char*)"V.GetPreferredViewType(vtkSMSourceProxy, int) -> string\nC++: virtual const char *GetPreferredViewType(\n    vtkSMSourceProxy *producer, int outputPort)\n\nReturns the name for the preferred view type, if there is any.\n"},
  {(char*)"RegisterRepresentationProxy", PyvtkSMParaViewPipelineControllerWithRendering_RegisterRepresentationProxy, METH_VARARGS,
   (char*)"V.RegisterRepresentationProxy(vtkSMProxy) -> bool\nC++: virtual bool RegisterRepresentationProxy(vtkSMProxy *proxy)\n\nOverridden to create color and opacity transfer functions if\napplicable. While it is tempting to add any default property\nsetup logic in such overrides, we must keep such overrides to a\nminimal and opting for domains that set appropriate defaults\nwhere as much as possible.\n"},
  {(char*)"SetHideScalarBarOnHide", PyvtkSMParaViewPipelineControllerWithRendering_SetHideScalarBarOnHide, METH_VARARGS | METH_STATIC,
   (char*)"V.SetHideScalarBarOnHide(bool)\nC++: static void SetHideScalarBarOnHide(bool)\n\nControl how scalar bar visibility is updated by the Hide call.\n"},
  {(char*)"SetInheritRepresentationProperties", PyvtkSMParaViewPipelineControllerWithRendering_SetInheritRepresentationProperties, METH_VARARGS | METH_STATIC,
   (char*)"V.SetInheritRepresentationProperties(bool)\nC++: static void SetInheritRepresentationProperties(bool)\n\nControl whether representations try to maintain properties from\nan input representation, if present. e.g. if you \"Transform\" the\nrepresentation for a source, then any filter that you connect to\nit should be transformed as well.\n"},
  {(char*)"GetInheritRepresentationProperties", PyvtkSMParaViewPipelineControllerWithRendering_GetInheritRepresentationProperties, METH_VARARGS | METH_STATIC,
   (char*)"V.GetInheritRepresentationProperties() -> bool\nC++: static bool GetInheritRepresentationProperties()\n\nControl whether representations try to maintain properties from\nan input representation, if present. e.g. if you \"Transform\" the\nrepresentation for a source, then any filter that you connect to\nit should be transformed as well.\n"},
  {(char*)"WriteImage", PyvtkSMParaViewPipelineControllerWithRendering_WriteImage, METH_VARARGS,
   (char*)"V.WriteImage(vtkSMViewProxy, string, int, int) -> bool\nC++: virtual bool WriteImage(vtkSMViewProxy *view,\n    const char *filename, int magnification, int quality)\nV.WriteImage(vtkSMViewLayoutProxy, string, int, int) -> bool\nC++: virtual bool WriteImage(vtkSMViewLayoutProxy *layout,\n    const char *filename, int magnification, int quality)\n\nMethods to save/capture images from views.\n"},
  {(char*)"PostInitializeProxy", PyvtkSMParaViewPipelineControllerWithRendering_PostInitializeProxy, METH_VARARGS,
   (char*)"V.PostInitializeProxy(vtkSMProxy) -> bool\nC++: virtual bool PostInitializeProxy(vtkSMProxy *proxy)\n\nOverridden to handle default ColorArrayName for representations\ncorrectly.\n"},
  {(char*)"RegisterViewProxy", PyvtkSMParaViewPipelineControllerWithRendering_RegisterViewProxy, METH_VARARGS,
   (char*)"V.RegisterViewProxy(vtkSMProxy, string) -> bool\nC++: virtual bool RegisterViewProxy(vtkSMProxy *proxy,\n    const char *proxyname)\n\nOverridden to place the view in a layout on creation.\n"},
  {(char*)"RegisterLayoutProxy", PyvtkSMParaViewPipelineControllerWithRendering_RegisterLayoutProxy, METH_VARARGS,
   (char*)"V.RegisterLayoutProxy(vtkSMProxy, string) -> bool\nC++: virtual bool RegisterLayoutProxy(vtkSMProxy *proxy,\n    const char *proxyname=NULL)\n\nRegister layout proxy.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMParaViewPipelineControllerWithRendering_StaticNew()
{
  return vtkSMParaViewPipelineControllerWithRendering::New();
}

PyObject *PyVTKClass_vtkSMParaViewPipelineControllerWithRenderingNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMParaViewPipelineControllerWithRendering_StaticNew,
    PyvtkSMParaViewPipelineControllerWithRendering_Methods,
    "vtkSMParaViewPipelineControllerWithRendering", modulename,
    NULL, NULL,
    PyvtkSMParaViewPipelineControllerWithRendering_Doc(),
    PyVTKClass_vtkSMParaViewPipelineControllerNew(modulename));
  return cls;
}

const char **PyvtkSMParaViewPipelineControllerWithRendering_Doc()
{
  static const char *docstring[] = {
    "vtkSMParaViewPipelineControllerWithRendering\n\n",
    "Superclass: vtkSMParaViewPipelineController\n\n",
    "vtkSMParaViewPipelineControllerWithRendering overrides\nvtkSMParaViewPipelineController to add support for initializing\nrendering proxies appropriately.\nvtkSMParaViewPipelineControllerWithRendering uses vtkObjectFactory\nmechanisms to override vtkSMParaViewPipelineController's creation.\nOne should not need to create or use this class directly (excepting\nwhen needing to subclass). Simply create\nvtkSM",
    "ParaViewPipelineController. If the application is linked with\nthe rendering module, then this class will be instantiated instead of\nvtkSMParaViewPipelineController automatically.\n\nvtkSMParaViewPipelineControllerWithRendering also adds new API to\ncontrol representation visibility and manage creation of views. To\nuse that API clients can instantiate\nvtkSMParaViewPipelineControllerWithRendering. Just",
    " like\nvtkSMParaViewPipelineController, this class also uses\nvtkObjectFactory mechanisms to enable overriding by clients at\ncompile time.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMParaViewPipelineControllerWithRendering(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMParaViewPipelineControllerWithRenderingNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMParaViewPipelineControllerWithRendering", o) != 0)
    {
    Py_DECREF(o);
    }

}

