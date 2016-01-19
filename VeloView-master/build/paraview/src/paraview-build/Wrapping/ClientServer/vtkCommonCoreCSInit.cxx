/* #undef PARAVIEW_USE_UNIFIED_BINDINGS */
/* #undef NO_PYTHON_BINDINGS_AVAILABLE */
#ifdef NO_PYTHON_BINDINGS_AVAILABLE
#undef PARAVIEW_USE_UNIFIED_BINDINGS
#endif
#ifdef PARAVIEW_USE_UNIFIED_BINDINGS
#include "vtkPython.h"
#include "vtkPythonInterpreter.h"
#endif

#include "vtkClientServerInterpreter.h"

#ifndef PARAVIEW_BUILD_SHARED_LIBS
#define PARAVIEW_BUILD_SHARED_LIBS
#endif
#if defined(PARAVIEW_BUILD_SHARED_LIBS) && defined(_WIN32)
# define VTK_WRAP_CS_EXPORT __declspec(dllexport)
#else
# define VTK_WRAP_CS_EXPORT
#endif

#ifdef PARAVIEW_USE_UNIFIED_BINDINGS
extern "C" void real_initvtkCommonCorePython(const char *modulename);

void initvtkCommonCorePython()
{
  static const char modulename[] = "vtkCommonCorePython";
  real_initvtkCommonCorePython(modulename);
}
#endif

