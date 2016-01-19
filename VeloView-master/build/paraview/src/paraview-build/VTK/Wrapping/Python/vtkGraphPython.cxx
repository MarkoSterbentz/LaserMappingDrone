// python wrapper for vtkGraph
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVariant.h"
#include "vtkGraph.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGraph(PyObject *, const char *); }

static const char **PyvtkEdgeBase_Doc();

static PyMethodDef PyvtkEdgeBase_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkEdgeBase_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkEdgeBase_Type;
#define DECLARED_PyvtkEdgeBase_Type
#endif


static PyObject *
PyvtkEdgeBase_vtkEdgeBase_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkEdgeBase");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkEdgeBase *op = new vtkEdgeBase();

    result = PyVTKSpecialObject_New("vtkEdgeBase", op);
    }

  return result;
}

static PyObject *
PyvtkEdgeBase_vtkEdgeBase_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkEdgeBase");

  vtkIdType temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkEdgeBase *op = new vtkEdgeBase(temp0);

    result = PyVTKSpecialObject_New("vtkEdgeBase", op);
    }

  return result;
}

static PyMethodDef PyvtkEdgeBase_vtkEdgeBase_Methods[] = {
  {NULL, PyvtkEdgeBase_vtkEdgeBase_s2, METH_VARARGS,
   (char*)"L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkEdgeBase_vtkEdgeBase(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkEdgeBase_vtkEdgeBase_s1(self, args);
    case 1:
      return PyvtkEdgeBase_vtkEdgeBase_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkEdgeBase");
  return NULL;
}


static PyMethodDef PyvtkEdgeBase_NewMethod = \
{ (char*)"vtkEdgeBase", PyvtkEdgeBase_vtkEdgeBase, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkEdgeBase_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkEdgeBase_vtkEdgeBase(NULL, args);
}
#endif

static void PyvtkEdgeBase_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkEdgeBase *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static PyObject *PyvtkEdgeBase_String(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  vtksys_ios::ostringstream os;
  if (obj->vtk_ptr)
    {
    os << *static_cast<const vtkEdgeBase *>(obj->vtk_ptr);
    }
  const vtksys_stl::string &s = os.str();
  return PyString_FromStringAndSize(s.data(), s.size());
}

#if PY_VERSION_HEX >= 0x02010000
static PyObject *PyvtkEdgeBase_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = NULL;
  PyObject *n2 = NULL;
  const vtkEdgeBase *so1 = NULL;
  const vtkEdgeBase *so2 = NULL;
  int result = -1;

  if (o1->ob_type == &PyvtkEdgeBase_Type)
    {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkEdgeBase *>(s1->vtk_ptr);
    }
  else
    {
    so1 = static_cast<const vtkEdgeBase *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkEdgeBase", &n1));
    if (so1 == NULL)
      {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
      }
    }

  if (o2->ob_type == &PyvtkEdgeBase_Type)
    {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkEdgeBase *>(s2->vtk_ptr);
    }
  else
    {
    so2 = static_cast<const vtkEdgeBase *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkEdgeBase", &n2));
    if (so2 == NULL)
      {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
      }
    }

  switch (opid)
    {
    case Py_LT:
      break;
    case Py_LE:
      break;
    case Py_EQ:
      result = ((*so1) == (*so2));
      break;
    case Py_NE:
      result = ((*so1) != (*so2));
      break;
    case Py_GT:
      break;
    case Py_GE:
      break;
    }

  if (n1)
    {
    Py_DECREF(n1);
    }
  else if (n2)
    {
    Py_DECREF(n2);
    }

  if (result == -1)
    {
    PyErr_SetString(PyExc_TypeError, (char *)"operation not available");
    return NULL;
    }

#if PY_VERSION_HEX >= 0x02030000
  // avoids aliasing issues with Py_INCREF(Py_False)
  return PyBool_FromLong((long)result);
#else
  if (result == 0)
    {
    Py_INCREF(Py_False);
    return Py_False;
    }
  Py_INCREF(Py_True);
  return Py_True;
#endif
}
#endif

static long PyvtkEdgeBase_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkEdgeBase_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkEdgeBase", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkEdgeBase_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkEdgeBase_Hash, // tp_hash
  0, // tp_call
  PyvtkEdgeBase_String, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
#if PY_VERSION_HEX >= 0x02010000
  PyvtkEdgeBase_RichCompare, // tp_richcompare
#else
  0, // tp_richcompare
#endif
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkEdgeBase_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkEdgeBase_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkEdgeBase_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkEdgeBase(*static_cast<const vtkEdgeBase*>(obj));
    }
  return 0;
}

static PyObject *PyvtkEdgeBase_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkEdgeBase_Type,
    PyvtkEdgeBase_Methods,
    PyvtkEdgeBase_vtkEdgeBase_Methods,
    &PyvtkEdgeBase_NewMethod,
    PyvtkEdgeBase_Doc(), &PyvtkEdgeBase_CCopy);

  return cls;
}

const char **PyvtkEdgeBase_Doc()
{
  static const char *docstring[] = {
    "vtkGraph - Base class for graph data types.\n\n",
    "vtkGraph is the abstract base class that provides all read-only API\nfor graph data types. A graph consists of a collection of vertices\nand a collection of edges connecting pairs of vertices. The\nvtkDirectedGraph subclass represents a graph whose edges have\ninherent order from source vertex to target vertex, while\nvtkUndirectedGraph is a graph whose edges have no inherent ordering.\n\nGraph vertices ",
    "may be traversed in two ways. In the current\nimplementation, all vertices are assigned consecutive ids starting at\nzero, so they may be traversed in a simple for loop from 0 to\ngraph->GetNumberOfVertices() - 1. You may alternately create a\nvtkVertexListIterator and call graph->GetVertices(it). it->Next()\nwill return the id of the next vertex, while it->HasNext() indicates\nwhether there are more ve",
    "rtices in the graph. This is the preferred\nmethod, since in the future graphs may support filtering or\nsubsetting where the vertex ids may not be contiguous.\n\nGraph edges must be traversed through iterators. To traverse all\nedges in a graph, create an instance of vtkEdgeListIterator and call\ngraph->GetEdges(it). it->Next() returns lightweight vtkEdgeType\nstructures, which contain the public fields",
    " Id, Source and Target. Id\nis the identifier for the edge, which may be used to look up values\nin assiciated edge data arrays. Source and Target store the ids of\nthe source and target vertices of the edge. Note that the edge list\niterator DOES NOT necessarily iterate over edges in order of\nascending id. To traverse edges from wrapper code (Python, Tcl,\nJava), use it->NextGraphEdge() instead of it-",
    ">Next().  This will\nreturn a heavyweight, wrappable vtkGraphEdge object, which has the\nsame fields as vtkEdgeType accessible through getter methods.\n\nTo traverse all edges outgoing from a vertex, create a\nvtkOutEdgeIterator and call graph->GetOutEdges(v, it). it->Next()\nreturns a lightweight vtkOutEdgeType containing the fields Id and\nTarget. The source of the edge is always the vertex that was pa",
    "ssed\nas an argument to GetOutEdges(). Incoming edges may be similarly\ntraversed with vtkInEdgeIterator, which returns vtkInEdgeType\nstructures with Id and Source fields. Both vtkOutEdgeIterator and\nvtkInEdgeIterator also provide the wrapper functions NextGraphEdge()\nwhich return vtkGraphEdge objects.\n\nAn additional iterator, vtkAdjacentVertexIterator can traverse\noutgoing vertices directly, instea",
    "d needing to parse through edges.\nInitialize the iterator by calling graph->GetAdjacentVertices(v, it).\n\nvtkGraph has two instances of vtkDataSetAttributes for associated\nvertex and edge data. It also has a vtkPoints instance which may\nstore x,y,z locations for each vertex. This is populated by filters\nsuch as vtkGraphLayout and vtkAssignCoordinates.\n\nAll graph types share the same implementation,",
    " so the structure of\none may be shared among multiple graphs, even graphs of different\ntypes. Structures from vtkUndirectedGraph and\nvtkMutableUndirectedGraph may be shared directly.  Structures from\nvtkDirectedGraph, vtkMutableDirectedGraph, and vtkTree may be shared\ndirectly with the exception that setting a structure to a tree\nrequires that a \"is a tree\" test passes.\n\nFor graph types that are k",
    "nown to be compatible, calling\nShallowCopy() or DeepCopy() will work as expected.  When the outcome\nof a conversion is unknown (i.e. setting a graph to a tree),\nCheckedShallowCopy() and CheckedDeepCopy() exist which are identical\nto ShallowCopy() and DeepCopy(), except that instead of emitting an\nerror for an incompatible structure, the function returns false. \nThis allows you to programmatically ",
    "check structure compatibility\nwithout causing error messages.\n\nTo construct a graph, use vtkMutableDirectedGraph or\nvtkMutableUndirectedGraph. You may then use CheckedShallowCopy to set\nthe contents of a mutable graph type into one of the non-mutable\ntypes vtkDirectedGraph, vtkUndirectedGraph. To construct a tree, use\nvtkMutableDirectedGraph, with directed edges which point from the\nparent to the ",
    "child, then use CheckedShallowCopy to set the structure\nto a vtkTree.\n\nCaveats:\n\nAll copy operations implement copy-on-write. The structures are\ninitially shared, but if one of the graphs is modified, the structure\nis copied so that to the user they function as if they were deep\ncopied. This means that care must be taken if different threads are\naccessing different graph instances that share the s",
    "ame structure.\nRace conditions may develop if one thread is modifying the graph at\nthe same time that another graph is copying the structure.\n\nVertex pedigree IDs:\n\nThe vertices in a vtkGraph can be associated with pedigree IDs\nthrough GetVertexData()->SetPedigreeIds. In this case, there is a 1-1\nmapping between pedigree Ids and vertices. One can query the vertex\nID based on the pedigree ID using ",
    "FindVertex, add new vertices by\npedigree ID with AddVertex, and add edges based on the pedigree IDs\nof the source and target vertices. For example, AddEdge(\"Here\",\n\"There\") will find (or add) vertices with pedigree ID \"Here\" and\n\"There\" and then introduce an edge from \"Here\" to \"There\".\n\nTo configure the vtkGraph with a pedigree ID mapping, create a\nvtkDataArray that will store the pedigree IDs an",
    "d set that array as\nthe pedigree ID array for the vertices via\nGetVertexData()->SetPedigreeIds().\n\nDistributed graphs:\n\nvtkGraph instances can be distributed across multiple machines, to\nallow the construction and manipulation of graphs larger than a\nsingle machine could handle. A distributed graph will typically be\ndistributed across many different nodes within a cluster, using the\nMessage Passin",
    "g Interface (MPI) to allow those cluster nodes to\ncommunicate.\n\nAn empty vtkGraph can be made into a distributed graph by attaching\nan instance of a vtkDistributedGraphHelper via the\nSetDistributedGraphHelper() method. To determine whether a graph is\ndistributed or not, call GetDistributedGraphHelper() and check\nwhether the result is non-NULL. For a distributed graph, the number\nof processors acro",
    "ss which the graph is distributed can be retrieved\nby extracting the value for the DATA_NUMBER_OF_PIECES key in the\nvtkInformation object (retrieved by GetInformation()) associated with\nthe graph. Similarly, the value corresponding to the\nDATA_PIECE_NUMBER key of the vtkInformation object describes which\npiece of the data this graph instance provides.\n\nDistributed graphs behave somewhat differentl",
    "y from non-distributed\ngraphs, and will require special care. In a distributed graph, each\nof the processors will contain a subset of the vertices in the graph.\nThat subset of vertices can be accessed via the vtkVertexListIterator\nproduced by GetVertices(). GetNumberOfVertices(), therefore, returns\nthe number of vertices stored locally: it does not account for\nvertices stored on other processors. ",
    "A vertex (or edge) is identified\nby both the rank of its owning processor and by its index within that\nprocessor, both of which are encoded within the vtkIdType value that\ndescribes that vertex (or edge). The owning processor is a value\nbetween 0 and P-1, where P is the number of processors across which\nthe vtkGraph has been distributed. The local index will be a value\nbetween 0 and GetNumberOfVer",
    "tices(), for vertices, or\nGetNumberOfEdges(), for edges, and can be used to access the local\nparts of distributed data arrays. When given a vtkIdType identifying\na vertex, one can determine the owner of the vertex with\nvtkDistributedGraphHelper::GetVertexOwner() and the local index with\nvtkDistributedGraphHelper::GetVertexIndex(). With edges, the\nappropriate methods are vtkDistributedGraphHelper::",
    "GetEdgeOwner() and\nvtkDistributedGraphHelper::GetEdgeIndex(), respectively. To construct\na vtkIdType representing either a vertex or edge given only its owner\nand local index, use vtkDistributedGraphHelper::MakeDistributedId().\n\nThe edges in a distributed graph are always stored on the processors\nthat own the vertices named by the edge. For example, given a\ndirected edge (u, v), the edge will be s",
    "tored in the out-edges list\nfor vertex u on the processor that owns u, and in the in-edges list\nfor vertex v on the processor that owns v. This \"row-wise\"\ndecomposition of the graph means that, for any vertex that is local\nto a processor, that processor can look at all of the incoming and\noutgoing edges of the graph. Processors cannot, however, access the\nincoming or outgoing edge lists of vertex ",
    "owned by other processors.\nVertices owned by other processors will not be encountered when\ntraversing the vertex list via GetVertices(), but may be encountered\nby traversing the in- and out-edge lists of local vertices or the\nedge list.\n\nDistributed graphs can have pedigree IDs for the vertices in the same\nway that non-distributed graphs can. In this case, the distribution\nof the vertices in the g",
    "raph is based on pedigree ID. For example, a\nvertex with the pedigree ID \"Here\" might land on processor 0 while a\nvertex pedigree ID \"There\" would end up on processor 3. By default,\nthe pedigree IDs themselves are hashed to give a random (and,\nhopefully, even) distribution of the vertices. However, one can\nprovide a different vertex distribution function by calling\nvtkDistributedGraphHelper::SetVe",
    "rtexPedigreeIdDistribution.  Once a\ndistributed graph has pedigree IDs, the no-argument AddVertex()\nmethod can no longer be used. Additionally, once a vertex has a\npedigree ID, that pedigree ID should not be changed unless the user\ncan guarantee that the vertex distribution will still map that vertex\nto the same processor where it already resides.\n\nSee Also:\n\nvtkDirectedGraph vtkUndirectedGraph vt",
    "kMutableDirectedGraph\nvtkMutableUndirectedGraph vtkTree vtkDistributedGraphHelper\n\nThanks:\n\nThanks to Brian Wylie, Timothy Shead, Ken Moreland of Sandia National\nLaboratories and Douglas Gregor of Indiana University for designing\nthese classes.\n\n",
    "V.vtkEdgeBase()\nC++: vtkEdgeBase()\nV.vtkEdgeBase(int)\nC++: vtkEdgeBase(vtkIdType id)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkOutEdgeType_Doc();

static PyMethodDef PyvtkOutEdgeType_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkOutEdgeType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkOutEdgeType_Type;
#define DECLARED_PyvtkOutEdgeType_Type
#endif


static PyObject *
PyvtkOutEdgeType_vtkOutEdgeType_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkOutEdgeType");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkOutEdgeType *op = new vtkOutEdgeType();

    result = PyVTKSpecialObject_New("vtkOutEdgeType", op);
    }

  return result;
}

