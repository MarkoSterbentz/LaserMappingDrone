SET(CTEST_CUSTOM_MEMCHECK_IGNORE
  ${CTEST_CUSTOM_MEMCHECK_IGNORE}
  Example-vtkLocal
  Example-vtkMy

  # These tests do not run any VTK code
  vtkInteractionWidgets-HeaderTest
  vtkInteractionImage-HeaderTest
  vtkInteractionStyle-HeaderTest
  vtkChartsCore-HeaderTest
  vtkParallelMPI4Py-HeaderTest
  vtkParallelMPI-HeaderTest
  vtkParallelCore-HeaderTest
  vtkAcceleratorsPiston-HeaderTest
  vtkAcceleratorsDax-HeaderTest
  vtkTestingGenericBridge-HeaderTest
  vtkTestingIOSQL-HeaderTest
  vtkTestingCore-HeaderTest
  vtkTestingRendering-HeaderTest
  vtkglew-HeaderTest
  vtkfreetype-HeaderTest
  vtksqlite-HeaderTest
  vtkhdf5-HeaderTest
  vtkpng-HeaderTest
  vtkTclTk-HeaderTest
  vtkexodusII-HeaderTest
  ZopeInterface-HeaderTest
  vtkalglib-HeaderTest
  vtkxdmf3-HeaderTest
  SixPython-HeaderTest
  vtklibproj4-HeaderTest
  vtkzlib-HeaderTest
  vtklibxml2-HeaderTest
  vtkoggtheora-HeaderTest
  vtktiff-HeaderTest
  AutobahnPython-HeaderTest
  vtkftgl-HeaderTest
  vtkjsoncpp-HeaderTest
  vtkgl2ps-HeaderTest
  vtkjpeg-HeaderTest
  Twisted-HeaderTest
  vtkxdmf2-HeaderTest
  vtkexpat-HeaderTest
  vtkverdict-HeaderTest
  vtknetcdf-HeaderTest
  vtkVPIC-HeaderTest
  vtkmpi4py-HeaderTest
  vtkCommonExecutionModel-HeaderTest
  vtkCommonMath-HeaderTest
  vtkCommonDataModel-HeaderTest
  vtkCommonMisc-HeaderTest
  vtkCommonTransforms-HeaderTest
  vtkCommonComputationalGeometry-HeaderTest
  vtkCommonColor-HeaderTest
  vtkCommonSystem-HeaderTest
  vtkCommonCore-HeaderTest
  vtkGUISupportQtSQL-HeaderTest
  vtkGUISupportQt-HeaderTest
  vtkGUISupportQtWebkit-HeaderTest
  vtkGUISupportQtOpenGL-HeaderTest
  vtkInfovisBoost-HeaderTest
  vtkInfovisParallel-HeaderTest
  vtkInfovisLayout-HeaderTest
  vtkInfovisBoostGraphAlgorithms-HeaderTest
  vtkInfovisCore-HeaderTest
  vtkViewsContext2D-HeaderTest
  vtkViewsQt-HeaderTest
  vtkViewsInfovis-HeaderTest
  vtkViewsCore-HeaderTest
  vtkViewsGeovis-HeaderTest
  vtkWebJavaScript-HeaderTest
  vtkWebInstall-HeaderTest
  vtkWebApplications-HeaderTest
  vtkWebPython-HeaderTest
  vtkWebCore-HeaderTest
  vtkWebGLExporter-HeaderTest
  vtkImagingHybrid-HeaderTest
  vtkImagingMath-HeaderTest
  vtkImagingFourier-HeaderTest
  vtkImagingStencil-HeaderTest
  vtkImagingColor-HeaderTest
  vtkImagingStatistics-HeaderTest
  vtkImagingMorphological-HeaderTest
  vtkImagingGeneral-HeaderTest
  vtkImagingSources-HeaderTest
  vtkImagingCore-HeaderTest
  vtksys-HeaderTest
  vtkMetaIO-HeaderTest
  vtkPythonInterpreter-HeaderTest
  vtkUtilitiesEncodeString-HeaderTest
  vtkDICOMParser-HeaderTest
  vtkPython-HeaderTest
  vtkUtilitiesHashSource-HeaderTest
  vtkParseOGLExt-HeaderTest
  vtkWrappingPythonCore-HeaderTest
  vtkWrappingTools-HeaderTest
  vtkWrappingTcl-HeaderTest
  vtkWrappingJava-HeaderTest
  vtkIOXMLParser-HeaderTest
  vtkIONetCDF-HeaderTest
  vtkIOParallel-HeaderTest
  vtkIOSQL-HeaderTest
  vtkIOMySQL-HeaderTest
  vtkIOEnSight-HeaderTest
  vtkIOParallelXML-HeaderTest
  vtkIOInfovis-HeaderTest
  vtkIOParallelExodus-HeaderTest
  vtkIOXdmf3-HeaderTest
  vtkIOXML-HeaderTest
  vtkIOLegacy-HeaderTest
  vtkIOFFMPEG-HeaderTest
  vtkIOXdmf2-HeaderTest
  vtkIOPostgreSQL-HeaderTest
  vtkIOParallelNetCDF-HeaderTest
  vtkIOGeoJSON-HeaderTest
  vtkIOADIOS-HeaderTest
  vtkIOGeometry-HeaderTest
  vtkIOImage-HeaderTest
  vtkIOImport-HeaderTest
  vtkIOParallelLSDyna-HeaderTest
  vtkIOGDAL-HeaderTest
  vtkIOVideo-HeaderTest
  vtkIOMINC-HeaderTest
  vtkIOMPIParallel-HeaderTest
  vtkIOPLY-HeaderTest
  vtkIOExodus-HeaderTest
  vtkIOAMR-HeaderTest
  vtkIOODBC-HeaderTest
  vtkIOExport-HeaderTest
  vtkIOMovie-HeaderTest
  vtkIOMPIImage-HeaderTest
  vtkIOCore-HeaderTest
  vtkIOLSDyna-HeaderTest
  vtkIOVPIC-HeaderTest
  vtkGeovisCore-HeaderTest
  vtkRenderingContextOpenGL-HeaderTest
  vtkRenderingContext2D-HeaderTest
  vtkRenderingTk-HeaderTest
  vtkRenderingParallel-HeaderTest
  vtkRenderingContextOpenGL2-HeaderTest
  vtkRenderingQt-HeaderTest
  vtkRenderingParallelLIC-HeaderTest
  vtkRenderingFreeTypeOpenGL-HeaderTest
  vtkRenderingVolume-HeaderTest
  vtkRenderingExternal-HeaderTest
  vtkRenderingVolumeOpenGL-HeaderTest
  vtkRenderingFreeTypeOpenGL2-HeaderTest
  vtkRenderingLabel-HeaderTest
  vtkRenderingLIC-HeaderTest
  vtkRenderingVolumeAMR-HeaderTest
  vtkRenderingVolumeOpenGL2-HeaderTest
  vtkRenderingMatplotlib-HeaderTest
  vtkRenderingImage-HeaderTest
  vtkRenderingVolumeOpenGLNew-HeaderTest
  vtkRenderingAnnotation-HeaderTest
  vtkRenderingFreeTypeFontConfig-HeaderTest
  vtkRenderingGL2PS-HeaderTest
  vtkRenderingOpenGL-HeaderTest
  vtkRenderingLOD-HeaderTest
  vtkRenderingFreeType-HeaderTest
  vtkRenderingCore-HeaderTest
  vtkRenderingOpenGL2-HeaderTest
  vtkFiltersParallelFlowPaths-HeaderTest
  vtkFiltersGeneric-HeaderTest
  vtkFiltersHybrid-HeaderTest
  vtkFiltersParallel-HeaderTest
  vtkFiltersParallelGeometry-HeaderTest
  vtkFiltersTexture-HeaderTest
  vtkFiltersModeling-HeaderTest
  vtkFiltersVerdict-HeaderTest
  vtkFiltersSelection-HeaderTest
  vtkFiltersGeometry-HeaderTest
  vtkFiltersHyperTree-HeaderTest
  vtkFiltersMatlab-HeaderTest
  vtkFiltersImaging-HeaderTest
  vtkFiltersFlowPaths-HeaderTest
  vtkFiltersStatisticsGnuR-HeaderTest
  vtkFiltersSMP-HeaderTest
  vtkFiltersProgrammable-HeaderTest
  vtkFiltersAMR-HeaderTest
  vtkFiltersParallelImaging-HeaderTest
  vtkFiltersStatistics-HeaderTest
  vtkFiltersReebGraph-HeaderTest
  vtkFiltersExtraction-HeaderTest
  vtkFiltersGeneral-HeaderTest
  vtkFiltersSources-HeaderTest
  vtkFiltersPython-HeaderTest
  vtkFiltersParallelStatistics-HeaderTest
  vtkFiltersCore-HeaderTest
  vtkFiltersParallelMPI-HeaderTest
  vtkDomainsChemistryOpenGL2-HeaderTest
  vtkDomainsChemistry-HeaderTest
  vtkqttesting-HeaderTest
  vtkprotobuf-HeaderTest
  vtkpugixml-HeaderTest
  vtkCosmoHaloFinder-HeaderTest
  Pygments-HeaderTest
  vtkicet-HeaderTest
  smTestDriver-HeaderTest
  vtkUtilitiesWrapClientServer-HeaderTest
  VisItLib-HeaderTest
  vtkIOVisItBridge-HeaderTest
  vtkUtilitiesProcessXML-HeaderTest
  vtkUtilitiesColorSeriesToXML-HeaderTest
  vtkPVCommon-HeaderTest
  vtkPVAnimation-HeaderTest
  vtkPVClientServerCoreDefault-HeaderTest
  vtkPVClientServerCoreCore-HeaderTest
  vtkPVClientServerCoreRendering-HeaderTest
  vtkPVVTKExtensionsCosmoTools-HeaderTest
  vtkPVVTKExtensionsDefault-HeaderTest
  vtkPVVTKExtensionsCore-HeaderTest
  vtkPVVTKExtensionsRendering-HeaderTest
  vtkPVServerManagerDefault-HeaderTest
  vtkPVServerManagerApplication-HeaderTest
  vtkPVServerManagerCore-HeaderTest
  vtkPVServerManagerRendering-HeaderTest
  vtkPVServerImplementationCore-HeaderTest
  vtkPVServerImplementationRendering-HeaderTest
  vtkClientServer-HeaderTest
  pqWidgets-HeaderTest
  pqApplicationComponents-HeaderTest
  pqComponents-HeaderTest
  pqPython-HeaderTest
  pqDeprecated-HeaderTest
  pqCore-HeaderTest
  vtkPVCatalyst-HeaderTest
  vtkPVCatalystTestDriver-HeaderTest
  vtkParaViewWebWidgets-HeaderTest
  vtkParaViewWebDocumentation-HeaderTest
  vtkParaViewWeb-HeaderTest
  vtkParaViewWebApplications-HeaderTest
  vtkParaViewWebPython-HeaderTest
  vtkParaViewWebCore-HeaderTest


  PrintSelf-Charts
  PrintSelf-Common
  PrintSelf-Filtering
  PrintSelf-GenericFiltering
  PrintSelf-Geovis
  PrintSelf-Graphics
  PrintSelf-Hybrid
  PrintSelf-Imaging
  PrintSelf-Infovis
  PrintSelf-IO
  PrintSelf-Parallel
  PrintSelf-Rendering
  PrintSelf-Views
  PrintSelf-VolumeRendering
  PrintSelf-Widgets

  TestSetObjectMacro-Charts
  TestSetObjectMacro-Common
  TestSetObjectMacro-Filtering
  TestSetObjectMacro-GenericFiltering
  TestSetObjectMacro-Geovis
  TestSetObjectMacro-Graphics
  TestSetObjectMacro-Hybrid
  TestSetObjectMacro-Imaging
  TestSetObjectMacro-Infovis
  TestSetObjectMacro-IO
  TestSetObjectMacro-Parallel
  TestSetObjectMacro-Rendering
  TestSetObjectMacro-Views
  TestSetObjectMacro-VolumeRendering
  TestSetObjectMacro-Widgets

  # this one runs python which then runs two program so no memory checking there
  Sockets-image
  )

