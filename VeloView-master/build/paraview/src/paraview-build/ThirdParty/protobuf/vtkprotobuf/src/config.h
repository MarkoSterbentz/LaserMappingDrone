/* config.h.cmake.in. Modified from config.h.in at Wed May 12 12:35:14 EDT 2010.  */ 
/*
 * (1) Replace all #undef by #cmakedefine
 * (2) Try each of the defines to see if it is actually used by the source code.
 * (3) Delete all entries that are not referred in the source code.
 */

/* the namespace of hash_map/hash_set */
#define HASH_NAMESPACE std::tr1

/* define if the compiler has hash_map */
#define HAVE_HASH_MAP

/* the name of <hash_map> */
#define HASH_MAP_CLASS unordered_map

/* the location of <hash_map> */
#define HASH_MAP_H <tr1/unordered_map>

/* define if the compiler has hash_set */
#define HAVE_HASH_SET

/* the name of <hash_set> */
#define HASH_SET_CLASS unordered_set

/* the location of <hash_set> */
#define HASH_SET_H <tr1/unordered_set>

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H

/* Enable classes using zlib compression. */
#define HAVE_ZLIB

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
/* #undef LT_OBJDIR */

/* Name of package */
#define PACKAGE "protobuf"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "protobuf@googlegroups.com"

/* Define to the full name of this package. */
#define PACKAGE_NAME "Protocal Buffers"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Protocal Buffers 2.3.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "protobuf"

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.3.0"

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "2.3.0"
