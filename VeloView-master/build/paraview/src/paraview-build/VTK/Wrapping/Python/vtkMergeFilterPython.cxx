// python wrapper for vtkMergeFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMergeFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMergeFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMergeFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkMergeFilter_Doc();


static PyObject *
PyvtkMergeFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMergeFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMergeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMergeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMergeFilter::NewInstance());

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
PyvtkMergeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMergeFilter *tempr = vtkMergeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetGeometryInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometryInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetGeometryInputData(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetGeometryInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_GetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetGeometry() :
      op->vtkMergeFilter::GetGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetGeometryConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometryConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetGeometryConnection(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetGeometryConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetScalarsData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetScalarsData(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetScalarsData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_GetScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetScalars() :
      op->vtkMergeFilter::GetScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetScalarsConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetScalarsConnection(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetScalarsConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetVectorsData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorsData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetVectorsData(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetVectorsData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_GetVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetVectors() :
      op->vtkMergeFilter::GetVectors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetVectorsConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorsConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetVectorsConnection(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetVectorsConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetNormalsData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalsData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetNormalsData(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetNormalsData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_GetNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetNormals() :
      op->vtkMergeFilter::GetNormals());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetNormalsConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalsConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetNormalsConnection(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetNormalsConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetTCoordsData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordsData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetTCoordsData(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetTCoordsData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_GetTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetTCoords() :
      op->vtkMergeFilter::GetTCoords());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetTCoordsConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordsConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetTCoordsConnection(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetTCoordsConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetTensorsData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorsData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetTensorsData(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetTensorsData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_GetTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetTensors() :
      op->vtkMergeFilter::GetTensors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetTensorsConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorsConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetTensorsConnection(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetTensorsConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_AddField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  char *temp0 = NULL;
  vtkDataSet *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->AddField(temp0, temp1);
      }
    else
      {
      op->vtkMergeFilter::AddField(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMergeFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkMergeFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMergeFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMergeFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMergeFilter\nC++: vtkMergeFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMergeFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMergeFilter\nC++: vtkMergeFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGeometryInputData", PyvtkMergeFilter_SetGeometryInputData, METH_VARARGS,
   (char*)"V.SetGeometryInputData(vtkDataSet)\nC++: void SetGeometryInputData(vtkDataSet *input)\n\nSpecify object from which to extract geometry information. Note\nthat this method does not connect the pipeline. The algorithm\nwill work on the input data as it is without updating the\nproducer of the data. See SetGeometryConnection for connecting\nthe pipeline.\n"},
  {(char*)"GetGeometry", PyvtkMergeFilter_GetGeometry, METH_VARARGS,
   (char*)"V.GetGeometry() -> vtkDataSet\nC++: vtkDataSet *GetGeometry()\n\nSpecify object from which to extract geometry information. Note\nthat this method does not connect the pipeline. The algorithm\nwill work on the input data as it is without updating the\nproducer of the data. See SetGeometryConnection for connecting\nthe pipeline.\n"},
  {(char*)"SetGeometryConnection", PyvtkMergeFilter_SetGeometryConnection, METH_VARARGS,
   (char*)"V.SetGeometryConnection(vtkAlgorithmOutput)\nC++: void SetGeometryConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify object from which to extract geometry information.\nEquivalent to SetInputConnection(0, algOutput)\n"},
  {(char*)"SetScalarsData", PyvtkMergeFilter_SetScalarsData, METH_VARARGS,
   (char*)"V.SetScalarsData(vtkDataSet)\nC++: void SetScalarsData(vtkDataSet *)\n\nSpecify object from which to extract scalar information. Note\nthat this method does not connect the pipeline. The algorithm\nwill work on the input data as it is without updating the\nproducer of the data. See SetScalarConnection for connecting the\npipeline.\n"},
  {(char*)"GetScalars", PyvtkMergeFilter_GetScalars, METH_VARARGS,
   (char*)"V.GetScalars() -> vtkDataSet\nC++: vtkDataSet *GetScalars()\n\nSpecify object from which to extract scalar information. Note\nthat this method does not connect the pipeline. The algorithm\nwill work on the input data as it is without updating the\nproducer of the data. See SetScalarConnection for connecting the\npipeline.\n"},
  {(char*)"SetScalarsConnection", PyvtkMergeFilter_SetScalarsConnection, METH_VARARGS,
   (char*)"V.SetScalarsConnection(vtkAlgorithmOutput)\nC++: void SetScalarsConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify object from which to extract scalar information.\nEquivalent to SetInputConnection(1, algOutput)\n"},
  {(char*)"SetVectorsData", PyvtkMergeFilter_SetVectorsData, METH_VARARGS,
   (char*)"V.SetVectorsData(vtkDataSet)\nC++: void SetVectorsData(vtkDataSet *)\n\nSet / get the object from which to extract vector information.\nNote that this method does not connect the pipeline. The\nalgorithm will work on the input data as it is without updating\nthe producer of the data. See SetVectorsConnection for connecting\nthe pipeline.\n"},
  {(char*)"GetVectors", PyvtkMergeFilter_GetVectors, METH_VARARGS,
   (char*)"V.GetVectors() -> vtkDataSet\nC++: vtkDataSet *GetVectors()\n\nSet / get the object from which to extract vector information.\nNote that this method does not connect the pipeline. The\nalgorithm will work on the input data as it is without updating\nthe producer of the data. See SetVectorsConnection for connecting\nthe pipeline.\n"},
  {(char*)"SetVectorsConnection", PyvtkMergeFilter_SetVectorsConnection, METH_VARARGS,
   (char*)"V.SetVectorsConnection(vtkAlgorithmOutput)\nC++: void SetVectorsConnection(vtkAlgorithmOutput *algOutput)\n\nSet the connection from which to extract vector information.\nEquivalent to SetInputConnection(2, algOutput)\n"},
  {(char*)"SetNormalsData", PyvtkMergeFilter_SetNormalsData, METH_VARARGS,
   (char*)"V.SetNormalsData(vtkDataSet)\nC++: void SetNormalsData(vtkDataSet *)\n\nSet / get the object from which to extract normal information.\nNote that this method does not connect the pipeline. The\nalgorithm will work on the input data as it is without updating\nthe producer of the data. See SetNormalsConnection for connecting\nthe pipeline.\n"},
  {(char*)"GetNormals", PyvtkMergeFilter_GetNormals, METH_VARARGS,
   (char*)"V.GetNormals() -> vtkDataSet\nC++: vtkDataSet *GetNormals()\n\nSet / get the object from which to extract normal information.\nNote that this method does not connect the pipeline. The\nalgorithm will work on the input data as it is without updating\nthe producer of the data. See SetNormalsConnection for connecting\nthe pipeline.\n"},
  {(char*)"SetNormalsConnection", PyvtkMergeFilter_SetNormalsConnection, METH_VARARGS,
   (char*)"V.SetNormalsConnection(vtkAlgorithmOutput)\nC++: void SetNormalsConnection(vtkAlgorithmOutput *algOutput)\n\nSet  the connection from which to extract normal information.\nEquivalent to SetInputConnection(3, algOutput)\n"},
  {(char*)"SetTCoordsData", PyvtkMergeFilter_SetTCoordsData, METH_VARARGS,
   (char*)"V.SetTCoordsData(vtkDataSet)\nC++: void SetTCoordsData(vtkDataSet *)\n\nSet / get the object from which to extract texture coordinates\ninformation. Note that this method does not connect the pipeline.\nThe algorithm will work on the input data as it is without\nupdating the producer of the data. See SetTCoordsConnection for\nconnecting the pipeline.\n"},
  {(char*)"GetTCoords", PyvtkMergeFilter_GetTCoords, METH_VARARGS,
   (char*)"V.GetTCoords() -> vtkDataSet\nC++: vtkDataSet *GetTCoords()\n\nSet / get the object from which to extract texture coordinates\ninformation. Note that this method does not connect the pipeline.\nThe algorithm will work on the input data as it is without\nupdating the producer of the data. See SetTCoordsConnection for\nconnecting the pipeline.\n"},
  {(char*)"SetTCoordsConnection", PyvtkMergeFilter_SetTCoordsConnection, METH_VARARGS,
   (char*)"V.SetTCoordsConnection(vtkAlgorithmOutput)\nC++: void SetTCoordsConnection(vtkAlgorithmOutput *algOutput)\n\nSet the connection from which to extract texture coordinates\ninformation. Equivalent to SetInputConnection(4, algOutput)\n"},
  {(char*)"SetTensorsData", PyvtkMergeFilter_SetTensorsData, METH_VARARGS,
   (char*)"V.SetTensorsData(vtkDataSet)\nC++: void SetTensorsData(vtkDataSet *)\n\nSet / get the object from which to extract tensor data. Note that\nthis method does not connect the pipeline. The algorithm will\nwork on the input data as it is without updating the producer of\nthe data. See SetTensorsConnection for connecting the pipeline.\n"},
  {(char*)"GetTensors", PyvtkMergeFilter_GetTensors, METH_VARARGS,
   (char*)"V.GetTensors() -> vtkDataSet\nC++: vtkDataSet *GetTensors()\n\nSet / get the object from which to extract tensor data. Note that\nthis method does not connect the pipeline. The algorithm will\nwork on the input data as it is without updating the producer of\nthe data. See SetTensorsConnection for connecting the pipeline.\n"},
  {(char*)"SetTensorsConnection", PyvtkMergeFilter_SetTensorsConnection, METH_VARARGS,
   (char*)"V.SetTensorsConnection(vtkAlgorithmOutput)\nC++: void SetTensorsConnection(vtkAlgorithmOutput *algOutput)\n\nSet the connection from which to extract tensor data. Equivalent\nto SetInputConnection(5, algOutput)\n"},
  {(char*)"AddField", PyvtkMergeFilter_AddField, METH_VARARGS,
   (char*)"V.AddField(string, vtkDataSet)\nC++: void AddField(const char *name, vtkDataSet *input)\n\nSet the object from which to extract a field and the name of the\nfield. Note that this does not create pipeline connectivity.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMergeFilter_StaticNew()
{
  return vtkMergeFilter::New();
}

PyObject *PyVTKClass_vtkMergeFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMergeFilter_StaticNew,
    PyvtkMergeFilter_Methods,
    "vtkMergeFilter", modulename,
    NULL, NULL,
    PyvtkMergeFilter_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMergeFilter_Doc()
{
  static const char *docstring[] = {
    "vtkMergeFilter - extract separate components of data from different\ndatasets\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkMergeFilter is a filter that extracts separate components of data\nfrom different datasets and merges them into a single dataset. The\noutput from this filter is of the same type as the input (i.e.,\nvtkDataSet.) It treats both cell and point data set attributes.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMergeFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMergeFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMergeFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

