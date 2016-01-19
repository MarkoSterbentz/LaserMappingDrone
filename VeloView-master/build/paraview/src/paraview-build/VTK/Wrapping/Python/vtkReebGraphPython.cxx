// python wrapper for vtkReebGraph
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkReebGraph.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkReebGraph(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkReebGraphNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMutableDirectedGraphNew
extern "C" { PyObject *PyVTKClass_vtkMutableDirectedGraphNew(const char *); }
#define DECLARED_PyVTKClass_vtkMutableDirectedGraphNew
#endif

static const char **PyvtkReebGraph_Doc();


static PyObject *
PyvtkReebGraph_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkReebGraph::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkReebGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkReebGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkReebGraph::NewInstance());

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
PyvtkReebGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkReebGraph *tempr = vtkReebGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraph_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkReebGraph::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraph_Build_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  vtkPolyData *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
    {
    int tempr = (ap.IsBound() ?
      op->Build(temp0, temp1) :
      op->vtkReebGraph::Build(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkReebGraph_Build_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  vtkUnstructuredGrid *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
    {
    int tempr = (ap.IsBound() ?
      op->Build(temp0, temp1) :
      op->vtkReebGraph::Build(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkReebGraph_Build_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  vtkPolyData *temp0 = NULL;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->Build(temp0, temp1) :
      op->vtkReebGraph::Build(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkReebGraph_Build_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  vtkUnstructuredGrid *temp0 = NULL;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->Build(temp0, temp1) :
      op->vtkReebGraph::Build(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkReebGraph_Build_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  vtkPolyData *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->Build(temp0, temp1) :
      op->vtkReebGraph::Build(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkReebGraph_Build_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  vtkUnstructuredGrid *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->Build(temp0, temp1) :
      op->vtkReebGraph::Build(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkReebGraph_Build_Methods[] = {
  {NULL, PyvtkReebGraph_Build_s1, METH_VARARGS,
   (char*)"@OO *vtkPolyData *vtkDataArray"},
  {NULL, PyvtkReebGraph_Build_s2, METH_VARARGS,
   (char*)"@OO *vtkUnstructuredGrid *vtkDataArray"},
  {NULL, PyvtkReebGraph_Build_s3, METH_VARARGS,
   (char*)"@OL *vtkPolyData"},
  {NULL, PyvtkReebGraph_Build_s4, METH_VARARGS,
   (char*)"@OL *vtkUnstructuredGrid"},
  {NULL, PyvtkReebGraph_Build_s5, METH_VARARGS,
   (char*)"@Oz *vtkPolyData"},
  {NULL, PyvtkReebGraph_Build_s6, METH_VARARGS,
   (char*)"@Oz *vtkUnstructuredGrid"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkReebGraph_Build(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkReebGraph_Build_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Build");
  return NULL;
}



static PyObject *
PyvtkReebGraph_StreamTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StreamTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  vtkIdType temp0;
  double temp1;
  vtkIdType temp2;
  double temp3;
  vtkIdType temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    int tempr = (ap.IsBound() ?
      op->StreamTriangle(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkReebGraph::StreamTriangle(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraph_StreamTetrahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StreamTetrahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  vtkIdType temp0;
  double temp1;
  vtkIdType temp2;
  double temp3;
  vtkIdType temp4;
  double temp5;
  vtkIdType temp6;
  double temp7;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
    {
    int tempr = (ap.IsBound() ?
      op->StreamTetrahedron(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkReebGraph::StreamTetrahedron(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraph_CloseStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CloseStream();
      }
    else
      {
      op->vtkReebGraph::CloseStream();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraph_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkReebGraph::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraph_Simplify(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Simplify");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  double temp0;
  vtkReebGraphSimplificationMetric *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkReebGraphSimplificationMetric"))
    {
    int tempr = (ap.IsBound() ?
      op->Simplify(temp0, temp1) :
      op->vtkReebGraph::Simplify(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraph_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraph *op = static_cast<vtkReebGraph *>(vp);

  vtkMutableDirectedGraph *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMutableDirectedGraph"))
    {
    if (ap.IsBound())
      {
      op->Set(temp0);
      }
    else
      {
      op->vtkReebGraph::Set(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkReebGraph_Methods[] = {
  {(char*)"GetClassName", PyvtkReebGraph_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkReebGraph_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkReebGraph_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkReebGraph\nC++: vtkReebGraph *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkReebGraph_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkReebGraph\nC++: vtkReebGraph *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataObjectType", PyvtkReebGraph_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn class name of data type. This is one of\nVTK_STRUCTURED_GRID, VTK_STRUCTURED_POINTS,\nVTK_UNSTRUCTURED_GRID, VTK_POLY_DATA, or VTK_RECTILINEAR_GRID\n(see vtkSetGet.h for definitions). THIS METHOD IS THREAD SAFE\n"},
  {(char*)"Build", PyvtkReebGraph_Build, METH_VARARGS,
   (char*)"V.Build(vtkPolyData, vtkDataArray) -> int\nC++: int Build(vtkPolyData *mesh, vtkDataArray *scalarField)\nV.Build(vtkUnstructuredGrid, vtkDataArray) -> int\nC++: int Build(vtkUnstructuredGrid *mesh,\n    vtkDataArray *scalarField)\nV.Build(vtkPolyData, int) -> int\nC++: int Build(vtkPolyData *mesh, vtkIdType scalarFieldId)\nV.Build(vtkUnstructuredGrid, int) -> int\nC++: int Build(vtkUnstructuredGrid *mesh, vtkIdType scalarFieldId)\nV.Build(vtkPolyData, string) -> int\nC++: int Build(vtkPolyData *mesh, const char *scalarFieldName)\nV.Build(vtkUnstructuredGrid, string) -> int\nC++: int Build(vtkUnstructuredGrid *mesh,\n    const char *scalarFieldName)\n\nBuild the Reeb graph of the field 'scalarField' defined on the\nsurface mesh 'mesh'.\n\nReturned values:\n\nvtkReebGraph::ERR_INCORRECT_FIELD: 'scalarField' does not have as\nmany tuples as 'mesh' has vertices.\n\nvtkReebGraph::ERR_NOT_A_SIMPLICIAL_MESH: the input mesh 'mesh' is\nnot a simplicial mesh (for example, the surface mesh contains\nquads instead of triangles).\n"},
  {(char*)"StreamTriangle", PyvtkReebGraph_StreamTriangle, METH_VARARGS,
   (char*)"V.StreamTriangle(int, float, int, float, int, float) -> int\nC++: int StreamTriangle(vtkIdType vertex0Id, double scalar0,\n    vtkIdType vertex1Id, double scalar1, vtkIdType vertex2Id,\n    double scalar2)\n\nStreaming Reeb graph computation. Add to the streaming\ncomputation the triangle of the vtkPolyData surface mesh\ndescribed by vertex0Id, scalar0 vertex1Id, scalar1 vertex2Id,\nscalar2\n\n\011where vertexId is the Id of the vertex in the vtkPolyData\nstructure and scalaris the corresponding scalar field value.\n\nIMPORTANT: The stream _must_ be finalized with the \"CloseStream\"\ncall.\n"},
  {(char*)"StreamTetrahedron", PyvtkReebGraph_StreamTetrahedron, METH_VARARGS,
   (char*)"V.StreamTetrahedron(int, float, int, float, int, float, int,\n    float) -> int\nC++: int StreamTetrahedron(vtkIdType vertex0Id, double scalar0,\n    vtkIdType vertex1Id, double scalar1, vtkIdType vertex2Id,\n    double scalar2, vtkIdType vertex3Id, double scalar3)\n\nStreaming Reeb graph computation. Add to the streaming\ncomputation the tetrahedra of the vtkUnstructuredGrid volume mesh\ndescribed by vertex0Id, scalar0 vertex1Id, scalar1 vertex2Id,\nscalar2 vertex3Id, scalar3\n\n\011where vertexId is the Id of the vertex in the\nvtkUnstructuredGrid structure and scalaris the corresponding\nscalar field value.\n\nIMPORTANT: The stream _must_ be finalized with the \"CloseStream\"\ncall.\n"},
  {(char*)"CloseStream", PyvtkReebGraph_CloseStream, METH_VARARGS,
   (char*)"V.CloseStream()\nC++: void CloseStream()\n\nFinalize internal data structures, in the case of streaming\ncomputations (with StreamTriangle or StreamTetrahedron). After\nthis call, no more triangle or tetrahedron can be inserted via\nStreamTriangle or StreamTetrahedron. IMPORTANT: This method\n_must_ be called when the input stream is finished. If you need\nto get a snapshot of the Reeb graph during the streaming process\n(to parse or simplify it), do a DeepCopy followed by a\nCloseStream on the copy.\n"},
  {(char*)"DeepCopy", PyvtkReebGraph_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *src)\n\n"},
  {(char*)"Simplify", PyvtkReebGraph_Simplify, METH_VARARGS,
   (char*)"V.Simplify(float, vtkReebGraphSimplificationMetric) -> int\nC++: int Simplify(double simplificationThreshold,\n    vtkReebGraphSimplificationMetric *simplificationMetric)\n\nSimplify the Reeb graph given a threshold\n'simplificationThreshold' (between 0 and 1).\n\nThis method is the core feature for Reeb graph multi-resolution\nhierarchy construction.\n\nReturn the number of arcs that have been removed through the\nsimplification process.\n\n'simplificationThreshold' represents a \"scale\", under which each\nReeb graph feature is considered as noise.\n'simplificationThreshold' is expressed as a fraction of the\nscalar field overall span. It can vary from 0 (no simplification)\nto 1 (maximal simplification).\n\n'simplificationMetric' is an object in charge of evaluating the\nimportance of a Reeb graph arc at each step of the simplification\nprocess. if 'simplificationMetric' is NULL, the default strategy\n(persitence of the scalar field) is used. Customized\nsimplification metric evaluation algorithm can be designed (see\nvtkReebGraphSimplificationMetric), enabling the user to control\nthe definition of what should be considered as noise or signal.\n\nReferences:\n\n\"Topological persistence and simplification\", H. Edelsbrunner, D.\nLetscher, and A. Zomorodian, Discrete Computational Geometry,\n28:511-533, 2002.\n\n\"Extreme elevation on a 2-manifold\", P.K. Agarwal, H.\nEdelsbrunner, J. Harer, and Y. Wang, ACM Symposium on\nComputational Geometry, pp. 357-365, 2004.\n\n\"Simplifying flexible isosurfaces using local geometric\nmeasures\", H. Carr, J. Snoeyink, M van de Panne, IEEE\nVisualization, 497-504, 2004\n\n\"Loop surgery for volumetric meshes: Reeb graphs reduced to contour\ntrees\", J. Tierny, A. Gyulassy, E. Simon, V. Pascucci, IEEE\nTrans. on Vis. and Comp. Graph. (Proc of IEEE VIS),\n15:1177-1184,2009.\n"},
  {(char*)"Set", PyvtkReebGraph_Set, METH_VARARGS,
   (char*)"V.Set(vtkMutableDirectedGraph)\nC++: void Set(vtkMutableDirectedGraph *g)\n\nUse a pre-defined Reeb graph (post-processing). Use with caution!\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkReebGraph_StaticNew()
{
  return vtkReebGraph::New();
}

PyObject *PyVTKClass_vtkReebGraphNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkReebGraph_StaticNew,
    PyvtkReebGraph_Methods,
    "vtkReebGraph", modulename,
    NULL, NULL,
    PyvtkReebGraph_Doc(),
    PyVTKClass_vtkMutableDirectedGraphNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "ERR_INCORRECT_FIELD", vtkReebGraph::ERR_INCORRECT_FIELD },
          { "ERR_NO_SUCH_FIELD", vtkReebGraph::ERR_NO_SUCH_FIELD },
          { "ERR_NOT_A_SIMPLICIAL_MESH", vtkReebGraph::ERR_NOT_A_SIMPLICIAL_MESH },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkReebGraph_Doc()
{
  static const char *docstring[] = {
    "vtkReebGraph - Reeb graph computation for PL scalar fields.\n\n",
    "Superclass: vtkMutableDirectedGraph\n\n",
    "vtkReebGraph is a class that computes a Reeb graph given a PL scalar\nfield (vtkDataArray) defined on a simplicial mesh. A Reeb graph is a\nconcise representation of the connectivity evolution of the level\nsets of a scalar function.\n\nIt is particularly useful in visualization (optimal seed set\ncomputation, fast flexible isosurface extraction, automated transfer\nfunction design, feature-driven visual",
    "ization, etc.) and computer\ngraphics (shape deformation, shape matching, shape compression,\netc.).\n\nReference: \"Sur les points singuliers d'une forme de Pfaff\ncompletement integrable ou d'une fonction numerique\", G. Reeb,\nComptes-rendus de l'Academie des Sciences, 222:847-849, 1946.\n\nvtkReebGraph implements one of the latest and most robust Reeb graph\ncomputation algorithms.\n\nReference: \"Robust on",
    "-line computation of Reeb graphs: simplicity and\nspeed\", V. Pascucci, G. Scorzelli, P.-T. Bremer, and A. Mascarenhas,\nACM Transactions on Graphics, Proc. of SIGGRAPH 2007.\n\nvtkReebGraph provides methods for computing multi-resolution\ntopological hierarchies through topological simplification.\nTopoligical simplification can be either driven by persistence\nhomology concepts (default behavior) or by ",
    "application specific\nmetrics (see vtkReebGraphSimplificationMetric). In the latter case,\ndesigning customized simplification metric evaluation algorithms\nenables the user to control the definition of what should be\nconsidered as noise or signal in the topological filtering process.\n\nReferences: \"Topological persistence and simplification\", H.\nEdelsbrunner, D. Letscher, and A. Zomorodian, Discrete ",
    "Computational\nGeometry, 28:511-533, 2002.\n\n\"Extreme elevation on a 2-manifold\", P.K. Agarwal, H. Edelsbrunner,\nJ. Harer, and Y. Wang, ACM Symposium on Computational Geometry, pp.\n357-365, 2004.\n\n\"Simplifying flexible isosurfaces using local geometric measures\", H.\nCarr, J. Snoeyink, M van de Panne, IEEE Visualization, 497-504, 2004\n\n\"Loop surgery for volumetric meshes: Reeb graphs reduced to conto",
    "ur\ntrees\", J. Tierny, A. Gyulassy, E. Simon, V. Pascucci, IEEE Trans. on\nVis. and Comp. Graph. (Proc of IEEE VIS), 15:1177-1184, 2009.\n\nReeb graphs can be computed from 2D data (vtkPolyData, with triangles\nonly) or 3D data (vtkUnstructuredGrid, with tetrahedra only),\nsequentially (see the \"Build\" calls) or in streaming (see the\n\"StreamTriangle\" and \"StreamTetrahedron\" calls).\n\nvtkReebGraph inherit",
    "s from vtkMutableDirectedGraph.\n\nEach vertex of a vtkReebGraph object represents a critical point of\nthe scalar field where the connectivity of the related level set\nchanges (creation, deletion, split or merge of connected components).\nA vtkIdTypeArray (called \"Vertex Ids\") is associated with the\nVertexData of a vtkReebGraph object, in order to retrieve if\nnecessary the exact Ids of the correspond",
    "ing vertices in the input\nmesh.\n\nThe edges of a vtkReebGraph object represent the regions of the input\nmesh separated by the critical contours of the field, and where the\nconnectivity of the input field does not change. A vtkVariantArray is\nassociated with the EdgeDta of a vtkReebGraph object and each entry\nof this array is a vtkAbstractArray containing the Ids of the\nvertices of those regions, so",
    "rted by function value (useful for\nflexible isosurface extraction or level set signature computation,\nfor instance).\n\nSee Graphics/Testing/Cxx/TestReebGraph.cxx for examples of traversals\nand typical usages (customized simplification, skeletonization,\ncontour spectra,\n etc.) of a vtkReebGraph object.\n\nSee Also:\n\n\n     vtkReebGraphSimplificationMetric\n     vtkPolyDataToReebGraphFilter\n     vtkUnstr",
    "ucturedGridToReebGraphFilter\n     vtkReebGraphSimplificationFilter\n     vtkReebGraphSurfaceSkeletonFilter\n     vtkReebGraphVolumeSkeletonFilter\n     vtkAreaContourSpectrumFilter\n     vtkVolumeContourSpectrumFilter\n\nTests:\n\n\n     Graphics/Testing/Cxx/TestReebGraph.cxx\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkReebGraph(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkReebGraphNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkReebGraph", o) != 0)
    {
    Py_DECREF(o);
    }

}

