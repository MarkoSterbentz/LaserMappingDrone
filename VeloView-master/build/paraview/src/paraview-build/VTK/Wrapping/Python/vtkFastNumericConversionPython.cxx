// python wrapper for vtkFastNumericConversion
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkFastNumericConversion.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkFastNumericConversion(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkFastNumericConversionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkFastNumericConversion_Doc();


static PyObject *
PyvtkFastNumericConversion_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastNumericConversion *op = static_cast<vtkFastNumericConversion *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkFastNumericConversion::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFastNumericConversion_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastNumericConversion *op = static_cast<vtkFastNumericConversion *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFastNumericConversion::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFastNumericConversion_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastNumericConversion *op = static_cast<vtkFastNumericConversion *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFastNumericConversion *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFastNumericConversion::NewInstance());

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
PyvtkFastNumericConversion_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkFastNumericConversion *tempr = vtkFastNumericConversion::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFastNumericConversion_TestQuickFloor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TestQuickFloor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastNumericConversion *op = static_cast<vtkFastNumericConversion *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->TestQuickFloor(temp0) :
      op->vtkFastNumericConversion::TestQuickFloor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFastNumericConversion_TestSafeFloor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TestSafeFloor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastNumericConversion *op = static_cast<vtkFastNumericConversion *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->TestSafeFloor(temp0) :
      op->vtkFastNumericConversion::TestSafeFloor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFastNumericConversion_TestRound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TestRound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastNumericConversion *op = static_cast<vtkFastNumericConversion *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->TestRound(temp0) :
      op->vtkFastNumericConversion::TestRound(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFastNumericConversion_TestConvertFixedPointIntPart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TestConvertFixedPointIntPart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastNumericConversion *op = static_cast<vtkFastNumericConversion *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->TestConvertFixedPointIntPart(temp0) :
      op->vtkFastNumericConversion::TestConvertFixedPointIntPart(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFastNumericConversion_TestConvertFixedPointFracPart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TestConvertFixedPointFracPart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastNumericConversion *op = static_cast<vtkFastNumericConversion *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->TestConvertFixedPointFracPart(temp0) :
      op->vtkFastNumericConversion::TestConvertFixedPointFracPart(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFastNumericConversion_RoundingTieBreaker(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RoundingTieBreaker");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    double tempr = vtkFastNumericConversion::RoundingTieBreaker();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFastNumericConversion_SetReservedFracBits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReservedFracBits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastNumericConversion *op = static_cast<vtkFastNumericConversion *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReservedFracBits(temp0);
      }
    else
      {
      op->vtkFastNumericConversion::SetReservedFracBits(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFastNumericConversion_QuickFloor(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuickFloor");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkFastNumericConversion::QuickFloor(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFastNumericConversion_SafeFloor(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeFloor");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkFastNumericConversion::SafeFloor(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFastNumericConversion_Round(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Round");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkFastNumericConversion::Round(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFastNumericConversion_ConvertFixedPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertFixedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastNumericConversion *op = static_cast<vtkFastNumericConversion *>(vp);

  double temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->ConvertFixedPoint(temp0, temp1) :
      op->vtkFastNumericConversion::ConvertFixedPoint(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkFastNumericConversion_Methods[] = {
  {(char*)"GetClassName", PyvtkFastNumericConversion_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFastNumericConversion_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFastNumericConversion_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkFastNumericConversion\nC++: vtkFastNumericConversion *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFastNumericConversion_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFastNumericConversion\nC++: vtkFastNumericConversion *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"TestQuickFloor", PyvtkFastNumericConversion_TestQuickFloor, METH_VARARGS,
   (char*)"V.TestQuickFloor(float) -> int\nC++: int TestQuickFloor(double val)\n\n"},
  {(char*)"TestSafeFloor", PyvtkFastNumericConversion_TestSafeFloor, METH_VARARGS,
   (char*)"V.TestSafeFloor(float) -> int\nC++: int TestSafeFloor(double val)\n\n"},
  {(char*)"TestRound", PyvtkFastNumericConversion_TestRound, METH_VARARGS,
   (char*)"V.TestRound(float) -> int\nC++: int TestRound(double val)\n\n"},
  {(char*)"TestConvertFixedPointIntPart", PyvtkFastNumericConversion_TestConvertFixedPointIntPart, METH_VARARGS,
   (char*)"V.TestConvertFixedPointIntPart(float) -> int\nC++: int TestConvertFixedPointIntPart(double val)\n\n"},
  {(char*)"TestConvertFixedPointFracPart", PyvtkFastNumericConversion_TestConvertFixedPointFracPart, METH_VARARGS,
   (char*)"V.TestConvertFixedPointFracPart(float) -> int\nC++: int TestConvertFixedPointFracPart(double val)\n\n"},
  {(char*)"RoundingTieBreaker", PyvtkFastNumericConversion_RoundingTieBreaker, METH_VARARGS | METH_STATIC,
   (char*)"V.RoundingTieBreaker() -> float\nC++: static double RoundingTieBreaker()\n\nSmall amount to use as a rounding tie-breaker to prevent\nround-to-nearest-and-even mode from flooring-down odd numbered\nintegers. But number to nudge by depends on number of bits\nmantissa in our floating point representation minus number of\nmantissa bits in the range of signed ints we need to handle. In\norder to ensure that flooring-down doesn't happen even for very\nlarge odd-integer values, the number of bits used to represent\nthe tie-breaker (i.e. to the right of the binary-point), plus the\nnumber of bits needed to represent the integer (to the left of\nthe binary point), can not exceeds the number of bits in the\ncurrent precision mode. Thus, in selecting the tie-breaker value,\nwe select the largest number of bits to the right of the binary\npoint as possible while still maintaining that inequality. Thus,\nextended precision mode allows a larger number of bits to the\nright of the binary point.  This, in turn, implies a smaller\nvalue of the tie-breaker. And a smaller tie-breaker will impose a\ntighter window on the range of values that are erroneously\nrounded-up by a floor operation. Under double precision, a\nQuickFloor of 0.9999998 (six 9's and an 8) correctly yields\n0. A value must be very close to 1.0, in fact, at least as close\n   as 0.9999999 (seven 9's)in order for the tie-breaker to bump\n   it up to 1. Under extended precision, an even smaller\n   tie-breaker can be used. In this mode, a QuickFloor of\n   0.9999999999 (ten 9's) correctly yields 0. A QuickFloor of\n   0.99999999999 (eleven 9's) gets rounded up to 1. Since these\n   spurious round-ups occur only when the given value is\n   virtually indistinguishable from the next higher integer, the\n   results should be acceptable in most situations where\n   performance is of the essence. Make this public so that\n   clients can account for the RoundingTieBreaker if necessary\n   Compute (0.5 ^ (EXT_BITS-INT_BITS)) as a compile-time const ...\n [Truncated]\n"},
  {(char*)"SetReservedFracBits", PyvtkFastNumericConversion_SetReservedFracBits, METH_VARARGS,
   (char*)"V.SetReservedFracBits(int)\nC++: void SetReservedFracBits(int bits)\n\nSet the number of bits reserved for fractional precision that are\nmaintained as part of the flooring process. This number affects\nthe flooring arithmetic. It may be useful if the factional part\nis to be used to index into a lookup table of some sort. However,\nif you are only interested in knowing the fractional remainder\nafter flooring, there doesn't appear to be any advantage to using\nthese bits, either in terms of a lookup table, or by directly\nmultiplying by some unit fraction, over simply subtracting the\nfloored value from the original value. Note that since only 32\nbits are used for the entire fixed point representation,\nincreasing the number of reserved fractional bits reduces the\nrange of integer values that can be floored to.\n"},
  {(char*)"QuickFloor", PyvtkFastNumericConversion_QuickFloor, METH_VARARGS | METH_STATIC,
   (char*)"V.QuickFloor(float) -> int\nC++: static int QuickFloor(const double &val)\n\nPerform a quick flooring of the double-precision floating point\nvalue. The result is sometimes incorrect, but in a way that makes\nit acceptable for most uses. The naive way to implement floor(),\ngiven that the x86 FPU does round() by default, is to define\nfloor(x) as round(x-.5).  This would work fine except for the\nfact that the x86 FPU breaks rounding ties by selecting the even\nnumber. Thus, floor(4.0) = round(3.5) = 4, but floor(3.0) =\nround(2.5) = 2. As a result, subtracting .5 gives the wrong\nanswer for odd integers. So, let's subtract just a TEENSY bit\nless than .5, to swing the odd-integer results up to their corect\nvalue. How teensy? Well, if it's too teensy, it will be\ninsignificant compared to 0.5, and will become equivalent to 0.5.\n And if it's not teensy enough, we'll overshoot, causing results\nlike floor(N-epsilon)==N, for some epsilon. Furthermore, the \"too\nteensy\" problem is exacerbated when trying to floor larger\nnumbers, due to limitations of the representation's dynamic\nrange. See the definition of RoundingTieBreaker() for details.\n"},
  {(char*)"SafeFloor", PyvtkFastNumericConversion_SafeFloor, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeFloor(float) -> int\nC++: static int SafeFloor(const double &val)\n\nPerform a SAFE flooring. Similar to QuickFloor, but modified to\nreturn the correct result always. Use this when it absolutely\npositively needs to be the correct answer all the time, and\nconsidering 0.9999999 as being equal to 1.0 is simply not\nacceptable.  It works similarly to QuickFloor, but it retains one\nextra bit of fixed point precision in the conversion process, so\nthat the problem with QuickFloor affects only an unneeded bit,\nand then it ditches that bit from the resulting integer with a\nright-shift. In other words, it rounds to the nearest one-half,\nchoosing the EVEN one-half (i.e. the integer) as a tie-breaker,\nand then shifting off that half-integer bit. As a result of\nmaintaining one extra bit of fixed point precision in the\nintermediate calculation, the range of integers supported is\nreduced by one bit. Plus, it takes a little longer to execute,\ndue to the final bit shift.\n"},
  {(char*)"Round", PyvtkFastNumericConversion_Round, METH_VARARGS | METH_STATIC,
   (char*)"V.Round(float) -> int\nC++: static int Round(const double &val)\n\nRound to nearest int.  This is pretty sweet in the default\nround-to-nearest FPU mode, since it is generally immaterial how\nties are broken when rounding. I.e., either \"2\" or \"3\" are\nacceptable results for \"Round(2.5)\", but only one of them (the\none naively not chosen without jumping through the hoops in\nQuickFloor and SafeFloor) is the acceptable result for the\nanalogous \"Floor(3)\". Therefore, we don't need to worry at all\nabout adding a teensy but not too teensy tie breaker, or shifting\noff a half-integer bit. This makes it exceptionally fast.\n"},
  {(char*)"ConvertFixedPoint", PyvtkFastNumericConversion_ConvertFixedPoint, METH_VARARGS,
   (char*)"V.ConvertFixedPoint(float, int) -> int\nC++: int ConvertFixedPoint(const double &val, int &fracPart)\n\nConvert the value to a fixed point representation, returning the\ninteger portion as function value, and returning the fractional\npart in the second parameter.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFastNumericConversion_StaticNew()
{
  return vtkFastNumericConversion::New();
}

PyObject *PyVTKClass_vtkFastNumericConversionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFastNumericConversion_StaticNew,
    PyvtkFastNumericConversion_Methods,
    "vtkFastNumericConversion", modulename,
    NULL, NULL,
    PyvtkFastNumericConversion_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkFastNumericConversion_Doc()
{
  static const char *docstring[] = {
    "vtkFastNumericConversion - Enables fast conversion of floating point\nto fixed point\n\n",
    "Superclass: vtkObject\n\n",
    "vtkFastNumericConversion uses a portable (assuming IEEE format)\nmethod for converting single and double precision floating point\nvalues to a fixed point representation. This allows fast integer\nfloor operations on platforms, such as Intel X86, in which CPU\nfloating point conversion algorithms are very slow. It is based on\nthe techniques described in Chris Hecker's article, \"Let's Get to the\n(Float",
    "ing) Point\", in Game Developer Magazine, Feb/Mar 1996, and the\ntechniques described in Michael Herf's website,\nhttp://www.stereopsis.com/FPU.html.  The Hecker article can be found\nat http://www.d6.com/users/checker/pdfs/gdmfp.pdf.  Unfortunately,\neach of these techniques is incomplete, and doesn't convert properly,\nin a way that depends on how many bits are reserved for fixed point\nfractional use,",
    " due to failing to properly account for the default\nround-towards-even rounding mode of the X86. Thus, my implementation\nincorporates some rounding correction that undoes the rounding that\nthe FPU performs during denormalization of the floating point value.\nNote that the rounding affect I'm talking about here is not the\neffect on the fistp instruction, but rather the effect that occurs\nduring the ",
    "denormalization of a value that occurs when adding it to a\nmuch larger value. The bits must be shifted to the right, and when a\n\"1\" bit falls off the edge, the rounding mode determines what happens\nnext, in order to avoid completely \"losing\" the 1-bit. Furthermore,\nmy implementation works on Linux, where the default precision mode is\n64-bit extended precision.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFastNumericConversion(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFastNumericConversionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFastNumericConversion", o) != 0)
    {
    Py_DECREF(o);
    }

}