SET(CTEST_CUSTOM_WARNING_MATCH
  ${CTEST_CUSTOM_WARNING_MATCH}
  "{standard input}:[0-9][0-9]*: Warning: "
  )

# Removing this because it somehow matches normal build output lines
# on several platforms.  Perhaps there is a bug in the custom match
# support.
#
#  SET(CTEST_CUSTOM_ERROR_MATCH
#    ${CTEST_CUSTOM_ERROR_MATCH}
#    "\\", line [0-9]+, in "
#    )

IF(CMAKE_SYSTEM MATCHES "OSF")
  SET(CTEST_CUSTOM_WARNING_EXCEPTION
    ${CTEST_CUSTOM_WARNING_EXCEPTION}
    "vtkKWApplication"
    "vtkKWObject"
    )
ENDIF()

SET(CTEST_CUSTOM_WARNING_EXCEPTION
  ${CTEST_CUSTOM_WARNING_EXCEPTION}
  "Utilities/vtktiff/"
  "list.[0-9]+. : warning C4702: unreachable code"
  "xtree.[0-9]+. : warning C4702: unreachable code"
  "vector.[0-9]+. : warning C4702: unreachable code"
  "warning LNK4221"
  "variable .var_args[2]*. is used before its value is set"
  "jobserver unavailable"
  "warning: \\(Long double usage is reported only once for each file"
  "warning: To disable this warning use"
  "warning: .+ might be clobbered by .longjmp. or .vfork."
  "(ranlib|libtool):.*file: .+ has no symbols"
  "could not be inlined"
  "ld: warning prebinding disabled because \\((__TEXT|__DATA|__LINKEDIT) segment \\(address = 0x[a-f0-9]+ size = 0x[a-f0-9]+\\) of (.*) overlaps with (__LINKEDIT|__TEXT|__DATA) segment \\(address = 0x[a-f0-9]+ size = 0x[a-f0-9]+\\) of (.*)"
  "ld: warning prebinding disabled because dependent library: (.*).dylib is not prebound"
  "warning: duplicate dylib"

  # MPI uses c++ but may have been built with a different c++ compiler.
  # It seems to work anyway so let's ignore it to make it easier to
  # test more compilers.
  "ld: warning: libstdc.*, needed by .*, may conflict with libstdc.*"

  # Does *anyone* have an STL implementation that compiles without warnings...?
  "cc-1116 CC: WARNING File = /usr/include/CC/stl_alloc.h, Line = 175"

  # vtkfreetype needs to be updated to get rid of warnings that occur during
  # 64-bit compiles... for now, mask them out of dashboard results:
  "vtkfreetype.*warning C4"
  "vtkfreetype.*warning: dereferencing type-punned pointer"
  "vtkfreetype.*warning: conversion to .* from .* may change the sign of the result"
  "vtkfreetype.*warning: passing argument .* of .* as .*signed due to prototype"
  "vtkfreetype.*warning: passing argument .* of .* with different width due to prototype"
  "vtkfreetype.*warning: conversion to .* from .* may alter its value"
  "vtkfreetype.*warning: conversion of unsigned constant value to negative integer"
  "vtkfreetype.*warning: suggest braces around empty body in 'do' statement"
  "vtkfreetype.*warning: negative integer implicitly converted to unsigned type"
  "vtkfreetype.*warning: dereferencing pointer .* does break strict-aliasing rules"
  "vtkfreetype.*note: initialized from here"
  "vtkfreetype.*warning: .* may be used uninitialized in this function"
  "vtkfreetype.*note: .* was declared here"
  "vtkfreetype/.*warning: .* set but not used"
  "vtkfreetype/.*warning: .* defined but not used"
  "WARNING: While resolving call to function .*FTC_GNode_Compare.* arguments were dropped!"
  # vtknetcdf occasionally has warnings for things that are not a problem.
  "vtknetcdf.*warning: dereferencing type-punned pointer"
  "vtknetcdf.*warning: passing argument .* of .* as .*signed due to prototype"
  "vtknetcdf.*warning: conversion to .* from .* may change the sign of the result"
  "vtknetcdf.*warning: conversion to .* from .* may alter its value"
  "vtknetcdf.*warning: dereferencing pointer .* does break strict-aliasing rules"
  "vtknetcdf.*note: initialized from here"
  # Some VTK dashboards include building bits of Qt which produce lots of
  # the following warnings when built with the MS compilers. Qt guys should
  # fix their code. Until they do, keep the Qt chatter off the VTK dashboard
  # results:
  "[Qq]t([Cc]ore|[Gg]ui).*warning C4127: conditional expression is constant"
  "[Qq]t.*h.*warning.*declaration of .* shadows a member of .this"
  "[Qq]t.*h.*warning.*(copy constructor|assignment operator) could not be generated"
  # gcc -Wstric-aliasing
  "[Qq]t.*q.*h.*warning: dereferencing pointer .* does break strict-aliasing rules"
  "[Qq]t.*q.*h.*note: initialized from here"
  "[Qq]t.*ui_"

  # Specifically for HP compiler, mask out
  "Utilities.(vtkjpeg|vtksqlite).*warning.*more strictly aligned type"
  "Filtering.vtkImageMultiple(Input|InputOutput)Filter.cxx.*warning.*more strictly aligned type"
  "IO.vtkJPEG(Reader|Writer).cxx.*warning.*more strictly aligned type"
  ".*warning.*relational operator.*always evaluates to.*"
  ".*warning.*controlling expression is constant"
  "[Qq]t.*h.*warning.*types cannot be declared in anonymous unions"

  # QT on HP-UX uses -ldl while VTK uses -dldl.
  "aCC: warning 983: The -ldl library specified on the command line is also added automatically by the compiler driver."

  # This test is made to discover compiler warnings, therefore the emitted
  # warnings are irrelevant in a dashboard submission
  "TestCxxFeatures.cxx.*warning.*type qualifiers ignored on function return type"

  # File generated by lex/yacc flex/bison, cannot fix the warnings.
  "vtkParse.y.*passing argument 1 of 'preSig' discards qualifiers from pointer target type"
  "vtkParse.y.*passing argument 1 of 'postSig' discards qualifiers from pointer target type"
  "vtkParse.l.*warning: ignoring return value of 'fwrite', declared with attribute warn_unused_result"
  "vtkParse.l.*warning: passing argument .* of .* as .* due to prototype"
  "lex.yy.c.*warning: passing argument .* of .* as .* due to prototype"

  # Java lint warnings
  "Note: .* uses? or overrides a deprecated API"
  "Note: .* uses? unchecked or unsafe operations"
  "Note: Recompile with -Xlint:.* for details"

  # warnings from some Open MPI headers/libs, cannot fix:
  "/openmpi/.*request_inln.h.*warning: declaration .struct MPI::Grequest_intercept_t. does not declare anything"
  "openmpi.*comm_inln.h.*warning: unused parameter"

  # warnings from some python headers/libs, cannot fix:
  "warning: the use of .tmpnam_r. is dangerous, better use .mkstemp."
  "warning: the use of .tempnam. is dangerous, better use .mkstemp."
  "pyconfig.h.*warning: ._XOPEN_SOURCE. redefined"
  "features.h.*warning: this is the location of the previous definition"

  # Mask out warnings on Utilities libraries vtkexpat,vtksqlite,vtklibproj4,
  # vtkzlib, DICOMParser
  "Utilities.vtkexpat.*warning.*assignment discards qualifiers from pointer target type"
  "Utilities.vtkexpat.*warning: passing argument .* of .* as unsigned due to prototype"
  "Utilities.vtkexpat.*warning: passing argument .* of .* with different width due to prototype"
  "Utilities.vtkexpat.*warning: conversion to .* from .* may change the sign of the result"
  "Utilities.vtkexpat.*warning: conversion to .* from .* may alter its value"
  "Utilities.vtkexpat.*warning: passing argument .* of .* with different width due to prototype"
  "Utilities.vtkexpat.*warning: negative integer implicitly converted to unsigned type"
  "Utilities.vtksqlite.vtk_sqlite3.c.*warning.*assignment discards qualifiers from pointer target type"
  "Utilities.vtksqlite.vtk_sqlite3.c.*warning.*initialization discards qualifiers from pointer target type"
  "Utilities.vtksqlite.vtk_sqlite3.c.*warning.*passing argument .* of .* discards qualifiers from pointer target type"
  "Utilities.vtksqlite.vtk_sqlite3.c.*warning.*ignoring return value of .*, declared with attribute warn_unused_result"
  "Utilities.vtksqlite.vtk_sqlite3.c.*warning.*passing argument .* of .* with different width due to prototype"
  "Utilities.vtksqlite.vtk_sqlite3.c.*warning.*passing argument .* of .* as .*signed due to prototype"
  "Utilities.vtksqlite.vtk_sqlite3.c.*warning.*[Ll]ong.double"
  # gcc -Wsign-conversion
  "Utilities.vtksqlite.vtk_sqlite3.c.*warning: conversion to .* from .* may change the sign of the result"
 # gcc -Wsign-conversion
  "Utilities.vtksqlite.vtk_sqlite3.c.*warning: conversion of unsigned constant value to negative integer"
  # gcc -Wconversion
  "Utilities.vtksqlite.vtk_sqlite3.c.*warning: conversion to .* from .* may alter its value"
  # SunOS CC 5.6
  "Utilities.vtksqlite.vtk_sqlite3.c.*warning: statement not reached"
  "Utilities.vtksqlite.vtk_sqlite3.c.*warning: integer overflow detected: op .*"
  "Utilities.vtksqlite.vtk_sqlite3.c.*note: expected .* but argument is of type .*"
  "Utilities.vtksqlite.vtk_sqlite3.c.*warning: negative integer implicitly converted to unsigned type"
  "Utilities.vtksqlite.vtk_sqlite3.c.*warning: assuming signed overflow"
  "Utilities.vtksqlite.vtk_sqlite3.c.*warning: .* may be used uninitialized in this function"
  "Utilities.vtksqlite.vtk_sqlite3.c.*warning: .* set but not used"
  "Utilities.vtkexodus2.*warning.*assignment discards qualifiers from pointer target type"
  "Utilities.vtkexodus2.*warning.*initialization discards qualifiers from pointer target type"
  "Utilities.vtkexodus2.*warning.*assignment discards qualifiers from pointer target type"
  "Utilities.vtkexodus2.*warning.*passing argument .* of .* as unsigned due to prototype"
  "Utilities.vtkexodus2.*warning.*possible loss of data"
  "Uitilties/vtkexodus2.*warning: .* set but not used"
  # gcc -Wsign-conversion
  "Utilities.vtkexodus2.*warning.*conversion to .* from .* may change the sign of the result"
  # gcc -Wconversion
  "Utilities.vtkexodus2.*warning.*conversion to .* from .* may alter its value"
  # gcc -Wuninitialized
  "Utilities.vtkexodus2.*warning: .* may be used uninitialized in this function"
  "Utilities.vtkexodus2.*warning: return discards qualifiers from pointer target type"

  # VPIC has endianness checks that are fragile, suppress warnings generated by them for now
  "Utilities.VPIC.*warning"


  #boost
  "boost.*warning.*assignment operator could not be generated"
  "boost.*warning.*type name first seen using .* now seen using .*"
  "boost.*warning.*default constructor could not be generated"
  "boost.*warning.*can never be instantiated - user defined constructor required"
  "boost.*warning.*unreferenced formal parameter"
  "boost.*warning.*signed/unsigned mismatch"
  "boost.*warning.*conversion from .* to .*, possible loss of data"
  "boost.*warning.*declaration of .* shadows a member of"
  "boost.*warning.*unused parameter"
  "boost.*warning.*comparison between signed and unsigned integer expressions"

  "Utilities.vtklibproj4.*warning.*defined but not used"
  "Utilities.vtklibproj4.*warning.*initialization discards qualifiers from pointer target type"
  "Utilities.vtklibproj4.*warning.*assignment discards qualifiers from pointer target type"
  "Utilities.vtklibproj4.*warning.*passing argument .* of .* discards qualifiers from pointer target type"
  "Utilities.vtklibproj4.*warning.*ignoring return value of .*, declared with attribute warn_unused_result"
  "Utilities.vtklibproj4.*warning.*passing argument .* of .* as .*signed due to prototype"
  "Utilities.vtklibproj4.*warning.*conversion to .* from .* may change the sign of the result"
  "Utilities.vtklibproj4.*note: expected .* but argument is of type .*"
  "Utilities.vtkzlib.*warning: conversion to .* from .* may change the sign of the result"
  "Utilities.vtkzlib.*warning: conversion to .* from .* may alter its value"
  "Utilities.vtkzlib.*warning: passing argument .* of .* as unsigned due to prototype"
  "Utilities.vtkpng.*warning: passing argument .* of .* as unsigned due to prototype"
  "Utilities.vtkpng.*warning: conversion to .* from .* may change the sign of the result"
  "Utilities.vtkpng.*warning: conversion to .* from .* may alter its value"
  "Utilities.vtkpng.pngwutil.c.*warning: passing argument 2 of .vtk_png_write_chunk_start. discards qualifiers from pointer target type"
  "Utilities.vtkpng.*warning: negative integer implicitly converted to unsigned type"
  "Utilities.vtkpng.*warning: variable .* might be clobbered by"
  "Utilities/vtkjpeg.*warning: conversion to .* from .* may change the sign of the result"
  "Utilities/vtkjpeg.*warning: conversion to .* from .* may alter its value"
  "Utilities/vtkjpeg.*.warning: .* set but not used"
  "Utilities/DICOMParser.*warning: conversion to .* from .* may alter its value"
  "Utilities/DICOMParser.*warning: conversion to .* from .* may change the sign of the result"
  # gcc -Wsign-conversion
  "Utilities/vtkmetaio.*warning: conversion to '.*' from '.*' may change the sign of the result"
  # gcc -Wconversion
  "Utilities/vtkmetaio.*warning: conversion to '.*' from '.*' may alter its value"
  "Uitilties/vtkmetaio/.*warning: .* set but not used"
  # gcc -Wsign-conversion
  "Utilities/vtkalglib.*warning: conversion to .* from .* may change the sign of the result"
  "Uitilties/vtkalglib/.*warning: .* set but not used"
  # gcc -Wsign-conversion
  "Utilities/ftgl/src/.*warning: conversion to .* from .* may change the sign of the result"
  # gcc -Wconversion
  "Utilities/ftgl/src/.*warning: conversion to .* from .* may alter its value"
  # Sun cc5.6 - the code is designed to trigger an overflow
  "Utilities/vtksqlite/vtk_sqlite.c.*warning: integer overflow detected"
  # bogus unreachable code warning in hashtable in kwsys
  "hashtable.hxx.*warning C4702: unreachable code"

  # gcc -Wsign-conversion
  "Utilities/mrmpi/.*warning: conversion to .* from .* may change the sign of the result"
  # gcc -Wunused-result
  "Utilities/mrmpi/.*warning: ignoring return value of .size_t fread.void.. size_t. size_t. FILE.... declared with attribute warn_unused_result"
  "Utilities/vtklibproj4/.*warning: .* set but not used"

  # Qt Designer related warning
  "QtDesigner/extension.*warning: unused parameter"

  # Strange Arch warning
  "cc1plus: warning: assuming signed overflow does not occur when assuming that .* is always true"

  # Unused dll when building Examples/AMR/Cxx with VS 7.1, Release configuration
  "warning LNK4089: all references to .vtkIOXML-.*dll. discarded by /OPT:REF"

  # Ignore clang's summary warning, assuming prior text has matched some
  # other warning expression:
  "[0-9,]+ warnings? generated."

  #ignore clangs documentation warnings from libxml, which uses gtk-doc natively, not doxygen
  "vtklibxml2.*warning: unknown command tag name"
  )

