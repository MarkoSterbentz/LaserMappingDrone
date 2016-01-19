// python wrapper for vtkTimePointUtility
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTimePointUtility.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTimePointUtility(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTimePointUtilityNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTimePointUtility_Doc();


static PyObject *
PyvtkTimePointUtility_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimePointUtility *op = static_cast<vtkTimePointUtility *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTimePointUtility::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimePointUtility *op = static_cast<vtkTimePointUtility *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTimePointUtility::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimePointUtility *op = static_cast<vtkTimePointUtility *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTimePointUtility *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTimePointUtility::NewInstance());

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
PyvtkTimePointUtility_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTimePointUtility *tempr = vtkTimePointUtility::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_DateToTimePoint(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DateToTimePoint");

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    unsigned long long tempr = vtkTimePointUtility::DateToTimePoint(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_TimeToTimePoint(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TimeToTimePoint");

  int temp0;
  int temp1;
  int temp2;
  int temp3 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    unsigned long long tempr = vtkTimePointUtility::TimeToTimePoint(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_DateTimeToTimePoint(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DateTimeToTimePoint");

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
    {
    unsigned long long tempr = vtkTimePointUtility::DateTimeToTimePoint(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetDate(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDate");

  unsigned long long temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkTimePointUtility::GetDate(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetTime(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTime");

  unsigned long long temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    vtkTimePointUtility::GetTime(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetDateTime(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDateTime");

  unsigned long long temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  int temp7;
  PyObject *result = NULL;

  if (ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
    {
    vtkTimePointUtility::GetDateTime(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(6, temp6);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(7, temp7);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetYear(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetYear");

  unsigned long long temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkTimePointUtility::GetYear(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetMonth(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMonth");

  unsigned long long temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkTimePointUtility::GetMonth(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetDay(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDay");

  unsigned long long temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkTimePointUtility::GetDay(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetHour(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetHour");

  unsigned long long temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkTimePointUtility::GetHour(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetMinute(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMinute");

  unsigned long long temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkTimePointUtility::GetMinute(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetSecond(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSecond");

  unsigned long long temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkTimePointUtility::GetSecond(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetMillisecond(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMillisecond");

  unsigned long long temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkTimePointUtility::GetMillisecond(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_ISO8601ToTimePoint(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ISO8601ToTimePoint");

  char *temp0 = NULL;
  bool *temp1 = NULL;
  bool *save1 = NULL;
  bool small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  size1 = ap.GetArgSize(1);
  temp1 = small1;
  if (size1 > 4)
    {
    temp1 = new bool[2*size1];
    }
  save1 = &temp1[size1];

  if (ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetArray(temp1, size1)))
    {
    ap.SaveArray(temp1, save1, size1);

    unsigned long long tempr = vtkTimePointUtility::ISO8601ToTimePoint(temp0, temp1);

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_TimePointToISO8601(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TimePointToISO8601");

  unsigned long long temp0;
  int temp1 = vtkTimePointUtility::ISO8601_DATETIME_MILLIS;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    const char *tempr = vtkTimePointUtility::TimePointToISO8601(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTimePointUtility_Methods[] = {
  {(char*)"GetClassName", PyvtkTimePointUtility_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTimePointUtility_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTimePointUtility_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTimePointUtility\nC++: vtkTimePointUtility *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTimePointUtility_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTimePointUtility\nC++: vtkTimePointUtility *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DateToTimePoint", PyvtkTimePointUtility_DateToTimePoint, METH_VARARGS | METH_STATIC,
   (char*)"V.DateToTimePoint(int, int, int) -> int\nC++: static vtkTypeUInt64 DateToTimePoint(int year, int month,\n    int day)\n\nReturn the time point for 12:00am on a specified day.\n"},
  {(char*)"TimeToTimePoint", PyvtkTimePointUtility_TimeToTimePoint, METH_VARARGS | METH_STATIC,
   (char*)"V.TimeToTimePoint(int, int, int, int) -> int\nC++: static vtkTypeUInt64 TimeToTimePoint(int hour, int minute,\n    int second, int millis=0)\n\nReturn the time point for a time of day (the number of\nmilliseconds from 12:00am. The hour should be from 0-23.\n"},
  {(char*)"DateTimeToTimePoint", PyvtkTimePointUtility_DateTimeToTimePoint, METH_VARARGS | METH_STATIC,
   (char*)"V.DateTimeToTimePoint(int, int, int, int, int, int, int) -> int\nC++: static vtkTypeUInt64 DateTimeToTimePoint(int year, int month,\n     int day, int hour, int minute, int sec, int millis=0)\n\nReturn the time point for a date and time.\n"},
  {(char*)"GetDate", PyvtkTimePointUtility_GetDate, METH_VARARGS | METH_STATIC,
   (char*)"V.GetDate(int, int, int, int)\nC++: static void GetDate(vtkTypeUInt64 time, int &year,\n    int &month, int &day)\n\nRetrieve the year, month, and day of a time point. Everything but\nthe first argument are output parameters.\n"},
  {(char*)"GetTime", PyvtkTimePointUtility_GetTime, METH_VARARGS | METH_STATIC,
   (char*)"V.GetTime(int, int, int, int, int)\nC++: static void GetTime(vtkTypeUInt64 time, int &hour,\n    int &minute, int &second, int &millis)\n\nRetrieve the hour, minute, second, and milliseconds of a time\npoint. Everything but the first argument are output parameters.\n"},
  {(char*)"GetDateTime", PyvtkTimePointUtility_GetDateTime, METH_VARARGS | METH_STATIC,
   (char*)"V.GetDateTime(int, int, int, int, int, int, int, int)\nC++: static void GetDateTime(vtkTypeUInt64 time, int &year,\n    int &month, int &day, int &hour, int &minute, int &second,\n    int &millis)\n\nRetrieve the date and time of a time point. Everything but the\nfirst argument are output parameters.\n"},
  {(char*)"GetYear", PyvtkTimePointUtility_GetYear, METH_VARARGS | METH_STATIC,
   (char*)"V.GetYear(int) -> int\nC++: static int GetYear(vtkTypeUInt64 time)\n\nRetrieve the year from a time point.\n"},
  {(char*)"GetMonth", PyvtkTimePointUtility_GetMonth, METH_VARARGS | METH_STATIC,
   (char*)"V.GetMonth(int) -> int\nC++: static int GetMonth(vtkTypeUInt64 time)\n\nRetrieve the month from a time point.\n"},
  {(char*)"GetDay", PyvtkTimePointUtility_GetDay, METH_VARARGS | METH_STATIC,
   (char*)"V.GetDay(int) -> int\nC++: static int GetDay(vtkTypeUInt64 time)\n\nRetrieve the day of the month from a time point.\n"},
  {(char*)"GetHour", PyvtkTimePointUtility_GetHour, METH_VARARGS | METH_STATIC,
   (char*)"V.GetHour(int) -> int\nC++: static int GetHour(vtkTypeUInt64 time)\n\nRetrieve the hour of the day from the time point.\n"},
  {(char*)"GetMinute", PyvtkTimePointUtility_GetMinute, METH_VARARGS | METH_STATIC,
   (char*)"V.GetMinute(int) -> int\nC++: static int GetMinute(vtkTypeUInt64 time)\n\nRetrieve the number of minutes from the start of the last hour.\n"},
  {(char*)"GetSecond", PyvtkTimePointUtility_GetSecond, METH_VARARGS | METH_STATIC,
   (char*)"V.GetSecond(int) -> int\nC++: static int GetSecond(vtkTypeUInt64 time)\n\nRetrieve the number of seconds from the start of the last minute.\n"},
  {(char*)"GetMillisecond", PyvtkTimePointUtility_GetMillisecond, METH_VARARGS | METH_STATIC,
   (char*)"V.GetMillisecond(int) -> int\nC++: static int GetMillisecond(vtkTypeUInt64 time)\n\nRetrieve the milliseconds from the start of the last second.\n"},
  {(char*)"ISO8601ToTimePoint", PyvtkTimePointUtility_ISO8601ToTimePoint, METH_VARARGS | METH_STATIC,
   (char*)"V.ISO8601ToTimePoint(string, [bool, ...]) -> int\nC++: static vtkTypeUInt64 ISO8601ToTimePoint(const char *str,\n    bool *ok=NULL)\n\nConverts a ISO8601 string into a VTK timepoint. The string must\nfollow one of the ISO8601 formats described in ToISO8601.  To\ncheck for a valid format, pass a bool* as the second argument. \nThe value will be set to true if the string was parsed\nsuccessfully, false otherwise.\n"},
  {(char*)"TimePointToISO8601", PyvtkTimePointUtility_TimePointToISO8601, METH_VARARGS | METH_STATIC,
   (char*)"V.TimePointToISO8601(int, int) -> string\nC++: static const char *TimePointToISO8601(vtkTypeUInt64,\n    int format=vtkTimePointUtility::ISO8601_DATETIME_MILLIS)\n\nConverts a VTK timepoint into one of the following ISO8601\nformats.  The default format is ISO8601_DATETIME_MILLIS.\n\n<PRE> Type                      Format / Example 0\nISO8601_DATETIME_MILLIS [YYYY]-[MM]-[DD]T[hh]:[mm]:[ss].[SSS]\n                          2006-01-02T03:04:05.678 1\nISO8601_DATETIME        [YYYY]-[MM]-[DD]T[hh]:[mm]:[ss]\n                          2006-01-02T03:04:05 2 ISO8601_DATE     \n      [YYYY]-[MM]-[DD]\n                          2006-01-02 3 ISO8601_TIME_MILLIS    \n[hh]:[mm]:[ss].[SSS]\n                          03:04:05.678 4 ISO8601_TIME           \n[hh]:[mm]:[ss]\n                          03:04:05 </PRE>\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTimePointUtility_StaticNew()
{
  return vtkTimePointUtility::New();
}

PyObject *PyVTKClass_vtkTimePointUtilityNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTimePointUtility_StaticNew,
    PyvtkTimePointUtility_Methods,
    "vtkTimePointUtility", modulename,
    NULL, NULL,
    PyvtkTimePointUtility_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 5; c++)
      {
      static const struct { const char *name; int value; }
        constants[5] = {
          { "ISO8601_DATETIME_MILLIS", vtkTimePointUtility::ISO8601_DATETIME_MILLIS },
          { "ISO8601_DATETIME", vtkTimePointUtility::ISO8601_DATETIME },
          { "ISO8601_DATE", vtkTimePointUtility::ISO8601_DATE },
          { "ISO8601_TIME_MILLIS", vtkTimePointUtility::ISO8601_TIME_MILLIS },
          { "ISO8601_TIME", vtkTimePointUtility::ISO8601_TIME },
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

const char **PyvtkTimePointUtility_Doc()
{
  static const char *docstring[] = {
    "vtkTimePointUtility - performs common time operations\n\n",
    "Superclass: vtkObject\n\n",
    "vtkTimePointUtility is provides methods to perform common time\noperations.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTimePointUtility(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTimePointUtilityNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTimePointUtility", o) != 0)
    {
    Py_DECREF(o);
    }

}

