// python wrapper for vtkGL2PSUtilities
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGL2PSUtilities.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGL2PSUtilities(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGL2PSUtilitiesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGL2PSUtilities_Doc();


static PyObject *
PyvtkGL2PSUtilities_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSUtilities *op = static_cast<vtkGL2PSUtilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGL2PSUtilities::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSUtilities *op = static_cast<vtkGL2PSUtilities *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGL2PSUtilities::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSUtilities *op = static_cast<vtkGL2PSUtilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGL2PSUtilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGL2PSUtilities::NewInstance());

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
PyvtkGL2PSUtilities_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGL2PSUtilities *tempr = vtkGL2PSUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSUtilities_DrawString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DrawString");

  char *temp0 = NULL;
  vtkTextProperty *temp1 = NULL;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkGL2PSUtilities::DrawString(temp0, temp1, temp2);

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
PyvtkGL2PSUtilities_TextPropertyToPSFontName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TextPropertyToPSFontName");

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    const char *tempr = vtkGL2PSUtilities::TextPropertyToPSFontName(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSUtilities_TextPropertyToGL2PSAlignment(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TextPropertyToGL2PSAlignment");

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    int tempr = vtkGL2PSUtilities::TextPropertyToGL2PSAlignment(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSUtilities_GetRenderWindow(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRenderWindow");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = vtkGL2PSUtilities::GetRenderWindow();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSUtilities_Draw3DPath(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Draw3DPath");

  vtkPath *temp0 = NULL;
  vtkMatrix4x4 *temp1 = NULL;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  unsigned char temp3[4];
  unsigned char save3[4];
  const int size3 = 4;
  char *temp4 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkPath") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    vtkGL2PSUtilities::Draw3DPath(temp0, temp1, temp2, temp3, temp4);

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

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSUtilities_DrawPath(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DrawPath");

  vtkPath *temp0 = NULL;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[2];
  double save2[2];
  const int size2 = 2;
  unsigned char temp3[4];
  unsigned char save3[4];
  const int size3 = 4;
  double temp4[2];
  double save4[2];
  const int size4 = 2;
  double temp5 = 0.0;
  float temp6 = -1;
  char *temp7 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(5, 8) &&
      ap.GetVTKObject(temp0, "vtkPath") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp7)))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    vtkGL2PSUtilities::DrawPath(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

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

  return result;
}


static PyObject *
PyvtkGL2PSUtilities_GetTextAsPath(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTextAsPath");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    bool tempr = vtkGL2PSUtilities::GetTextAsPath();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSUtilities_GetPointSizeFactor(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPointSizeFactor");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    float tempr = vtkGL2PSUtilities::GetPointSizeFactor();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSUtilities_GetLineWidthFactor(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLineWidthFactor");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    float tempr = vtkGL2PSUtilities::GetLineWidthFactor();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGL2PSUtilities_Methods[] = {
  {(char*)"GetClassName", PyvtkGL2PSUtilities_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGL2PSUtilities_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGL2PSUtilities_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGL2PSUtilities\nC++: vtkGL2PSUtilities *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGL2PSUtilities_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGL2PSUtilities\nC++: vtkGL2PSUtilities *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DrawString", PyvtkGL2PSUtilities_DrawString, METH_VARARGS | METH_STATIC,
   (char*)"V.DrawString(string, vtkTextProperty, [float, float, float])\nC++: static void DrawString(const char *str,\n    vtkTextProperty *tprop, double pos[3])\n\nFormat the text in str according to tprop and instruct GL2PS to\ndraw it at world coordinate pos.\n"},
  {(char*)"TextPropertyToPSFontName", PyvtkGL2PSUtilities_TextPropertyToPSFontName, METH_VARARGS | METH_STATIC,
   (char*)"V.TextPropertyToPSFontName(vtkTextProperty) -> string\nC++: static const char *TextPropertyToPSFontName(\n    vtkTextProperty *tprop)\n\nTranslate the tprop's fontname into a Postscript font name.\n"},
  {(char*)"TextPropertyToGL2PSAlignment", PyvtkGL2PSUtilities_TextPropertyToGL2PSAlignment, METH_VARARGS | METH_STATIC,
   (char*)"V.TextPropertyToGL2PSAlignment(vtkTextProperty) -> int\nC++: static int TextPropertyToGL2PSAlignment(\n    vtkTextProperty *tprop)\n\nConvert the alignment hint in tprop to a GL2PS text alignment\nconstant.\n"},
  {(char*)"GetRenderWindow", PyvtkGL2PSUtilities_GetRenderWindow, METH_VARARGS | METH_STATIC,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: static vtkRenderWindow *GetRenderWindow()\n\nGet the current RenderWindow that is being exported\n"},
  {(char*)"Draw3DPath", PyvtkGL2PSUtilities_Draw3DPath, METH_VARARGS | METH_STATIC,
   (char*)"V.Draw3DPath(vtkPath, vtkMatrix4x4, [float, float, float], [int,\n    int, int, int], string)\nC++: static void Draw3DPath(vtkPath *path,\n    vtkMatrix4x4 *actorMatrix, double rasterPos[3],\n    unsigned char actorColor[4], const char *label=NULL)\n\nTransform the path using the actor's matrix and current GL state,\nthen draw it to GL2PS. The label string is inserted into the\nGL2PS output at the beginning of the path specification as a\ncomment on supported backends.\n"},
  {(char*)"DrawPath", PyvtkGL2PSUtilities_DrawPath, METH_VARARGS | METH_STATIC,
   (char*)"V.DrawPath(vtkPath, [float, float, float], [float, float], [int,\n    int, int, int], [float, float], float, float, string)\nC++: static void DrawPath(vtkPath *path, double rasterPos[3],\n    double windowPos[2], unsigned char rgba[4],\n    double scale[2]=NULL, double rotateAngle=0.0,\n    float strokeWidth=-1, const char *label=NULL)\n\nGenerate PS, EPS, or SVG markup from a vtkPath object, and then\ninject it into the output using the gl2psSpecial command. The\npath is translated uniformly in the scene by windowPos. It is\nscaled by scale and rotated counter-clockwise by rotateAngle. The\nrasterPos is in world coordinates and determines clipping and\ndepth. If scale is NULL, no scaling is done. If strokeWidth is\npositive, the path will be stroked with the indicated width. If\nzero or negative, the path will be filled (default). The label\nstring is inserted into the GL2PS output at the beginning of the\npath specification as a comment on supported backends.\n"},
  {(char*)"GetTextAsPath", PyvtkGL2PSUtilities_GetTextAsPath, METH_VARARGS | METH_STATIC,
   (char*)"V.GetTextAsPath() -> bool\nC++: static bool GetTextAsPath()\n\nGet whether all text will be exported as paths.\n"},
  {(char*)"GetPointSizeFactor", PyvtkGL2PSUtilities_GetPointSizeFactor, METH_VARARGS | METH_STATIC,
   (char*)"V.GetPointSizeFactor() -> float\nC++: static float GetPointSizeFactor()\n\nGet a scaling factor for the point size or line width used by\nGL2PS. Default value: 5/7.\n"},
  {(char*)"GetLineWidthFactor", PyvtkGL2PSUtilities_GetLineWidthFactor, METH_VARARGS | METH_STATIC,
   (char*)"V.GetLineWidthFactor() -> float\nC++: static float GetLineWidthFactor()\n\nGet a scaling factor for the point size or line width used by\nGL2PS. Default value: 5/7.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGL2PSUtilities_StaticNew()
{
  return vtkGL2PSUtilities::New();
}

PyObject *PyVTKClass_vtkGL2PSUtilitiesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGL2PSUtilities_StaticNew,
    PyvtkGL2PSUtilities_Methods,
    "vtkGL2PSUtilities", modulename,
    NULL, NULL,
    PyvtkGL2PSUtilities_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGL2PSUtilities_Doc()
{
  static const char *docstring[] = {
    "vtkGL2PSUtilities - Helper functions for using GL2PS within VTK\n\n",
    "Superclass: vtkObject\n\n",
    "vtkGL2PSUtilities implements some static helper function that\nsimplify calling GL2PS routines on VTK objects. This class is meant\nfor internal use only and is subject to change.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGL2PSUtilities(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGL2PSUtilitiesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGL2PSUtilities", o) != 0)
    {
    Py_DECREF(o);
    }

}

