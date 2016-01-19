// python wrapper for vtkRectilinearGridConnectivity
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRectilinearGridConnectivity.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRectilinearGridConnectivity(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRectilinearGridConnectivityNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkRectilinearGridConnectivity_Doc();


static PyObject *
PyvtkRectilinearGridConnectivity_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRectilinearGridConnectivity::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRectilinearGridConnectivity::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRectilinearGridConnectivity *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRectilinearGridConnectivity::NewInstance());

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
PyvtkRectilinearGridConnectivity_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRectilinearGridConnectivity *tempr = vtkRectilinearGridConnectivity::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_SetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVolumeFractionSurfaceValue(temp0);
      }
    else
      {
      op->vtkRectilinearGridConnectivity::SetVolumeFractionSurfaceValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_GetVolumeFractionSurfaceValueMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionSurfaceValueMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetVolumeFractionSurfaceValueMinValue() :
      op->vtkRectilinearGridConnectivity::GetVolumeFractionSurfaceValueMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_GetVolumeFractionSurfaceValueMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionSurfaceValueMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetVolumeFractionSurfaceValueMaxValue() :
      op->vtkRectilinearGridConnectivity::GetVolumeFractionSurfaceValueMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_GetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetVolumeFractionSurfaceValue() :
      op->vtkRectilinearGridConnectivity::GetVolumeFractionSurfaceValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_RemoveAllVolumeArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllVolumeArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllVolumeArrayNames();
      }
    else
      {
      op->vtkRectilinearGridConnectivity::RemoveAllVolumeArrayNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_RemoveDoubleVolumeArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDoubleVolumeArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveDoubleVolumeArrayNames();
      }
    else
      {
      op->vtkRectilinearGridConnectivity::RemoveDoubleVolumeArrayNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_RemoveFloatVolumeArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFloatVolumeArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveFloatVolumeArrayNames();
      }
    else
      {
      op->vtkRectilinearGridConnectivity::RemoveFloatVolumeArrayNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_RemoveUnsignedCharVolumeArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveUnsignedCharVolumeArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveUnsignedCharVolumeArrayNames();
      }
    else
      {
      op->vtkRectilinearGridConnectivity::RemoveUnsignedCharVolumeArrayNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_AddDoubleVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDoubleVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddDoubleVolumeArrayName(temp0);
      }
    else
      {
      op->vtkRectilinearGridConnectivity::AddDoubleVolumeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_AddFloatVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFloatVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddFloatVolumeArrayName(temp0);
      }
    else
      {
      op->vtkRectilinearGridConnectivity::AddFloatVolumeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_AddUnsignedCharVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddUnsignedCharVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddUnsignedCharVolumeArrayName(temp0);
      }
    else
      {
      op->vtkRectilinearGridConnectivity::AddUnsignedCharVolumeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_AddVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddVolumeArrayName(temp0);
      }
    else
      {
      op->vtkRectilinearGridConnectivity::AddVolumeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRectilinearGridConnectivity_Methods[] = {
  {(char*)"GetClassName", PyvtkRectilinearGridConnectivity_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRectilinearGridConnectivity_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRectilinearGridConnectivity_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRectilinearGridConnectivity\nC++: vtkRectilinearGridConnectivity *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRectilinearGridConnectivity_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRectilinearGridConnectivity\nC++: vtkRectilinearGridConnectivity *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVolumeFractionSurfaceValue", PyvtkRectilinearGridConnectivity_SetVolumeFractionSurfaceValue, METH_VARARGS,
   (char*)"V.SetVolumeFractionSurfaceValue(float)\nC++: void SetVolumeFractionSurfaceValue(double)\n\nSet / get the volume fraction value [0, 1] used for extracting\nfragments.\n"},
  {(char*)"GetVolumeFractionSurfaceValueMinValue", PyvtkRectilinearGridConnectivity_GetVolumeFractionSurfaceValueMinValue, METH_VARARGS,
   (char*)"V.GetVolumeFractionSurfaceValueMinValue() -> float\nC++: double GetVolumeFractionSurfaceValueMinValue()\n\nSet / get the volume fraction value [0, 1] used for extracting\nfragments.\n"},
  {(char*)"GetVolumeFractionSurfaceValueMaxValue", PyvtkRectilinearGridConnectivity_GetVolumeFractionSurfaceValueMaxValue, METH_VARARGS,
   (char*)"V.GetVolumeFractionSurfaceValueMaxValue() -> float\nC++: double GetVolumeFractionSurfaceValueMaxValue()\n\nSet / get the volume fraction value [0, 1] used for extracting\nfragments.\n"},
  {(char*)"GetVolumeFractionSurfaceValue", PyvtkRectilinearGridConnectivity_GetVolumeFractionSurfaceValue, METH_VARARGS,
   (char*)"V.GetVolumeFractionSurfaceValue() -> float\nC++: double GetVolumeFractionSurfaceValue()\n\nSet / get the volume fraction value [0, 1] used for extracting\nfragments.\n"},
  {(char*)"RemoveAllVolumeArrayNames", PyvtkRectilinearGridConnectivity_RemoveAllVolumeArrayNames, METH_VARARGS,
   (char*)"V.RemoveAllVolumeArrayNames()\nC++: void RemoveAllVolumeArrayNames()\n\nRemove all volume array names.\n"},
  {(char*)"RemoveDoubleVolumeArrayNames", PyvtkRectilinearGridConnectivity_RemoveDoubleVolumeArrayNames, METH_VARARGS,
   (char*)"V.RemoveDoubleVolumeArrayNames()\nC++: void RemoveDoubleVolumeArrayNames()\n\nRemove double-type volume array names.\n"},
  {(char*)"RemoveFloatVolumeArrayNames", PyvtkRectilinearGridConnectivity_RemoveFloatVolumeArrayNames, METH_VARARGS,
   (char*)"V.RemoveFloatVolumeArrayNames()\nC++: void RemoveFloatVolumeArrayNames()\n\nRemove float-type volume array names.\n"},
  {(char*)"RemoveUnsignedCharVolumeArrayNames", PyvtkRectilinearGridConnectivity_RemoveUnsignedCharVolumeArrayNames, METH_VARARGS,
   (char*)"V.RemoveUnsignedCharVolumeArrayNames()\nC++: void RemoveUnsignedCharVolumeArrayNames()\n\nRemove unsigned char-type volume array names.\n"},
  {(char*)"AddDoubleVolumeArrayName", PyvtkRectilinearGridConnectivity_AddDoubleVolumeArrayName, METH_VARARGS,
   (char*)"V.AddDoubleVolumeArrayName(string)\nC++: void AddDoubleVolumeArrayName(char *arayName)\n\nAdd a double-type volume array name to the selection list.\n"},
  {(char*)"AddFloatVolumeArrayName", PyvtkRectilinearGridConnectivity_AddFloatVolumeArrayName, METH_VARARGS,
   (char*)"V.AddFloatVolumeArrayName(string)\nC++: void AddFloatVolumeArrayName(char *arayName)\n\nAdd a float-type volume array name to the selection list.\n"},
  {(char*)"AddUnsignedCharVolumeArrayName", PyvtkRectilinearGridConnectivity_AddUnsignedCharVolumeArrayName, METH_VARARGS,
   (char*)"V.AddUnsignedCharVolumeArrayName(string)\nC++: void AddUnsignedCharVolumeArrayName(char *arayName)\n\nAdd an unsigned char-type volume array name to the selection\nlist.\n"},
  {(char*)"AddVolumeArrayName", PyvtkRectilinearGridConnectivity_AddVolumeArrayName, METH_VARARGS,
   (char*)"V.AddVolumeArrayName(string)\nC++: void AddVolumeArrayName(char *arayName)\n\nAdd a volume array (of any type) name to the selection list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRectilinearGridConnectivity_StaticNew()
{
  return vtkRectilinearGridConnectivity::New();
}

PyObject *PyVTKClass_vtkRectilinearGridConnectivityNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRectilinearGridConnectivity_StaticNew,
    PyvtkRectilinearGridConnectivity_Methods,
    "vtkRectilinearGridConnectivity", modulename,
    NULL, NULL,
    PyvtkRectilinearGridConnectivity_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRectilinearGridConnectivity_Doc()
{
  static const char *docstring[] = {
    "vtkRectilinearGridConnectivity - Extracts material fragments from \n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "Given one or multiple vtkRectilinearGrid datasets with one or\nmultiple\n volume fraction arrays (representing some materials) and possibly\nother\n attributes (like pressure, density, and et al) as the cell data,\nthis\n filter extracts fragments from the dual grids (with the\naforementioned\n values as the point data) based on the (at least one) selected\nfraction\n array(s) in combination with a specifie",
    "d fraction value and\nintegrates\n the attributes (e.g., volume, pressure, density) across the surface\nof\n each fragment. Each material, made up of one or multiple\ndisconnected\n fragments, is exported to the output vtkMultiBlockDataSet as a\nsingle\n block that is a vtkPolyData storing the exterior polygons of the\nfragment\n (s) and the associated cell data attributes as the integrated result\n(of\n the ",
    "fragment) in terms of the volume, pressure, density, and et al.\n\n\n This filter differs from a closely related filter\nvtkGridConnectivity in\n that the former extracts fragments at a sub-cell resolution to\ncreate\n relatively smooth surfaces while the latter works at the cell\ngranularity\n (a whole cell is taken as either inside or outside a fragment) to\ncause\n staircasing artifacts. In fact, an exten",
    "ded 256-entry marching cubes\n LUT is designed for generating cube faces (either truncated by\niso-lines\n or not) in addition to iso-triangles. These two kinds of polygons in\n combination represent the surface(s) of the greater-than-isovalue\nsub-\n volume(s) extracted in a cube.\n\n\n vtkRectilinearGridConnectivity performs fragments extraction using a\n three-level mechanism, i.e., intra-process intra-b",
    "lock,\nintra-process\n inter-block, and inter-process in increasing order, with the\nfragments\n extracted (in the form of polygons stored as a vtkPolyData) at a\nlower\n level submitted to its upper level for further extraction\n(specifically\n by combining multiple disconnected fragments into a single one\nwherever\n possible). Since a fragment is represented by means of its exterior\nfaces\n / polygons, ex",
    "tracting fragments turns into the task of detecting\nand\n removing internal faces (an internal face is the one shared by two\nsub-\n volumes or fragments) in a way of combining the associated\nsub-volumes or\n fragments. For the fragemnts extraction conducted at any level, the\n polygons of the input (e.g., greater-than-isovalue sub-volumes\nresulting\n from marching cubes for the lowest level extraction)",
    " are pushed to a\nface\n hash (that accepts the three smallest point Ids of a polygon:\ntriangle,\n quad, or pentagon) on a per sub-volume or fragment basis. Once the\nface\n hash detects an internal face, an entry is added to an equivalence\nset\n (by means of class vtkEquivalenceSet) to correlate the two fragment\nIds\n that are attached to the two associated sub-volumes or fragments'\npolygons.\n After res",
    "olving the equivalence set, each face that remains in the\nface\n hash (internal faces are masked as invalid) is updated with a\nresolved\n fragment Id. In this way the original complete polygons (triangles,\nquads,\n pentagons) pointed to by the remaining hashed faces with the same\nresolved\n fragment Id are retrieved from the input vtkPolyData and hence\ncombined by\n means of the same fragemnt Id.\n\nSee ",
    "Also:\n\n\n vtkGridConnectivity vtkExtractCTHPart vtkPolyData vtkRectilinearGrid\n vtkMultiBlockDataSetAlgorithm\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRectilinearGridConnectivity(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRectilinearGridConnectivityNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRectilinearGridConnectivity", o) != 0)
    {
    Py_DECREF(o);
    }

}

