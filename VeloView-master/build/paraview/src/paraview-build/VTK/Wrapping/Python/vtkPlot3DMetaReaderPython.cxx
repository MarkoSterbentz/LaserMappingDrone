// python wrapper for vtkPlot3DMetaReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPlot3DMetaReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPlot3DMetaReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPlot3DMetaReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkPlot3DMetaReader_Doc();


static PyObject *
PyvtkPlot3DMetaReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3DMetaReader *op = static_cast<vtkPlot3DMetaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPlot3DMetaReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot3DMetaReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3DMetaReader *op = static_cast<vtkPlot3DMetaReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlot3DMetaReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot3DMetaReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3DMetaReader *op = static_cast<vtkPlot3DMetaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlot3DMetaReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlot3DMetaReader::NewInstance());

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
PyvtkPlot3DMetaReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPlot3DMetaReader *tempr = vtkPlot3DMetaReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot3DMetaReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3DMetaReader *op = static_cast<vtkPlot3DMetaReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkPlot3DMetaReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot3DMetaReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3DMetaReader *op = static_cast<vtkPlot3DMetaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkPlot3DMetaReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPlot3DMetaReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPlot3DMetaReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlot3DMetaReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlot3DMetaReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPlot3DMetaReader\nC++: vtkPlot3DMetaReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlot3DMetaReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlot3DMetaReader\nC++: vtkPlot3DMetaReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkPlot3DMetaReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet/Get the meta PLOT3D filename. See the class documentation for\nformat details.\n"},
  {(char*)"GetFileName", PyvtkPlot3DMetaReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet/Get the meta PLOT3D filename. See the class documentation for\nformat details.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlot3DMetaReader_StaticNew()
{
  return vtkPlot3DMetaReader::New();
}

PyObject *PyVTKClass_vtkPlot3DMetaReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlot3DMetaReader_StaticNew,
    PyvtkPlot3DMetaReader_Methods,
    "vtkPlot3DMetaReader", modulename,
    NULL, NULL,
    PyvtkPlot3DMetaReader_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPlot3DMetaReader_Doc()
{
  static const char *docstring[] = {
    "vtkPlot3DMetaReader - reads meta-files points to PLOT3D files\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "The main goal of this reader is to make it easy to read PLOT3D files,\nspecifically time series of PLOT3D files. PLOT3D files can take many\ndifferent forms based on their content. Unfortunately, it is not a\nself-describing format therefore the user needs to pass information\nabout the contents of the file to the reader. Normally, this is done\nby setting a number of member variables. The goal of this",
    " reader is\nto provide a simple format that enable the writer of the PLOT3D file\nto describe its settings as well as group a number of files as a time\nseries. Note that for binary files, the auto-detect-format option,\nwhich is on by default negates the need to specify most other option.\nHowever, this reader is still very useful when trying to read file\nseries even for binary files. The format for t",
    "his meta-file is very\nsimple and is based on JSON (there is no need to know anything about\nJSON to understand this format). Below is an example with comments\n(followed by //) that describe the format. Note that the PLOT3D file\nnames are relative to the location of the meta-file unless they start\nwith a leading /.\n\n\n {\n \"auto-detect-format\" : true // Tells the reader to try to figure out the format",
    " automatically. Only works\n                             // with binary file. This is on by default, negating the need for most other\n                             // options for binary files (format, byte-order, precision, multi-grid,\n                             // blanking, 2D).\n \"format\" : \"binary\",  // Is this a binary or ascii file, values : binary, ascii\n \"byte-order\" : \"big\", // Byte order f",
    "or binary files, values : little, big (denoting little or big endian)\n \"precision\" : 32,     // Precision of floating point values, can be 32 or 64 (bits)\n \"multi-grid\" : false, // Is this a multi-grid file, values: true, false\n \"language\" : \"C\",     // Which language was this file written in, values : C, fortran. This is\n                       // used to determine if an binary PLOT3D file contain",
    "s byte counts, used by\n                       // Fortran IO routines.\n \"blanking\" : false,   // Does this file have blanking information (iblanks), values : true, false\n \"2D\" : false,         // Is this a 2D dataset, values : true, false\n \"R\" : 8.314,          // The value of the gas constant, default is 1.0. Set this according to the dimensions you use\n \"gamma\" : 1.4,        // Ratio of specific ",
    "heats. Default is 1.4.\n \"functions\": [ 110, 200, 201 ],  // Additional derived values to calculate. This is an array of integers formatted\n                                  // as [ value, value, value, ...]\n \"filenames\" : [     // List of xyz (geometry) and q (value) file names along with the time values.\n                     // This is an array which contains items in the format:\n                ",
    "     // {\"time\" : values, \"xyz\" : \"xyz file name\", \"q\" : \"q file name\", \"function\" : \"function file name\"}\n                     // Note that q and function are optional. Also, you can repeat the same file name for xyz or q\n                     // if they don't change over time. The reader will not read files unnecessarily.\n  { \"time\" : 3.5, \"xyz\" : \"combxyz.bin\", \"q\" : \"combq.1.bin\", \"function\" : ",
    "\"combf.1.bin\" },\n  { \"time\" : 4.5, \"xyz\" : \"combxyz.bin\", \"q\" : \"combq.2.bin\", \"function\" : \"combf.2.bin\" }\n ]\n }\n \n\nThis reader leverages vtkMultiBlockPLOT3DReader to do the actual\nreading so you may want to refer to the documenation of\nvtkMultiBlockPLOT3DReader about the details of some of these\nparameters including the function numbers for derived value\ncalculation.\n\nSee Also:\n\nvtkMultiBlockPLO",
    "T3DReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlot3DMetaReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlot3DMetaReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlot3DMetaReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

