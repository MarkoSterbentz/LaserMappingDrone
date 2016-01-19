// python wrapper for vtkBase64Utilities
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkBase64Utilities.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBase64Utilities(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBase64UtilitiesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkBase64Utilities_Doc();


static PyObject *
PyvtkBase64Utilities_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64Utilities *op = static_cast<vtkBase64Utilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBase64Utilities::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBase64Utilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64Utilities *op = static_cast<vtkBase64Utilities *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBase64Utilities::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBase64Utilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64Utilities *op = static_cast<vtkBase64Utilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBase64Utilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBase64Utilities::NewInstance());

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
PyvtkBase64Utilities_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBase64Utilities *tempr = vtkBase64Utilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBase64Utilities_EncodeTriplet(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EncodeTriplet");

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char *temp3 = NULL;
  unsigned char *save3 = NULL;
  unsigned char small3[8];
  int size3 = 0;
  unsigned char *temp4 = NULL;
  unsigned char *save4 = NULL;
  unsigned char small4[8];
  int size4 = 0;
  unsigned char *temp5 = NULL;
  unsigned char *save5 = NULL;
  unsigned char small5[8];
  int size5 = 0;
  unsigned char *temp6 = NULL;
  unsigned char *save6 = NULL;
  unsigned char small6[8];
  int size6 = 0;
  PyObject *result = NULL;

  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new unsigned char[2*size3];
    }
  save3 = &temp3[size3];
  size4 = ap.GetArgSize(4);
  temp4 = small4;
  if (size4 > 4)
    {
    temp4 = new unsigned char[2*size4];
    }
  save4 = &temp4[size4];
  size5 = ap.GetArgSize(5);
  temp5 = small5;
  if (size5 > 4)
    {
    temp5 = new unsigned char[2*size5];
    }
  save5 = &temp5[size5];
  size6 = ap.GetArgSize(6);
  temp6 = small6;
  if (size6 > 4)
    {
    temp6 = new unsigned char[2*size6];
    }
  save6 = &temp6[size6];

  if (ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);
    ap.SaveArray(temp6, save6, size6);

    vtkBase64Utilities::EncodeTriplet(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

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

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (ap.ArrayHasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(6, temp6, size6);
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
  if (temp5 && temp5 != small5)
    {
    delete [] temp5;
    }
  if (temp6 && temp6 != small6)
    {
    delete [] temp6;
    }

  return result;
}


static PyObject *
PyvtkBase64Utilities_EncodePair(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EncodePair");

  unsigned char temp0;
  unsigned char temp1;
  unsigned char *temp2 = NULL;
  unsigned char *save2 = NULL;
  unsigned char small2[8];
  int size2 = 0;
  unsigned char *temp3 = NULL;
  unsigned char *save3 = NULL;
  unsigned char small3[8];
  int size3 = 0;
  unsigned char *temp4 = NULL;
  unsigned char *save4 = NULL;
  unsigned char small4[8];
  int size4 = 0;
  unsigned char *temp5 = NULL;
  unsigned char *save5 = NULL;
  unsigned char small5[8];
  int size5 = 0;
  PyObject *result = NULL;

  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new unsigned char[2*size2];
    }
  save2 = &temp2[size2];
  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new unsigned char[2*size3];
    }
  save3 = &temp3[size3];
  size4 = ap.GetArgSize(4);
  temp4 = small4;
  if (size4 > 4)
    {
    temp4 = new unsigned char[2*size4];
    }
  save4 = &temp4[size4];
  size5 = ap.GetArgSize(5);
  temp5 = small5;
  if (size5 > 4)
    {
    temp5 = new unsigned char[2*size5];
    }
  save5 = &temp5[size5];

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    vtkBase64Utilities::EncodePair(temp0, temp1, temp2, temp3, temp4, temp5);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
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

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
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
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }
  if (temp5 && temp5 != small5)
    {
    delete [] temp5;
    }

  return result;
}


