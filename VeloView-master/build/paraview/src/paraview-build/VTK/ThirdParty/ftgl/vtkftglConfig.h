#ifndef _ftglConfig_h
#define _ftglConfig_h

/*
  Do not use the STL (portability issue)
*/
#define VTKFTGL_DO_NOT_USE_STL
#if defined(VTKFTGL_DO_NOT_USE_STL) && !defined(FTGL_DO_NOT_USE_STL)
#define FTGL_DO_NOT_USE_STL
#endif

/*
  Support Mangle Mesa
*/
/* #undef FTGL_SUPPORT_MANGLE_MESA */

/*
  Do not use texture fonts (crash on Type1 fonts)
*/
#define VTKFTGL_DO_NOT_USE_TEXTURE_FONT
#if defined(VTKFTGL_DO_NOT_USE_TEXTURE_FONT) && !defined(FTGL_DO_NOT_USE_TEXTURE_FONT)
#define FTGL_DO_NOT_USE_TEXTURE_FONT
#endif

/*
  Do not use vector fonts
*/
#define VTKFTGL_DO_NOT_USE_VECTORISER
#if defined(VTKFTGL_DO_NOT_USE_VECTORISER) && !defined(FTGL_DO_NOT_USE_VECTORISER)
#define FTGL_DO_NOT_USE_VECTORISER
#endif

/* 
   Static or shared lib flags
*/
#define VTKFTGL_DLL
#if defined(VTKFTGL_DLL) && !defined(FTGL_LIBRARY)
#define FTGL_LIBRARY
#endif
/* #undef VTKFTGL_STATIC */
#if defined(VTKFTGL_STATIC) && !defined(FTGL_LIBRARY_STATIC)
#define FTGL_LIBRARY_STATIC
#endif

/* 
   Win32 flags
*/
/* #undef VTKFTGL_WIN32_FLAGS */
#if defined(VTKFTGL_WIN32_FLAGS)
#if !defined(USE_STD_NAMESPACE)
#define USE_STD_NAMESPACE
#endif
#if !defined(WIN32)
#define WIN32
#endif
#endif

/* 
   HPUX workaround
*/
/* #undef VTKFTGL_HPUX_SOURCE */
#if defined(VTKFTGL_HPUX_SOURCE) && !defined(_HPUX_SOURCE)
#define _HPUX_SOURCE
#endif

#endif
