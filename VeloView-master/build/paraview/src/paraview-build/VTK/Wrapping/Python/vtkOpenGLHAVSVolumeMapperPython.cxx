// python wrapper for vtkOpenGLHAVSVolumeMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLHAVSVolumeMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLHAVSVolumeMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLHAVSVolumeMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkHAVSVolumeMapperNew
extern "C" { PyObject *PyVTKClass_vtkHAVSVolumeMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkHAVSVolumeMapperNew
#endif

static const char **PyvtkOpenGLHAVSVolumeMapper_Doc();


static PyObject *
PyvtkOpenGLHAVSVolumeMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHAVSVolumeMapper *op = static_cast<vtkOpenGLHAVSVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLHAVSVolumeMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLHAVSVolumeMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHAVSVolumeMapper *op = static_cast<vtkOpenGLHAVSVolumeMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLHAVSVolumeMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLHAVSVolumeMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHAVSVolumeMapper *op = static_cast<vtkOpenGLHAVSVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLHAVSVolumeMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLHAVSVolumeMapper::NewInstance());

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
PyvtkOpenGLHAVSVolumeMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLHAVSVolumeMapper *tempr = vtkOpenGLHAVSVolumeMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLHAVSVolumeMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHAVSVolumeMapper *op = static_cast<vtkOpenGLHAVSVolumeMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkOpenGLHAVSVolumeMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLHAVSVolumeMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHAVSVolumeMapper *op = static_cast<vtkOpenGLHAVSVolumeMapper *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkOpenGLHAVSVolumeMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLHAVSVolumeMapper_SetGPUDataStructures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGPUDataStructures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHAVSVolumeMapper *op = static_cast<vtkOpenGLHAVSVolumeMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGPUDataStructures(temp0);
      }
    else
      {
      op->vtkOpenGLHAVSVolumeMapper::SetGPUDataStructures(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLHAVSVolumeMapper_SupportedByHardware(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportedByHardware");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHAVSVolumeMapper *op = static_cast<vtkOpenGLHAVSVolumeMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    bool tempr = (ap.IsBound() ?
      op->SupportedByHardware(temp0) :
      op->vtkOpenGLHAVSVolumeMapper::SupportedByHardware(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLHAVSVolumeMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLHAVSVolumeMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLHAVSVolumeMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLHAVSVolumeMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLHAVSVolumeMapper\nC++: vtkOpenGLHAVSVolumeMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLHAVSVolumeMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLHAVSVolumeMapper\nC++: vtkOpenGLHAVSVolumeMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkOpenGLHAVSVolumeMapper_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: virtual void Render(vtkRenderer *ren, vtkVolume *vol)\n\nRender the volume\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOpenGLHAVSVolumeMapper_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\n"},
  {(char*)"SetGPUDataStructures", PyvtkOpenGLHAVSVolumeMapper_SetGPUDataStructures, METH_VARARGS,
   (char*)"V.SetGPUDataStructures(bool)\nC++: virtual void SetGPUDataStructures(bool)\n\nSet/get whether or not the data structures should be stored on\nthe GPU for better peformance.\n"},
  {(char*)"SupportedByHardware", PyvtkOpenGLHAVSVolumeMapper_SupportedByHardware, METH_VARARGS,
   (char*)"V.SupportedByHardware(vtkRenderer) -> bool\nC++: virtual bool SupportedByHardware(vtkRenderer *r)\n\nCheck hardware support for the HAVS algorithm.  Necessary\nfeatures include off-screen rendering, 32-bit fp textures,\nmultiple render targets, and framebuffer objects. Subclasses must\noverride this method to indicate if supported by Hardware.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLHAVSVolumeMapper_StaticNew()
{
  return vtkOpenGLHAVSVolumeMapper::New();
}

PyObject *PyVTKClass_vtkOpenGLHAVSVolumeMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLHAVSVolumeMapper_StaticNew,
    PyvtkOpenGLHAVSVolumeMapper_Methods,
    "vtkOpenGLHAVSVolumeMapper", modulename,
    NULL, NULL,
    PyvtkOpenGLHAVSVolumeMapper_Doc(),
    PyVTKClass_vtkHAVSVolumeMapperNew(modulename));
  return cls;
}

const char **PyvtkOpenGLHAVSVolumeMapper_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLHAVSVolumeMapper - Hardware-Assisted\n\n",
    "Superclass: vtkHAVSVolumeMapper\n\n",
    "vtkHAVSVolumeMapper is a class that renders polygonal data\n(represented as an unstructured grid) using the Hardware-Assisted\nVisibility Sorting (HAVS) algorithm.  First the unique triangles are\nsorted in object space, then they are sorted in image space using a\nfixed size A-buffer implemented on the GPU called the k-buffer.  The\nHAVS algorithm excels at rendering large datasets quickly.  The\ntrade",
    "-off is that the algorithm may produce some rendering artifacts\ndue to an insufficient k size (currently 2 or 6 is supported) or\nread/write race conditions.\n\nA built in level-of-detail (LOD) approach samples the geometry using\none of two heuristics (field or area).  If LOD is enabled, the amount\nof geometry that is sampled and rendered changes dynamically to stay\nwithin the target frame rate.  The",
    " field sampling method generally\nworks best for datasets with cell sizes that don't vary much in size.\n On the contrary, the area sampling approach gives better\napproximations when the volume has a lot of variation in cell size.\n\nThe HAVS algorithm uses several advanced features on graphics\nhardware. The k-buffer sorting network is implemented using\nframebuffer objects (FBOs) with multiple render ",
    "targets (MRTs). \nTherefore, only cards that support these features can run the\nalgorithm (at least an ATI 9500 or an NVidia NV40 (6600)).\n\nNotes:\n\nSeveral issues had to be addressed to get the HAVS algorithm working\nwithin the vtk framework.  These additions forced the code to forsake\nspeed for the sake of compliance and robustness.\n\nThe HAVS algorithm operates on the triangles that compose the me",
    "sh.\nTherefore, before rendering, the cells are decomposed into unique\ntriangles and stored on the GPU for efficient rendering.  The use of\nGPU data structures is only recommended if the entire geometry can\nfit in graphics memory.  Otherwise this feature should be disabled.\n\nAnother new feature is the handling of mixed data types (eg.,\npolygonal data with volume data).  This is handled by reading t",
    "he\nz-buffer from the current window and copying it into the framebuffer\nobject for off-screen rendering.  The depth test is then enabled so\nthat the volume only appears over the opaque geometry.  Finally, the\nresults of the off-screen rendering are blended into the framebuffer\nas a transparent, view-aligned texture.\n\nInstead of using a preintegrated 3D lookup table for storing the ray\nintegral, th",
    "is implementation uses partial pre-integration.  This\nimproves the performance of dynamic transfer function updates by\navoiding a costly preprocess of the table.\n\nA final change to the original algorithm is the handling of\nnon-convexities in the mesh.  Due to read/write hazards that may\ncreate undesired artifacts with non-convexities when using a\ninside/outside toggle in the fragment program, anot",
    "her approach was\nemployed.  To handle non-convexities, the fragment shader determines\nif a ray-gap is larger than the max cell size and kill the fragment\nif so.  This approximation performs rather well in practice but may\nmiss small non-convexities.\n\nFor more information on the HAVS algorithm see:\n\n\n \"Hardware-Assisted Visibility Sorting for Unstructured Volume\nRendering\" by S. P. Callahan, M. Iki",
    "ts, J. L. D. Comba, and C. T.\nSilva, IEEE Transactions of Visualization and Computer Graphics;\nMay/June 2005.\n\nFor more information on the Level-of-Detail algorithm, see:\n\n\"Interactive Rendering of Large Unstructured Grids Using Dynamic\nLevel-of-Detail\" by S. P. Callahan, J. L. D. Comba, P. Shirley, and\nC. T. Silva, Proceedings of IEEE Visualization '05, Oct. 2005.\n\nAcknowledgments:\n\nThis code was",
    " developed by Steven P. Callahan under the supervision\nof Prof. Claudio T. Silva. The code also contains contributions from\nMilan Ikits, Linh Ha, Huy T. Vo, Carlos E. Scheidegger, and Joao L.\nD. Comba.\n\nThe work was supported by grants, contracts, and gifts from the\nNational Science Foundation, the Department of Energy, the Army\nResearch Office, and IBM.\n\nThe port of HAVS to VTK and ParaView has b",
    "een primarily supported by\nSandia National Labs.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLHAVSVolumeMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLHAVSVolumeMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLHAVSVolumeMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