static PyObject *
PyvtkOutEdgeType_vtkOutEdgeType_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkOutEdgeType");

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkOutEdgeType *op = new vtkOutEdgeType(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkOutEdgeType", op);
    }

  return result;
}

static PyMethodDef PyvtkOutEdgeType_vtkOutEdgeType_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkOutEdgeType_vtkOutEdgeType(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkOutEdgeType_vtkOutEdgeType_s1(self, args);
    case 2:
      return PyvtkOutEdgeType_vtkOutEdgeType_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkOutEdgeType");
  return NULL;
}


static PyMethodDef PyvtkOutEdgeType_NewMethod = \
{ (char*)"vtkOutEdgeType", PyvtkOutEdgeType_vtkOutEdgeType, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkOutEdgeType_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkOutEdgeType_vtkOutEdgeType(NULL, args);
}
#endif

static void PyvtkOutEdgeType_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkOutEdgeType *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkOutEdgeType_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkOutEdgeType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkOutEdgeType", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkOutEdgeType_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkOutEdgeType_Hash, // tp_hash
  0, // tp_call
  0, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkOutEdgeType_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkOutEdgeType_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkOutEdgeType_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkOutEdgeType(*static_cast<const vtkOutEdgeType*>(obj));
    }
  return 0;
}

static PyObject *PyvtkOutEdgeType_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkOutEdgeType_Type,
    PyvtkOutEdgeType_Methods,
    PyvtkOutEdgeType_vtkOutEdgeType_Methods,
    &PyvtkOutEdgeType_NewMethod,
    PyvtkOutEdgeType_Doc(), &PyvtkOutEdgeType_CCopy);

  return cls;
}

const char **PyvtkOutEdgeType_Doc()
{
  static const char *docstring[] = {
    "vtkGraph - Base class for graph data types.\n\n",
    "vtkGraph is the abstract base class that provides all read-only API\nfor graph data types. A graph consists of a collection of vertices\nand a collection of edges connecting pairs of vertices. The\nvtkDirectedGraph subclass represents a graph whose edges have\ninherent order from source vertex to target vertex, while\nvtkUndirectedGraph is a graph whose edges have no inherent ordering.\n\nGraph vertices ",
    "may be traversed in two ways. In the current\nimplementation, all vertices are assigned consecutive ids starting at\nzero, so they may be traversed in a simple for loop from 0 to\ngraph->GetNumberOfVertices() - 1. You may alternately create a\nvtkVertexListIterator and call graph->GetVertices(it). it->Next()\nwill return the id of the next vertex, while it->HasNext() indicates\nwhether there are more ve",
    "rtices in the graph. This is the preferred\nmethod, since in the future graphs may support filtering or\nsubsetting where the vertex ids may not be contiguous.\n\nGraph edges must be traversed through iterators. To traverse all\nedges in a graph, create an instance of vtkEdgeListIterator and call\ngraph->GetEdges(it). it->Next() returns lightweight vtkEdgeType\nstructures, which contain the public fields",
    " Id, Source and Target. Id\nis the identifier for the edge, which may be used to look up values\nin assiciated edge data arrays. Source and Target store the ids of\nthe source and target vertices of the edge. Note that the edge list\niterator DOES NOT necessarily iterate over edges in order of\nascending id. To traverse edges from wrapper code (Python, Tcl,\nJava), use it->NextGraphEdge() instead of it-",
    ">Next().  This will\nreturn a heavyweight, wrappable vtkGraphEdge object, which has the\nsame fields as vtkEdgeType accessible through getter methods.\n\nTo traverse all edges outgoing from a vertex, create a\nvtkOutEdgeIterator and call graph->GetOutEdges(v, it). it->Next()\nreturns a lightweight vtkOutEdgeType containing the fields Id and\nTarget. The source of the edge is always the vertex that was pa",
    "ssed\nas an argument to GetOutEdges(). Incoming edges may be similarly\ntraversed with vtkInEdgeIterator, which returns vtkInEdgeType\nstructures with Id and Source fields. Both vtkOutEdgeIterator and\nvtkInEdgeIterator also provide the wrapper functions NextGraphEdge()\nwhich return vtkGraphEdge objects.\n\nAn additional iterator, vtkAdjacentVertexIterator can traverse\noutgoing vertices directly, instea",
    "d needing to parse through edges.\nInitialize the iterator by calling graph->GetAdjacentVertices(v, it).\n\nvtkGraph has two instances of vtkDataSetAttributes for associated\nvertex and edge data. It also has a vtkPoints instance which may\nstore x,y,z locations for each vertex. This is populated by filters\nsuch as vtkGraphLayout and vtkAssignCoordinates.\n\nAll graph types share the same implementation,",
    " so the structure of\none may be shared among multiple graphs, even graphs of different\ntypes. Structures from vtkUndirectedGraph and\nvtkMutableUndirectedGraph may be shared directly.  Structures from\nvtkDirectedGraph, vtkMutableDirectedGraph, and vtkTree may be shared\ndirectly with the exception that setting a structure to a tree\nrequires that a \"is a tree\" test passes.\n\nFor graph types that are k",
    "nown to be compatible, calling\nShallowCopy() or DeepCopy() will work as expected.  When the outcome\nof a conversion is unknown (i.e. setting a graph to a tree),\nCheckedShallowCopy() and CheckedDeepCopy() exist which are identical\nto ShallowCopy() and DeepCopy(), except that instead of emitting an\nerror for an incompatible structure, the function returns false. \nThis allows you to programmatically ",
    "check structure compatibility\nwithout causing error messages.\n\nTo construct a graph, use vtkMutableDirectedGraph or\nvtkMutableUndirectedGraph. You may then use CheckedShallowCopy to set\nthe contents of a mutable graph type into one of the non-mutable\ntypes vtkDirectedGraph, vtkUndirectedGraph. To construct a tree, use\nvtkMutableDirectedGraph, with directed edges which point from the\nparent to the ",
    "child, then use CheckedShallowCopy to set the structure\nto a vtkTree.\n\nCaveats:\n\nAll copy operations implement copy-on-write. The structures are\ninitially shared, but if one of the graphs is modified, the structure\nis copied so that to the user they function as if they were deep\ncopied. This means that care must be taken if different threads are\naccessing different graph instances that share the s",
    "ame structure.\nRace conditions may develop if one thread is modifying the graph at\nthe same time that another graph is copying the structure.\n\nVertex pedigree IDs:\n\nThe vertices in a vtkGraph can be associated with pedigree IDs\nthrough GetVertexData()->SetPedigreeIds. In this case, there is a 1-1\nmapping between pedigree Ids and vertices. One can query the vertex\nID based on the pedigree ID using ",
    "FindVertex, add new vertices by\npedigree ID with AddVertex, and add edges based on the pedigree IDs\nof the source and target vertices. For example, AddEdge(\"Here\",\n\"There\") will find (or add) vertices with pedigree ID \"Here\" and\n\"There\" and then introduce an edge from \"Here\" to \"There\".\n\nTo configure the vtkGraph with a pedigree ID mapping, create a\nvtkDataArray that will store the pedigree IDs an",
    "d set that array as\nthe pedigree ID array for the vertices via\nGetVertexData()->SetPedigreeIds().\n\nDistributed graphs:\n\nvtkGraph instances can be distributed across multiple machines, to\nallow the construction and manipulation of graphs larger than a\nsingle machine could handle. A distributed graph will typically be\ndistributed across many different nodes within a cluster, using the\nMessage Passin",
    "g Interface (MPI) to allow those cluster nodes to\ncommunicate.\n\nAn empty vtkGraph can be made into a distributed graph by attaching\nan instance of a vtkDistributedGraphHelper via the\nSetDistributedGraphHelper() method. To determine whether a graph is\ndistributed or not, call GetDistributedGraphHelper() and check\nwhether the result is non-NULL. For a distributed graph, the number\nof processors acro",
    "ss which the graph is distributed can be retrieved\nby extracting the value for the DATA_NUMBER_OF_PIECES key in the\nvtkInformation object (retrieved by GetInformation()) associated with\nthe graph. Similarly, the value corresponding to the\nDATA_PIECE_NUMBER key of the vtkInformation object describes which\npiece of the data this graph instance provides.\n\nDistributed graphs behave somewhat differentl",
    "y from non-distributed\ngraphs, and will require special care. In a distributed graph, each\nof the processors will contain a subset of the vertices in the graph.\nThat subset of vertices can be accessed via the vtkVertexListIterator\nproduced by GetVertices(). GetNumberOfVertices(), therefore, returns\nthe number of vertices stored locally: it does not account for\nvertices stored on other processors. ",
    "A vertex (or edge) is identified\nby both the rank of its owning processor and by its index within that\nprocessor, both of which are encoded within the vtkIdType value that\ndescribes that vertex (or edge). The owning processor is a value\nbetween 0 and P-1, where P is the number of processors across which\nthe vtkGraph has been distributed. The local index will be a value\nbetween 0 and GetNumberOfVer",
    "tices(), for vertices, or\nGetNumberOfEdges(), for edges, and can be used to access the local\nparts of distributed data arrays. When given a vtkIdType identifying\na vertex, one can determine the owner of the vertex with\nvtkDistributedGraphHelper::GetVertexOwner() and the local index with\nvtkDistributedGraphHelper::GetVertexIndex(). With edges, the\nappropriate methods are vtkDistributedGraphHelper::",
    "GetEdgeOwner() and\nvtkDistributedGraphHelper::GetEdgeIndex(), respectively. To construct\na vtkIdType representing either a vertex or edge given only its owner\nand local index, use vtkDistributedGraphHelper::MakeDistributedId().\n\nThe edges in a distributed graph are always stored on the processors\nthat own the vertices named by the edge. For example, given a\ndirected edge (u, v), the edge will be s",
    "tored in the out-edges list\nfor vertex u on the processor that owns u, and in the in-edges list\nfor vertex v on the processor that owns v. This \"row-wise\"\ndecomposition of the graph means that, for any vertex that is local\nto a processor, that processor can look at all of the incoming and\noutgoing edges of the graph. Processors cannot, however, access the\nincoming or outgoing edge lists of vertex ",
    "owned by other processors.\nVertices owned by other processors will not be encountered when\ntraversing the vertex list via GetVertices(), but may be encountered\nby traversing the in- and out-edge lists of local vertices or the\nedge list.\n\nDistributed graphs can have pedigree IDs for the vertices in the same\nway that non-distributed graphs can. In this case, the distribution\nof the vertices in the g",
    "raph is based on pedigree ID. For example, a\nvertex with the pedigree ID \"Here\" might land on processor 0 while a\nvertex pedigree ID \"There\" would end up on processor 3. By default,\nthe pedigree IDs themselves are hashed to give a random (and,\nhopefully, even) distribution of the vertices. However, one can\nprovide a different vertex distribution function by calling\nvtkDistributedGraphHelper::SetVe",
    "rtexPedigreeIdDistribution.  Once a\ndistributed graph has pedigree IDs, the no-argument AddVertex()\nmethod can no longer be used. Additionally, once a vertex has a\npedigree ID, that pedigree ID should not be changed unless the user\ncan guarantee that the vertex distribution will still map that vertex\nto the same processor where it already resides.\n\nSee Also:\n\nvtkDirectedGraph vtkUndirectedGraph vt",
    "kMutableDirectedGraph\nvtkMutableUndirectedGraph vtkTree vtkDistributedGraphHelper\n\nThanks:\n\nThanks to Brian Wylie, Timothy Shead, Ken Moreland of Sandia National\nLaboratories and Douglas Gregor of Indiana University for designing\nthese classes.\n\n",
    "V.vtkOutEdgeType()\nC++: vtkOutEdgeType()\nV.vtkOutEdgeType(int, int)\nC++: vtkOutEdgeType(vtkIdType t, vtkIdType id)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkInEdgeType_Doc();

static PyMethodDef PyvtkInEdgeType_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkInEdgeType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkInEdgeType_Type;
#define DECLARED_PyvtkInEdgeType_Type
#endif


static PyObject *
PyvtkInEdgeType_vtkInEdgeType_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkInEdgeType");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInEdgeType *op = new vtkInEdgeType();

    result = PyVTKSpecialObject_New("vtkInEdgeType", op);
    }

  return result;
}

