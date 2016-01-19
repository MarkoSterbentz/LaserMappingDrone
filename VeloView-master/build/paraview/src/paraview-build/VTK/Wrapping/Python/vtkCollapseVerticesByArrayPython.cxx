// python wrapper for vtkCollapseVerticesByArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCollapseVerticesByArray.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCollapseVerticesByArray(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCollapseVerticesByArrayNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkCollapseVerticesByArray_Doc();


static PyObject *
PyvtkCollapseVerticesByArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCollapseVerticesByArray::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCollapseVerticesByArray::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCollapseVerticesByArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCollapseVerticesByArray::NewInstance());

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
PyvtkCollapseVerticesByArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCollapseVerticesByArray *tempr = vtkCollapseVerticesByArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_GetAllowSelfLoops(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowSelfLoops");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetAllowSelfLoops() :
      op->vtkCollapseVerticesByArray::GetAllowSelfLoops());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_SetAllowSelfLoops(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowSelfLoops");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllowSelfLoops(temp0);
      }
    else
      {
      op->vtkCollapseVerticesByArray::SetAllowSelfLoops(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_AllowSelfLoopsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowSelfLoopsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowSelfLoopsOn();
      }
    else
      {
      op->vtkCollapseVerticesByArray::AllowSelfLoopsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_AllowSelfLoopsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowSelfLoopsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowSelfLoopsOff();
      }
    else
      {
      op->vtkCollapseVerticesByArray::AllowSelfLoopsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_AddAggregateEdgeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAggregateEdgeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddAggregateEdgeArray(temp0);
      }
    else
      {
      op->vtkCollapseVerticesByArray::AddAggregateEdgeArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_ClearAggregateEdgeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAggregateEdgeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearAggregateEdgeArray();
      }
    else
      {
      op->vtkCollapseVerticesByArray::ClearAggregateEdgeArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_GetVertexArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetVertexArray() :
      op->vtkCollapseVerticesByArray::GetVertexArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_SetVertexArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexArray(temp0);
      }
    else
      {
      op->vtkCollapseVerticesByArray::SetVertexArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_GetCountEdgesCollapsed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCountEdgesCollapsed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetCountEdgesCollapsed() :
      op->vtkCollapseVerticesByArray::GetCountEdgesCollapsed());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_SetCountEdgesCollapsed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCountEdgesCollapsed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCountEdgesCollapsed(temp0);
      }
    else
      {
      op->vtkCollapseVerticesByArray::SetCountEdgesCollapsed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_CountEdgesCollapsedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CountEdgesCollapsedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CountEdgesCollapsedOn();
      }
    else
      {
      op->vtkCollapseVerticesByArray::CountEdgesCollapsedOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_CountEdgesCollapsedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CountEdgesCollapsedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CountEdgesCollapsedOff();
      }
    else
      {
      op->vtkCollapseVerticesByArray::CountEdgesCollapsedOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_GetEdgesCollapsedArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgesCollapsedArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetEdgesCollapsedArray() :
      op->vtkCollapseVerticesByArray::GetEdgesCollapsedArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_SetEdgesCollapsedArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgesCollapsedArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgesCollapsedArray(temp0);
      }
    else
      {
      op->vtkCollapseVerticesByArray::SetEdgesCollapsedArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_GetCountVerticesCollapsed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCountVerticesCollapsed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetCountVerticesCollapsed() :
      op->vtkCollapseVerticesByArray::GetCountVerticesCollapsed());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_SetCountVerticesCollapsed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCountVerticesCollapsed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCountVerticesCollapsed(temp0);
      }
    else
      {
      op->vtkCollapseVerticesByArray::SetCountVerticesCollapsed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_CountVerticesCollapsedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CountVerticesCollapsedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CountVerticesCollapsedOn();
      }
    else
      {
      op->vtkCollapseVerticesByArray::CountVerticesCollapsedOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_CountVerticesCollapsedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CountVerticesCollapsedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CountVerticesCollapsedOff();
      }
    else
      {
      op->vtkCollapseVerticesByArray::CountVerticesCollapsedOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_GetVerticesCollapsedArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticesCollapsedArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetVerticesCollapsedArray() :
      op->vtkCollapseVerticesByArray::GetVerticesCollapsedArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_SetVerticesCollapsedArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticesCollapsedArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVerticesCollapsedArray(temp0);
      }
    else
      {
      op->vtkCollapseVerticesByArray::SetVerticesCollapsedArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCollapseVerticesByArray_Methods[] = {
  {(char*)"GetClassName", PyvtkCollapseVerticesByArray_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCollapseVerticesByArray_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCollapseVerticesByArray_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCollapseVerticesByArray\nC++: vtkCollapseVerticesByArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCollapseVerticesByArray_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCollapseVerticesByArray\nC++: vtkCollapseVerticesByArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetAllowSelfLoops", PyvtkCollapseVerticesByArray_GetAllowSelfLoops, METH_VARARGS,
   (char*)"V.GetAllowSelfLoops() -> bool\nC++: bool GetAllowSelfLoops()\n\nBoolean to allow self loops during collapse.\n"},
  {(char*)"SetAllowSelfLoops", PyvtkCollapseVerticesByArray_SetAllowSelfLoops, METH_VARARGS,
   (char*)"V.SetAllowSelfLoops(bool)\nC++: void SetAllowSelfLoops(bool a)\n\nBoolean to allow self loops during collapse.\n"},
  {(char*)"AllowSelfLoopsOn", PyvtkCollapseVerticesByArray_AllowSelfLoopsOn, METH_VARARGS,
   (char*)"V.AllowSelfLoopsOn()\nC++: void AllowSelfLoopsOn()\n\nBoolean to allow self loops during collapse.\n"},
  {(char*)"AllowSelfLoopsOff", PyvtkCollapseVerticesByArray_AllowSelfLoopsOff, METH_VARARGS,
   (char*)"V.AllowSelfLoopsOff()\nC++: void AllowSelfLoopsOff()\n\nBoolean to allow self loops during collapse.\n"},
  {(char*)"AddAggregateEdgeArray", PyvtkCollapseVerticesByArray_AddAggregateEdgeArray, METH_VARARGS,
   (char*)"V.AddAggregateEdgeArray(string)\nC++: void AddAggregateEdgeArray(const char *arrName)\n\nAdd arrays on which aggregation of data is allowed. Default if\nreplaced by the last value.\n"},
  {(char*)"ClearAggregateEdgeArray", PyvtkCollapseVerticesByArray_ClearAggregateEdgeArray, METH_VARARGS,
   (char*)"V.ClearAggregateEdgeArray()\nC++: void ClearAggregateEdgeArray()\n\nClear the list of arrays on which aggregation was set to allow.\n"},
  {(char*)"GetVertexArray", PyvtkCollapseVerticesByArray_GetVertexArray, METH_VARARGS,
   (char*)"V.GetVertexArray() -> string\nC++: char *GetVertexArray()\n\nSet the array using which perform the collapse.\n"},
  {(char*)"SetVertexArray", PyvtkCollapseVerticesByArray_SetVertexArray, METH_VARARGS,
   (char*)"V.SetVertexArray(string)\nC++: void SetVertexArray(char *)\n\nSet the array using which perform the collapse.\n"},
  {(char*)"GetCountEdgesCollapsed", PyvtkCollapseVerticesByArray_GetCountEdgesCollapsed, METH_VARARGS,
   (char*)"V.GetCountEdgesCollapsed() -> bool\nC++: bool GetCountEdgesCollapsed()\n\nSet if count should be made of how many edges collapsed.\n"},
  {(char*)"SetCountEdgesCollapsed", PyvtkCollapseVerticesByArray_SetCountEdgesCollapsed, METH_VARARGS,
   (char*)"V.SetCountEdgesCollapsed(bool)\nC++: void SetCountEdgesCollapsed(bool a)\n\nSet if count should be made of how many edges collapsed.\n"},
  {(char*)"CountEdgesCollapsedOn", PyvtkCollapseVerticesByArray_CountEdgesCollapsedOn, METH_VARARGS,
   (char*)"V.CountEdgesCollapsedOn()\nC++: void CountEdgesCollapsedOn()\n\nSet if count should be made of how many edges collapsed.\n"},
  {(char*)"CountEdgesCollapsedOff", PyvtkCollapseVerticesByArray_CountEdgesCollapsedOff, METH_VARARGS,
   (char*)"V.CountEdgesCollapsedOff()\nC++: void CountEdgesCollapsedOff()\n\nSet if count should be made of how many edges collapsed.\n"},
  {(char*)"GetEdgesCollapsedArray", PyvtkCollapseVerticesByArray_GetEdgesCollapsedArray, METH_VARARGS,
   (char*)"V.GetEdgesCollapsedArray() -> string\nC++: char *GetEdgesCollapsedArray()\n\nName of the array where the count of how many edges collapsed\nwill be stored.By default the name of array is\n\"EdgesCollapsedCountArray\".\n"},
  {(char*)"SetEdgesCollapsedArray", PyvtkCollapseVerticesByArray_SetEdgesCollapsedArray, METH_VARARGS,
   (char*)"V.SetEdgesCollapsedArray(string)\nC++: void SetEdgesCollapsedArray(char *)\n\nName of the array where the count of how many edges collapsed\nwill be stored.By default the name of array is\n\"EdgesCollapsedCountArray\".\n"},
  {(char*)"GetCountVerticesCollapsed", PyvtkCollapseVerticesByArray_GetCountVerticesCollapsed, METH_VARARGS,
   (char*)"V.GetCountVerticesCollapsed() -> bool\nC++: bool GetCountVerticesCollapsed()\n\nGet/Set if count should be made of how many vertices collapsed.\n"},
  {(char*)"SetCountVerticesCollapsed", PyvtkCollapseVerticesByArray_SetCountVerticesCollapsed, METH_VARARGS,
   (char*)"V.SetCountVerticesCollapsed(bool)\nC++: void SetCountVerticesCollapsed(bool a)\n\nGet/Set if count should be made of how many vertices collapsed.\n"},
  {(char*)"CountVerticesCollapsedOn", PyvtkCollapseVerticesByArray_CountVerticesCollapsedOn, METH_VARARGS,
   (char*)"V.CountVerticesCollapsedOn()\nC++: void CountVerticesCollapsedOn()\n\nGet/Set if count should be made of how many vertices collapsed.\n"},
  {(char*)"CountVerticesCollapsedOff", PyvtkCollapseVerticesByArray_CountVerticesCollapsedOff, METH_VARARGS,
   (char*)"V.CountVerticesCollapsedOff()\nC++: void CountVerticesCollapsedOff()\n\nGet/Set if count should be made of how many vertices collapsed.\n"},
  {(char*)"GetVerticesCollapsedArray", PyvtkCollapseVerticesByArray_GetVerticesCollapsedArray, METH_VARARGS,
   (char*)"V.GetVerticesCollapsedArray() -> string\nC++: char *GetVerticesCollapsedArray()\n\nName of the array where the count of how many vertices collapsed\nwill be stored. By default name of the array is\n\"VerticesCollapsedCountArray\".\n"},
  {(char*)"SetVerticesCollapsedArray", PyvtkCollapseVerticesByArray_SetVerticesCollapsedArray, METH_VARARGS,
   (char*)"V.SetVerticesCollapsedArray(string)\nC++: void SetVerticesCollapsedArray(char *)\n\nName of the array where the count of how many vertices collapsed\nwill be stored. By default name of the array is\n\"VerticesCollapsedCountArray\".\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCollapseVerticesByArray_StaticNew()
{
  return vtkCollapseVerticesByArray::New();
}

PyObject *PyVTKClass_vtkCollapseVerticesByArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCollapseVerticesByArray_StaticNew,
    PyvtkCollapseVerticesByArray_Methods,
    "vtkCollapseVerticesByArray", modulename,
    NULL, NULL,
    PyvtkCollapseVerticesByArray_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCollapseVerticesByArray_Doc()
{
  static const char *docstring[] = {
    "vtkCollapseVerticesByArray - Collapse the graph given a vertex array\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "vtkCollapseVerticesByArray is a class which collapses the graph using\na vertex array as the key. So if the graph has vertices sharing\ncommon traits then this class combines all these vertices into one.\nThis class does not perform aggregation on vertex data but allow to\ndo so for edge data. Users can choose one or more edge data arrays\nfor aggregation using AddAggregateEdgeArray function.\n\nThanks:\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCollapseVerticesByArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCollapseVerticesByArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCollapseVerticesByArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