IF(APPLE)
SET(CTEST_CUSTOM_WARNING_EXCEPTION
  ${CTEST_CUSTOM_WARNING_EXCEPTION}
  "warning -.: directory name .* does not exist"

  # Almost all of Carbon is deprecated, so mask deprecation warnings out
  # of dashboard results for Carbon-specific files.
  "vtkCarbonRenderWindow.*warning.*is deprecated"
  )
ENDIF()

SET(CTEST_CUSTOM_COVERAGE_EXCLUDE
  ${CTEST_CUSTOM_COVERAGE_EXCLUDE}
  "vtk.*TCLInit.cxx"
  "vtk[^\\.]+(Java|Python|Tcl).cxx"
  ".*vtkOpenGLState.*" # debugging class
  ".*Testing.Cxx.*cxx"
  ".*Testing.Cxx.*h"
  ".*moc_.*cxx"
  # Generated files
  ".*/Rendering/OpenGL/vtkgl.*"

  # Exclude files from the Utilities directories
  ".*/Utilities/.*"
  ".*/ThirdParty/.*"

  # Exclude vtkOpenGLPolyDataMapper since the class is deprecated since VTK 6.2.
  ".*vtkOpenGLPolyDataMapper.*"
  )

IF(CMAKE_COMPILER_IS_GNUCXX)
SET(CTEST_CUSTOM_WARNING_EXCEPTION
  ${CTEST_CUSTOM_WARNING_EXCEPTION}
  # GCC 4.2 has a bug where it has Unnecessary anonymous namespace warnings
  # you can find the full bug on GNU Bugzilla with bug number 29365
  "warning: .* has a field .* whose type uses the anonymous namespace"
  )
ENDIF()

# Temporarily: to show us *all* the remaining warnings on the
# 64-bit Windows builds on one result page...
#
SET(CTEST_CUSTOM_MAXIMUM_NUMBER_OF_WARNINGS 222)
