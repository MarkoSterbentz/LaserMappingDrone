// python wrapper for vtkQuadratureSchemeDefinition
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkQuadratureSchemeDefinition.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkQuadratureSchemeDefinition(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkQuadratureSchemeDefinitionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkQuadratureSchemeDefinition_Doc();


static PyObject *
PyvtkQuadratureSchemeDefinition_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkQuadratureSchemeDefinition::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuadratureSchemeDefinition::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkQuadratureSchemeDefinition *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuadratureSchemeDefinition::NewInstance());

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
PyvtkQuadratureSchemeDefinition_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkQuadratureSchemeDefinition *tempr = vtkQuadratureSchemeDefinition::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_DICTIONARY(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DICTIONARY");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationQuadratureSchemeDefinitionVectorKey *tempr = vtkQuadratureSchemeDefinition::DICTIONARY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_QUADRATURE_OFFSET_ARRAY_NAME(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QUADRATURE_OFFSET_ARRAY_NAME");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationStringKey *tempr = vtkQuadratureSchemeDefinition::QUADRATURE_OFFSET_ARRAY_NAME();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  vtkQuadratureSchemeDefinition *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkQuadratureSchemeDefinition"))
    {
    int tempr = (ap.IsBound() ?
      op->DeepCopy(temp0) :
      op->vtkQuadratureSchemeDefinition::DeepCopy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_SaveState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  vtkXMLDataElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
    {
    int tempr = (ap.IsBound() ?
      op->SaveState(temp0) :
      op->vtkQuadratureSchemeDefinition::SaveState(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_RestoreState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  vtkXMLDataElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
    {
    int tempr = (ap.IsBound() ?
      op->RestoreState(temp0) :
      op->vtkQuadratureSchemeDefinition::RestoreState(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkQuadratureSchemeDefinition::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_Initialize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  int temp0;
  int temp1;
  int temp2;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new double[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->Initialize(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkQuadratureSchemeDefinition::Initialize(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

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
PyvtkQuadratureSchemeDefinition_Initialize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  int temp0;
  int temp1;
  int temp2;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  double *temp4 = NULL;
  double *save4 = NULL;
  double small4[8];
  int size4 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new double[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new double[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    if (ap.IsBound())
      {
      op->Initialize(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkQuadratureSchemeDefinition::Initialize(temp0, temp1, temp2, temp3, temp4);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyObject *
PyvtkQuadratureSchemeDefinition_Initialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkQuadratureSchemeDefinition_Initialize_s1(self, args);
    case 5:
      return PyvtkQuadratureSchemeDefinition_Initialize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return NULL;
}



static PyObject *
PyvtkQuadratureSchemeDefinition_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellType() :
      op->vtkQuadratureSchemeDefinition::GetCellType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_GetQuadratureKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadratureKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetQuadratureKey() :
      op->vtkQuadratureSchemeDefinition::GetQuadratureKey());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodes() :
      op->vtkQuadratureSchemeDefinition::GetNumberOfNodes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_GetNumberOfQuadraturePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfQuadraturePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfQuadraturePoints() :
      op->vtkQuadratureSchemeDefinition::GetNumberOfQuadraturePoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_GetShapeFunctionWeights_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeFunctionWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const double *tempr = (ap.IsBound() ?
      op->GetShapeFunctionWeights() :
      op->vtkQuadratureSchemeDefinition::GetShapeFunctionWeights());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkQuadratureSchemeDefinition_GetShapeFunctionWeights_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeFunctionWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const double *tempr = (ap.IsBound() ?
      op->GetShapeFunctionWeights(temp0) :
      op->vtkQuadratureSchemeDefinition::GetShapeFunctionWeights(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkQuadratureSchemeDefinition_GetShapeFunctionWeights(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkQuadratureSchemeDefinition_GetShapeFunctionWeights_s1(self, args);
    case 1:
      return PyvtkQuadratureSchemeDefinition_GetShapeFunctionWeights_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetShapeFunctionWeights");
  return NULL;
}



static PyObject *
PyvtkQuadratureSchemeDefinition_GetQuadratureWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadratureWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const double *tempr = (ap.IsBound() ?
      op->GetQuadratureWeights() :
      op->vtkQuadratureSchemeDefinition::GetQuadratureWeights());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkQuadratureSchemeDefinition_Methods[] = {
  {(char*)"GetClassName", PyvtkQuadratureSchemeDefinition_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkQuadratureSchemeDefinition_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkQuadratureSchemeDefinition_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkQuadratureSchemeDefinition\nC++: vtkQuadratureSchemeDefinition *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkQuadratureSchemeDefinition_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkQuadratureSchemeDefinition\nC++: vtkQuadratureSchemeDefinition *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DICTIONARY", PyvtkQuadratureSchemeDefinition_DICTIONARY, METH_VARARGS | METH_STATIC,
   (char*)"V.DICTIONARY()\n    -> vtkInformationQuadratureSchemeDefinitionVectorKey\nC++: static vtkInformationQuadratureSchemeDefinitionVectorKey *DICTIONARY(\n    )\n\n"},
  {(char*)"QUADRATURE_OFFSET_ARRAY_NAME", PyvtkQuadratureSchemeDefinition_QUADRATURE_OFFSET_ARRAY_NAME, METH_VARARGS | METH_STATIC,
   (char*)"V.QUADRATURE_OFFSET_ARRAY_NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *QUADRATURE_OFFSET_ARRAY_NAME(\n    )\n\n"},
  {(char*)"DeepCopy", PyvtkQuadratureSchemeDefinition_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkQuadratureSchemeDefinition) -> int\nC++: int DeepCopy(const vtkQuadratureSchemeDefinition *other)\n\nDeep copy.\n"},
  {(char*)"SaveState", PyvtkQuadratureSchemeDefinition_SaveState, METH_VARARGS,
   (char*)"V.SaveState(vtkXMLDataElement) -> int\nC++: int SaveState(vtkXMLDataElement *e)\n\nPut the object into an XML representation. The element passed in\nis assumed to be empty.\n"},
  {(char*)"RestoreState", PyvtkQuadratureSchemeDefinition_RestoreState, METH_VARARGS,
   (char*)"V.RestoreState(vtkXMLDataElement) -> int\nC++: int RestoreState(vtkXMLDataElement *e)\n\nRestore the object from an XML representation.\n"},
  {(char*)"Clear", PyvtkQuadratureSchemeDefinition_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nRelease all allocated resources and set the object to an\nunitialized state.\n"},
  {(char*)"Initialize", PyvtkQuadratureSchemeDefinition_Initialize, METH_VARARGS,
   (char*)"V.Initialize(int, int, int, [float, ...])\nC++: void Initialize(int cellType, int numberOfNodes,\n    int numberOfQuadraturePoints, double *shapeFunctionWeights)\nV.Initialize(int, int, int, [float, ...], [float, ...])\nC++: void Initialize(int cellType, int numberOfNodes,\n    int numberOfQuadraturePoints, double *shapeFunctionWeights,\n    double *quadratureWeights)\n\nInitialize the object allocating resources as needed.\n"},
  {(char*)"GetCellType", PyvtkQuadratureSchemeDefinition_GetCellType, METH_VARARGS,
   (char*)"V.GetCellType() -> int\nC++: int GetCellType()\n\nAccess the VTK cell type id.\n"},
  {(char*)"GetQuadratureKey", PyvtkQuadratureSchemeDefinition_GetQuadratureKey, METH_VARARGS,
   (char*)"V.GetQuadratureKey() -> int\nC++: int GetQuadratureKey()\n\nAccess to an alternative key.\n"},
  {(char*)"GetNumberOfNodes", PyvtkQuadratureSchemeDefinition_GetNumberOfNodes, METH_VARARGS,
   (char*)"V.GetNumberOfNodes() -> int\nC++: int GetNumberOfNodes()\n\nGet the number of nodes associated with the interpolation.\n"},
  {(char*)"GetNumberOfQuadraturePoints", PyvtkQuadratureSchemeDefinition_GetNumberOfQuadraturePoints, METH_VARARGS,
   (char*)"V.GetNumberOfQuadraturePoints() -> int\nC++: int GetNumberOfQuadraturePoints()\n\nGet the number of quadrature points associated with the scheme.\n"},
  {(char*)"GetShapeFunctionWeights", PyvtkQuadratureSchemeDefinition_GetShapeFunctionWeights, METH_VARARGS,
   (char*)"V.GetShapeFunctionWeights() -> (float, ...)\nC++: const double *GetShapeFunctionWeights()\nV.GetShapeFunctionWeights(int) -> (float, ...)\nC++: const double *GetShapeFunctionWeights(int quadraturePointId)\n\nGet the array of shape function weights. Shape function weights\nare the shape functions evaluated at the quadrature points. There\nare \"NumberOfNodes\" weights for each quadrature point.\n"},
  {(char*)"GetQuadratureWeights", PyvtkQuadratureSchemeDefinition_GetQuadratureWeights, METH_VARARGS,
   (char*)"V.GetQuadratureWeights() -> (float, ...)\nC++: const double *GetQuadratureWeights()\n\nAccess to the quadrature weights.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkQuadratureSchemeDefinition_StaticNew()
{
  return vtkQuadratureSchemeDefinition::New();
}

PyObject *PyVTKClass_vtkQuadratureSchemeDefinitionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkQuadratureSchemeDefinition_StaticNew,
    PyvtkQuadratureSchemeDefinition_Methods,
    "vtkQuadratureSchemeDefinition", modulename,
    NULL, NULL,
    PyvtkQuadratureSchemeDefinition_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkQuadratureSchemeDefinition_Doc()
{
  static const char *docstring[] = {
    "vtkQuadratureSchemeDefinition\n\n",
    "Superclass: vtkObject\n\n",
    "An Elemental data type that holds a definition of a numerical\nquadrature scheme. The definition contains the requisite information\nto interpolate to the so called quadrature points of the specific\nscheme. namely:\n\n1) A matrix of shape function weights(shape functions evaluated at\nparametric coordinates of the quadrature points).\n\n2) The number of quadrature points and cell nodes. These parameters\n",
    "size the matrix, and allow for convinent evaluation by users of the\ndefinition. \n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkQuadratureSchemeDefinition(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkQuadratureSchemeDefinitionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkQuadratureSchemeDefinition", o) != 0)
    {
    Py_DECREF(o);
    }

}