static PyObject *
PyvtkInEdgeType_vtkInEdgeType_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkInEdgeType");

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkInEdgeType *op = new vtkInEdgeType(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkInEdgeType", op);
    }

  return result;
}

static PyMethodDef PyvtkInEdgeType_vtkInEdgeType_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkInEdgeType_vtkInEdgeType(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkInEdgeType_vtkInEdgeType_s1(self, args);
    case 2:
      return PyvtkInEdgeType_vtkInEdgeType_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkInEdgeType");
  return NULL;
}


static PyMethodDef PyvtkInEdgeType_NewMethod = \
{ (char*)"vtkInEdgeType", PyvtkInEdgeType_vtkInEdgeType, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkInEdgeType_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkInEdgeType_vtkInEdgeType(NULL, args);
}
#endif

static void PyvtkInEdgeType_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkInEdgeType *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkInEdgeType_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkInEdgeType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkInEdgeType", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkInEdgeType_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkInEdgeType_Hash, // tp_hash
  0, // tp_call
  0, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkInEdgeType_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkInEdgeType_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkInEdgeType_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkInEdgeType(*static_cast<const vtkInEdgeType*>(obj));
    }
  return 0;
}

static PyObject *PyvtkInEdgeType_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkInEdgeType_Type,
    PyvtkInEdgeType_Methods,
    PyvtkInEdgeType_vtkInEdgeType_Methods,
    &PyvtkInEdgeType_NewMethod,
    PyvtkInEdgeType_Doc(), &PyvtkInEdgeType_CCopy);

  return cls;
}

