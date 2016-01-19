// python wrapper for vtkPath
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPath.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPath(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPathNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPointSetNew
extern "C" { PyObject *PyVTKClass_vtkPointSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointSetNew
#endif

static const char **PyvtkPath_Doc();

#ifndef DECLARED_PyvtkPath_ControlPointType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkPath_ControlPointType_Type;
#define DECLARED_PyvtkPath_ControlPointType_Type
#endif

PyTypeObject PyvtkPath_ControlPointType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ControlPointType", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  0, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  0, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  0, // tp_hash
  0, // tp_call
  0, // tp_str
  0, // tp_getattro
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
  0, // tp_iter
  0, // tp_iternext
  0, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyInt_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  0, // tp_new
  PyObject_Del, // tp_free
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

PyObject *PyvtkPath_ControlPointType_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPath_ControlPointType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkPath_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPath::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPath_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPath::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPath_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPath *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPath::NewInstance());

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
PyvtkPath_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPath *tempr = vtkPath::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPath_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkPath::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPath_InsertNextPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->InsertNextPoint(temp0, temp1);
      }
    else
      {
      op->vtkPath::InsertNextPoint(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPath_InsertNextPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  double temp0;
  double temp1;
  double temp2;
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
      op->InsertNextPoint(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPath::InsertNextPoint(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPath_InsertNextPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPath_InsertNextPoint_s1(self, args);
    case 4:
      return PyvtkPath_InsertNextPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextPoint");
  return NULL;
}



static PyObject *
PyvtkPath_SetCodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  vtkIntArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIntArray"))
    {
    if (ap.IsBound())
      {
      op->SetCodes(temp0);
      }
    else
      {
      op->vtkPath::SetCodes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPath_GetCodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIntArray *tempr = (ap.IsBound() ?
      op->GetCodes() :
      op->vtkPath::GetCodes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPath_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkPath::GetNumberOfCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPath_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0) :
      op->vtkPath::GetCell(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPath_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  vtkIdType temp0;
  vtkGenericCell *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericCell"))
    {
    if (ap.IsBound())
      {
      op->GetCell(temp0, temp1);
      }
    else
      {
      op->vtkPath::GetCell(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPath_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPath_GetCell_s1(self, args);
    case 2:
      return PyvtkPath_GetCell_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return NULL;
}



static PyObject *
PyvtkPath_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkPath::GetCellType(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPath_GetCellPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->GetCellPoints(temp0, temp1);
      }
    else
      {
      op->vtkPath::GetCellPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPath_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->GetPointCells(temp0, temp1);
      }
    else
      {
      op->vtkPath::GetPointCells(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPath_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkPath::GetMaxCellSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPath_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  vtkIdType temp0 = 1000;
  int temp1 = 1000;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->Allocate(temp0, temp1);
      }
    else
      {
      op->vtkPath::Allocate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPath_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkPath::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPath_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkPath *tempr = vtkPath::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPath_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkPath *tempr = vtkPath::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPath_GetData_Methods[] = {
  {NULL, PyvtkPath_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkPath_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPath_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPath_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkPath_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}


static PyMethodDef PyvtkPath_Methods[] = {
  {(char*)"GetClassName", PyvtkPath_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPath_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPath_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPath\nC++: vtkPath *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPath_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPath\nC++: vtkPath *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataObjectType", PyvtkPath_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: int GetDataObjectType()\n\nReturn what type of dataset this is.\n"},
  {(char*)"InsertNextPoint", PyvtkPath_InsertNextPoint, METH_VARARGS,
   (char*)"V.InsertNextPoint([float, float, float], int)\nC++: void InsertNextPoint(double pts[3], int code)\nV.InsertNextPoint(float, float, float, int)\nC++: void InsertNextPoint(double x, double y, double z, int code)\n\nInsert the next control point in the path.\n"},
  {(char*)"SetCodes", PyvtkPath_SetCodes, METH_VARARGS,
   (char*)"V.SetCodes(vtkIntArray)\nC++: void SetCodes(vtkIntArray *)\n\nSet/Get the array of control point codes:\n"},
  {(char*)"GetCodes", PyvtkPath_GetCodes, METH_VARARGS,
   (char*)"V.GetCodes() -> vtkIntArray\nC++: vtkIntArray *GetCodes()\n\nSet/Get the array of control point codes:\n"},
  {(char*)"GetNumberOfCells", PyvtkPath_GetNumberOfCells, METH_VARARGS,
   (char*)"V.GetNumberOfCells() -> int\nC++: vtkIdType GetNumberOfCells()\n\nvtkPath doesn't use cells. These methods return trivial values.\n"},
  {(char*)"GetCell", PyvtkPath_GetCell, METH_VARARGS,
   (char*)"V.GetCell(int) -> vtkCell\nC++: vtkCell *GetCell(vtkIdType)\nV.GetCell(int, vtkGenericCell)\nC++: void GetCell(vtkIdType, vtkGenericCell *)\n\nvtkPath doesn't use cells. These methods return trivial values.\n"},
  {(char*)"GetCellType", PyvtkPath_GetCellType, METH_VARARGS,
   (char*)"V.GetCellType(int) -> int\nC++: int GetCellType(vtkIdType)\n\nvtkPath doesn't use cells. These methods return trivial values.\n"},
  {(char*)"GetCellPoints", PyvtkPath_GetCellPoints, METH_VARARGS,
   (char*)"V.GetCellPoints(int, vtkIdList)\nC++: void GetCellPoints(vtkIdType, vtkIdList *ptIds)\n\nvtkPath doesn't use cells, this method just clears ptIds.\n"},
  {(char*)"GetPointCells", PyvtkPath_GetPointCells, METH_VARARGS,
   (char*)"V.GetPointCells(int, vtkIdList)\nC++: void GetPointCells(vtkIdType ptId, vtkIdList *cellIds)\n\nvtkPath doesn't use cells, this method just clears cellIds.\n"},
  {(char*)"GetMaxCellSize", PyvtkPath_GetMaxCellSize, METH_VARARGS,
   (char*)"V.GetMaxCellSize() -> int\nC++: int GetMaxCellSize()\n\nReturn the maximum cell size in this poly data.\n"},
  {(char*)"Allocate", PyvtkPath_Allocate, METH_VARARGS,
   (char*)"V.Allocate(int, int)\nC++: void Allocate(vtkIdType size=1000, int extSize=1000)\n\nMethod allocates initial storage for points. Use this method\nbefore the method vtkPath::InsertNextPoint().\n"},
  {(char*)"Reset", PyvtkPath_Reset, METH_VARARGS,
   (char*)"V.Reset()\nC++: void Reset()\n\nBegin inserting data all over again. Memory is not freed but\notherwise objects are returned to their initial state.\n"},
  {(char*)"GetData", PyvtkPath_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkPath\nC++: static vtkPath *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkPath\nC++: static vtkPath *GetData(vtkInformationVector *v, int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPath_StaticNew()
{
  return vtkPath::New();
}

PyObject *PyVTKClass_vtkPathNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPath_StaticNew,
    PyvtkPath_Methods,
    "vtkPath", modulename,
    NULL, NULL,
    PyvtkPath_Doc(),
    PyVTKClass_vtkPointSetNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkPath_ControlPointType_Type);
    PyvtkPath_ControlPointType_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkPath_ControlPointType_Type;
    if (o && PyDict_SetItemString(d, (char *)"ControlPointType", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 4; c++)
      {
      typedef vtkPath::ControlPointType cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[4] = {
          { "MOVE_TO", vtkPath::MOVE_TO },
          { "LINE_TO", vtkPath::LINE_TO },
          { "CONIC_CURVE", vtkPath::CONIC_CURVE },
          { "CUBIC_CURVE", vtkPath::CUBIC_CURVE },
        };

      o = PyvtkPath_ControlPointType_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkPath_Doc()
{
  static const char *docstring[] = {
    "vtkPath - concrete dataset representing a path defined by Bezier\n\n",
    "Superclass: vtkPointSet\n\n",
    "vtkPath provides a container for paths composed of line segment and\n2nd/3rd order Bezier curves.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPath(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPathNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPath", o) != 0)
    {
    Py_DECREF(o);
    }

}

