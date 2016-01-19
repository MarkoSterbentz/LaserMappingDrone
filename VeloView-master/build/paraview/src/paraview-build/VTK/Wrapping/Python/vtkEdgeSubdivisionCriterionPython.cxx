// python wrapper for vtkEdgeSubdivisionCriterion
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkEdgeSubdivisionCriterion.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkEdgeSubdivisionCriterion(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkEdgeSubdivisionCriterionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkEdgeSubdivisionCriterion_Doc();


static PyObject *
PyvtkEdgeSubdivisionCriterion_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkEdgeSubdivisionCriterion::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEdgeSubdivisionCriterion::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkEdgeSubdivisionCriterion *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEdgeSubdivisionCriterion::NewInstance());

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
PyvtkEdgeSubdivisionCriterion_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkEdgeSubdivisionCriterion *tempr = vtkEdgeSubdivisionCriterion::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_EvaluateEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  double *temp2 = NULL;
  double small2[4];
  int size2 = 0;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new double[size2];
      }
    }

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    bool tempr = op->EvaluateEdge(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_PassField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  int temp0;
  int temp1;
  vtkStreamingTessellator *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkStreamingTessellator"))
    {
    int tempr = (ap.IsBound() ?
      op->PassField(temp0, temp1, temp2) :
      op->vtkEdgeSubdivisionCriterion::PassField(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_ResetFieldList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetFieldList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetFieldList();
      }
    else
      {
      op->vtkEdgeSubdivisionCriterion::ResetFieldList();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_DontPassField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DontPassField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  int temp0;
  vtkStreamingTessellator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkStreamingTessellator"))
    {
    bool tempr = (ap.IsBound() ?
      op->DontPassField(temp0, temp1) :
      op->vtkEdgeSubdivisionCriterion::DontPassField(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_GetFieldIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const int *tempr = (ap.IsBound() ?
      op->GetFieldIds() :
      op->vtkEdgeSubdivisionCriterion::GetFieldIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_GetFieldOffsets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldOffsets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const int *tempr = (ap.IsBound() ?
      op->GetFieldOffsets() :
      op->vtkEdgeSubdivisionCriterion::GetFieldOffsets());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_GetOutputField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputField(temp0) :
      op->vtkEdgeSubdivisionCriterion::GetOutputField(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_GetNumberOfFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFields() :
      op->vtkEdgeSubdivisionCriterion::GetNumberOfFields());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkEdgeSubdivisionCriterion_Methods[] = {
  {(char*)"GetClassName", PyvtkEdgeSubdivisionCriterion_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEdgeSubdivisionCriterion_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEdgeSubdivisionCriterion_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkEdgeSubdivisionCriterion\nC++: vtkEdgeSubdivisionCriterion *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEdgeSubdivisionCriterion_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEdgeSubdivisionCriterion\nC++: vtkEdgeSubdivisionCriterion *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"EvaluateEdge", PyvtkEdgeSubdivisionCriterion_EvaluateEdge, METH_VARARGS,
   (char*)"V.EvaluateEdge((float, ...), [float, ...], (float, ...), int)\n    -> bool\nC++: virtual bool EvaluateEdge(const double *p0, double *p1,\n    const double *p2, int field_start)\n\nYou must implement this member function in a subclass. It will be\ncalled by vtkStreamingTessellator for each edge in each primitive\nthat vtkStreamingTessellator generates.\n"},
  {(char*)"PassField", PyvtkEdgeSubdivisionCriterion_PassField, METH_VARARGS,
   (char*)"V.PassField(int, int, vtkStreamingTessellator) -> int\nC++: virtual int PassField(int sourceId, int sourceSize,\n    vtkStreamingTessellator *t)\n\nThis is a helper routine called by PassFields() which you may\nalso call directly; it adds sourceSize to the size of the output\nvertex field values. The offset of the sourceId field in the\noutput vertex array is returned.\n-1 is returned if sourceSize would force the output to have more\n   than vtkStreamingTessellator::MaxFieldSize field values per\n   vertex.\n"},
  {(char*)"ResetFieldList", PyvtkEdgeSubdivisionCriterion_ResetFieldList, METH_VARARGS,
   (char*)"V.ResetFieldList()\nC++: virtual void ResetFieldList()\n\nDon't pass any field values in the vertex pointer. This is used\nto reset the list of fields to pass after a successful run of\nvtkStreamingTessellator.\n"},
  {(char*)"DontPassField", PyvtkEdgeSubdivisionCriterion_DontPassField, METH_VARARGS,
   (char*)"V.DontPassField(int, vtkStreamingTessellator) -> bool\nC++: virtual bool DontPassField(int sourceId,\n    vtkStreamingTessellator *t)\n\nThis does the opposite of PassField(); it removes a field from\nthe output (assuming the field was set to be passed). Returns\ntrue if any action was taken, false otherwise.\n"},
  {(char*)"GetFieldIds", PyvtkEdgeSubdivisionCriterion_GetFieldIds, METH_VARARGS,
   (char*)"V.GetFieldIds() -> (int, ...)\nC++: const int *GetFieldIds()\n\nReturn the map from output field id to input field ids. That is,\nfield i of any output vertex from vtkStreamingTessellator will be\nassociated with GetFieldIds()[ i] on the input mesh.\n"},
  {(char*)"GetFieldOffsets", PyvtkEdgeSubdivisionCriterion_GetFieldOffsets, METH_VARARGS,
   (char*)"V.GetFieldOffsets() -> (int, ...)\nC++: const int *GetFieldOffsets()\n\nReturn the offset into an output vertex array of all fields. That\nis, field i of any output vertex, p, from vtkStreamingTessellator\nwill have its first entry at p[ GetFieldOffsets()[ i] ] .\n"},
  {(char*)"GetOutputField", PyvtkEdgeSubdivisionCriterion_GetOutputField, METH_VARARGS,
   (char*)"V.GetOutputField(int) -> int\nC++: int GetOutputField(int fieldId)\n\nReturn the output ID of an input field. Returns -1 if fieldId is\nnot set to be passed to the output.\n"},
  {(char*)"GetNumberOfFields", PyvtkEdgeSubdivisionCriterion_GetNumberOfFields, METH_VARARGS,
   (char*)"V.GetNumberOfFields() -> int\nC++: int GetNumberOfFields()\n\nReturn the number of fields being evaluated at each output\nvertex. This is the length of the arrays returned by\nGetFieldIds() andGetFieldOffsets().\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkEdgeSubdivisionCriterionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkEdgeSubdivisionCriterion_Methods,
    "vtkEdgeSubdivisionCriterion", modulename,
    NULL, NULL,
    PyvtkEdgeSubdivisionCriterion_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkEdgeSubdivisionCriterion_Doc()
{
  static const char *docstring[] = {
    "vtkEdgeSubdivisionCriterion - how to decide whether a linear\napproximation to nonlinear geometry or field should be subdivided\n\n",
    "Superclass: vtkObject\n\n",
    "Descendants of this abstract class are used to decide whether a\npiecewise linear approximation (triangles, lines, ... ) to some\nnonlinear geometry should be subdivided. This decision may be based\non an absolute error metric (chord error) or on some view-dependent\nmetric (chord error compared to device resolution) or on some\nabstract metric (color error). Or anything else, really. Just so long\nas y",
    "ou implement the EvaluateEdge member, all will be well.\n\nSee Also:\n\nvtkDataSetSubdivisionAlgorithm vtkStreamingTessellator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEdgeSubdivisionCriterion(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEdgeSubdivisionCriterionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEdgeSubdivisionCriterion", o) != 0)
    {
    Py_DECREF(o);
    }

}

