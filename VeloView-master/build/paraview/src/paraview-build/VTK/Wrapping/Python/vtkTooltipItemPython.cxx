// python wrapper for vtkTooltipItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkStdString.h"
#include "vtkTooltipItem.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTooltipItem(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTooltipItemNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkContextItemNew
extern "C" { PyObject *PyVTKClass_vtkContextItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkContextItemNew
#endif

static const char **PyvtkTooltipItem_Doc();


static PyObject *
PyvtkTooltipItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTooltipItem::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTooltipItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTooltipItem::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTooltipItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTooltipItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTooltipItem::NewInstance());

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
PyvtkTooltipItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTooltipItem *tempr = vtkTooltipItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTooltipItem_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  float temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0, temp1);
      }
    else
      {
      op->vtkTooltipItem::SetPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTooltipItem_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  float temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0);
      }
    else
      {
      op->vtkTooltipItem::SetPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTooltipItem_SetPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
    {
    if (ap.IsBound())
      {
      op->SetPosition(*temp0);
      }
    else
      {
      op->vtkTooltipItem::SetPosition(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTooltipItem_SetPosition_Methods[] = {
  {NULL, PyvtkTooltipItem_SetPosition_s2, METH_VARARGS,
   (char*)"@O *f"},
  {NULL, PyvtkTooltipItem_SetPosition_s3, METH_VARARGS,
   (char*)"@O &vtkVector2f"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTooltipItem_SetPosition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTooltipItem_SetPosition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTooltipItem_SetPosition_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return NULL;
}



static PyObject *
PyvtkTooltipItem_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkTooltipItem::GetPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTooltipItem_GetPositionVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVector2f tempr = (ap.IsBound() ?
      op->GetPositionVector() :
      op->vtkTooltipItem::GetPositionVector());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
      }
    }

  return result;
}


static PyObject *
PyvtkTooltipItem_SetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetText(temp0);
      }
    else
      {
      op->vtkTooltipItem::SetText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTooltipItem_GetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetText() :
      op->vtkTooltipItem::GetText());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTooltipItem_GetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetPen() :
      op->vtkTooltipItem::GetPen());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTooltipItem_GetBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBrush *tempr = (ap.IsBound() ?
      op->GetBrush() :
      op->vtkTooltipItem::GetBrush());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTooltipItem_GetTextProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperties() :
      op->vtkTooltipItem::GetTextProperties());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTooltipItem_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkTooltipItem::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTooltipItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkTooltipItem::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTooltipItem_Methods[] = {
  {(char*)"GetClassName", PyvtkTooltipItem_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTooltipItem_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTooltipItem_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTooltipItem\nC++: vtkTooltipItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTooltipItem_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTooltipItem\nC++: vtkTooltipItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPosition", PyvtkTooltipItem_SetPosition, METH_VARARGS,
   (char*)"V.SetPosition(float, float)\nC++: void SetPosition(float, float)\nV.SetPosition((float, float))\nC++: void SetPosition(float a[2])\nV.SetPosition(vtkVector2f)\nC++: void SetPosition(const vtkVector2f &pos)\n\n"},
  {(char*)"GetPosition", PyvtkTooltipItem_GetPosition, METH_VARARGS,
   (char*)"V.GetPosition() -> (float, float)\nC++: float *GetPosition()\n\n"},
  {(char*)"GetPositionVector", PyvtkTooltipItem_GetPositionVector, METH_VARARGS,
   (char*)"V.GetPositionVector() -> vtkVector2f\nC++: vtkVector2f GetPositionVector()\n\nGet position of the axis (in pixels).\n"},
  {(char*)"SetText", PyvtkTooltipItem_SetText, METH_VARARGS,
   (char*)"V.SetText(string)\nC++: virtual void SetText(const vtkStdString &title)\n\nGet/set the text of the item.\n"},
  {(char*)"GetText", PyvtkTooltipItem_GetText, METH_VARARGS,
   (char*)"V.GetText() -> string\nC++: virtual vtkStdString GetText()\n\nGet/set the text of the item.\n"},
  {(char*)"GetPen", PyvtkTooltipItem_GetPen, METH_VARARGS,
   (char*)"V.GetPen() -> vtkPen\nC++: vtkPen *GetPen()\n\nGet a pointer to the vtkTextProperty object that controls the way\nthe text is rendered.\n"},
  {(char*)"GetBrush", PyvtkTooltipItem_GetBrush, METH_VARARGS,
   (char*)"V.GetBrush() -> vtkBrush\nC++: vtkBrush *GetBrush()\n\nGet a pointer to the vtkPen object.\n"},
  {(char*)"GetTextProperties", PyvtkTooltipItem_GetTextProperties, METH_VARARGS,
   (char*)"V.GetTextProperties() -> vtkTextProperty\nC++: vtkTextProperty *GetTextProperties()\n\nGet the vtkTextProperty that governs how the tooltip text is\ndisplayed.\n"},
  {(char*)"Update", PyvtkTooltipItem_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nUpdate the geometry of the tooltip.\n"},
  {(char*)"Paint", PyvtkTooltipItem_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the tooltip.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTooltipItem_StaticNew()
{
  return vtkTooltipItem::New();
}

PyObject *PyVTKClass_vtkTooltipItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTooltipItem_StaticNew,
    PyvtkTooltipItem_Methods,
    "vtkTooltipItem", modulename,
    NULL, NULL,
    PyvtkTooltipItem_Doc(),
    PyVTKClass_vtkContextItemNew(modulename));
  return cls;
}

const char **PyvtkTooltipItem_Doc()
{
  static const char *docstring[] = {
    "vtkTooltipItem - takes care of drawing 2D axes\n\n",
    "Superclass: vtkContextItem\n\n",
    "The vtkTooltipItem is drawn in screen coordinates. It is used to\ndisplay a tooltip on a scene, giving additional information about an\nelement on the scene, such as in vtkChartXY. It takes care of\nensuring that it draws itself within the bounds of the screen.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTooltipItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTooltipItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTooltipItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

