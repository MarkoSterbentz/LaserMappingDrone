#ifndef __XdmfConfig_h
#define __XdmfConfig_h

/*
 * This is a support for files on the disk that are larger than 2GB.
 * Since this is the first place that any include should happen, do this here.
 */
#define XDMF_REQUIRE_LARGE_FILE_SUPPORT
#ifdef XDMF_REQUIRE_LARGE_FILE_SUPPORT
#  ifndef _LARGEFILE_SOURCE
#    define _LARGEFILE_SOURCE
#  endif
#  ifndef _LARGEFILE64_SOURCE
#    define _LARGEFILE64_SOURCE
#  endif
#  ifndef _LARGE_FILES
#    define _LARGE_FILES
#  endif
#  ifndef _FILE_OFFSET_BITS
#    define _FILE_OFFSET_BITS 64
#  endif
#endif

/* Eliminate IceConfig.h. Create Definitions Here */

/* #undef CMAKE_WORDS_BIGENDIAN */
#ifdef CMAKE_WORDS_BIGENDIAN
  #define XDMF_WORDS_BIGENDIAN
  #define XDMF_BYTE_ORDER_BIG
#else
  #define XDMF_WORDS_LITTLEENDIAN
  #define XDMF_BYTE_ORDER_LITTLE
#endif

#define XDMF_SYSTEM Linux-3.19.0-32-generic

#define XDMF_VOID_VALID
#ifndef XDMF_VOID_VALID
    /* Force an Error */
#error  XDMF_VOID not defined
#endif
#define XDMF_VOID void

#define XDMF_PTR_VALID
#ifndef XDMF_PTR_VALID
    /* Force an Error */
#error  XDMF_PTR not defined
#endif
#define XDMF_PTR void *

#define XDMF_CHAR_VALID
#ifndef XDMF_CHAR_VALID
    /* Force an Error */
#error  XDMF_CHAR not defined
#endif
#define XDMF_CHAR char

#define XDMF_8_INT_VALID
#ifndef XDMF_8_INT_VALID
    /* Force an Error */
#error  XDMF_8_INT not defined
#endif
#define XDMF_8_INT   char
#define XDMF_8_U_INT   unsigned char

#define XDMF_16_INT_VALID
#ifndef XDMF_16_INT_VALID
    /* Force an Error */
#error  XDMF_16_INT not defined
#endif
#define XDMF_16_INT   short
#define XDMF_16_U_INT   unsigned short

#define XDMF_32_INT_VALID
#ifndef XDMF_32_INT_VALID
    /* Force an Error */
#error  XDMF_32_INT not defined
#endif
#define XDMF_32_INT   int
#define XDMF_32_U_INT  unsigned int
#define XDMF_32_S_INT  int

#define XDMF_32_FLOAT_VALID
#ifndef XDMF_32_FLOAT_VALID
    /* Force an Error */
#error  XDMF_32_FLOAT not defined
#endif
#define XDMF_32_FLOAT float
#define XDMF_FLOAT float

#define XDMF_64_FLOAT_VALID
#ifndef XDMF_64_FLOAT_VALID
    /* Force an Error */
#error  XDMF_64_FLOAT not defined
#endif
#define XDMF_64_FLOAT double
#define XDMF_DOUBLE double


#ifndef SIZEOF___INT64
/* #undef SIZEOF___INT64 */
#endif

#define HAVE_STRTOLL

#ifndef SIZEOF_LONG_LONG
#define SIZEOF_LONG_LONG 8
#endif

#if defined( SIZEOF_LONG_LONG )
# define XDMF_64_INT long long
# define HAVE_64_INT
# define XDMF_have_64_bit_int
#elif defined( SIZEOF___INT64 )
# define XDMF_64_INT __int64
# define HAVE_64_INT
#else
# error "64 bit long not defined"
#endif

#define XDMF_HAVE_64BIT_STREAMS
#ifdef XDMF_HAVE_64BIT_STREAMS
#define XDMF_64BIT_CAST
#else
#define XDMF_64BIT_CAST (long)
#endif


#define XDMF_HAVE_FCNTL
#define XDMF_HAVE_NETINET
/* #undef XDMF_HAVE_MMAN */

#define XDMF_USE_ANSI_STDLIB
/* #undef XDMF_NO_STD_NAMESPACE */
/* #undef XDMF_SYSTEM_HDF5 */

#ifndef SIZEOF___INT64
/* #undef SIZEOF___INT64 */
#endif

#if defined( SIZEOF___INT64 )
# define XDMF_LONG64 __int64
#elif defined( SIZEOF_LONG_LONG )
# define XDMF_LONG64 long long
#else
# error "64 bit long not defined"
#endif

#define BUILD_SHARED_LIBS
#ifndef BUILD_SHARED_LIBS
# define XDMFSTATIC
#endif

/* #undef HAVE_NDGM */

#define XDMF_HAVE_MALLOC_H

/* #undef XDMF_BUILD_MPI */
#ifndef XDMF_BUILD_MPI
#ifndef XDMF_NO_MPI
#define XDMF_NO_MPI
#endif
#endif

/* #undef Xdmf_EXPORTS */
#ifndef Xdmf_EXPORTS
# define Xdmf_EXPORTS
#endif

#endif /* __XdmfConfig_h */