static PyObject *
PyvtkBase64Utilities_EncodeSingle(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EncodeSingle");

  unsigned char temp0;
  unsigned char *temp1 = NULL;
  unsigned char *save1 = NULL;
  unsigned char small1[8];
  int size1 = 0;
  unsigned char *temp2 = NULL;
  unsigned char *save2 = NULL;
  unsigned char small2[8];
  int size2 = 0;
  unsigned char *temp3 = NULL;
  unsigned char *save3 = NULL;
  unsigned char small3[8];
  int size3 = 0;
  unsigned char *temp4 = NULL;
  unsigned char *save4 = NULL;
  unsigned char small4[8];
  int size4 = 0;
  PyObject *result = NULL;

  size1 = ap.GetArgSize(1);
  temp1 = small1;
  if (size1 > 4)
    {
    temp1 = new unsigned char[2*size1];
    }
  save1 = &temp1[size1];
  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new unsigned char[2*size2];
    }
  save2 = &temp2[size2];
  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new unsigned char[2*size3];
    }
  save3 = &temp3[size3];
  size4 = ap.GetArgSize(4);
  temp4 = small4;
  if (size4 > 4)
    {
    temp4 = new unsigned char[2*size4];
    }
  save4 = &temp4[size4];

  if (ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    vtkBase64Utilities::EncodeSingle(temp0, temp1, temp2, temp3, temp4);

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
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
PyvtkBase64Utilities_Encode(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Encode");

  unsigned char *temp0 = NULL;
  unsigned char small0[4];
  int size0 = 0;
  unsigned long temp1;
  unsigned char *temp2 = NULL;
  unsigned char *save2 = NULL;
  unsigned char small2[8];
  int size2 = 0;
  int temp3 = 0;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new unsigned char[size0];
    }
  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new unsigned char[2*size2];
    }
  save2 = &temp2[size2];

  if (ap.CheckArgCount(3, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    ap.SaveArray(temp2, save2, size2);

    unsigned long tempr = vtkBase64Utilities::Encode(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
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
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkBase64Utilities_DecodeTriplet(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DecodeTriplet");

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3;
  unsigned char *temp4 = NULL;
  unsigned char *save4 = NULL;
  unsigned char small4[8];
  int size4 = 0;
  unsigned char *temp5 = NULL;
  unsigned char *save5 = NULL;
  unsigned char small5[8];
  int size5 = 0;
  unsigned char *temp6 = NULL;
  unsigned char *save6 = NULL;
  unsigned char small6[8];
  int size6 = 0;
  PyObject *result = NULL;

  size4 = ap.GetArgSize(4);
  temp4 = small4;
  if (size4 > 4)
    {
    temp4 = new unsigned char[2*size4];
    }
  save4 = &temp4[size4];
  size5 = ap.GetArgSize(5);
  temp5 = small5;
  if (size5 > 4)
    {
    temp5 = new unsigned char[2*size5];
    }
  save5 = &temp5[size5];
  size6 = ap.GetArgSize(6);
  temp6 = small6;
  if (size6 > 4)
    {
    temp6 = new unsigned char[2*size6];
    }
  save6 = &temp6[size6];

  if (ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
    {
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);
    ap.SaveArray(temp6, save6, size6);

    int tempr = vtkBase64Utilities::DecodeTriplet(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (ap.ArrayHasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(6, temp6, size6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }
  if (temp5 && temp5 != small5)
    {
    delete [] temp5;
    }
  if (temp6 && temp6 != small6)
    {
    delete [] temp6;
    }

  return result;
}


static PyObject *
PyvtkBase64Utilities_Decode(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Decode");

  unsigned char *temp0 = NULL;
  unsigned char small0[4];
  int size0 = 0;
  unsigned long temp1;
  unsigned char *temp2 = NULL;
  unsigned char *save2 = NULL;
  unsigned char small2[8];
  int size2 = 0;
  unsigned long temp3 = 0;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new unsigned char[size0];
    }
  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new unsigned char[2*size2];
    }
  save2 = &temp2[size2];

  if (ap.CheckArgCount(3, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    ap.SaveArray(temp2, save2, size2);

    unsigned long tempr = vtkBase64Utilities::Decode(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
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
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyMethodDef PyvtkBase64Utilities_Methods[] = {
  {(char*)"GetClassName", PyvtkBase64Utilities_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBase64Utilities_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBase64Utilities_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBase64Utilities\nC++: vtkBase64Utilities *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBase64Utilities_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBase64Utilities\nC++: vtkBase64Utilities *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"EncodeTriplet", PyvtkBase64Utilities_EncodeTriplet, METH_VARARGS | METH_STATIC,
   (char*)"V.EncodeTriplet(int, int, int, [int, ...], [int, ...], [int, ...],\n     [int, ...])\nC++: static void EncodeTriplet(unsigned char i0, unsigned char i1,\n     unsigned char i2, unsigned char *o0, unsigned char *o1,\n    unsigned char *o2, unsigned char *o3)\n\nEncode 3 bytes into 4 bytes\n"},
  {(char*)"EncodePair", PyvtkBase64Utilities_EncodePair, METH_VARARGS | METH_STATIC,
   (char*)"V.EncodePair(int, int, [int, ...], [int, ...], [int, ...], [int,\n    ...])\nC++: static void EncodePair(unsigned char i0, unsigned char i1,\n    unsigned char *o0, unsigned char *o1, unsigned char *o2,\n    unsigned char *o3)\n\nEncode 2 bytes into 4 bytes\n"},
  {(char*)"EncodeSingle", PyvtkBase64Utilities_EncodeSingle, METH_VARARGS | METH_STATIC,
   (char*)"V.EncodeSingle(int, [int, ...], [int, ...], [int, ...], [int,\n    ...])\nC++: static void EncodeSingle(unsigned char i0, unsigned char *o0,\n     unsigned char *o1, unsigned char *o2, unsigned char *o3)\n\nEncode 1 byte into 4 bytes\n"},
  {(char*)"Encode", PyvtkBase64Utilities_Encode, METH_VARARGS | METH_STATIC,
   (char*)"V.Encode((int, ...), int, [int, ...], int) -> int\nC++: static unsigned long Encode(const unsigned char *input,\n    unsigned long length, unsigned char *output, int mark_end=0)\n\nEncode 'length' bytes from the input buffer and store the encoded\nstream into the output buffer. Return the length of the encoded\nstream. Note that the output buffer must be allocated by the\ncaller (length * 1.5 should be a safe estimate). If 'mark_end' is\ntrue than an extra set of 4 bytes is added to the end of the\nstream if the input is a multiple of 3 bytes. These bytes are\ninvalid chars and therefore they will stop the decoder thus\nenabling the caller to decode a stream without actually knowing\nhow much data to expect (if the input is not a multiple of 3\nbytes then the extra padding needed to complete the encode 4\nbytes will stop the decoding anyway).\n"},
  {(char*)"DecodeTriplet", PyvtkBase64Utilities_DecodeTriplet, METH_VARARGS | METH_STATIC,
   (char*)"V.DecodeTriplet(int, int, int, int, [int, ...], [int, ...], [int,\n    ...]) -> int\nC++: static int DecodeTriplet(unsigned char i0, unsigned char i1,\n    unsigned char i2, unsigned char i3, unsigned char *o0,\n    unsigned char *o1, unsigned char *o2)\n\nDecode 4 bytes into 3 bytes.\n"},
  {(char*)"Decode", PyvtkBase64Utilities_Decode, METH_VARARGS | METH_STATIC,
   (char*)"V.Decode((int, ...), int, [int, ...], int) -> int\nC++: static unsigned long Decode(const unsigned char *input,\n    unsigned long length, unsigned char *output,\n    unsigned long max_input_length=0)\n\nDecode bytes from the input buffer and store the decoded stream\ninto the output buffer until 'length' bytes have been decoded.\nReturn the real length of the decoded stream (which should be\nequal to 'length'). Note that the output buffer must be allocated\nby the caller. If 'max_input_length' is not null, then it\nspecifies the number of encoded bytes that should be at most read\nfrom the input buffer. In that case the 'length' parameter is\nignored. This enables the caller to decode a stream without\nactually knowing how much decoded data to expect (of course, the\nbuffer must be large enough).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBase64Utilities_StaticNew()
{
  return vtkBase64Utilities::New();
}

PyObject *PyVTKClass_vtkBase64UtilitiesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBase64Utilities_StaticNew,
    PyvtkBase64Utilities_Methods,
    "vtkBase64Utilities", modulename,
    NULL, NULL,
    PyvtkBase64Utilities_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkBase64Utilities_Doc()
{
  static const char *docstring[] = {
    "vtkBase64Utilities - base64 encode and decode utilities.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkBase64Utilities implements base64 encoding and decoding.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBase64Utilities(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBase64UtilitiesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBase64Utilities", o) != 0)
    {
    Py_DECREF(o);
    }

}