extern void vtkAbstractArray_Init(vtkClientServerInterpreter* csi);
extern void vtkAnimationCue_Init(vtkClientServerInterpreter* csi);
extern void vtkArray_Init(vtkClientServerInterpreter* csi);
extern void vtkArrayIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkBitArray_Init(vtkClientServerInterpreter* csi);
extern void vtkBitArrayIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkBoxMuellerRandomSequence_Init(vtkClientServerInterpreter* csi);
extern void vtkByteSwap_Init(vtkClientServerInterpreter* csi);
extern void vtkCharArray_Init(vtkClientServerInterpreter* csi);
extern void vtkCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkCollectionIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkCommand_Init(vtkClientServerInterpreter* csi);
extern void vtkConditionVariable_Init(vtkClientServerInterpreter* csi);
extern void vtkCriticalSection_Init(vtkClientServerInterpreter* csi);
extern void vtkDataArrayCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkDataArrayCollectionIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkDataArray_Init(vtkClientServerInterpreter* csi);
extern void vtkDataArraySelection_Init(vtkClientServerInterpreter* csi);
extern void vtkDebugLeaks_Init(vtkClientServerInterpreter* csi);
extern void vtkDoubleArray_Init(vtkClientServerInterpreter* csi);
extern void vtkDynamicLoader_Init(vtkClientServerInterpreter* csi);
extern void vtkFileOutputWindow_Init(vtkClientServerInterpreter* csi);
extern void vtkFloatArray_Init(vtkClientServerInterpreter* csi);
extern void vtkGarbageCollector_Init(vtkClientServerInterpreter* csi);
extern void vtkGaussianRandomSequence_Init(vtkClientServerInterpreter* csi);
extern void vtkIdListCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkIdList_Init(vtkClientServerInterpreter* csi);
extern void vtkIdTypeArray_Init(vtkClientServerInterpreter* csi);
extern void vtkInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationDataObjectKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationDoubleKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationDoubleVectorKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationIdTypeKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationInformationKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationInformationVectorKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationIntegerKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationIntegerPointerKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationIntegerVectorKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationKeyVectorKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationObjectBaseKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationObjectBaseVectorKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationRequestKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationStringKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationStringVectorKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationUnsignedLongKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationVariantKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationVariantVectorKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationVector_Init(vtkClientServerInterpreter* csi);
extern void vtkInstantiator_Init(vtkClientServerInterpreter* csi);
extern void vtkIntArray_Init(vtkClientServerInterpreter* csi);
extern void vtkLongArray_Init(vtkClientServerInterpreter* csi);
extern void vtkLookupTable_Init(vtkClientServerInterpreter* csi);
extern void vtkMath_Init(vtkClientServerInterpreter* csi);
extern void vtkMinimalStandardRandomSequence_Init(vtkClientServerInterpreter* csi);
extern void vtkMultiThreader_Init(vtkClientServerInterpreter* csi);
extern void vtkMutexLock_Init(vtkClientServerInterpreter* csi);
extern void vtkObjectBase_Init(vtkClientServerInterpreter* csi);
extern void vtkObject_Init(vtkClientServerInterpreter* csi);
extern void vtkObjectFactoryCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkObjectFactory_Init(vtkClientServerInterpreter* csi);
extern void vtkOutputWindow_Init(vtkClientServerInterpreter* csi);
extern void vtkOverrideInformationCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkOverrideInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPoints2D_Init(vtkClientServerInterpreter* csi);
extern void vtkPoints_Init(vtkClientServerInterpreter* csi);
extern void vtkPriorityQueue_Init(vtkClientServerInterpreter* csi);
extern void vtkRandomSequence_Init(vtkClientServerInterpreter* csi);
extern void vtkReferenceCount_Init(vtkClientServerInterpreter* csi);
extern void vtkScalarsToColors_Init(vtkClientServerInterpreter* csi);
extern void vtkShortArray_Init(vtkClientServerInterpreter* csi);
extern void vtkSignedCharArray_Init(vtkClientServerInterpreter* csi);
extern void vtkSortDataArray_Init(vtkClientServerInterpreter* csi);
extern void vtkStringArray_Init(vtkClientServerInterpreter* csi);
extern void vtkTimePointUtility_Init(vtkClientServerInterpreter* csi);
extern void vtkUnicodeStringArray_Init(vtkClientServerInterpreter* csi);
extern void vtkUnsignedCharArray_Init(vtkClientServerInterpreter* csi);
extern void vtkUnsignedIntArray_Init(vtkClientServerInterpreter* csi);
extern void vtkUnsignedLongArray_Init(vtkClientServerInterpreter* csi);
extern void vtkUnsignedShortArray_Init(vtkClientServerInterpreter* csi);
extern void vtkVariantArray_Init(vtkClientServerInterpreter* csi);
extern void vtkVersion_Init(vtkClientServerInterpreter* csi);
extern void vtkVoidArray_Init(vtkClientServerInterpreter* csi);
extern void vtkWindow_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLFileOutputWindow_Init(vtkClientServerInterpreter* csi);
extern void vtkLongLongArray_Init(vtkClientServerInterpreter* csi);
extern void vtkUnsignedLongLongArray_Init(vtkClientServerInterpreter* csi);
extern void vtkTypeInt8Array_Init(vtkClientServerInterpreter* csi);
extern void vtkTypeInt16Array_Init(vtkClientServerInterpreter* csi);
extern void vtkTypeInt32Array_Init(vtkClientServerInterpreter* csi);
extern void vtkTypeInt64Array_Init(vtkClientServerInterpreter* csi);
extern void vtkTypeUInt8Array_Init(vtkClientServerInterpreter* csi);
extern void vtkTypeUInt16Array_Init(vtkClientServerInterpreter* csi);
extern void vtkTypeUInt32Array_Init(vtkClientServerInterpreter* csi);
extern void vtkTypeUInt64Array_Init(vtkClientServerInterpreter* csi);
extern void vtkTypeFloat32Array_Init(vtkClientServerInterpreter* csi);
extern void vtkTypeFloat64Array_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkCommonCoreCS_Initialize(
  vtkClientServerInterpreter *csi)
{
#ifdef PARAVIEW_USE_UNIFIED_BINDINGS
  if (!vtkPythonInterpreter::IsInitialized())
    {
    vtkPythonInterpreter::Initialize();
    }

  static bool initialized = false;

  if (!initialized)
    {
    initialized = true;
    PyImport_AppendInittab("vtkCommonCorePython", initvtkCommonCorePython);
    }

  csi->Load("vtkCommonCore");
#endif

  vtkAbstractArray_Init(csi);
  vtkAnimationCue_Init(csi);
  vtkArray_Init(csi);
  vtkArrayIterator_Init(csi);
  vtkBitArray_Init(csi);
  vtkBitArrayIterator_Init(csi);
  vtkBoxMuellerRandomSequence_Init(csi);
  vtkByteSwap_Init(csi);
  vtkCharArray_Init(csi);
  vtkCollection_Init(csi);
  vtkCollectionIterator_Init(csi);
  vtkCommand_Init(csi);
  vtkConditionVariable_Init(csi);
  vtkCriticalSection_Init(csi);
  vtkDataArrayCollection_Init(csi);
  vtkDataArrayCollectionIterator_Init(csi);
  vtkDataArray_Init(csi);
  vtkDataArraySelection_Init(csi);
  vtkDebugLeaks_Init(csi);
  vtkDoubleArray_Init(csi);
  vtkDynamicLoader_Init(csi);
  vtkFileOutputWindow_Init(csi);
  vtkFloatArray_Init(csi);
  vtkGarbageCollector_Init(csi);
  vtkGaussianRandomSequence_Init(csi);
  vtkIdListCollection_Init(csi);
  vtkIdList_Init(csi);
  vtkIdTypeArray_Init(csi);
  vtkInformation_Init(csi);
  vtkInformationDataObjectKey_Init(csi);
  vtkInformationDoubleKey_Init(csi);
  vtkInformationDoubleVectorKey_Init(csi);
  vtkInformationIdTypeKey_Init(csi);
  vtkInformationInformationKey_Init(csi);
  vtkInformationInformationVectorKey_Init(csi);
  vtkInformationIntegerKey_Init(csi);
  vtkInformationIntegerPointerKey_Init(csi);
  vtkInformationIntegerVectorKey_Init(csi);
  vtkInformationIterator_Init(csi);
  vtkInformationKey_Init(csi);
  vtkInformationKeyVectorKey_Init(csi);
  vtkInformationObjectBaseKey_Init(csi);
  vtkInformationObjectBaseVectorKey_Init(csi);
  vtkInformationRequestKey_Init(csi);
  vtkInformationStringKey_Init(csi);
  vtkInformationStringVectorKey_Init(csi);
  vtkInformationUnsignedLongKey_Init(csi);
  vtkInformationVariantKey_Init(csi);
  vtkInformationVariantVectorKey_Init(csi);
  vtkInformationVector_Init(csi);
  vtkInstantiator_Init(csi);
  vtkIntArray_Init(csi);
  vtkLongArray_Init(csi);
  vtkLookupTable_Init(csi);
  vtkMath_Init(csi);
  vtkMinimalStandardRandomSequence_Init(csi);
  vtkMultiThreader_Init(csi);
  vtkMutexLock_Init(csi);
  vtkObjectBase_Init(csi);
  vtkObject_Init(csi);
  vtkObjectFactoryCollection_Init(csi);
  vtkObjectFactory_Init(csi);
  vtkOutputWindow_Init(csi);
  vtkOverrideInformationCollection_Init(csi);
  vtkOverrideInformation_Init(csi);
  vtkPoints2D_Init(csi);
  vtkPoints_Init(csi);
  vtkPriorityQueue_Init(csi);
  vtkRandomSequence_Init(csi);
  vtkReferenceCount_Init(csi);
  vtkScalarsToColors_Init(csi);
  vtkShortArray_Init(csi);
  vtkSignedCharArray_Init(csi);
  vtkSortDataArray_Init(csi);
  vtkStringArray_Init(csi);
  vtkTimePointUtility_Init(csi);
  vtkUnicodeStringArray_Init(csi);
  vtkUnsignedCharArray_Init(csi);
  vtkUnsignedIntArray_Init(csi);
  vtkUnsignedLongArray_Init(csi);
  vtkUnsignedShortArray_Init(csi);
  vtkVariantArray_Init(csi);
  vtkVersion_Init(csi);
  vtkVoidArray_Init(csi);
  vtkWindow_Init(csi);
  vtkXMLFileOutputWindow_Init(csi);
  vtkLongLongArray_Init(csi);
  vtkUnsignedLongLongArray_Init(csi);
  vtkTypeInt8Array_Init(csi);
  vtkTypeInt16Array_Init(csi);
  vtkTypeInt32Array_Init(csi);
  vtkTypeInt64Array_Init(csi);
  vtkTypeUInt8Array_Init(csi);
  vtkTypeUInt16Array_Init(csi);
  vtkTypeUInt32Array_Init(csi);
  vtkTypeUInt64Array_Init(csi);
  vtkTypeFloat32Array_Init(csi);
  vtkTypeFloat64Array_Init(csi);

}