const char **PyvtkInEdgeType_Doc()
{
  static const char *docstring[] = {
    "vtkGraph - Base class for graph data types.\n\n",
    "vtkGraph is the abstract base class that provides all read-only API\nfor graph data types. A graph consists of a collection of vertices\nand a collection of edges connecting pairs of vertices. The\nvtkDirectedGraph subclass represents a graph whose edges have\ninherent order from source vertex to target vertex, while\nvtkUndirectedGraph is a graph whose edges have no inherent ordering.\n\nGraph vertices ",
    "may be traversed in two ways. In the current\nimplementation, all vertices are assigned consecutive ids starting at\nzero, so they may be traversed in a simple for loop from 0 to\ngraph->GetNumberOfVertices() - 1. You may alternately create a\nvtkVertexListIterator and call graph->GetVertices(it). it->Next()\nwill return the id of the next vertex, while it->HasNext() indicates\nwhether there are more ve",
    "rtices in the graph. This is the preferred\nmethod, since in the future graphs may support filtering or\nsubsetting where the vertex ids may not be contiguous.\n\nGraph edges must be traversed through iterators. To traverse all\nedges in a graph, create an instance of vtkEdgeListIterator and call\ngraph->GetEdges(it). it->Next() returns lightweight vtkEdgeType\nstructures, which contain the public fields",
    " Id, Source and Target. Id\nis the identifier for the edge, which may be used to look up values\nin assiciated edge data arrays. Source and Target store the ids of\nthe source and target vertices of the edge. Note that the edge list\niterator DOES NOT necessarily iterate over edges in order of\nascending id. To traverse edges from wrapper code (Python, Tcl,\nJava), use it->NextGraphEdge() instead of it-",
    ">Next().  This will\nreturn a heavyweight, wrappable vtkGraphEdge object, which has the\nsame fields as vtkEdgeType accessible through getter methods.\n\nTo traverse all edges outgoing from a vertex, create a\nvtkOutEdgeIterator and call graph->GetOutEdges(v, it). it->Next()\nreturns a lightweight vtkOutEdgeType containing the fields Id and\nTarget. The source of the edge is always the vertex that was pa",
    "ssed\nas an argument to GetOutEdges(). Incoming edges may be similarly\ntraversed with vtkInEdgeIterator, which returns vtkInEdgeType\nstructures with Id and Source fields. Both vtkOutEdgeIterator and\nvtkInEdgeIterator also provide the wrapper functions NextGraphEdge()\nwhich return vtkGraphEdge objects.\n\nAn additional iterator, vtkAdjacentVertexIterator can traverse\noutgoing vertices directly, instea",
    "d needing to parse through edges.\nInitialize the iterator by calling graph->GetAdjacentVertices(v, it).\n\nvtkGraph has two instances of vtkDataSetAttributes for associated\nvertex and edge data. It also has a vtkPoints instance which may\nstore x,y,z locations for each vertex. This is populated by filters\nsuch as vtkGraphLayout and vtkAssignCoordinates.\n\nAll graph types share the same implementation,",
    " so the structure of\none may be shared among multiple graphs, even graphs of different\ntypes. Structures from vtkUndirectedGraph and\nvtkMutableUndirectedGraph may be shared directly.  Structures from\nvtkDirectedGraph, vtkMutableDirectedGraph, and vtkTree may be shared\ndirectly with the exception that setting a structure to a tree\nrequires that a \"is a tree\" test passes.\n\nFor graph types that are k",
    "nown to be compatible, calling\nShallowCopy() or DeepCopy() will work as expected.  When the outcome\nof a conversion is unknown (i.e. setting a graph to a tree),\nCheckedShallowCopy() and CheckedDeepCopy() exist which are identical\nto ShallowCopy() and DeepCopy(), except that instead of emitting an\nerror for an incompatible structure, the function returns false. \nThis allows you to programmatically ",
    "check structure compatibility\nwithout causing error messages.\n\nTo construct a graph, use vtkMutableDirectedGraph or\nvtkMutableUndirectedGraph. You may then use CheckedShallowCopy to set\nthe contents of a mutable graph type into one of the non-mutable\ntypes vtkDirectedGraph, vtkUndirectedGraph. To construct a tree, use\nvtkMutableDirectedGraph, with directed edges which point from the\nparent to the ",
    "child, then use CheckedShallowCopy to set the structure\nto a vtkTree.\n\nCaveats:\n\nAll copy operations implement copy-on-write. The structures are\ninitially shared, but if one of the graphs is modified, the structure\nis copied so that to the user they function as if they were deep\ncopied. This means that care must be taken if different threads are\naccessing different graph instances that share the s",
    "ame structure.\nRace conditions may develop if one thread is modifying the graph at\nthe same time that another graph is copying the structure.\n\nVertex pedigree IDs:\n\nThe vertices in a vtkGraph can be associated with pedigree IDs\nthrough GetVertexData()->SetPedigreeIds. In this case, there is a 1-1\nmapping between pedigree Ids and vertices. One can query the vertex\nID based on the pedigree ID using ",
    "FindVertex, add new vertices by\npedigree ID with AddVertex, and add edges based on the pedigree IDs\nof the source and target vertices. For example, AddEdge(\"Here\",\n\"There\") will find (or add) vertices with pedigree ID \"Here\" and\n\"There\" and then introduce an edge from \"Here\" to \"There\".\n\nTo configure the vtkGraph with a pedigree ID mapping, create a\nvtkDataArray that will store the pedigree IDs an",
    "d set that array as\nthe pedigree ID array for the vertices via\nGetVertexData()->SetPedigreeIds().\n\nDistributed graphs:\n\nvtkGraph instances can be distributed across multiple machines, to\nallow the construction and manipulation of graphs larger than a\nsingle machine could handle. A distributed graph will typically be\ndistributed across many different nodes within a cluster, using the\nMessage Passin",
    "g Interface (MPI) to allow those cluster nodes to\ncommunicate.\n\nAn empty vtkGraph can be made into a distributed graph by attaching\nan instance of a vtkDistributedGraphHelper via the\nSetDistributedGraphHelper() method. To determine whether a graph is\ndistributed or not, call GetDistributedGraphHelper() and check\nwhether the result is non-NULL. For a distributed graph, the number\nof processors acro",
    "ss which the graph is distributed can be retrieved\nby extracting the value for the DATA_NUMBER_OF_PIECES key in the\nvtkInformation object (retrieved by GetInformation()) associated with\nthe graph. Similarly, the value corresponding to the\nDATA_PIECE_NUMBER key of the vtkInformation object describes which\npiece of the data this graph instance provides.\n\nDistributed graphs behave somewhat differentl",
    "y from non-distributed\ngraphs, and will require special care. In a distributed graph, each\nof the processors will contain a subset of the vertices in the graph.\nThat subset of vertices can be accessed via the vtkVertexListIterator\nproduced by GetVertices(). GetNumberOfVertices(), therefore, returns\nthe number of vertices stored locally: it does not account for\nvertices stored on other processors. ",
    "A vertex (or edge) is identified\nby both the rank of its owning processor and by its index within that\nprocessor, both of which are encoded within the vtkIdType value that\ndescribes that vertex (or edge). The owning processor is a value\nbetween 0 and P-1, where P is the number of processors across which\nthe vtkGraph has been distributed. The local index will be a value\nbetween 0 and GetNumberOfVer",
    "tices(), for vertices, or\nGetNumberOfEdges(), for edges, and can be used to access the local\nparts of distributed data arrays. When given a vtkIdType identifying\na vertex, one can determine the owner of the vertex with\nvtkDistributedGraphHelper::GetVertexOwner() and the local index with\nvtkDistributedGraphHelper::GetVertexIndex(). With edges, the\nappropriate methods are vtkDistributedGraphHelper::",
    "GetEdgeOwner() and\nvtkDistributedGraphHelper::GetEdgeIndex(), respectively. To construct\na vtkIdType representing either a vertex or edge given only its owner\nand local index, use vtkDistributedGraphHelper::MakeDistributedId().\n\nThe edges in a distributed graph are always stored on the processors\nthat own the vertices named by the edge. For example, given a\ndirected edge (u, v), the edge will be s",
    "tored in the out-edges list\nfor vertex u on the processor that owns u, and in the in-edges list\nfor vertex v on the processor that owns v. This \"row-wise\"\ndecomposition of the graph means that, for any vertex that is local\nto a processor, that processor can look at all of the incoming and\noutgoing edges of the graph. Processors cannot, however, access the\nincoming or outgoing edge lists of vertex ",
    "owned by other processors.\nVertices owned by other processors will not be encountered when\ntraversing the vertex list via GetVertices(), but may be encountered\nby traversing the in- and out-edge lists of local vertices or the\nedge list.\n\nDistributed graphs can have pedigree IDs for the vertices in the same\nway that non-distributed graphs can. In this case, the distribution\nof the vertices in the g",
    "raph is based on pedigree ID. For example, a\nvertex with the pedigree ID \"Here\" might land on processor 0 while a\nvertex pedigree ID \"There\" would end up on processor 3. By default,\nthe pedigree IDs themselves are hashed to give a random (and,\nhopefully, even) distribution of the vertices. However, one can\nprovide a different vertex distribution function by calling\nvtkDistributedGraphHelper::SetVe",
    "rtexPedigreeIdDistribution.  Once a\ndistributed graph has pedigree IDs, the no-argument AddVertex()\nmethod can no longer be used. Additionally, once a vertex has a\npedigree ID, that pedigree ID should not be changed unless the user\ncan guarantee that the vertex distribution will still map that vertex\nto the same processor where it already resides.\n\nSee Also:\n\nvtkDirectedGraph vtkUndirectedGraph vt",
    "kMutableDirectedGraph\nvtkMutableUndirectedGraph vtkTree vtkDistributedGraphHelper\n\nThanks:\n\nThanks to Brian Wylie, Timothy Shead, Ken Moreland of Sandia National\nLaboratories and Douglas Gregor of Indiana University for designing\nthese classes.\n\n",
    "V.vtkInEdgeType()\nC++: vtkInEdgeType()\nV.vtkInEdgeType(int, int)\nC++: vtkInEdgeType(vtkIdType s, vtkIdType id)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkEdgeType_Doc();

static PyMethodDef PyvtkEdgeType_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkEdgeType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkEdgeType_Type;
#define DECLARED_PyvtkEdgeType_Type
#endif


static PyObject *
PyvtkEdgeType_vtkEdgeType_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkEdgeType");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkEdgeType *op = new vtkEdgeType();

    result = PyVTKSpecialObject_New("vtkEdgeType", op);
    }

  return result;
}

static PyObject *
PyvtkEdgeType_vtkEdgeType_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkEdgeType");

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkEdgeType *op = new vtkEdgeType(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkEdgeType", op);
    }

  return result;
}

static PyMethodDef PyvtkEdgeType_vtkEdgeType_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkEdgeType_vtkEdgeType(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkEdgeType_vtkEdgeType_s1(self, args);
    case 3:
      return PyvtkEdgeType_vtkEdgeType_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkEdgeType");
  return NULL;
}


static PyMethodDef PyvtkEdgeType_NewMethod = \
{ (char*)"vtkEdgeType", PyvtkEdgeType_vtkEdgeType, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkEdgeType_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkEdgeType_vtkEdgeType(NULL, args);
}
#endif

static void PyvtkEdgeType_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkEdgeType *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkEdgeType_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkEdgeType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkEdgeType", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkEdgeType_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkEdgeType_Hash, // tp_hash
  0, // tp_call
  0, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkEdgeType_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkEdgeType_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkEdgeType_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkEdgeType(*static_cast<const vtkEdgeType*>(obj));
    }
  return 0;
}

static PyObject *PyvtkEdgeType_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkEdgeType_Type,
    PyvtkEdgeType_Methods,
    PyvtkEdgeType_vtkEdgeType_Methods,
    &PyvtkEdgeType_NewMethod,
    PyvtkEdgeType_Doc(), &PyvtkEdgeType_CCopy);

  return cls;
}

const char **PyvtkEdgeType_Doc()
{
  static const char *docstring[] = {
    "vtkGraph - Base class for graph data types.\n\n",
    "vtkGraph is the abstract base class that provides all read-only API\nfor graph data types. A graph consists of a collection of vertices\nand a collection of edges connecting pairs of vertices. The\nvtkDirectedGraph subclass represents a graph whose edges have\ninherent order from source vertex to target vertex, while\nvtkUndirectedGraph is a graph whose edges have no inherent ordering.\n\nGraph vertices ",
    "may be traversed in two ways. In the current\nimplementation, all vertices are assigned consecutive ids starting at\nzero, so they may be traversed in a simple for loop from 0 to\ngraph->GetNumberOfVertices() - 1. You may alternately create a\nvtkVertexListIterator and call graph->GetVertices(it). it->Next()\nwill return the id of the next vertex, while it->HasNext() indicates\nwhether there are more ve",
    "rtices in the graph. This is the preferred\nmethod, since in the future graphs may support filtering or\nsubsetting where the vertex ids may not be contiguous.\n\nGraph edges must be traversed through iterators. To traverse all\nedges in a graph, create an instance of vtkEdgeListIterator and call\ngraph->GetEdges(it). it->Next() returns lightweight vtkEdgeType\nstructures, which contain the public fields",
    " Id, Source and Target. Id\nis the identifier for the edge, which may be used to look up values\nin assiciated edge data arrays. Source and Target store the ids of\nthe source and target vertices of the edge. Note that the edge list\niterator DOES NOT necessarily iterate over edges in order of\nascending id. To traverse edges from wrapper code (Python, Tcl,\nJava), use it->NextGraphEdge() instead of it-",
    ">Next().  This will\nreturn a heavyweight, wrappable vtkGraphEdge object, which has the\nsame fields as vtkEdgeType accessible through getter methods.\n\nTo traverse all edges outgoing from a vertex, create a\nvtkOutEdgeIterator and call graph->GetOutEdges(v, it). it->Next()\nreturns a lightweight vtkOutEdgeType containing the fields Id and\nTarget. The source of the edge is always the vertex that was pa",
    "ssed\nas an argument to GetOutEdges(). Incoming edges may be similarly\ntraversed with vtkInEdgeIterator, which returns vtkInEdgeType\nstructures with Id and Source fields. Both vtkOutEdgeIterator and\nvtkInEdgeIterator also provide the wrapper functions NextGraphEdge()\nwhich return vtkGraphEdge objects.\n\nAn additional iterator, vtkAdjacentVertexIterator can traverse\noutgoing vertices directly, instea",
    "d needing to parse through edges.\nInitialize the iterator by calling graph->GetAdjacentVertices(v, it).\n\nvtkGraph has two instances of vtkDataSetAttributes for associated\nvertex and edge data. It also has a vtkPoints instance which may\nstore x,y,z locations for each vertex. This is populated by filters\nsuch as vtkGraphLayout and vtkAssignCoordinates.\n\nAll graph types share the same implementation,",
    " so the structure of\none may be shared among multiple graphs, even graphs of different\ntypes. Structures from vtkUndirectedGraph and\nvtkMutableUndirectedGraph may be shared directly.  Structures from\nvtkDirectedGraph, vtkMutableDirectedGraph, and vtkTree may be shared\ndirectly with the exception that setting a structure to a tree\nrequires that a \"is a tree\" test passes.\n\nFor graph types that are k",
    "nown to be compatible, calling\nShallowCopy() or DeepCopy() will work as expected.  When the outcome\nof a conversion is unknown (i.e. setting a graph to a tree),\nCheckedShallowCopy() and CheckedDeepCopy() exist which are identical\nto ShallowCopy() and DeepCopy(), except that instead of emitting an\nerror for an incompatible structure, the function returns false. \nThis allows you to programmatically ",
    "check structure compatibility\nwithout causing error messages.\n\nTo construct a graph, use vtkMutableDirectedGraph or\nvtkMutableUndirectedGraph. You may then use CheckedShallowCopy to set\nthe contents of a mutable graph type into one of the non-mutable\ntypes vtkDirectedGraph, vtkUndirectedGraph. To construct a tree, use\nvtkMutableDirectedGraph, with directed edges which point from the\nparent to the ",
    "child, then use CheckedShallowCopy to set the structure\nto a vtkTree.\n\nCaveats:\n\nAll copy operations implement copy-on-write. The structures are\ninitially shared, but if one of the graphs is modified, the structure\nis copied so that to the user they function as if they were deep\ncopied. This means that care must be taken if different threads are\naccessing different graph instances that share the s",
    "ame structure.\nRace conditions may develop if one thread is modifying the graph at\nthe same time that another graph is copying the structure.\n\nVertex pedigree IDs:\n\nThe vertices in a vtkGraph can be associated with pedigree IDs\nthrough GetVertexData()->SetPedigreeIds. In this case, there is a 1-1\nmapping between pedigree Ids and vertices. One can query the vertex\nID based on the pedigree ID using ",
    "FindVertex, add new vertices by\npedigree ID with AddVertex, and add edges based on the pedigree IDs\nof the source and target vertices. For example, AddEdge(\"Here\",\n\"There\") will find (or add) vertices with pedigree ID \"Here\" and\n\"There\" and then introduce an edge from \"Here\" to \"There\".\n\nTo configure the vtkGraph with a pedigree ID mapping, create a\nvtkDataArray that will store the pedigree IDs an",
    "d set that array as\nthe pedigree ID array for the vertices via\nGetVertexData()->SetPedigreeIds().\n\nDistributed graphs:\n\nvtkGraph instances can be distributed across multiple machines, to\nallow the construction and manipulation of graphs larger than a\nsingle machine could handle. A distributed graph will typically be\ndistributed across many different nodes within a cluster, using the\nMessage Passin",
    "g Interface (MPI) to allow those cluster nodes to\ncommunicate.\n\nAn empty vtkGraph can be made into a distributed graph by attaching\nan instance of a vtkDistributedGraphHelper via the\nSetDistributedGraphHelper() method. To determine whether a graph is\ndistributed or not, call GetDistributedGraphHelper() and check\nwhether the result is non-NULL. For a distributed graph, the number\nof processors acro",
    "ss which the graph is distributed can be retrieved\nby extracting the value for the DATA_NUMBER_OF_PIECES key in the\nvtkInformation object (retrieved by GetInformation()) associated with\nthe graph. Similarly, the value corresponding to the\nDATA_PIECE_NUMBER key of the vtkInformation object describes which\npiece of the data this graph instance provides.\n\nDistributed graphs behave somewhat differentl",
    "y from non-distributed\ngraphs, and will require special care. In a distributed graph, each\nof the processors will contain a subset of the vertices in the graph.\nThat subset of vertices can be accessed via the vtkVertexListIterator\nproduced by GetVertices(). GetNumberOfVertices(), therefore, returns\nthe number of vertices stored locally: it does not account for\nvertices stored on other processors. ",
    "A vertex (or edge) is identified\nby both the rank of its owning processor and by its index within that\nprocessor, both of which are encoded within the vtkIdType value that\ndescribes that vertex (or edge). The owning processor is a value\nbetween 0 and P-1, where P is the number of processors across which\nthe vtkGraph has been distributed. The local index will be a value\nbetween 0 and GetNumberOfVer",
    "tices(), for vertices, or\nGetNumberOfEdges(), for edges, and can be used to access the local\nparts of distributed data arrays. When given a vtkIdType identifying\na vertex, one can determine the owner of the vertex with\nvtkDistributedGraphHelper::GetVertexOwner() and the local index with\nvtkDistributedGraphHelper::GetVertexIndex(). With edges, the\nappropriate methods are vtkDistributedGraphHelper::",
    "GetEdgeOwner() and\nvtkDistributedGraphHelper::GetEdgeIndex(), respectively. To construct\na vtkIdType representing either a vertex or edge given only its owner\nand local index, use vtkDistributedGraphHelper::MakeDistributedId().\n\nThe edges in a distributed graph are always stored on the processors\nthat own the vertices named by the edge. For example, given a\ndirected edge (u, v), the edge will be s",
    "tored in the out-edges list\nfor vertex u on the processor that owns u, and in the in-edges list\nfor vertex v on the processor that owns v. This \"row-wise\"\ndecomposition of the graph means that, for any vertex that is local\nto a processor, that processor can look at all of the incoming and\noutgoing edges of the graph. Processors cannot, however, access the\nincoming or outgoing edge lists of vertex ",
    "owned by other processors.\nVertices owned by other processors will not be encountered when\ntraversing the vertex list via GetVertices(), but may be encountered\nby traversing the in- and out-edge lists of local vertices or the\nedge list.\n\nDistributed graphs can have pedigree IDs for the vertices in the same\nway that non-distributed graphs can. In this case, the distribution\nof the vertices in the g",
    "raph is based on pedigree ID. For example, a\nvertex with the pedigree ID \"Here\" might land on processor 0 while a\nvertex pedigree ID \"There\" would end up on processor 3. By default,\nthe pedigree IDs themselves are hashed to give a random (and,\nhopefully, even) distribution of the vertices. However, one can\nprovide a different vertex distribution function by calling\nvtkDistributedGraphHelper::SetVe",
    "rtexPedigreeIdDistribution.  Once a\ndistributed graph has pedigree IDs, the no-argument AddVertex()\nmethod can no longer be used. Additionally, once a vertex has a\npedigree ID, that pedigree ID should not be changed unless the user\ncan guarantee that the vertex distribution will still map that vertex\nto the same processor where it already resides.\n\nSee Also:\n\nvtkDirectedGraph vtkUndirectedGraph vt",
    "kMutableDirectedGraph\nvtkMutableUndirectedGraph vtkTree vtkDistributedGraphHelper\n\nThanks:\n\nThanks to Brian Wylie, Timothy Shead, Ken Moreland of Sandia National\nLaboratories and Douglas Gregor of Indiana University for designing\nthese classes.\n\n",
    "V.vtkEdgeType()\nC++: vtkEdgeType()\nV.vtkEdgeType(int, int, int)\nC++: vtkEdgeType(vtkIdType s, vtkIdType t, vtkIdType id)\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGraphNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectNew
#endif

static const char **PyvtkGraph_Doc();


static PyObject *
PyvtkGraph_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGraph::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraph::NewInstance());

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
PyvtkGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGraph *tempr = vtkGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetVertexData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->GetVertexData() :
      op->vtkGraph::GetVertexData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetEdgeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->GetEdgeData() :
      op->vtkGraph::GetEdgeData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkGraph::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkGraph::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPoint(temp0) :
      op->vtkGraph::GetPoint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGraph_GetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetPoint(temp0, temp1);
      }
    else
      {
      op->vtkGraph::GetPoint(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGraph_GetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkGraph_GetPoint_s1(self, args);
    case 2:
      return PyvtkGraph_GetPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint");
  return NULL;
}



static PyObject *
PyvtkGraph_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetPoints() :
      op->vtkGraph::GetPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->SetPoints(temp0);
      }
    else
      {
      op->vtkGraph::SetPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_ComputeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeBounds();
      }
    else
      {
      op->vtkGraph::ComputeBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkGraph::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGraph_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkGraph::GetBounds(temp0);
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
PyvtkGraph_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkGraph_GetBounds_s1(self, args);
    case 1:
      return PyvtkGraph_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkGraph_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGraph::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetOutEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkOutEdgeIterator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkOutEdgeIterator"))
    {
    if (ap.IsBound())
      {
      op->GetOutEdges(temp0, temp1);
      }
    else
      {
      op->vtkGraph::GetOutEdges(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetDegree(temp0) :
      op->vtkGraph::GetDegree(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetOutDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetOutDegree(temp0) :
      op->vtkGraph::GetOutDegree(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetOutEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkGraphEdge *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkGraphEdge"))
    {
    if (ap.IsBound())
      {
      op->GetOutEdge(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGraph::GetOutEdge(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetInEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkInEdgeIterator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInEdgeIterator"))
    {
    if (ap.IsBound())
      {
      op->GetInEdges(temp0, temp1);
      }
    else
      {
      op->vtkGraph::GetInEdges(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetInDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetInDegree(temp0) :
      op->vtkGraph::GetInDegree(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetInEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkGraphEdge *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkGraphEdge"))
    {
    if (ap.IsBound())
      {
      op->GetInEdge(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGraph::GetInEdge(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetAdjacentVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjacentVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkAdjacentVertexIterator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAdjacentVertexIterator"))
    {
    if (ap.IsBound())
      {
      op->GetAdjacentVertices(temp0, temp1);
      }
    else
      {
      op->vtkGraph::GetAdjacentVertices(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkEdgeListIterator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEdgeListIterator"))
    {
    if (ap.IsBound())
      {
      op->GetEdges(temp0);
      }
    else
      {
      op->vtkGraph::GetEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfEdges() :
      op->vtkGraph::GetNumberOfEdges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkVertexListIterator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVertexListIterator"))
    {
    if (ap.IsBound())
      {
      op->GetVertices(temp0);
      }
    else
      {
      op->vtkGraph::GetVertices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetNumberOfVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfVertices() :
      op->vtkGraph::GetNumberOfVertices());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_SetDistributedGraphHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistributedGraphHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkDistributedGraphHelper *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDistributedGraphHelper"))
    {
    if (ap.IsBound())
      {
      op->SetDistributedGraphHelper(temp0);
      }
    else
      {
      op->vtkGraph::SetDistributedGraphHelper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetDistributedGraphHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistributedGraphHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDistributedGraphHelper *tempr = (ap.IsBound() ?
      op->GetDistributedGraphHelper() :
      op->vtkGraph::GetDistributedGraphHelper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_FindVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindVertex(*temp0) :
      op->vtkGraph::FindVertex(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkGraph_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkGraph::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

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
      op->vtkGraph::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkGraph *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
    {
    if (ap.IsBound())
      {
      op->CopyStructure(temp0);
      }
    else
      {
      op->vtkGraph::CopyStructure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_CheckedShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckedShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkGraph *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
    {
    bool tempr = (ap.IsBound() ?
      op->CheckedShallowCopy(temp0) :
      op->vtkGraph::CheckedShallowCopy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_CheckedDeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckedDeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkGraph *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
    {
    bool tempr = (ap.IsBound() ?
      op->CheckedDeepCopy(temp0) :
      op->vtkGraph::CheckedDeepCopy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Squeeze();
      }
    else
      {
      op->vtkGraph::Squeeze();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkGraph *tempr = vtkGraph::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGraph_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkGraph *tempr = vtkGraph::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGraph_GetData_Methods[] = {
  {NULL, PyvtkGraph_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkGraph_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkGraph_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGraph_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkGraph_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkGraph_ReorderOutVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReorderOutVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkIdTypeArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->ReorderOutVertices(temp0, temp1);
      }
    else
      {
      op->vtkGraph::ReorderOutVertices(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_IsSameStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSameStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkGraph *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
    {
    bool tempr = (ap.IsBound() ?
      op->IsSameStructure(temp0) :
      op->vtkGraph::IsSameStructure(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetSourceVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSourceVertex(temp0) :
      op->vtkGraph::GetSourceVertex(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetTargetVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTargetVertex(temp0) :
      op->vtkGraph::GetTargetVertex(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_SetEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new double[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->SetEdgePoints(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGraph::SetEdgePoints(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkGraph_GetNumberOfEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfEdgePoints(temp0) :
      op->vtkGraph::GetNumberOfEdgePoints(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetEdgePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    double *tempr = (ap.IsBound() ?
      op->GetEdgePoint(temp0, temp1) :
      op->vtkGraph::GetEdgePoint(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_ClearEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ClearEdgePoints(temp0);
      }
    else
      {
      op->vtkGraph::ClearEdgePoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_SetEdgePoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->SetEdgePoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGraph::SetEdgePoint(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGraph_SetEdgePoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  double temp2;
  double temp3;
  double temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetEdgePoint(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkGraph::SetEdgePoint(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGraph_SetEdgePoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkGraph_SetEdgePoint_s1(self, args);
    case 5:
      return PyvtkGraph_SetEdgePoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetEdgePoint");
  return NULL;
}



static PyObject *
PyvtkGraph_AddEdgePoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEdgePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->AddEdgePoint(temp0, temp1);
      }
    else
      {
      op->vtkGraph::AddEdgePoint(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGraph_AddEdgePoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEdgePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->AddEdgePoint(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkGraph::AddEdgePoint(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGraph_AddEdgePoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGraph_AddEdgePoint_s1(self, args);
    case 4:
      return PyvtkGraph_AddEdgePoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddEdgePoint");
  return NULL;
}



static PyObject *
PyvtkGraph_ShallowCopyEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopyEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkGraph *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopyEdgePoints(temp0);
      }
    else
      {
      op->vtkGraph::ShallowCopyEdgePoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_DeepCopyEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopyEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkGraph *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
    {
    if (ap.IsBound())
      {
      op->DeepCopyEdgePoints(temp0);
      }
    else
      {
      op->vtkGraph::DeepCopyEdgePoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetGraphInternals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphInternals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkGraphInternals *tempr = (ap.IsBound() ?
      op->GetGraphInternals(temp0) :
      op->vtkGraph::GetGraphInternals(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetInducedEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInducedEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdTypeArray *temp0 = NULL;
  vtkIdTypeArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->GetInducedEdges(temp0, temp1);
      }
    else
      {
      op->vtkGraph::GetInducedEdges(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetAttributesAsFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributesAsFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkFieldData *tempr = (ap.IsBound() ?
      op->GetAttributesAsFieldData(temp0) :
      op->vtkGraph::GetAttributesAsFieldData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfElements(temp0) :
      op->vtkGraph::GetNumberOfElements(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_Dump(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dump");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Dump();
      }
    else
      {
      op->vtkGraph::Dump();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_GetEdgeId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetEdgeId(temp0, temp1) :
      op->vtkGraph::GetEdgeId(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_ToDirectedGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToDirectedGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkDirectedGraph *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDirectedGraph"))
    {
    bool tempr = (ap.IsBound() ?
      op->ToDirectedGraph(temp0) :
      op->vtkGraph::ToDirectedGraph(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraph_ToUndirectedGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToUndirectedGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraph *op = static_cast<vtkGraph *>(vp);

  vtkUndirectedGraph *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUndirectedGraph"))
    {
    bool tempr = (ap.IsBound() ?
      op->ToUndirectedGraph(temp0) :
      op->vtkGraph::ToUndirectedGraph(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGraph_Methods[] = {
  {(char*)"GetClassName", PyvtkGraph_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGraph_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGraph_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGraph\nC++: vtkGraph *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGraph_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGraph\nC++: vtkGraph *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetVertexData", PyvtkGraph_GetVertexData, METH_VARARGS,
   (char*)"V.GetVertexData() -> vtkDataSetAttributes\nC++: vtkDataSetAttributes *GetVertexData()\n\nGet the vertex or edge data.\n"},
  {(char*)"GetEdgeData", PyvtkGraph_GetEdgeData, METH_VARARGS,
   (char*)"V.GetEdgeData() -> vtkDataSetAttributes\nC++: vtkDataSetAttributes *GetEdgeData()\n\nGet the vertex or edge data.\n"},
  {(char*)"GetDataObjectType", PyvtkGraph_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn what type of dataset this is.\n"},
  {(char*)"Initialize", PyvtkGraph_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nInitialize to an empty graph.\n"},
  {(char*)"GetPoint", PyvtkGraph_GetPoint, METH_VARARGS,
   (char*)"V.GetPoint(int) -> (float, ...)\nC++: double *GetPoint(vtkIdType ptId)\nV.GetPoint(int, [float, float, float])\nC++: void GetPoint(vtkIdType ptId, double x[3])\n\nThese methods return the point (0,0,0) until the points structure\nis created, when it returns the actual point position. In a\ndistributed graph, only the points for local vertices can be\nretrieved.\n"},
  {(char*)"GetPoints", PyvtkGraph_GetPoints, METH_VARARGS,
   (char*)"V.GetPoints() -> vtkPoints\nC++: vtkPoints *GetPoints()\n\nReturns the points array for this graph. If points is not yet\nconstructed, generates and returns a new points array filled with\n(0,0,0) coordinates. In a distributed graph, only the points for\nlocal vertices can be retrieved or modified.\n"},
  {(char*)"SetPoints", PyvtkGraph_SetPoints, METH_VARARGS,
   (char*)"V.SetPoints(vtkPoints)\nC++: virtual void SetPoints(vtkPoints *points)\n\nReturns the points array for this graph. If points is not yet\nconstructed, generates and returns a new points array filled with\n(0,0,0) coordinates. In a distributed graph, only the points for\nlocal vertices can be retrieved or modified.\n"},
  {(char*)"ComputeBounds", PyvtkGraph_ComputeBounds, METH_VARARGS,
   (char*)"V.ComputeBounds()\nC++: void ComputeBounds()\n\nCompute the bounds of the graph. In a distributed graph, this\ncomputes the bounds around the local part of the graph.\n"},
  {(char*)"GetBounds", PyvtkGraph_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, ...)\nC++: double *GetBounds()\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nReturn a pointer to the geometry bounding box in the form\n(xmin,xmax, ymin,ymax, zmin,zmax). In a distributed graph, this\ncomputes the bounds around the local part of the graph.\n"},
  {(char*)"GetMTime", PyvtkGraph_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long int GetMTime()\n\nThe modified time of the graph.\n"},
  {(char*)"GetOutEdges", PyvtkGraph_GetOutEdges, METH_VARARGS,
   (char*)"V.GetOutEdges(int, vtkOutEdgeIterator)\nC++: virtual void GetOutEdges(vtkIdType v, vtkOutEdgeIterator *it)\n\nInitializes the out edge iterator to iterate over all outgoing\nedges of vertex v.  For an undirected graph, returns all incident\nedges. In a distributed graph, the vertex v must be local to this\nprocessor.\n"},
  {(char*)"GetDegree", PyvtkGraph_GetDegree, METH_VARARGS,
   (char*)"V.GetDegree(int) -> int\nC++: virtual vtkIdType GetDegree(vtkIdType v)\n\nThe total of all incoming and outgoing vertices for vertex v. For\nundirected graphs, this is simply the number of edges incident to\nv. In a distributed graph, the vertex v must be local to this\nprocessor.\n"},
  {(char*)"GetOutDegree", PyvtkGraph_GetOutDegree, METH_VARARGS,
   (char*)"V.GetOutDegree(int) -> int\nC++: virtual vtkIdType GetOutDegree(vtkIdType v)\n\nThe number of outgoing edges from vertex v. For undirected\ngraphs, returns the same as GetDegree(). In a distributed graph,\nthe vertex v must be local to this processor.\n"},
  {(char*)"GetOutEdge", PyvtkGraph_GetOutEdge, METH_VARARGS,
   (char*)"V.GetOutEdge(int, int, vtkGraphEdge)\nC++: virtual void GetOutEdge(vtkIdType v, vtkIdType index,\n    vtkGraphEdge *e)\n\nRandom-access method for retrieving outgoing edges from vertex v.\nThe method fills the vtkGraphEdge instance with the id, source,\nand target of the edge. This method is provided for wrappers,\nGetOutEdge(vtkIdType, vtkIdType) is preferred.\n"},
  {(char*)"GetInEdges", PyvtkGraph_GetInEdges, METH_VARARGS,
   (char*)"V.GetInEdges(int, vtkInEdgeIterator)\nC++: virtual void GetInEdges(vtkIdType v, vtkInEdgeIterator *it)\n\nInitializes the in edge iterator to iterate over all incoming\nedges to vertex v.  For an undirected graph, returns all incident\nedges. In a distributed graph, the vertex v must be local to this\nprocessor.\n"},
  {(char*)"GetInDegree", PyvtkGraph_GetInDegree, METH_VARARGS,
   (char*)"V.GetInDegree(int) -> int\nC++: virtual vtkIdType GetInDegree(vtkIdType v)\n\nThe number of incoming edges to vertex v. For undirected graphs,\nreturns the same as GetDegree(). In a distributed graph, the\nvertex v must be local to this processor.\n"},
  {(char*)"GetInEdge", PyvtkGraph_GetInEdge, METH_VARARGS,
   (char*)"V.GetInEdge(int, int, vtkGraphEdge)\nC++: virtual void GetInEdge(vtkIdType v, vtkIdType index,\n    vtkGraphEdge *e)\n\nRandom-access method for retrieving incoming edges to vertex v.\nThe method fills the vtkGraphEdge instance with the id, source,\nand target of the edge. This method is provided for wrappers,\nGetInEdge(vtkIdType, vtkIdType) is preferred.\n"},
  {(char*)"GetAdjacentVertices", PyvtkGraph_GetAdjacentVertices, METH_VARARGS,
   (char*)"V.GetAdjacentVertices(int, vtkAdjacentVertexIterator)\nC++: virtual void GetAdjacentVertices(vtkIdType v,\n    vtkAdjacentVertexIterator *it)\n\nInitializes the adjacent vertex iterator to iterate over all\noutgoing vertices from vertex v.  For an undirected graph,\nreturns all adjacent vertices. In a distributed graph, the vertex\nv must be local to this processor.\n"},
  {(char*)"GetEdges", PyvtkGraph_GetEdges, METH_VARARGS,
   (char*)"V.GetEdges(vtkEdgeListIterator)\nC++: virtual void GetEdges(vtkEdgeListIterator *it)\n\nInitializes the edge list iterator to iterate over all edges in\nthe graph. Edges may not be traversed in order of increasing edge\nid. In a distributed graph, this returns edges that are stored\nlocally.\n"},
  {(char*)"GetNumberOfEdges", PyvtkGraph_GetNumberOfEdges, METH_VARARGS,
   (char*)"V.GetNumberOfEdges() -> int\nC++: virtual vtkIdType GetNumberOfEdges()\n\nThe number of edges in the graph. In a distributed graph, this\nreturns the number of edges stored locally.\n"},
  {(char*)"GetVertices", PyvtkGraph_GetVertices, METH_VARARGS,
   (char*)"V.GetVertices(vtkVertexListIterator)\nC++: virtual void GetVertices(vtkVertexListIterator *it)\n\nInitializes the vertex list iterator to iterate over all vertices\nin the graph. In a distributed graph, the iterator traverses all\nlocal vertices.\n"},
  {(char*)"GetNumberOfVertices", PyvtkGraph_GetNumberOfVertices, METH_VARARGS,
   (char*)"V.GetNumberOfVertices() -> int\nC++: virtual vtkIdType GetNumberOfVertices()\n\nThe number of vertices in the graph. In a distributed graph,\nreturns the number of local vertices in the graph.\n"},
  {(char*)"SetDistributedGraphHelper", PyvtkGraph_SetDistributedGraphHelper, METH_VARARGS,
   (char*)"V.SetDistributedGraphHelper(vtkDistributedGraphHelper)\nC++: void SetDistributedGraphHelper(\n    vtkDistributedGraphHelper *helper)\n\nSets the distributed graph helper of this graph, turning it into\na distributed graph. This operation can only be executed on an\nempty graph.\n"},
  {(char*)"GetDistributedGraphHelper", PyvtkGraph_GetDistributedGraphHelper, METH_VARARGS,
   (char*)"V.GetDistributedGraphHelper() -> vtkDistributedGraphHelper\nC++: vtkDistributedGraphHelper *GetDistributedGraphHelper()\n\nRetrieves the distributed graph helper for this graph\n"},
  {(char*)"FindVertex", PyvtkGraph_FindVertex, METH_VARARGS,
   (char*)"V.FindVertex(vtkVariant) -> int\nC++: vtkIdType FindVertex(const vtkVariant &pedigreeID)\n\nRetrieve the vertex with the given pedigree ID. If successful,\nreturns the ID of the vertex. Otherwise, either the vertex data\ndoes not have a pedigree ID array or there is no vertex with the\ngiven pedigree ID, so this function returns -1. If the graph is a\ndistributed graph, this method will return the Distributed-ID of\nthe vertex.\n"},
  {(char*)"ShallowCopy", PyvtkGraph_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *obj)\n\nShallow copies the data object into this graph. If it is an\nincompatible graph, reports an error.\n"},
  {(char*)"DeepCopy", PyvtkGraph_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *obj)\n\nDeep copies the data object into this graph. If it is an\nincompatible graph, reports an error.\n"},
  {(char*)"CopyStructure", PyvtkGraph_CopyStructure, METH_VARARGS,
   (char*)"V.CopyStructure(vtkGraph)\nC++: virtual void CopyStructure(vtkGraph *g)\n\nDoes a shallow copy of the topological information, but not the\nassociated attributes.\n"},
  {(char*)"CheckedShallowCopy", PyvtkGraph_CheckedShallowCopy, METH_VARARGS,
   (char*)"V.CheckedShallowCopy(vtkGraph) -> bool\nC++: virtual bool CheckedShallowCopy(vtkGraph *g)\n\nPerforms the same operation as ShallowCopy(), but instead of\nreporting an error for an incompatible graph, returns false.\n"},
  {(char*)"CheckedDeepCopy", PyvtkGraph_CheckedDeepCopy, METH_VARARGS,
   (char*)"V.CheckedDeepCopy(vtkGraph) -> bool\nC++: virtual bool CheckedDeepCopy(vtkGraph *g)\n\nPerforms the same operation as DeepCopy(), but instead of\nreporting an error for an incompatible graph, returns false.\n"},
  {(char*)"Squeeze", PyvtkGraph_Squeeze, METH_VARARGS,
   (char*)"V.Squeeze()\nC++: virtual void Squeeze()\n\nReclaim unused memory.\n"},
  {(char*)"GetData", PyvtkGraph_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkGraph\nC++: static vtkGraph *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkGraph\nC++: static vtkGraph *GetData(vtkInformationVector *v, int i=0)\n\nRetrieve a graph from an information vector.\n"},
  {(char*)"ReorderOutVertices", PyvtkGraph_ReorderOutVertices, METH_VARARGS,
   (char*)"V.ReorderOutVertices(int, vtkIdTypeArray)\nC++: void ReorderOutVertices(vtkIdType v,\n    vtkIdTypeArray *vertices)\n\nReorder the outgoing vertices of a vertex. The vertex list must\nhave the same elements as the current out edge list, just in a\ndifferent order. This method does not change the topology of the\ngraph. In a distributed graph, the vertex v must be local.\n"},
  {(char*)"IsSameStructure", PyvtkGraph_IsSameStructure, METH_VARARGS,
   (char*)"V.IsSameStructure(vtkGraph) -> bool\nC++: bool IsSameStructure(vtkGraph *other)\n\nReturns true if both graphs point to the same adjacency\nstructure. Can be used to test the copy-on-write feature of the\ngraph.\n"},
  {(char*)"GetSourceVertex", PyvtkGraph_GetSourceVertex, METH_VARARGS,
   (char*)"V.GetSourceVertex(int) -> int\nC++: vtkIdType GetSourceVertex(vtkIdType e)\n\nRetrieve the source and target vertices for an edge id. NOTE: The\nfirst time this is called, the graph will build a mapping array\nfrom edge id to source/target that is the same size as the number\nof edges in the graph. If you have access to a vtkOutEdgeType,\nvtkInEdgeType, vtkEdgeType, or vtkGraphEdge, you should directly\nuse these structures to look up the source or target instead of\nthis method.\n"},
  {(char*)"GetTargetVertex", PyvtkGraph_GetTargetVertex, METH_VARARGS,
   (char*)"V.GetTargetVertex(int) -> int\nC++: vtkIdType GetTargetVertex(vtkIdType e)\n\nRetrieve the source and target vertices for an edge id. NOTE: The\nfirst time this is called, the graph will build a mapping array\nfrom edge id to source/target that is the same size as the number\nof edges in the graph. If you have access to a vtkOutEdgeType,\nvtkInEdgeType, vtkEdgeType, or vtkGraphEdge, you should directly\nuse these structures to look up the source or target instead of\nthis method.\n"},
  {(char*)"SetEdgePoints", PyvtkGraph_SetEdgePoints, METH_VARARGS,
   (char*)"V.SetEdgePoints(int, int, [float, ...])\nC++: void SetEdgePoints(vtkIdType e, vtkIdType npts, double *pts)\n\nGet/Set the internal edge control points associated with each\nedge. The size of the pts array is 3*npts, and holds the x,y,z\nlocation of each edge control point.\n"},
  {(char*)"GetNumberOfEdgePoints", PyvtkGraph_GetNumberOfEdgePoints, METH_VARARGS,
   (char*)"V.GetNumberOfEdgePoints(int) -> int\nC++: vtkIdType GetNumberOfEdgePoints(vtkIdType e)\n\nGet the number of edge points associated with an edge.\n"},
  {(char*)"GetEdgePoint", PyvtkGraph_GetEdgePoint, METH_VARARGS,
   (char*)"V.GetEdgePoint(int, int) -> (float, float, float)\nC++: double *GetEdgePoint(vtkIdType e, vtkIdType i)\n\nGet the x,y,z location of a point along edge e.\n"},
  {(char*)"ClearEdgePoints", PyvtkGraph_ClearEdgePoints, METH_VARARGS,
   (char*)"V.ClearEdgePoints(int)\nC++: void ClearEdgePoints(vtkIdType e)\n\nClear all points associated with an edge.\n"},
  {(char*)"SetEdgePoint", PyvtkGraph_SetEdgePoint, METH_VARARGS,
   (char*)"V.SetEdgePoint(int, int, [float, float, float])\nC++: void SetEdgePoint(vtkIdType e, vtkIdType i, double x[3])\nV.SetEdgePoint(int, int, float, float, float)\nC++: void SetEdgePoint(vtkIdType e, vtkIdType i, double x,\n    double y, double z)\n\nSet an x,y,z location of a point along an edge. This assumes\nthere is already a point at location i, and simply overwrites it.\n"},
  {(char*)"AddEdgePoint", PyvtkGraph_AddEdgePoint, METH_VARARGS,
   (char*)"V.AddEdgePoint(int, [float, float, float])\nC++: void AddEdgePoint(vtkIdType e, double x[3])\nV.AddEdgePoint(int, float, float, float)\nC++: void AddEdgePoint(vtkIdType e, double x, double y, double z)\n\nAdds a point to the end of the list of edge points for a certain\nedge.\n"},
  {(char*)"ShallowCopyEdgePoints", PyvtkGraph_ShallowCopyEdgePoints, METH_VARARGS,
   (char*)"V.ShallowCopyEdgePoints(vtkGraph)\nC++: void ShallowCopyEdgePoints(vtkGraph *g)\n\nCopy the internal edge point data from another graph into this\ngraph. Both graphs must have the same number of edges.\n"},
  {(char*)"DeepCopyEdgePoints", PyvtkGraph_DeepCopyEdgePoints, METH_VARARGS,
   (char*)"V.DeepCopyEdgePoints(vtkGraph)\nC++: void DeepCopyEdgePoints(vtkGraph *g)\n\nCopy the internal edge point data from another graph into this\ngraph. Both graphs must have the same number of edges.\n"},
  {(char*)"GetGraphInternals", PyvtkGraph_GetGraphInternals, METH_VARARGS,
   (char*)"V.GetGraphInternals(bool) -> vtkGraphInternals\nC++: vtkGraphInternals *GetGraphInternals(bool modifying)\n\nReturns the internal representation of the graph. If modifying is\ntrue, then the returned vtkGraphInternals object will be unique\nto this vtkGraph object.\n"},
  {(char*)"GetInducedEdges", PyvtkGraph_GetInducedEdges, METH_VARARGS,
   (char*)"V.GetInducedEdges(vtkIdTypeArray, vtkIdTypeArray)\nC++: void GetInducedEdges(vtkIdTypeArray *verts,\n    vtkIdTypeArray *edges)\n\nFills a list of edge indices with the edges contained in the\ninduced subgraph formed by the vertices in the vertex list.\n"},
  {(char*)"GetAttributesAsFieldData", PyvtkGraph_GetAttributesAsFieldData, METH_VARARGS,
   (char*)"V.GetAttributesAsFieldData(int) -> vtkFieldData\nC++: virtual vtkFieldData *GetAttributesAsFieldData(int type)\n\nReturns the attributes of the data object as a vtkFieldData. This\nreturns non-null values in all the same cases as GetAttributes,\nin addition to the case of FIELD, which will return the field\ndata for any vtkDataObject subclass.\n"},
  {(char*)"GetNumberOfElements", PyvtkGraph_GetNumberOfElements, METH_VARARGS,
   (char*)"V.GetNumberOfElements(int) -> int\nC++: virtual vtkIdType GetNumberOfElements(int type)\n\nGet the number of elements for a specific attribute type (VERTEX,\nEDGE, etc.).\n"},
  {(char*)"Dump", PyvtkGraph_Dump, METH_VARARGS,
   (char*)"V.Dump()\nC++: void Dump()\n\nDump the contents of the graph to standard output.\n"},
  {(char*)"GetEdgeId", PyvtkGraph_GetEdgeId, METH_VARARGS,
   (char*)"V.GetEdgeId(int, int) -> int\nC++: vtkIdType GetEdgeId(vtkIdType a, vtkIdType b)\n\nReturns the Id of the edge between vertex a and vertex b. This is\nindependent of directionality of the edge, that is, if edge A->B\nexists or if edge B->A exists, this function will return its Id.\nIf multiple edges exist between a and b, here is no guarantee\nabout which one will be returned. Returns -1 if no edge exists\nbetween a and b.\n"},
  {(char*)"ToDirectedGraph", PyvtkGraph_ToDirectedGraph, METH_VARARGS,
   (char*)"V.ToDirectedGraph(vtkDirectedGraph) -> bool\nC++: bool ToDirectedGraph(vtkDirectedGraph *g)\n\nConvert the graph to a directed graph.\n"},
  {(char*)"ToUndirectedGraph", PyvtkGraph_ToUndirectedGraph, METH_VARARGS,
   (char*)"V.ToUndirectedGraph(vtkUndirectedGraph) -> bool\nC++: bool ToUndirectedGraph(vtkUndirectedGraph *g)\n\nConvert the graph to an undirected graph.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkGraphNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkGraph_Methods,
    "vtkGraph", modulename,
    NULL, NULL,
    PyvtkGraph_Doc(),
    PyVTKClass_vtkDataObjectNew(modulename));
  return cls;
}

const char **PyvtkGraph_Doc()
{
  static const char *docstring[] = {
    "vtkGraph - Base class for graph data types.\n\n",
    "Superclass: vtkDataObject\n\n",
    "vtkGraph is the abstract base class that provides all read-only API\nfor graph data types. A graph consists of a collection of vertices\nand a collection of edges connecting pairs of vertices. The\nvtkDirectedGraph subclass represents a graph whose edges have\ninherent order from source vertex to target vertex, while\nvtkUndirectedGraph is a graph whose edges have no inherent ordering.\n\nGraph vertices ",
    "may be traversed in two ways. In the current\nimplementation, all vertices are assigned consecutive ids starting at\nzero, so they may be traversed in a simple for loop from 0 to\ngraph->GetNumberOfVertices() - 1. You may alternately create a\nvtkVertexListIterator and call graph->GetVertices(it). it->Next()\nwill return the id of the next vertex, while it->HasNext() indicates\nwhether there are more ve",
    "rtices in the graph. This is the preferred\nmethod, since in the future graphs may support filtering or\nsubsetting where the vertex ids may not be contiguous.\n\nGraph edges must be traversed through iterators. To traverse all\nedges in a graph, create an instance of vtkEdgeListIterator and call\ngraph->GetEdges(it). it->Next() returns lightweight vtkEdgeType\nstructures, which contain the public fields",
    " Id, Source and Target. Id\nis the identifier for the edge, which may be used to look up values\nin assiciated edge data arrays. Source and Target store the ids of\nthe source and target vertices of the edge. Note that the edge list\niterator DOES NOT necessarily iterate over edges in order of\nascending id. To traverse edges from wrapper code (Python, Tcl,\nJava), use it->NextGraphEdge() instead of it-",
    ">Next().  This will\nreturn a heavyweight, wrappable vtkGraphEdge object, which has the\nsame fields as vtkEdgeType accessible through getter methods.\n\nTo traverse all edges outgoing from a vertex, create a\nvtkOutEdgeIterator and call graph->GetOutEdges(v, it). it->Next()\nreturns a lightweight vtkOutEdgeType containing the fields Id and\nTarget. The source of the edge is always the vertex that was pa",
    "ssed\nas an argument to GetOutEdges(). Incoming edges may be similarly\ntraversed with vtkInEdgeIterator, which returns vtkInEdgeType\nstructures with Id and Source fields. Both vtkOutEdgeIterator and\nvtkInEdgeIterator also provide the wrapper functions NextGraphEdge()\nwhich return vtkGraphEdge objects.\n\nAn additional iterator, vtkAdjacentVertexIterator can traverse\noutgoing vertices directly, instea",
    "d needing to parse through edges.\nInitialize the iterator by calling graph->GetAdjacentVertices(v, it).\n\nvtkGraph has two instances of vtkDataSetAttributes for associated\nvertex and edge data. It also has a vtkPoints instance which may\nstore x,y,z locations for each vertex. This is populated by filters\nsuch as vtkGraphLayout and vtkAssignCoordinates.\n\nAll graph types share the same implementation,",
    " so the structure of\none may be shared among multiple graphs, even graphs of different\ntypes. Structures from vtkUndirectedGraph and\nvtkMutableUndirectedGraph may be shared directly.  Structures from\nvtkDirectedGraph, vtkMutableDirectedGraph, and vtkTree may be shared\ndirectly with the exception that setting a structure to a tree\nrequires that a \"is a tree\" test passes.\n\nFor graph types that are k",
    "nown to be compatible, calling\nShallowCopy() or DeepCopy() will work as expected.  When the outcome\nof a conversion is unknown (i.e. setting a graph to a tree),\nCheckedShallowCopy() and CheckedDeepCopy() exist which are identical\nto ShallowCopy() and DeepCopy(), except that instead of emitting an\nerror for an incompatible structure, the function returns false. \nThis allows you to programmatically ",
    "check structure compatibility\nwithout causing error messages.\n\nTo construct a graph, use vtkMutableDirectedGraph or\nvtkMutableUndirectedGraph. You may then use CheckedShallowCopy to set\nthe contents of a mutable graph type into one of the non-mutable\ntypes vtkDirectedGraph, vtkUndirectedGraph. To construct a tree, use\nvtkMutableDirectedGraph, with directed edges which point from the\nparent to the ",
    "child, then use CheckedShallowCopy to set the structure\nto a vtkTree.\n\nCaveats:\n\nAll copy operations implement copy-on-write. The structures are\ninitially shared, but if one of the graphs is modified, the structure\nis copied so that to the user they function as if they were deep\ncopied. This means that care must be taken if different threads are\naccessing different graph instances that share the s",
    "ame structure.\nRace conditions may develop if one thread is modifying the graph at\nthe same time that another graph is copying the structure.\n\nVertex pedigree IDs:\n\nThe vertices in a vtkGraph can be associated with pedigree IDs\nthrough GetVertexData()->SetPedigreeIds. In this case, there is a 1-1\nmapping between pedigree Ids and vertices. One can query the vertex\nID based on the pedigree ID using ",
    "FindVertex, add new vertices by\npedigree ID with AddVertex, and add edges based on the pedigree IDs\nof the source and target vertices. For example, AddEdge(\"Here\",\n\"There\") will find (or add) vertices with pedigree ID \"Here\" and\n\"There\" and then introduce an edge from \"Here\" to \"There\".\n\nTo configure the vtkGraph with a pedigree ID mapping, create a\nvtkDataArray that will store the pedigree IDs an",
    "d set that array as\nthe pedigree ID array for the vertices via\nGetVertexData()->SetPedigreeIds().\n\nDistributed graphs:\n\nvtkGraph instances can be distributed across multiple machines, to\nallow the construction and manipulation of graphs larger than a\nsingle machine could handle. A distributed graph will typically be\ndistributed across many different nodes within a cluster, using the\nMessage Passin",
    "g Interface (MPI) to allow those cluster nodes to\ncommunicate.\n\nAn empty vtkGraph can be made into a distributed graph by attaching\nan instance of a vtkDistributedGraphHelper via the\nSetDistributedGraphHelper() method. To determine whether a graph is\ndistributed or not, call GetDistributedGraphHelper() and check\nwhether the result is non-NULL. For a distributed graph, the number\nof processors acro",
    "ss which the graph is distributed can be retrieved\nby extracting the value for the DATA_NUMBER_OF_PIECES key in the\nvtkInformation object (retrieved by GetInformation()) associated with\nthe graph. Similarly, the value corresponding to the\nDATA_PIECE_NUMBER key of the vtkInformation object describes which\npiece of the data this graph instance provides.\n\nDistributed graphs behave somewhat differentl",
    "y from non-distributed\ngraphs, and will require special care. In a distributed graph, each\nof the processors will contain a subset of the vertices in the graph.\nThat subset of vertices can be accessed via the vtkVertexListIterator\nproduced by GetVertices(). GetNumberOfVertices(), therefore, returns\nthe number of vertices stored locally: it does not account for\nvertices stored on other processors. ",
    "A vertex (or edge) is identified\nby both the rank of its owning processor and by its index within that\nprocessor, both of which are encoded within the vtkIdType value that\ndescribes that vertex (or edge). The owning processor is a value\nbetween 0 and P-1, where P is the number of processors across which\nthe vtkGraph has been distributed. The local index will be a value\nbetween 0 and GetNumberOfVer",
    "tices(), for vertices, or\nGetNumberOfEdges(), for edges, and can be used to access the local\nparts of distributed data arrays. When given a vtkIdType identifying\na vertex, one can determine the owner of the vertex with\nvtkDistributedGraphHelper::GetVertexOwner() and the local index with\nvtkDistributedGraphHelper::GetVertexIndex(). With edges, the\nappropriate methods are vtkDistributedGraphHelper::",
    "GetEdgeOwner() and\nvtkDistributedGraphHelper::GetEdgeIndex(), respectively. To construct\na vtkIdType representing either a vertex or edge given only its owner\nand local index, use vtkDistributedGraphHelper::MakeDistributedId().\n\nThe edges in a distributed graph are always stored on the processors\nthat own the vertices named by the edge. For example, given a\ndirected edge (u, v), the edge will be s",
    "tored in the out-edges list\nfor vertex u on the processor that owns u, and in the in-edges list\nfor vertex v on the processor that owns v. This \"row-wise\"\ndecomposition of the graph means that, for any vertex that is local\nto a processor, that processor can look at all of the incoming and\noutgoing edges of the graph. Processors cannot, however, access the\nincoming or outgoing edge lists of vertex ",
    "owned by other processors.\nVertices owned by other processors will not be encountered when\ntraversing the vertex list via GetVertices(), but may be encountered\nby traversing the in- and out-edge lists of local vertices or the\nedge list.\n\nDistributed graphs can have pedigree IDs for the vertices in the same\nway that non-distributed graphs can. In this case, the distribution\nof the vertices in the g",
    "raph is based on pedigree ID. For example, a\nvertex with the pedigree ID \"Here\" might land on processor 0 while a\nvertex pedigree ID \"There\" would end up on processor 3. By default,\nthe pedigree IDs themselves are hashed to give a random (and,\nhopefully, even) distribution of the vertices. However, one can\nprovide a different vertex distribution function by calling\nvtkDistributedGraphHelper::SetVe",
    "rtexPedigreeIdDistribution.  Once a\ndistributed graph has pedigree IDs, the no-argument AddVertex()\nmethod can no longer be used. Additionally, once a vertex has a\npedigree ID, that pedigree ID should not be changed unless the user\ncan guarantee that the vertex distribution will still map that vertex\nto the same processor where it already resides.\n\nSee Also:\n\nvtkDirectedGraph vtkUndirectedGraph vt",
    "kMutableDirectedGraph\nvtkMutableUndirectedGraph vtkTree vtkDistributedGraphHelper\n\nThanks:\n\nThanks to Brian Wylie, Timothy Shead, Ken Moreland of Sandia National\nLaboratories and Douglas Gregor of Indiana University for designing\nthese classes.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGraph(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkEdgeBase_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEdgeBase", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkOutEdgeType_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOutEdgeType", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkInEdgeType_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInEdgeType", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkEdgeType_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEdgeType", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkGraphNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGraph", o) != 0)
    {
    Py_DECREF(o);
    }

}

