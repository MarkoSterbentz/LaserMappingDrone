// -*- c++ -*-

//DO NOT EDIT!
//This file was created with ../../../bin/vtkParseOGLExt-pv4.3
//from /home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/Rendering/OpenGL /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/Utilities/ParseOGLExt/headers/glext.h /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/Utilities/ParseOGLExt/headers/glxext.h /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/Utilities/ParseOGLExt/headers/wglext.h

/*
 * Copyright 2003 Sandia Corporation.
 * Under the terms of Contract DE-AC04-94AL85000, there is a non-exclusive
 * license for use of this work by or on behalf of the
 * U.S. Government. Redistribution and use in source and binary forms, with
 * or without modification, are permitted provided that this Notice and any
 * statement of authorship are reproduced on all copies.
 */

#include "vtkgl.h"
#include "vtkOpenGLExtensionManager.h"

//Functions for GL_3DFX_tbuffer
vtkgl::PFNGLTBUFFERMASK3DFXPROC vtkgl::TbufferMask3DFX = NULL;
//Functions for GL_AMD_debug_output
vtkgl::PFNGLDEBUGMESSAGEENABLEAMDPROC vtkgl::DebugMessageEnableAMD = NULL;
vtkgl::PFNGLDEBUGMESSAGEINSERTAMDPROC vtkgl::DebugMessageInsertAMD = NULL;
vtkgl::PFNGLDEBUGMESSAGECALLBACKAMDPROC vtkgl::DebugMessageCallbackAMD = NULL;
vtkgl::PFNGLGETDEBUGMESSAGELOGAMDPROC vtkgl::GetDebugMessageLogAMD = NULL;
//Functions for GL_AMD_draw_buffers_blend
vtkgl::PFNGLBLENDFUNCINDEXEDAMDPROC vtkgl::BlendFuncIndexedAMD = NULL;
vtkgl::PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC vtkgl::BlendFuncSeparateIndexedAMD = NULL;
vtkgl::PFNGLBLENDEQUATIONINDEXEDAMDPROC vtkgl::BlendEquationIndexedAMD = NULL;
vtkgl::PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC vtkgl::BlendEquationSeparateIndexedAMD = NULL;
//Functions for GL_AMD_name_gen_delete
vtkgl::PFNGLGENNAMESAMDPROC vtkgl::GenNamesAMD = NULL;
vtkgl::PFNGLDELETENAMESAMDPROC vtkgl::DeleteNamesAMD = NULL;
vtkgl::PFNGLISNAMEAMDPROC vtkgl::IsNameAMD = NULL;
//Functions for GL_AMD_performance_monitor
vtkgl::PFNGLGETPERFMONITORGROUPSAMDPROC vtkgl::GetPerfMonitorGroupsAMD = NULL;
vtkgl::PFNGLGETPERFMONITORCOUNTERSAMDPROC vtkgl::GetPerfMonitorCountersAMD = NULL;
vtkgl::PFNGLGETPERFMONITORGROUPSTRINGAMDPROC vtkgl::GetPerfMonitorGroupStringAMD = NULL;
vtkgl::PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC vtkgl::GetPerfMonitorCounterStringAMD = NULL;
vtkgl::PFNGLGETPERFMONITORCOUNTERINFOAMDPROC vtkgl::GetPerfMonitorCounterInfoAMD = NULL;
vtkgl::PFNGLGENPERFMONITORSAMDPROC vtkgl::GenPerfMonitorsAMD = NULL;
vtkgl::PFNGLDELETEPERFMONITORSAMDPROC vtkgl::DeletePerfMonitorsAMD = NULL;
vtkgl::PFNGLSELECTPERFMONITORCOUNTERSAMDPROC vtkgl::SelectPerfMonitorCountersAMD = NULL;
vtkgl::PFNGLBEGINPERFMONITORAMDPROC vtkgl::BeginPerfMonitorAMD = NULL;
vtkgl::PFNGLENDPERFMONITORAMDPROC vtkgl::EndPerfMonitorAMD = NULL;
vtkgl::PFNGLGETPERFMONITORCOUNTERDATAAMDPROC vtkgl::GetPerfMonitorCounterDataAMD = NULL;
//Functions for GL_AMD_vertex_shader_tesselator
vtkgl::PFNGLTESSELLATIONFACTORAMDPROC vtkgl::TessellationFactorAMD = NULL;
vtkgl::PFNGLTESSELLATIONMODEAMDPROC vtkgl::TessellationModeAMD = NULL;
//Functions for GL_APPLE_element_array
vtkgl::PFNGLELEMENTPOINTERAPPLEPROC vtkgl::ElementPointerAPPLE = NULL;
vtkgl::PFNGLDRAWELEMENTARRAYAPPLEPROC vtkgl::DrawElementArrayAPPLE = NULL;
vtkgl::PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC vtkgl::DrawRangeElementArrayAPPLE = NULL;
vtkgl::PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC vtkgl::MultiDrawElementArrayAPPLE = NULL;
vtkgl::PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC vtkgl::MultiDrawRangeElementArrayAPPLE = NULL;
//Functions for GL_APPLE_fence
vtkgl::PFNGLGENFENCESAPPLEPROC vtkgl::GenFencesAPPLE = NULL;
vtkgl::PFNGLDELETEFENCESAPPLEPROC vtkgl::DeleteFencesAPPLE = NULL;
vtkgl::PFNGLSETFENCEAPPLEPROC vtkgl::SetFenceAPPLE = NULL;
vtkgl::PFNGLISFENCEAPPLEPROC vtkgl::IsFenceAPPLE = NULL;
vtkgl::PFNGLTESTFENCEAPPLEPROC vtkgl::TestFenceAPPLE = NULL;
vtkgl::PFNGLFINISHFENCEAPPLEPROC vtkgl::FinishFenceAPPLE = NULL;
vtkgl::PFNGLTESTOBJECTAPPLEPROC vtkgl::TestObjectAPPLE = NULL;
vtkgl::PFNGLFINISHOBJECTAPPLEPROC vtkgl::FinishObjectAPPLE = NULL;
//Functions for GL_APPLE_flush_buffer_range
vtkgl::PFNGLBUFFERPARAMETERIAPPLEPROC vtkgl::BufferParameteriAPPLE = NULL;
vtkgl::PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC vtkgl::FlushMappedBufferRangeAPPLE = NULL;
//Functions for GL_APPLE_object_purgeable
vtkgl::PFNGLOBJECTPURGEABLEAPPLEPROC vtkgl::ObjectPurgeableAPPLE = NULL;
vtkgl::PFNGLOBJECTUNPURGEABLEAPPLEPROC vtkgl::ObjectUnpurgeableAPPLE = NULL;
vtkgl::PFNGLGETOBJECTPARAMETERIVAPPLEPROC vtkgl::GetObjectParameterivAPPLE = NULL;
//Functions for GL_APPLE_texture_range
vtkgl::PFNGLTEXTURERANGEAPPLEPROC vtkgl::TextureRangeAPPLE = NULL;
vtkgl::PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC vtkgl::GetTexParameterPointervAPPLE = NULL;
//Functions for GL_APPLE_vertex_array_object
vtkgl::PFNGLBINDVERTEXARRAYAPPLEPROC vtkgl::BindVertexArrayAPPLE = NULL;
vtkgl::PFNGLDELETEVERTEXARRAYSAPPLEPROC vtkgl::DeleteVertexArraysAPPLE = NULL;
vtkgl::PFNGLGENVERTEXARRAYSAPPLEPROC vtkgl::GenVertexArraysAPPLE = NULL;
vtkgl::PFNGLISVERTEXARRAYAPPLEPROC vtkgl::IsVertexArrayAPPLE = NULL;
//Functions for GL_APPLE_vertex_array_range
vtkgl::PFNGLVERTEXARRAYRANGEAPPLEPROC vtkgl::VertexArrayRangeAPPLE = NULL;
vtkgl::PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC vtkgl::FlushVertexArrayRangeAPPLE = NULL;
vtkgl::PFNGLVERTEXARRAYPARAMETERIAPPLEPROC vtkgl::VertexArrayParameteriAPPLE = NULL;
//Functions for GL_APPLE_vertex_program_evaluators
vtkgl::PFNGLENABLEVERTEXATTRIBAPPLEPROC vtkgl::EnableVertexAttribAPPLE = NULL;
vtkgl::PFNGLDISABLEVERTEXATTRIBAPPLEPROC vtkgl::DisableVertexAttribAPPLE = NULL;
vtkgl::PFNGLISVERTEXATTRIBENABLEDAPPLEPROC vtkgl::IsVertexAttribEnabledAPPLE = NULL;
vtkgl::PFNGLMAPVERTEXATTRIB1DAPPLEPROC vtkgl::MapVertexAttrib1dAPPLE = NULL;
vtkgl::PFNGLMAPVERTEXATTRIB1FAPPLEPROC vtkgl::MapVertexAttrib1fAPPLE = NULL;
vtkgl::PFNGLMAPVERTEXATTRIB2DAPPLEPROC vtkgl::MapVertexAttrib2dAPPLE = NULL;
vtkgl::PFNGLMAPVERTEXATTRIB2FAPPLEPROC vtkgl::MapVertexAttrib2fAPPLE = NULL;
//Functions for GL_ARB_ES2_compatibility
vtkgl::PFNGLRELEASESHADERCOMPILERPROC vtkgl::ReleaseShaderCompiler = NULL;
vtkgl::PFNGLSHADERBINARYPROC vtkgl::ShaderBinary = NULL;
vtkgl::PFNGLGETSHADERPRECISIONFORMATPROC vtkgl::GetShaderPrecisionFormat = NULL;
vtkgl::PFNGLDEPTHRANGEFPROC vtkgl::DepthRangef = NULL;
vtkgl::PFNGLCLEARDEPTHFPROC vtkgl::ClearDepthf = NULL;
//Functions for GL_ARB_blend_func_extended
vtkgl::PFNGLBINDFRAGDATALOCATIONINDEXEDPROC vtkgl::BindFragDataLocationIndexed = NULL;
vtkgl::PFNGLGETFRAGDATAINDEXPROC vtkgl::GetFragDataIndex = NULL;
//Functions for GL_ARB_cl_event
vtkgl::PFNGLCREATESYNCFROMCLEVENTARBPROC vtkgl::CreateSyncFromCLeventARB = NULL;
//Functions for GL_ARB_color_buffer_float
vtkgl::PFNGLCLAMPCOLORARBPROC vtkgl::ClampColorARB = NULL;
//Functions for GL_ARB_copy_buffer
vtkgl::PFNGLCOPYBUFFERSUBDATAPROC vtkgl::CopyBufferSubData = NULL;
//Functions for GL_ARB_debug_output
vtkgl::PFNGLDEBUGMESSAGECONTROLARBPROC vtkgl::DebugMessageControlARB = NULL;
vtkgl::PFNGLDEBUGMESSAGEINSERTARBPROC vtkgl::DebugMessageInsertARB = NULL;
vtkgl::PFNGLDEBUGMESSAGECALLBACKARBPROC vtkgl::DebugMessageCallbackARB = NULL;
vtkgl::PFNGLGETDEBUGMESSAGELOGARBPROC vtkgl::GetDebugMessageLogARB = NULL;
//Functions for GL_ARB_draw_buffers
vtkgl::PFNGLDRAWBUFFERSARBPROC vtkgl::DrawBuffersARB = NULL;
//Functions for GL_ARB_draw_buffers_blend
vtkgl::PFNGLBLENDEQUATIONIARBPROC vtkgl::BlendEquationiARB = NULL;
vtkgl::PFNGLBLENDEQUATIONSEPARATEIARBPROC vtkgl::BlendEquationSeparateiARB = NULL;
vtkgl::PFNGLBLENDFUNCIARBPROC vtkgl::BlendFunciARB = NULL;
vtkgl::PFNGLBLENDFUNCSEPARATEIARBPROC vtkgl::BlendFuncSeparateiARB = NULL;
//Functions for GL_ARB_draw_elements_base_vertex
vtkgl::PFNGLDRAWELEMENTSBASEVERTEXPROC vtkgl::DrawElementsBaseVertex = NULL;
vtkgl::PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC vtkgl::DrawRangeElementsBaseVertex = NULL;
vtkgl::PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC vtkgl::DrawElementsInstancedBaseVertex = NULL;
vtkgl::PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC vtkgl::MultiDrawElementsBaseVertex = NULL;
//Functions for GL_ARB_draw_indirect
vtkgl::PFNGLDRAWARRAYSINDIRECTPROC vtkgl::DrawArraysIndirect = NULL;
vtkgl::PFNGLDRAWELEMENTSINDIRECTPROC vtkgl::DrawElementsIndirect = NULL;
//Functions for GL_ARB_draw_instanced
vtkgl::PFNGLDRAWARRAYSINSTANCEDARBPROC vtkgl::DrawArraysInstancedARB = NULL;
vtkgl::PFNGLDRAWELEMENTSINSTANCEDARBPROC vtkgl::DrawElementsInstancedARB = NULL;
//Functions for GL_ARB_framebuffer_object
vtkgl::PFNGLISRENDERBUFFERPROC vtkgl::IsRenderbuffer = NULL;
vtkgl::PFNGLBINDRENDERBUFFERPROC vtkgl::BindRenderbuffer = NULL;
vtkgl::PFNGLDELETERENDERBUFFERSPROC vtkgl::DeleteRenderbuffers = NULL;
vtkgl::PFNGLGENRENDERBUFFERSPROC vtkgl::GenRenderbuffers = NULL;
vtkgl::PFNGLRENDERBUFFERSTORAGEPROC vtkgl::RenderbufferStorage = NULL;
vtkgl::PFNGLGETRENDERBUFFERPARAMETERIVPROC vtkgl::GetRenderbufferParameteriv = NULL;
vtkgl::PFNGLISFRAMEBUFFERPROC vtkgl::IsFramebuffer = NULL;
vtkgl::PFNGLBINDFRAMEBUFFERPROC vtkgl::BindFramebuffer = NULL;
vtkgl::PFNGLDELETEFRAMEBUFFERSPROC vtkgl::DeleteFramebuffers = NULL;
vtkgl::PFNGLGENFRAMEBUFFERSPROC vtkgl::GenFramebuffers = NULL;
vtkgl::PFNGLCHECKFRAMEBUFFERSTATUSPROC vtkgl::CheckFramebufferStatus = NULL;
vtkgl::PFNGLFRAMEBUFFERTEXTURE1DPROC vtkgl::FramebufferTexture1D = NULL;
vtkgl::PFNGLFRAMEBUFFERTEXTURE2DPROC vtkgl::FramebufferTexture2D = NULL;
vtkgl::PFNGLFRAMEBUFFERTEXTURE3DPROC vtkgl::FramebufferTexture3D = NULL;
vtkgl::PFNGLFRAMEBUFFERRENDERBUFFERPROC vtkgl::FramebufferRenderbuffer = NULL;
vtkgl::PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC vtkgl::GetFramebufferAttachmentParameteriv = NULL;
vtkgl::PFNGLGENERATEMIPMAPPROC vtkgl::GenerateMipmap = NULL;
vtkgl::PFNGLBLITFRAMEBUFFERPROC vtkgl::BlitFramebuffer = NULL;
vtkgl::PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC vtkgl::RenderbufferStorageMultisample = NULL;
vtkgl::PFNGLFRAMEBUFFERTEXTURELAYERPROC vtkgl::FramebufferTextureLayer = NULL;
//Functions for GL_ARB_geometry_shader4
vtkgl::PFNGLPROGRAMPARAMETERIARBPROC vtkgl::ProgramParameteriARB = NULL;
vtkgl::PFNGLFRAMEBUFFERTEXTUREARBPROC vtkgl::FramebufferTextureARB = NULL;
vtkgl::PFNGLFRAMEBUFFERTEXTURELAYERARBPROC vtkgl::FramebufferTextureLayerARB = NULL;
vtkgl::PFNGLFRAMEBUFFERTEXTUREFACEARBPROC vtkgl::FramebufferTextureFaceARB = NULL;
//Functions for GL_ARB_get_program_binary
vtkgl::PFNGLGETPROGRAMBINARYPROC vtkgl::GetProgramBinary = NULL;
vtkgl::PFNGLPROGRAMBINARYPROC vtkgl::ProgramBinary = NULL;
vtkgl::PFNGLPROGRAMPARAMETERIPROC vtkgl::ProgramParameteri = NULL;
//Functions for GL_ARB_gpu_shader_fp64
vtkgl::PFNGLUNIFORM1DPROC vtkgl::Uniform1d = NULL;
vtkgl::PFNGLUNIFORM2DPROC vtkgl::Uniform2d = NULL;
vtkgl::PFNGLUNIFORM3DPROC vtkgl::Uniform3d = NULL;
vtkgl::PFNGLUNIFORM4DPROC vtkgl::Uniform4d = NULL;
vtkgl::PFNGLUNIFORM1DVPROC vtkgl::Uniform1dv = NULL;
vtkgl::PFNGLUNIFORM2DVPROC vtkgl::Uniform2dv = NULL;
vtkgl::PFNGLUNIFORM3DVPROC vtkgl::Uniform3dv = NULL;
vtkgl::PFNGLUNIFORM4DVPROC vtkgl::Uniform4dv = NULL;
vtkgl::PFNGLUNIFORMMATRIX2DVPROC vtkgl::UniformMatrix2dv = NULL;
vtkgl::PFNGLUNIFORMMATRIX3DVPROC vtkgl::UniformMatrix3dv = NULL;
vtkgl::PFNGLUNIFORMMATRIX4DVPROC vtkgl::UniformMatrix4dv = NULL;
vtkgl::PFNGLUNIFORMMATRIX2X3DVPROC vtkgl::UniformMatrix2x3dv = NULL;
vtkgl::PFNGLUNIFORMMATRIX2X4DVPROC vtkgl::UniformMatrix2x4dv = NULL;
vtkgl::PFNGLUNIFORMMATRIX3X2DVPROC vtkgl::UniformMatrix3x2dv = NULL;
vtkgl::PFNGLUNIFORMMATRIX3X4DVPROC vtkgl::UniformMatrix3x4dv = NULL;
vtkgl::PFNGLUNIFORMMATRIX4X2DVPROC vtkgl::UniformMatrix4x2dv = NULL;
vtkgl::PFNGLUNIFORMMATRIX4X3DVPROC vtkgl::UniformMatrix4x3dv = NULL;
vtkgl::PFNGLGETUNIFORMDVPROC vtkgl::GetUniformdv = NULL;
//Functions for GL_ARB_instanced_arrays
vtkgl::PFNGLVERTEXATTRIBDIVISORARBPROC vtkgl::VertexAttribDivisorARB = NULL;
//Functions for GL_ARB_map_buffer_range
vtkgl::PFNGLMAPBUFFERRANGEPROC vtkgl::MapBufferRange = NULL;
vtkgl::PFNGLFLUSHMAPPEDBUFFERRANGEPROC vtkgl::FlushMappedBufferRange = NULL;
//Functions for GL_ARB_matrix_palette
vtkgl::PFNGLCURRENTPALETTEMATRIXARBPROC vtkgl::CurrentPaletteMatrixARB = NULL;
vtkgl::PFNGLMATRIXINDEXUBVARBPROC vtkgl::MatrixIndexubvARB = NULL;
vtkgl::PFNGLMATRIXINDEXUSVARBPROC vtkgl::MatrixIndexusvARB = NULL;
vtkgl::PFNGLMATRIXINDEXUIVARBPROC vtkgl::MatrixIndexuivARB = NULL;
vtkgl::PFNGLMATRIXINDEXPOINTERARBPROC vtkgl::MatrixIndexPointerARB = NULL;
//Functions for GL_ARB_multisample
vtkgl::PFNGLSAMPLECOVERAGEARBPROC vtkgl::SampleCoverageARB = NULL;
//Functions for GL_ARB_multitexture
vtkgl::PFNGLACTIVETEXTUREARBPROC vtkgl::ActiveTextureARB = NULL;
vtkgl::PFNGLCLIENTACTIVETEXTUREARBPROC vtkgl::ClientActiveTextureARB = NULL;
vtkgl::PFNGLMULTITEXCOORD1DARBPROC vtkgl::MultiTexCoord1dARB = NULL;
vtkgl::PFNGLMULTITEXCOORD1DVARBPROC vtkgl::MultiTexCoord1dvARB = NULL;
vtkgl::PFNGLMULTITEXCOORD1FARBPROC vtkgl::MultiTexCoord1fARB = NULL;
vtkgl::PFNGLMULTITEXCOORD1FVARBPROC vtkgl::MultiTexCoord1fvARB = NULL;
vtkgl::PFNGLMULTITEXCOORD1IARBPROC vtkgl::MultiTexCoord1iARB = NULL;
vtkgl::PFNGLMULTITEXCOORD1IVARBPROC vtkgl::MultiTexCoord1ivARB = NULL;
vtkgl::PFNGLMULTITEXCOORD1SARBPROC vtkgl::MultiTexCoord1sARB = NULL;
vtkgl::PFNGLMULTITEXCOORD1SVARBPROC vtkgl::MultiTexCoord1svARB = NULL;
vtkgl::PFNGLMULTITEXCOORD2DARBPROC vtkgl::MultiTexCoord2dARB = NULL;
vtkgl::PFNGLMULTITEXCOORD2DVARBPROC vtkgl::MultiTexCoord2dvARB = NULL;
vtkgl::PFNGLMULTITEXCOORD2FARBPROC vtkgl::MultiTexCoord2fARB = NULL;
vtkgl::PFNGLMULTITEXCOORD2FVARBPROC vtkgl::MultiTexCoord2fvARB = NULL;
vtkgl::PFNGLMULTITEXCOORD2IARBPROC vtkgl::MultiTexCoord2iARB = NULL;
vtkgl::PFNGLMULTITEXCOORD2IVARBPROC vtkgl::MultiTexCoord2ivARB = NULL;
vtkgl::PFNGLMULTITEXCOORD2SARBPROC vtkgl::MultiTexCoord2sARB = NULL;
vtkgl::PFNGLMULTITEXCOORD2SVARBPROC vtkgl::MultiTexCoord2svARB = NULL;
vtkgl::PFNGLMULTITEXCOORD3DARBPROC vtkgl::MultiTexCoord3dARB = NULL;
vtkgl::PFNGLMULTITEXCOORD3DVARBPROC vtkgl::MultiTexCoord3dvARB = NULL;
vtkgl::PFNGLMULTITEXCOORD3FARBPROC vtkgl::MultiTexCoord3fARB = NULL;
vtkgl::PFNGLMULTITEXCOORD3FVARBPROC vtkgl::MultiTexCoord3fvARB = NULL;
vtkgl::PFNGLMULTITEXCOORD3IARBPROC vtkgl::MultiTexCoord3iARB = NULL;
vtkgl::PFNGLMULTITEXCOORD3IVARBPROC vtkgl::MultiTexCoord3ivARB = NULL;
vtkgl::PFNGLMULTITEXCOORD3SARBPROC vtkgl::MultiTexCoord3sARB = NULL;
vtkgl::PFNGLMULTITEXCOORD3SVARBPROC vtkgl::MultiTexCoord3svARB = NULL;
vtkgl::PFNGLMULTITEXCOORD4DARBPROC vtkgl::MultiTexCoord4dARB = NULL;
vtkgl::PFNGLMULTITEXCOORD4DVARBPROC vtkgl::MultiTexCoord4dvARB = NULL;
vtkgl::PFNGLMULTITEXCOORD4FARBPROC vtkgl::MultiTexCoord4fARB = NULL;
vtkgl::PFNGLMULTITEXCOORD4FVARBPROC vtkgl::MultiTexCoord4fvARB = NULL;
vtkgl::PFNGLMULTITEXCOORD4IARBPROC vtkgl::MultiTexCoord4iARB = NULL;
vtkgl::PFNGLMULTITEXCOORD4IVARBPROC vtkgl::MultiTexCoord4ivARB = NULL;
vtkgl::PFNGLMULTITEXCOORD4SARBPROC vtkgl::MultiTexCoord4sARB = NULL;
vtkgl::PFNGLMULTITEXCOORD4SVARBPROC vtkgl::MultiTexCoord4svARB = NULL;
//Functions for GL_ARB_occlusion_query
vtkgl::PFNGLGENQUERIESARBPROC vtkgl::GenQueriesARB = NULL;
vtkgl::PFNGLDELETEQUERIESARBPROC vtkgl::DeleteQueriesARB = NULL;
vtkgl::PFNGLISQUERYARBPROC vtkgl::IsQueryARB = NULL;
vtkgl::PFNGLBEGINQUERYARBPROC vtkgl::BeginQueryARB = NULL;
vtkgl::PFNGLENDQUERYARBPROC vtkgl::EndQueryARB = NULL;
vtkgl::PFNGLGETQUERYIVARBPROC vtkgl::GetQueryivARB = NULL;
vtkgl::PFNGLGETQUERYOBJECTIVARBPROC vtkgl::GetQueryObjectivARB = NULL;
vtkgl::PFNGLGETQUERYOBJECTUIVARBPROC vtkgl::GetQueryObjectuivARB = NULL;
//Functions for GL_ARB_point_parameters
vtkgl::PFNGLPOINTPARAMETERFARBPROC vtkgl::PointParameterfARB = NULL;
vtkgl::PFNGLPOINTPARAMETERFVARBPROC vtkgl::PointParameterfvARB = NULL;
//Functions for GL_ARB_provoking_vertex
vtkgl::PFNGLPROVOKINGVERTEXPROC vtkgl::ProvokingVertex = NULL;
//Functions for GL_ARB_robustness
vtkgl::PFNGLGETGRAPHICSRESETSTATUSARBPROC vtkgl::GetGraphicsResetStatusARB = NULL;
vtkgl::PFNGLGETNMAPDVARBPROC vtkgl::GetnMapdvARB = NULL;
vtkgl::PFNGLGETNMAPFVARBPROC vtkgl::GetnMapfvARB = NULL;
vtkgl::PFNGLGETNMAPIVARBPROC vtkgl::GetnMapivARB = NULL;
vtkgl::PFNGLGETNPIXELMAPFVARBPROC vtkgl::GetnPixelMapfvARB = NULL;
vtkgl::PFNGLGETNPIXELMAPUIVARBPROC vtkgl::GetnPixelMapuivARB = NULL;
vtkgl::PFNGLGETNPIXELMAPUSVARBPROC vtkgl::GetnPixelMapusvARB = NULL;
vtkgl::PFNGLGETNPOLYGONSTIPPLEARBPROC vtkgl::GetnPolygonStippleARB = NULL;
vtkgl::PFNGLGETNCOLORTABLEARBPROC vtkgl::GetnColorTableARB = NULL;
vtkgl::PFNGLGETNCONVOLUTIONFILTERARBPROC vtkgl::GetnConvolutionFilterARB = NULL;
vtkgl::PFNGLGETNSEPARABLEFILTERARBPROC vtkgl::GetnSeparableFilterARB = NULL;
vtkgl::PFNGLGETNHISTOGRAMARBPROC vtkgl::GetnHistogramARB = NULL;
vtkgl::PFNGLGETNMINMAXARBPROC vtkgl::GetnMinmaxARB = NULL;
vtkgl::PFNGLGETNTEXIMAGEARBPROC vtkgl::GetnTexImageARB = NULL;
vtkgl::PFNGLREADNPIXELSARBPROC vtkgl::ReadnPixelsARB = NULL;
vtkgl::PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC vtkgl::GetnCompressedTexImageARB = NULL;
vtkgl::PFNGLGETNUNIFORMFVARBPROC vtkgl::GetnUniformfvARB = NULL;
vtkgl::PFNGLGETNUNIFORMIVARBPROC vtkgl::GetnUniformivARB = NULL;
vtkgl::PFNGLGETNUNIFORMUIVARBPROC vtkgl::GetnUniformuivARB = NULL;
vtkgl::PFNGLGETNUNIFORMDVARBPROC vtkgl::GetnUniformdvARB = NULL;
//Functions for GL_ARB_sample_shading
vtkgl::PFNGLMINSAMPLESHADINGARBPROC vtkgl::MinSampleShadingARB = NULL;
//Functions for GL_ARB_sampler_objects
vtkgl::PFNGLGENSAMPLERSPROC vtkgl::GenSamplers = NULL;
vtkgl::PFNGLDELETESAMPLERSPROC vtkgl::DeleteSamplers = NULL;
vtkgl::PFNGLISSAMPLERPROC vtkgl::IsSampler = NULL;
vtkgl::PFNGLBINDSAMPLERPROC vtkgl::BindSampler = NULL;
vtkgl::PFNGLSAMPLERPARAMETERIPROC vtkgl::SamplerParameteri = NULL;
vtkgl::PFNGLSAMPLERPARAMETERIVPROC vtkgl::SamplerParameteriv = NULL;
vtkgl::PFNGLSAMPLERPARAMETERFPROC vtkgl::SamplerParameterf = NULL;
vtkgl::PFNGLSAMPLERPARAMETERFVPROC vtkgl::SamplerParameterfv = NULL;
vtkgl::PFNGLSAMPLERPARAMETERIIVPROC vtkgl::SamplerParameterIiv = NULL;
vtkgl::PFNGLSAMPLERPARAMETERIUIVPROC vtkgl::SamplerParameterIuiv = NULL;
vtkgl::PFNGLGETSAMPLERPARAMETERIVPROC vtkgl::GetSamplerParameteriv = NULL;
vtkgl::PFNGLGETSAMPLERPARAMETERIIVPROC vtkgl::GetSamplerParameterIiv = NULL;
vtkgl::PFNGLGETSAMPLERPARAMETERFVPROC vtkgl::GetSamplerParameterfv = NULL;
vtkgl::PFNGLGETSAMPLERPARAMETERIUIVPROC vtkgl::GetSamplerParameterIuiv = NULL;
//Functions for GL_ARB_separate_shader_objects
vtkgl::PFNGLUSEPROGRAMSTAGESPROC vtkgl::UseProgramStages = NULL;
vtkgl::PFNGLACTIVESHADERPROGRAMPROC vtkgl::ActiveShaderProgram = NULL;
vtkgl::PFNGLCREATESHADERPROGRAMVPROC vtkgl::CreateShaderProgramv = NULL;
vtkgl::PFNGLBINDPROGRAMPIPELINEPROC vtkgl::BindProgramPipeline = NULL;
vtkgl::PFNGLDELETEPROGRAMPIPELINESPROC vtkgl::DeleteProgramPipelines = NULL;
vtkgl::PFNGLGENPROGRAMPIPELINESPROC vtkgl::GenProgramPipelines = NULL;
vtkgl::PFNGLISPROGRAMPIPELINEPROC vtkgl::IsProgramPipeline = NULL;
vtkgl::PFNGLGETPROGRAMPIPELINEIVPROC vtkgl::GetProgramPipelineiv = NULL;
vtkgl::PFNGLPROGRAMUNIFORM1IPROC vtkgl::ProgramUniform1i = NULL;
vtkgl::PFNGLPROGRAMUNIFORM1IVPROC vtkgl::ProgramUniform1iv = NULL;
vtkgl::PFNGLPROGRAMUNIFORM1FPROC vtkgl::ProgramUniform1f = NULL;
vtkgl::PFNGLPROGRAMUNIFORM1FVPROC vtkgl::ProgramUniform1fv = NULL;
vtkgl::PFNGLPROGRAMUNIFORM1DPROC vtkgl::ProgramUniform1d = NULL;
vtkgl::PFNGLPROGRAMUNIFORM1DVPROC vtkgl::ProgramUniform1dv = NULL;
vtkgl::PFNGLPROGRAMUNIFORM1UIPROC vtkgl::ProgramUniform1ui = NULL;
vtkgl::PFNGLPROGRAMUNIFORM1UIVPROC vtkgl::ProgramUniform1uiv = NULL;
vtkgl::PFNGLPROGRAMUNIFORM2IPROC vtkgl::ProgramUniform2i = NULL;
vtkgl::PFNGLPROGRAMUNIFORM2IVPROC vtkgl::ProgramUniform2iv = NULL;
vtkgl::PFNGLPROGRAMUNIFORM2FPROC vtkgl::ProgramUniform2f = NULL;
vtkgl::PFNGLPROGRAMUNIFORM2FVPROC vtkgl::ProgramUniform2fv = NULL;
vtkgl::PFNGLPROGRAMUNIFORM2DPROC vtkgl::ProgramUniform2d = NULL;
vtkgl::PFNGLPROGRAMUNIFORM2DVPROC vtkgl::ProgramUniform2dv = NULL;
vtkgl::PFNGLPROGRAMUNIFORM2UIPROC vtkgl::ProgramUniform2ui = NULL;
vtkgl::PFNGLPROGRAMUNIFORM2UIVPROC vtkgl::ProgramUniform2uiv = NULL;
vtkgl::PFNGLPROGRAMUNIFORM3IPROC vtkgl::ProgramUniform3i = NULL;
vtkgl::PFNGLPROGRAMUNIFORM3IVPROC vtkgl::ProgramUniform3iv = NULL;
vtkgl::PFNGLPROGRAMUNIFORM3FPROC vtkgl::ProgramUniform3f = NULL;
vtkgl::PFNGLPROGRAMUNIFORM3FVPROC vtkgl::ProgramUniform3fv = NULL;
vtkgl::PFNGLPROGRAMUNIFORM3DPROC vtkgl::ProgramUniform3d = NULL;
vtkgl::PFNGLPROGRAMUNIFORM3DVPROC vtkgl::ProgramUniform3dv = NULL;
vtkgl::PFNGLPROGRAMUNIFORM3UIPROC vtkgl::ProgramUniform3ui = NULL;
vtkgl::PFNGLPROGRAMUNIFORM3UIVPROC vtkgl::ProgramUniform3uiv = NULL;
vtkgl::PFNGLPROGRAMUNIFORM4IPROC vtkgl::ProgramUniform4i = NULL;
vtkgl::PFNGLPROGRAMUNIFORM4IVPROC vtkgl::ProgramUniform4iv = NULL;
vtkgl::PFNGLPROGRAMUNIFORM4FPROC vtkgl::ProgramUniform4f = NULL;
vtkgl::PFNGLPROGRAMUNIFORM4FVPROC vtkgl::ProgramUniform4fv = NULL;
vtkgl::PFNGLPROGRAMUNIFORM4DPROC vtkgl::ProgramUniform4d = NULL;
vtkgl::PFNGLPROGRAMUNIFORM4DVPROC vtkgl::ProgramUniform4dv = NULL;
vtkgl::PFNGLPROGRAMUNIFORM4UIPROC vtkgl::ProgramUniform4ui = NULL;
vtkgl::PFNGLPROGRAMUNIFORM4UIVPROC vtkgl::ProgramUniform4uiv = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX2FVPROC vtkgl::ProgramUniformMatrix2fv = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX3FVPROC vtkgl::ProgramUniformMatrix3fv = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX4FVPROC vtkgl::ProgramUniformMatrix4fv = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX2DVPROC vtkgl::ProgramUniformMatrix2dv = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX3DVPROC vtkgl::ProgramUniformMatrix3dv = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX4DVPROC vtkgl::ProgramUniformMatrix4dv = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC vtkgl::ProgramUniformMatrix2x3fv = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC vtkgl::ProgramUniformMatrix3x2fv = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC vtkgl::ProgramUniformMatrix2x4fv = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC vtkgl::ProgramUniformMatrix4x2fv = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC vtkgl::ProgramUniformMatrix3x4fv = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC vtkgl::ProgramUniformMatrix4x3fv = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC vtkgl::ProgramUniformMatrix2x3dv = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC vtkgl::ProgramUniformMatrix3x2dv = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC vtkgl::ProgramUniformMatrix2x4dv = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC vtkgl::ProgramUniformMatrix4x2dv = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC vtkgl::ProgramUniformMatrix3x4dv = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC vtkgl::ProgramUniformMatrix4x3dv = NULL;
vtkgl::PFNGLVALIDATEPROGRAMPIPELINEPROC vtkgl::ValidateProgramPipeline = NULL;
vtkgl::PFNGLGETPROGRAMPIPELINEINFOLOGPROC vtkgl::GetProgramPipelineInfoLog = NULL;
//Functions for GL_ARB_shader_objects
vtkgl::PFNGLDELETEOBJECTARBPROC vtkgl::DeleteObjectARB = NULL;
vtkgl::PFNGLGETHANDLEARBPROC vtkgl::GetHandleARB = NULL;
vtkgl::PFNGLDETACHOBJECTARBPROC vtkgl::DetachObjectARB = NULL;
vtkgl::PFNGLCREATESHADEROBJECTARBPROC vtkgl::CreateShaderObjectARB = NULL;
vtkgl::PFNGLSHADERSOURCEARBPROC vtkgl::ShaderSourceARB = NULL;
vtkgl::PFNGLCOMPILESHADERARBPROC vtkgl::CompileShaderARB = NULL;
vtkgl::PFNGLCREATEPROGRAMOBJECTARBPROC vtkgl::CreateProgramObjectARB = NULL;
vtkgl::PFNGLATTACHOBJECTARBPROC vtkgl::AttachObjectARB = NULL;
vtkgl::PFNGLLINKPROGRAMARBPROC vtkgl::LinkProgramARB = NULL;
vtkgl::PFNGLUSEPROGRAMOBJECTARBPROC vtkgl::UseProgramObjectARB = NULL;
vtkgl::PFNGLVALIDATEPROGRAMARBPROC vtkgl::ValidateProgramARB = NULL;
vtkgl::PFNGLUNIFORM1FARBPROC vtkgl::Uniform1fARB = NULL;
vtkgl::PFNGLUNIFORM2FARBPROC vtkgl::Uniform2fARB = NULL;
vtkgl::PFNGLUNIFORM3FARBPROC vtkgl::Uniform3fARB = NULL;
vtkgl::PFNGLUNIFORM4FARBPROC vtkgl::Uniform4fARB = NULL;
vtkgl::PFNGLUNIFORM1IARBPROC vtkgl::Uniform1iARB = NULL;
vtkgl::PFNGLUNIFORM2IARBPROC vtkgl::Uniform2iARB = NULL;
vtkgl::PFNGLUNIFORM3IARBPROC vtkgl::Uniform3iARB = NULL;
vtkgl::PFNGLUNIFORM4IARBPROC vtkgl::Uniform4iARB = NULL;
vtkgl::PFNGLUNIFORM1FVARBPROC vtkgl::Uniform1fvARB = NULL;
vtkgl::PFNGLUNIFORM2FVARBPROC vtkgl::Uniform2fvARB = NULL;
vtkgl::PFNGLUNIFORM3FVARBPROC vtkgl::Uniform3fvARB = NULL;
vtkgl::PFNGLUNIFORM4FVARBPROC vtkgl::Uniform4fvARB = NULL;
vtkgl::PFNGLUNIFORM1IVARBPROC vtkgl::Uniform1ivARB = NULL;
vtkgl::PFNGLUNIFORM2IVARBPROC vtkgl::Uniform2ivARB = NULL;
vtkgl::PFNGLUNIFORM3IVARBPROC vtkgl::Uniform3ivARB = NULL;
vtkgl::PFNGLUNIFORM4IVARBPROC vtkgl::Uniform4ivARB = NULL;
vtkgl::PFNGLUNIFORMMATRIX2FVARBPROC vtkgl::UniformMatrix2fvARB = NULL;
vtkgl::PFNGLUNIFORMMATRIX3FVARBPROC vtkgl::UniformMatrix3fvARB = NULL;
vtkgl::PFNGLUNIFORMMATRIX4FVARBPROC vtkgl::UniformMatrix4fvARB = NULL;
vtkgl::PFNGLGETOBJECTPARAMETERFVARBPROC vtkgl::GetObjectParameterfvARB = NULL;
vtkgl::PFNGLGETOBJECTPARAMETERIVARBPROC vtkgl::GetObjectParameterivARB = NULL;
vtkgl::PFNGLGETINFOLOGARBPROC vtkgl::GetInfoLogARB = NULL;
vtkgl::PFNGLGETATTACHEDOBJECTSARBPROC vtkgl::GetAttachedObjectsARB = NULL;
vtkgl::PFNGLGETUNIFORMLOCATIONARBPROC vtkgl::GetUniformLocationARB = NULL;
vtkgl::PFNGLGETACTIVEUNIFORMARBPROC vtkgl::GetActiveUniformARB = NULL;
vtkgl::PFNGLGETUNIFORMFVARBPROC vtkgl::GetUniformfvARB = NULL;
vtkgl::PFNGLGETUNIFORMIVARBPROC vtkgl::GetUniformivARB = NULL;
vtkgl::PFNGLGETSHADERSOURCEARBPROC vtkgl::GetShaderSourceARB = NULL;
//Functions for GL_ARB_shader_subroutine
vtkgl::PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC vtkgl::GetSubroutineUniformLocation = NULL;
vtkgl::PFNGLGETSUBROUTINEINDEXPROC vtkgl::GetSubroutineIndex = NULL;
vtkgl::PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC vtkgl::GetActiveSubroutineUniformiv = NULL;
vtkgl::PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC vtkgl::GetActiveSubroutineUniformName = NULL;
vtkgl::PFNGLGETACTIVESUBROUTINENAMEPROC vtkgl::GetActiveSubroutineName = NULL;
vtkgl::PFNGLUNIFORMSUBROUTINESUIVPROC vtkgl::UniformSubroutinesuiv = NULL;
vtkgl::PFNGLGETUNIFORMSUBROUTINEUIVPROC vtkgl::GetUniformSubroutineuiv = NULL;
vtkgl::PFNGLGETPROGRAMSTAGEIVPROC vtkgl::GetProgramStageiv = NULL;
//Functions for GL_ARB_shading_language_include
vtkgl::PFNGLNAMEDSTRINGARBPROC vtkgl::NamedStringARB = NULL;
vtkgl::PFNGLDELETENAMEDSTRINGARBPROC vtkgl::DeleteNamedStringARB = NULL;
vtkgl::PFNGLCOMPILESHADERINCLUDEARBPROC vtkgl::CompileShaderIncludeARB = NULL;
vtkgl::PFNGLISNAMEDSTRINGARBPROC vtkgl::IsNamedStringARB = NULL;
vtkgl::PFNGLGETNAMEDSTRINGARBPROC vtkgl::GetNamedStringARB = NULL;
vtkgl::PFNGLGETNAMEDSTRINGIVARBPROC vtkgl::GetNamedStringivARB = NULL;
//Functions for GL_ARB_sync
vtkgl::PFNGLFENCESYNCPROC vtkgl::FenceSync = NULL;
vtkgl::PFNGLISSYNCPROC vtkgl::IsSync = NULL;
vtkgl::PFNGLDELETESYNCPROC vtkgl::DeleteSync = NULL;
vtkgl::PFNGLCLIENTWAITSYNCPROC vtkgl::ClientWaitSync = NULL;
vtkgl::PFNGLWAITSYNCPROC vtkgl::WaitSync = NULL;
vtkgl::PFNGLGETINTEGER64VPROC vtkgl::GetInteger64v = NULL;
vtkgl::PFNGLGETSYNCIVPROC vtkgl::GetSynciv = NULL;
//Functions for GL_ARB_tessellation_shader
vtkgl::PFNGLPATCHPARAMETERIPROC vtkgl::PatchParameteri = NULL;
vtkgl::PFNGLPATCHPARAMETERFVPROC vtkgl::PatchParameterfv = NULL;
//Functions for GL_ARB_texture_buffer_object
vtkgl::PFNGLTEXBUFFERARBPROC vtkgl::TexBufferARB = NULL;
//Functions for GL_ARB_texture_compression
vtkgl::PFNGLCOMPRESSEDTEXIMAGE3DARBPROC vtkgl::CompressedTexImage3DARB = NULL;
vtkgl::PFNGLCOMPRESSEDTEXIMAGE2DARBPROC vtkgl::CompressedTexImage2DARB = NULL;
vtkgl::PFNGLCOMPRESSEDTEXIMAGE1DARBPROC vtkgl::CompressedTexImage1DARB = NULL;
vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC vtkgl::CompressedTexSubImage3DARB = NULL;
vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC vtkgl::CompressedTexSubImage2DARB = NULL;
vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC vtkgl::CompressedTexSubImage1DARB = NULL;
vtkgl::PFNGLGETCOMPRESSEDTEXIMAGEARBPROC vtkgl::GetCompressedTexImageARB = NULL;
//Functions for GL_ARB_texture_multisample
vtkgl::PFNGLTEXIMAGE2DMULTISAMPLEPROC vtkgl::TexImage2DMultisample = NULL;
vtkgl::PFNGLTEXIMAGE3DMULTISAMPLEPROC vtkgl::TexImage3DMultisample = NULL;
vtkgl::PFNGLGETMULTISAMPLEFVPROC vtkgl::GetMultisamplefv = NULL;
vtkgl::PFNGLSAMPLEMASKIPROC vtkgl::SampleMaski = NULL;
//Functions for GL_ARB_timer_query
vtkgl::PFNGLQUERYCOUNTERPROC vtkgl::QueryCounter = NULL;
vtkgl::PFNGLGETQUERYOBJECTI64VPROC vtkgl::GetQueryObjecti64v = NULL;
vtkgl::PFNGLGETQUERYOBJECTUI64VPROC vtkgl::GetQueryObjectui64v = NULL;
//Functions for GL_ARB_transform_feedback2
vtkgl::PFNGLBINDTRANSFORMFEEDBACKPROC vtkgl::BindTransformFeedback = NULL;
vtkgl::PFNGLDELETETRANSFORMFEEDBACKSPROC vtkgl::DeleteTransformFeedbacks = NULL;
vtkgl::PFNGLGENTRANSFORMFEEDBACKSPROC vtkgl::GenTransformFeedbacks = NULL;
vtkgl::PFNGLISTRANSFORMFEEDBACKPROC vtkgl::IsTransformFeedback = NULL;
vtkgl::PFNGLPAUSETRANSFORMFEEDBACKPROC vtkgl::PauseTransformFeedback = NULL;
vtkgl::PFNGLRESUMETRANSFORMFEEDBACKPROC vtkgl::ResumeTransformFeedback = NULL;
vtkgl::PFNGLDRAWTRANSFORMFEEDBACKPROC vtkgl::DrawTransformFeedback = NULL;
//Functions for GL_ARB_transform_feedback3
vtkgl::PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC vtkgl::DrawTransformFeedbackStream = NULL;
vtkgl::PFNGLBEGINQUERYINDEXEDPROC vtkgl::BeginQueryIndexed = NULL;
vtkgl::PFNGLENDQUERYINDEXEDPROC vtkgl::EndQueryIndexed = NULL;
vtkgl::PFNGLGETQUERYINDEXEDIVPROC vtkgl::GetQueryIndexediv = NULL;
//Functions for GL_ARB_transpose_matrix
vtkgl::PFNGLLOADTRANSPOSEMATRIXFARBPROC vtkgl::LoadTransposeMatrixfARB = NULL;
vtkgl::PFNGLLOADTRANSPOSEMATRIXDARBPROC vtkgl::LoadTransposeMatrixdARB = NULL;
vtkgl::PFNGLMULTTRANSPOSEMATRIXFARBPROC vtkgl::MultTransposeMatrixfARB = NULL;
vtkgl::PFNGLMULTTRANSPOSEMATRIXDARBPROC vtkgl::MultTransposeMatrixdARB = NULL;
//Functions for GL_ARB_uniform_buffer_object
vtkgl::PFNGLGETUNIFORMINDICESPROC vtkgl::GetUniformIndices = NULL;
vtkgl::PFNGLGETACTIVEUNIFORMSIVPROC vtkgl::GetActiveUniformsiv = NULL;
vtkgl::PFNGLGETACTIVEUNIFORMNAMEPROC vtkgl::GetActiveUniformName = NULL;
vtkgl::PFNGLGETUNIFORMBLOCKINDEXPROC vtkgl::GetUniformBlockIndex = NULL;
vtkgl::PFNGLGETACTIVEUNIFORMBLOCKIVPROC vtkgl::GetActiveUniformBlockiv = NULL;
vtkgl::PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC vtkgl::GetActiveUniformBlockName = NULL;
vtkgl::PFNGLUNIFORMBLOCKBINDINGPROC vtkgl::UniformBlockBinding = NULL;
//Functions for GL_ARB_vertex_array_object
vtkgl::PFNGLBINDVERTEXARRAYPROC vtkgl::BindVertexArray = NULL;
vtkgl::PFNGLDELETEVERTEXARRAYSPROC vtkgl::DeleteVertexArrays = NULL;
vtkgl::PFNGLGENVERTEXARRAYSPROC vtkgl::GenVertexArrays = NULL;
vtkgl::PFNGLISVERTEXARRAYPROC vtkgl::IsVertexArray = NULL;
//Functions for GL_ARB_vertex_attrib_64bit
vtkgl::PFNGLVERTEXATTRIBL1DPROC vtkgl::VertexAttribL1d = NULL;
vtkgl::PFNGLVERTEXATTRIBL2DPROC vtkgl::VertexAttribL2d = NULL;
vtkgl::PFNGLVERTEXATTRIBL3DPROC vtkgl::VertexAttribL3d = NULL;
vtkgl::PFNGLVERTEXATTRIBL4DPROC vtkgl::VertexAttribL4d = NULL;
vtkgl::PFNGLVERTEXATTRIBL1DVPROC vtkgl::VertexAttribL1dv = NULL;
vtkgl::PFNGLVERTEXATTRIBL2DVPROC vtkgl::VertexAttribL2dv = NULL;
vtkgl::PFNGLVERTEXATTRIBL3DVPROC vtkgl::VertexAttribL3dv = NULL;
vtkgl::PFNGLVERTEXATTRIBL4DVPROC vtkgl::VertexAttribL4dv = NULL;
vtkgl::PFNGLVERTEXATTRIBLPOINTERPROC vtkgl::VertexAttribLPointer = NULL;
vtkgl::PFNGLGETVERTEXATTRIBLDVPROC vtkgl::GetVertexAttribLdv = NULL;
//Functions for GL_ARB_vertex_blend
vtkgl::PFNGLWEIGHTBVARBPROC vtkgl::WeightbvARB = NULL;
vtkgl::PFNGLWEIGHTSVARBPROC vtkgl::WeightsvARB = NULL;
vtkgl::PFNGLWEIGHTIVARBPROC vtkgl::WeightivARB = NULL;
vtkgl::PFNGLWEIGHTFVARBPROC vtkgl::WeightfvARB = NULL;
vtkgl::PFNGLWEIGHTDVARBPROC vtkgl::WeightdvARB = NULL;
vtkgl::PFNGLWEIGHTUBVARBPROC vtkgl::WeightubvARB = NULL;
vtkgl::PFNGLWEIGHTUSVARBPROC vtkgl::WeightusvARB = NULL;
vtkgl::PFNGLWEIGHTUIVARBPROC vtkgl::WeightuivARB = NULL;
vtkgl::PFNGLWEIGHTPOINTERARBPROC vtkgl::WeightPointerARB = NULL;
vtkgl::PFNGLVERTEXBLENDARBPROC vtkgl::VertexBlendARB = NULL;
//Functions for GL_ARB_vertex_buffer_object
vtkgl::PFNGLBINDBUFFERARBPROC vtkgl::BindBufferARB = NULL;
vtkgl::PFNGLDELETEBUFFERSARBPROC vtkgl::DeleteBuffersARB = NULL;
vtkgl::PFNGLGENBUFFERSARBPROC vtkgl::GenBuffersARB = NULL;
vtkgl::PFNGLISBUFFERARBPROC vtkgl::IsBufferARB = NULL;
vtkgl::PFNGLBUFFERDATAARBPROC vtkgl::BufferDataARB = NULL;
vtkgl::PFNGLBUFFERSUBDATAARBPROC vtkgl::BufferSubDataARB = NULL;
vtkgl::PFNGLGETBUFFERSUBDATAARBPROC vtkgl::GetBufferSubDataARB = NULL;
vtkgl::PFNGLMAPBUFFERARBPROC vtkgl::MapBufferARB = NULL;
vtkgl::PFNGLUNMAPBUFFERARBPROC vtkgl::UnmapBufferARB = NULL;
vtkgl::PFNGLGETBUFFERPARAMETERIVARBPROC vtkgl::GetBufferParameterivARB = NULL;
vtkgl::PFNGLGETBUFFERPOINTERVARBPROC vtkgl::GetBufferPointervARB = NULL;
//Functions for GL_ARB_vertex_program
vtkgl::PFNGLVERTEXATTRIB1DARBPROC vtkgl::VertexAttrib1dARB = NULL;
vtkgl::PFNGLVERTEXATTRIB1DVARBPROC vtkgl::VertexAttrib1dvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB1FARBPROC vtkgl::VertexAttrib1fARB = NULL;
vtkgl::PFNGLVERTEXATTRIB1FVARBPROC vtkgl::VertexAttrib1fvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB1SARBPROC vtkgl::VertexAttrib1sARB = NULL;
vtkgl::PFNGLVERTEXATTRIB1SVARBPROC vtkgl::VertexAttrib1svARB = NULL;
vtkgl::PFNGLVERTEXATTRIB2DARBPROC vtkgl::VertexAttrib2dARB = NULL;
vtkgl::PFNGLVERTEXATTRIB2DVARBPROC vtkgl::VertexAttrib2dvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB2FARBPROC vtkgl::VertexAttrib2fARB = NULL;
vtkgl::PFNGLVERTEXATTRIB2FVARBPROC vtkgl::VertexAttrib2fvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB2SARBPROC vtkgl::VertexAttrib2sARB = NULL;
vtkgl::PFNGLVERTEXATTRIB2SVARBPROC vtkgl::VertexAttrib2svARB = NULL;
vtkgl::PFNGLVERTEXATTRIB3DARBPROC vtkgl::VertexAttrib3dARB = NULL;
vtkgl::PFNGLVERTEXATTRIB3DVARBPROC vtkgl::VertexAttrib3dvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB3FARBPROC vtkgl::VertexAttrib3fARB = NULL;
vtkgl::PFNGLVERTEXATTRIB3FVARBPROC vtkgl::VertexAttrib3fvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB3SARBPROC vtkgl::VertexAttrib3sARB = NULL;
vtkgl::PFNGLVERTEXATTRIB3SVARBPROC vtkgl::VertexAttrib3svARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4NBVARBPROC vtkgl::VertexAttrib4NbvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4NIVARBPROC vtkgl::VertexAttrib4NivARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4NSVARBPROC vtkgl::VertexAttrib4NsvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4NUBARBPROC vtkgl::VertexAttrib4NubARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4NUBVARBPROC vtkgl::VertexAttrib4NubvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4NUIVARBPROC vtkgl::VertexAttrib4NuivARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4NUSVARBPROC vtkgl::VertexAttrib4NusvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4BVARBPROC vtkgl::VertexAttrib4bvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4DARBPROC vtkgl::VertexAttrib4dARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4DVARBPROC vtkgl::VertexAttrib4dvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4FARBPROC vtkgl::VertexAttrib4fARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4FVARBPROC vtkgl::VertexAttrib4fvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4IVARBPROC vtkgl::VertexAttrib4ivARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4SARBPROC vtkgl::VertexAttrib4sARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4SVARBPROC vtkgl::VertexAttrib4svARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4UBVARBPROC vtkgl::VertexAttrib4ubvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4UIVARBPROC vtkgl::VertexAttrib4uivARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4USVARBPROC vtkgl::VertexAttrib4usvARB = NULL;
vtkgl::PFNGLVERTEXATTRIBPOINTERARBPROC vtkgl::VertexAttribPointerARB = NULL;
vtkgl::PFNGLENABLEVERTEXATTRIBARRAYARBPROC vtkgl::EnableVertexAttribArrayARB = NULL;
vtkgl::PFNGLDISABLEVERTEXATTRIBARRAYARBPROC vtkgl::DisableVertexAttribArrayARB = NULL;
vtkgl::PFNGLPROGRAMSTRINGARBPROC vtkgl::ProgramStringARB = NULL;
vtkgl::PFNGLBINDPROGRAMARBPROC vtkgl::BindProgramARB = NULL;
vtkgl::PFNGLDELETEPROGRAMSARBPROC vtkgl::DeleteProgramsARB = NULL;
vtkgl::PFNGLGENPROGRAMSARBPROC vtkgl::GenProgramsARB = NULL;
vtkgl::PFNGLPROGRAMENVPARAMETER4DARBPROC vtkgl::ProgramEnvParameter4dARB = NULL;
vtkgl::PFNGLPROGRAMENVPARAMETER4DVARBPROC vtkgl::ProgramEnvParameter4dvARB = NULL;
vtkgl::PFNGLPROGRAMENVPARAMETER4FARBPROC vtkgl::ProgramEnvParameter4fARB = NULL;
vtkgl::PFNGLPROGRAMENVPARAMETER4FVARBPROC vtkgl::ProgramEnvParameter4fvARB = NULL;
vtkgl::PFNGLPROGRAMLOCALPARAMETER4DARBPROC vtkgl::ProgramLocalParameter4dARB = NULL;
vtkgl::PFNGLPROGRAMLOCALPARAMETER4DVARBPROC vtkgl::ProgramLocalParameter4dvARB = NULL;
vtkgl::PFNGLPROGRAMLOCALPARAMETER4FARBPROC vtkgl::ProgramLocalParameter4fARB = NULL;
vtkgl::PFNGLPROGRAMLOCALPARAMETER4FVARBPROC vtkgl::ProgramLocalParameter4fvARB = NULL;
vtkgl::PFNGLGETPROGRAMENVPARAMETERDVARBPROC vtkgl::GetProgramEnvParameterdvARB = NULL;
vtkgl::PFNGLGETPROGRAMENVPARAMETERFVARBPROC vtkgl::GetProgramEnvParameterfvARB = NULL;
vtkgl::PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC vtkgl::GetProgramLocalParameterdvARB = NULL;
vtkgl::PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC vtkgl::GetProgramLocalParameterfvARB = NULL;
vtkgl::PFNGLGETPROGRAMIVARBPROC vtkgl::GetProgramivARB = NULL;
vtkgl::PFNGLGETPROGRAMSTRINGARBPROC vtkgl::GetProgramStringARB = NULL;
vtkgl::PFNGLGETVERTEXATTRIBDVARBPROC vtkgl::GetVertexAttribdvARB = NULL;
vtkgl::PFNGLGETVERTEXATTRIBFVARBPROC vtkgl::GetVertexAttribfvARB = NULL;
vtkgl::PFNGLGETVERTEXATTRIBIVARBPROC vtkgl::GetVertexAttribivARB = NULL;
vtkgl::PFNGLGETVERTEXATTRIBPOINTERVARBPROC vtkgl::GetVertexAttribPointervARB = NULL;
vtkgl::PFNGLISPROGRAMARBPROC vtkgl::IsProgramARB = NULL;
//Functions for GL_ARB_vertex_shader
vtkgl::PFNGLBINDATTRIBLOCATIONARBPROC vtkgl::BindAttribLocationARB = NULL;
vtkgl::PFNGLGETACTIVEATTRIBARBPROC vtkgl::GetActiveAttribARB = NULL;
vtkgl::PFNGLGETATTRIBLOCATIONARBPROC vtkgl::GetAttribLocationARB = NULL;
//Functions for GL_ARB_vertex_type_2_10_10_10_rev
vtkgl::PFNGLVERTEXP2UIPROC vtkgl::VertexP2ui = NULL;
vtkgl::PFNGLVERTEXP2UIVPROC vtkgl::VertexP2uiv = NULL;
vtkgl::PFNGLVERTEXP3UIPROC vtkgl::VertexP3ui = NULL;
vtkgl::PFNGLVERTEXP3UIVPROC vtkgl::VertexP3uiv = NULL;
vtkgl::PFNGLVERTEXP4UIPROC vtkgl::VertexP4ui = NULL;
vtkgl::PFNGLVERTEXP4UIVPROC vtkgl::VertexP4uiv = NULL;
vtkgl::PFNGLTEXCOORDP1UIPROC vtkgl::TexCoordP1ui = NULL;
vtkgl::PFNGLTEXCOORDP1UIVPROC vtkgl::TexCoordP1uiv = NULL;
vtkgl::PFNGLTEXCOORDP2UIPROC vtkgl::TexCoordP2ui = NULL;
vtkgl::PFNGLTEXCOORDP2UIVPROC vtkgl::TexCoordP2uiv = NULL;
vtkgl::PFNGLTEXCOORDP3UIPROC vtkgl::TexCoordP3ui = NULL;
vtkgl::PFNGLTEXCOORDP3UIVPROC vtkgl::TexCoordP3uiv = NULL;
vtkgl::PFNGLTEXCOORDP4UIPROC vtkgl::TexCoordP4ui = NULL;
vtkgl::PFNGLTEXCOORDP4UIVPROC vtkgl::TexCoordP4uiv = NULL;
vtkgl::PFNGLMULTITEXCOORDP1UIPROC vtkgl::MultiTexCoordP1ui = NULL;
vtkgl::PFNGLMULTITEXCOORDP1UIVPROC vtkgl::MultiTexCoordP1uiv = NULL;
vtkgl::PFNGLMULTITEXCOORDP2UIPROC vtkgl::MultiTexCoordP2ui = NULL;
vtkgl::PFNGLMULTITEXCOORDP2UIVPROC vtkgl::MultiTexCoordP2uiv = NULL;
vtkgl::PFNGLMULTITEXCOORDP3UIPROC vtkgl::MultiTexCoordP3ui = NULL;
vtkgl::PFNGLMULTITEXCOORDP3UIVPROC vtkgl::MultiTexCoordP3uiv = NULL;
vtkgl::PFNGLMULTITEXCOORDP4UIPROC vtkgl::MultiTexCoordP4ui = NULL;
vtkgl::PFNGLMULTITEXCOORDP4UIVPROC vtkgl::MultiTexCoordP4uiv = NULL;
vtkgl::PFNGLNORMALP3UIPROC vtkgl::NormalP3ui = NULL;
vtkgl::PFNGLNORMALP3UIVPROC vtkgl::NormalP3uiv = NULL;
vtkgl::PFNGLCOLORP3UIPROC vtkgl::ColorP3ui = NULL;
vtkgl::PFNGLCOLORP3UIVPROC vtkgl::ColorP3uiv = NULL;
vtkgl::PFNGLCOLORP4UIPROC vtkgl::ColorP4ui = NULL;
vtkgl::PFNGLCOLORP4UIVPROC vtkgl::ColorP4uiv = NULL;
vtkgl::PFNGLSECONDARYCOLORP3UIPROC vtkgl::SecondaryColorP3ui = NULL;
vtkgl::PFNGLSECONDARYCOLORP3UIVPROC vtkgl::SecondaryColorP3uiv = NULL;
vtkgl::PFNGLVERTEXATTRIBP1UIPROC vtkgl::VertexAttribP1ui = NULL;
vtkgl::PFNGLVERTEXATTRIBP1UIVPROC vtkgl::VertexAttribP1uiv = NULL;
vtkgl::PFNGLVERTEXATTRIBP2UIPROC vtkgl::VertexAttribP2ui = NULL;
vtkgl::PFNGLVERTEXATTRIBP2UIVPROC vtkgl::VertexAttribP2uiv = NULL;
vtkgl::PFNGLVERTEXATTRIBP3UIPROC vtkgl::VertexAttribP3ui = NULL;
vtkgl::PFNGLVERTEXATTRIBP3UIVPROC vtkgl::VertexAttribP3uiv = NULL;
vtkgl::PFNGLVERTEXATTRIBP4UIPROC vtkgl::VertexAttribP4ui = NULL;
vtkgl::PFNGLVERTEXATTRIBP4UIVPROC vtkgl::VertexAttribP4uiv = NULL;
//Functions for GL_ARB_viewport_array
vtkgl::PFNGLVIEWPORTARRAYVPROC vtkgl::ViewportArrayv = NULL;
vtkgl::PFNGLVIEWPORTINDEXEDFPROC vtkgl::ViewportIndexedf = NULL;
vtkgl::PFNGLVIEWPORTINDEXEDFVPROC vtkgl::ViewportIndexedfv = NULL;
vtkgl::PFNGLSCISSORARRAYVPROC vtkgl::ScissorArrayv = NULL;
vtkgl::PFNGLSCISSORINDEXEDPROC vtkgl::ScissorIndexed = NULL;
vtkgl::PFNGLSCISSORINDEXEDVPROC vtkgl::ScissorIndexedv = NULL;
vtkgl::PFNGLDEPTHRANGEARRAYVPROC vtkgl::DepthRangeArrayv = NULL;
vtkgl::PFNGLDEPTHRANGEINDEXEDPROC vtkgl::DepthRangeIndexed = NULL;
vtkgl::PFNGLGETFLOATI_VPROC vtkgl::GetFloati_v = NULL;
vtkgl::PFNGLGETDOUBLEI_VPROC vtkgl::GetDoublei_v = NULL;
//Functions for GL_ARB_window_pos
vtkgl::PFNGLWINDOWPOS2DARBPROC vtkgl::WindowPos2dARB = NULL;
vtkgl::PFNGLWINDOWPOS2DVARBPROC vtkgl::WindowPos2dvARB = NULL;
vtkgl::PFNGLWINDOWPOS2FARBPROC vtkgl::WindowPos2fARB = NULL;
vtkgl::PFNGLWINDOWPOS2FVARBPROC vtkgl::WindowPos2fvARB = NULL;
vtkgl::PFNGLWINDOWPOS2IARBPROC vtkgl::WindowPos2iARB = NULL;
vtkgl::PFNGLWINDOWPOS2IVARBPROC vtkgl::WindowPos2ivARB = NULL;
vtkgl::PFNGLWINDOWPOS2SARBPROC vtkgl::WindowPos2sARB = NULL;
vtkgl::PFNGLWINDOWPOS2SVARBPROC vtkgl::WindowPos2svARB = NULL;
vtkgl::PFNGLWINDOWPOS3DARBPROC vtkgl::WindowPos3dARB = NULL;
vtkgl::PFNGLWINDOWPOS3DVARBPROC vtkgl::WindowPos3dvARB = NULL;
vtkgl::PFNGLWINDOWPOS3FARBPROC vtkgl::WindowPos3fARB = NULL;
vtkgl::PFNGLWINDOWPOS3FVARBPROC vtkgl::WindowPos3fvARB = NULL;
vtkgl::PFNGLWINDOWPOS3IARBPROC vtkgl::WindowPos3iARB = NULL;
vtkgl::PFNGLWINDOWPOS3IVARBPROC vtkgl::WindowPos3ivARB = NULL;
vtkgl::PFNGLWINDOWPOS3SARBPROC vtkgl::WindowPos3sARB = NULL;
vtkgl::PFNGLWINDOWPOS3SVARBPROC vtkgl::WindowPos3svARB = NULL;
//Functions for GL_ATI_draw_buffers
vtkgl::PFNGLDRAWBUFFERSATIPROC vtkgl::DrawBuffersATI = NULL;
//Functions for GL_ATI_element_array
vtkgl::PFNGLELEMENTPOINTERATIPROC vtkgl::ElementPointerATI = NULL;
vtkgl::PFNGLDRAWELEMENTARRAYATIPROC vtkgl::DrawElementArrayATI = NULL;
vtkgl::PFNGLDRAWRANGEELEMENTARRAYATIPROC vtkgl::DrawRangeElementArrayATI = NULL;
//Functions for GL_ATI_envmap_bumpmap
vtkgl::PFNGLTEXBUMPPARAMETERIVATIPROC vtkgl::TexBumpParameterivATI = NULL;
vtkgl::PFNGLTEXBUMPPARAMETERFVATIPROC vtkgl::TexBumpParameterfvATI = NULL;
vtkgl::PFNGLGETTEXBUMPPARAMETERIVATIPROC vtkgl::GetTexBumpParameterivATI = NULL;
vtkgl::PFNGLGETTEXBUMPPARAMETERFVATIPROC vtkgl::GetTexBumpParameterfvATI = NULL;
//Functions for GL_ATI_fragment_shader
vtkgl::PFNGLGENFRAGMENTSHADERSATIPROC vtkgl::GenFragmentShadersATI = NULL;
vtkgl::PFNGLBINDFRAGMENTSHADERATIPROC vtkgl::BindFragmentShaderATI = NULL;
vtkgl::PFNGLDELETEFRAGMENTSHADERATIPROC vtkgl::DeleteFragmentShaderATI = NULL;
vtkgl::PFNGLBEGINFRAGMENTSHADERATIPROC vtkgl::BeginFragmentShaderATI = NULL;
vtkgl::PFNGLENDFRAGMENTSHADERATIPROC vtkgl::EndFragmentShaderATI = NULL;
vtkgl::PFNGLPASSTEXCOORDATIPROC vtkgl::PassTexCoordATI = NULL;
vtkgl::PFNGLSAMPLEMAPATIPROC vtkgl::SampleMapATI = NULL;
vtkgl::PFNGLCOLORFRAGMENTOP1ATIPROC vtkgl::ColorFragmentOp1ATI = NULL;
vtkgl::PFNGLCOLORFRAGMENTOP2ATIPROC vtkgl::ColorFragmentOp2ATI = NULL;
vtkgl::PFNGLCOLORFRAGMENTOP3ATIPROC vtkgl::ColorFragmentOp3ATI = NULL;
vtkgl::PFNGLALPHAFRAGMENTOP1ATIPROC vtkgl::AlphaFragmentOp1ATI = NULL;
vtkgl::PFNGLALPHAFRAGMENTOP2ATIPROC vtkgl::AlphaFragmentOp2ATI = NULL;
vtkgl::PFNGLALPHAFRAGMENTOP3ATIPROC vtkgl::AlphaFragmentOp3ATI = NULL;
vtkgl::PFNGLSETFRAGMENTSHADERCONSTANTATIPROC vtkgl::SetFragmentShaderConstantATI = NULL;
//Functions for GL_ATI_map_object_buffer
vtkgl::PFNGLMAPOBJECTBUFFERATIPROC vtkgl::MapObjectBufferATI = NULL;
vtkgl::PFNGLUNMAPOBJECTBUFFERATIPROC vtkgl::UnmapObjectBufferATI = NULL;
//Functions for GL_ATI_pn_triangles
vtkgl::PFNGLPNTRIANGLESIATIPROC vtkgl::PNTrianglesiATI = NULL;
vtkgl::PFNGLPNTRIANGLESFATIPROC vtkgl::PNTrianglesfATI = NULL;
//Functions for GL_ATI_separate_stencil
vtkgl::PFNGLSTENCILOPSEPARATEATIPROC vtkgl::StencilOpSeparateATI = NULL;
vtkgl::PFNGLSTENCILFUNCSEPARATEATIPROC vtkgl::StencilFuncSeparateATI = NULL;
//Functions for GL_ATI_vertex_array_object
vtkgl::PFNGLNEWOBJECTBUFFERATIPROC vtkgl::NewObjectBufferATI = NULL;
vtkgl::PFNGLISOBJECTBUFFERATIPROC vtkgl::IsObjectBufferATI = NULL;
vtkgl::PFNGLUPDATEOBJECTBUFFERATIPROC vtkgl::UpdateObjectBufferATI = NULL;
vtkgl::PFNGLGETOBJECTBUFFERFVATIPROC vtkgl::GetObjectBufferfvATI = NULL;
vtkgl::PFNGLGETOBJECTBUFFERIVATIPROC vtkgl::GetObjectBufferivATI = NULL;
vtkgl::PFNGLFREEOBJECTBUFFERATIPROC vtkgl::FreeObjectBufferATI = NULL;
vtkgl::PFNGLARRAYOBJECTATIPROC vtkgl::ArrayObjectATI = NULL;
vtkgl::PFNGLGETARRAYOBJECTFVATIPROC vtkgl::GetArrayObjectfvATI = NULL;
vtkgl::PFNGLGETARRAYOBJECTIVATIPROC vtkgl::GetArrayObjectivATI = NULL;
vtkgl::PFNGLVARIANTARRAYOBJECTATIPROC vtkgl::VariantArrayObjectATI = NULL;
vtkgl::PFNGLGETVARIANTARRAYOBJECTFVATIPROC vtkgl::GetVariantArrayObjectfvATI = NULL;
vtkgl::PFNGLGETVARIANTARRAYOBJECTIVATIPROC vtkgl::GetVariantArrayObjectivATI = NULL;
//Functions for GL_ATI_vertex_attrib_array_object
vtkgl::PFNGLVERTEXATTRIBARRAYOBJECTATIPROC vtkgl::VertexAttribArrayObjectATI = NULL;
vtkgl::PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC vtkgl::GetVertexAttribArrayObjectfvATI = NULL;
vtkgl::PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC vtkgl::GetVertexAttribArrayObjectivATI = NULL;
//Functions for GL_ATI_vertex_streams
vtkgl::PFNGLVERTEXSTREAM1SATIPROC vtkgl::VertexStream1sATI = NULL;
vtkgl::PFNGLVERTEXSTREAM1SVATIPROC vtkgl::VertexStream1svATI = NULL;
vtkgl::PFNGLVERTEXSTREAM1IATIPROC vtkgl::VertexStream1iATI = NULL;
vtkgl::PFNGLVERTEXSTREAM1IVATIPROC vtkgl::VertexStream1ivATI = NULL;
vtkgl::PFNGLVERTEXSTREAM1FATIPROC vtkgl::VertexStream1fATI = NULL;
vtkgl::PFNGLVERTEXSTREAM1FVATIPROC vtkgl::VertexStream1fvATI = NULL;
vtkgl::PFNGLVERTEXSTREAM1DATIPROC vtkgl::VertexStream1dATI = NULL;
vtkgl::PFNGLVERTEXSTREAM1DVATIPROC vtkgl::VertexStream1dvATI = NULL;
vtkgl::PFNGLVERTEXSTREAM2SATIPROC vtkgl::VertexStream2sATI = NULL;
vtkgl::PFNGLVERTEXSTREAM2SVATIPROC vtkgl::VertexStream2svATI = NULL;
vtkgl::PFNGLVERTEXSTREAM2IATIPROC vtkgl::VertexStream2iATI = NULL;
vtkgl::PFNGLVERTEXSTREAM2IVATIPROC vtkgl::VertexStream2ivATI = NULL;
vtkgl::PFNGLVERTEXSTREAM2FATIPROC vtkgl::VertexStream2fATI = NULL;
vtkgl::PFNGLVERTEXSTREAM2FVATIPROC vtkgl::VertexStream2fvATI = NULL;
vtkgl::PFNGLVERTEXSTREAM2DATIPROC vtkgl::VertexStream2dATI = NULL;
vtkgl::PFNGLVERTEXSTREAM2DVATIPROC vtkgl::VertexStream2dvATI = NULL;
vtkgl::PFNGLVERTEXSTREAM3SATIPROC vtkgl::VertexStream3sATI = NULL;
vtkgl::PFNGLVERTEXSTREAM3SVATIPROC vtkgl::VertexStream3svATI = NULL;
vtkgl::PFNGLVERTEXSTREAM3IATIPROC vtkgl::VertexStream3iATI = NULL;
vtkgl::PFNGLVERTEXSTREAM3IVATIPROC vtkgl::VertexStream3ivATI = NULL;
vtkgl::PFNGLVERTEXSTREAM3FATIPROC vtkgl::VertexStream3fATI = NULL;
vtkgl::PFNGLVERTEXSTREAM3FVATIPROC vtkgl::VertexStream3fvATI = NULL;
vtkgl::PFNGLVERTEXSTREAM3DATIPROC vtkgl::VertexStream3dATI = NULL;
vtkgl::PFNGLVERTEXSTREAM3DVATIPROC vtkgl::VertexStream3dvATI = NULL;
vtkgl::PFNGLVERTEXSTREAM4SATIPROC vtkgl::VertexStream4sATI = NULL;
vtkgl::PFNGLVERTEXSTREAM4SVATIPROC vtkgl::VertexStream4svATI = NULL;
vtkgl::PFNGLVERTEXSTREAM4IATIPROC vtkgl::VertexStream4iATI = NULL;
vtkgl::PFNGLVERTEXSTREAM4IVATIPROC vtkgl::VertexStream4ivATI = NULL;
vtkgl::PFNGLVERTEXSTREAM4FATIPROC vtkgl::VertexStream4fATI = NULL;
vtkgl::PFNGLVERTEXSTREAM4FVATIPROC vtkgl::VertexStream4fvATI = NULL;
vtkgl::PFNGLVERTEXSTREAM4DATIPROC vtkgl::VertexStream4dATI = NULL;
vtkgl::PFNGLVERTEXSTREAM4DVATIPROC vtkgl::VertexStream4dvATI = NULL;
vtkgl::PFNGLNORMALSTREAM3BATIPROC vtkgl::NormalStream3bATI = NULL;
vtkgl::PFNGLNORMALSTREAM3BVATIPROC vtkgl::NormalStream3bvATI = NULL;
vtkgl::PFNGLNORMALSTREAM3SATIPROC vtkgl::NormalStream3sATI = NULL;
vtkgl::PFNGLNORMALSTREAM3SVATIPROC vtkgl::NormalStream3svATI = NULL;
vtkgl::PFNGLNORMALSTREAM3IATIPROC vtkgl::NormalStream3iATI = NULL;
vtkgl::PFNGLNORMALSTREAM3IVATIPROC vtkgl::NormalStream3ivATI = NULL;
vtkgl::PFNGLNORMALSTREAM3FATIPROC vtkgl::NormalStream3fATI = NULL;
vtkgl::PFNGLNORMALSTREAM3FVATIPROC vtkgl::NormalStream3fvATI = NULL;
vtkgl::PFNGLNORMALSTREAM3DATIPROC vtkgl::NormalStream3dATI = NULL;
vtkgl::PFNGLNORMALSTREAM3DVATIPROC vtkgl::NormalStream3dvATI = NULL;
vtkgl::PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC vtkgl::ClientActiveVertexStreamATI = NULL;
vtkgl::PFNGLVERTEXBLENDENVIATIPROC vtkgl::VertexBlendEnviATI = NULL;
vtkgl::PFNGLVERTEXBLENDENVFATIPROC vtkgl::VertexBlendEnvfATI = NULL;
//Functions for GL_EXT_bindable_uniform
vtkgl::PFNGLUNIFORMBUFFEREXTPROC vtkgl::UniformBufferEXT = NULL;
vtkgl::PFNGLGETUNIFORMBUFFERSIZEEXTPROC vtkgl::GetUniformBufferSizeEXT = NULL;
vtkgl::PFNGLGETUNIFORMOFFSETEXTPROC vtkgl::GetUniformOffsetEXT = NULL;
//Functions for GL_EXT_blend_color
vtkgl::PFNGLBLENDCOLOREXTPROC vtkgl::BlendColorEXT = NULL;
//Functions for GL_EXT_blend_equation_separate
vtkgl::PFNGLBLENDEQUATIONSEPARATEEXTPROC vtkgl::BlendEquationSeparateEXT = NULL;
//Functions for GL_EXT_blend_func_separate
vtkgl::PFNGLBLENDFUNCSEPARATEEXTPROC vtkgl::BlendFuncSeparateEXT = NULL;
//Functions for GL_EXT_blend_minmax
vtkgl::PFNGLBLENDEQUATIONEXTPROC vtkgl::BlendEquationEXT = NULL;
//Functions for GL_EXT_color_subtable
vtkgl::PFNGLCOLORSUBTABLEEXTPROC vtkgl::ColorSubTableEXT = NULL;
vtkgl::PFNGLCOPYCOLORSUBTABLEEXTPROC vtkgl::CopyColorSubTableEXT = NULL;
//Functions for GL_EXT_compiled_vertex_array
vtkgl::PFNGLLOCKARRAYSEXTPROC vtkgl::LockArraysEXT = NULL;
vtkgl::PFNGLUNLOCKARRAYSEXTPROC vtkgl::UnlockArraysEXT = NULL;
//Functions for GL_EXT_convolution
vtkgl::PFNGLCONVOLUTIONFILTER1DEXTPROC vtkgl::ConvolutionFilter1DEXT = NULL;
vtkgl::PFNGLCONVOLUTIONFILTER2DEXTPROC vtkgl::ConvolutionFilter2DEXT = NULL;
vtkgl::PFNGLCONVOLUTIONPARAMETERFEXTPROC vtkgl::ConvolutionParameterfEXT = NULL;
vtkgl::PFNGLCONVOLUTIONPARAMETERFVEXTPROC vtkgl::ConvolutionParameterfvEXT = NULL;
vtkgl::PFNGLCONVOLUTIONPARAMETERIEXTPROC vtkgl::ConvolutionParameteriEXT = NULL;
vtkgl::PFNGLCONVOLUTIONPARAMETERIVEXTPROC vtkgl::ConvolutionParameterivEXT = NULL;
vtkgl::PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC vtkgl::CopyConvolutionFilter1DEXT = NULL;
vtkgl::PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC vtkgl::CopyConvolutionFilter2DEXT = NULL;
vtkgl::PFNGLGETCONVOLUTIONFILTEREXTPROC vtkgl::GetConvolutionFilterEXT = NULL;
vtkgl::PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC vtkgl::GetConvolutionParameterfvEXT = NULL;
vtkgl::PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC vtkgl::GetConvolutionParameterivEXT = NULL;
vtkgl::PFNGLGETSEPARABLEFILTEREXTPROC vtkgl::GetSeparableFilterEXT = NULL;
vtkgl::PFNGLSEPARABLEFILTER2DEXTPROC vtkgl::SeparableFilter2DEXT = NULL;
//Functions for GL_EXT_coordinate_frame
vtkgl::PFNGLTANGENT3BEXTPROC vtkgl::Tangent3bEXT = NULL;
vtkgl::PFNGLTANGENT3BVEXTPROC vtkgl::Tangent3bvEXT = NULL;
vtkgl::PFNGLTANGENT3DEXTPROC vtkgl::Tangent3dEXT = NULL;
vtkgl::PFNGLTANGENT3DVEXTPROC vtkgl::Tangent3dvEXT = NULL;
vtkgl::PFNGLTANGENT3FEXTPROC vtkgl::Tangent3fEXT = NULL;
vtkgl::PFNGLTANGENT3FVEXTPROC vtkgl::Tangent3fvEXT = NULL;
vtkgl::PFNGLTANGENT3IEXTPROC vtkgl::Tangent3iEXT = NULL;
vtkgl::PFNGLTANGENT3IVEXTPROC vtkgl::Tangent3ivEXT = NULL;
vtkgl::PFNGLTANGENT3SEXTPROC vtkgl::Tangent3sEXT = NULL;
vtkgl::PFNGLTANGENT3SVEXTPROC vtkgl::Tangent3svEXT = NULL;
vtkgl::PFNGLBINORMAL3BEXTPROC vtkgl::Binormal3bEXT = NULL;
vtkgl::PFNGLBINORMAL3BVEXTPROC vtkgl::Binormal3bvEXT = NULL;
vtkgl::PFNGLBINORMAL3DEXTPROC vtkgl::Binormal3dEXT = NULL;
vtkgl::PFNGLBINORMAL3DVEXTPROC vtkgl::Binormal3dvEXT = NULL;
vtkgl::PFNGLBINORMAL3FEXTPROC vtkgl::Binormal3fEXT = NULL;
vtkgl::PFNGLBINORMAL3FVEXTPROC vtkgl::Binormal3fvEXT = NULL;
vtkgl::PFNGLBINORMAL3IEXTPROC vtkgl::Binormal3iEXT = NULL;
vtkgl::PFNGLBINORMAL3IVEXTPROC vtkgl::Binormal3ivEXT = NULL;
vtkgl::PFNGLBINORMAL3SEXTPROC vtkgl::Binormal3sEXT = NULL;
vtkgl::PFNGLBINORMAL3SVEXTPROC vtkgl::Binormal3svEXT = NULL;
vtkgl::PFNGLTANGENTPOINTEREXTPROC vtkgl::TangentPointerEXT = NULL;
vtkgl::PFNGLBINORMALPOINTEREXTPROC vtkgl::BinormalPointerEXT = NULL;
//Functions for GL_EXT_copy_texture
vtkgl::PFNGLCOPYTEXIMAGE1DEXTPROC vtkgl::CopyTexImage1DEXT = NULL;
vtkgl::PFNGLCOPYTEXIMAGE2DEXTPROC vtkgl::CopyTexImage2DEXT = NULL;
vtkgl::PFNGLCOPYTEXSUBIMAGE1DEXTPROC vtkgl::CopyTexSubImage1DEXT = NULL;
vtkgl::PFNGLCOPYTEXSUBIMAGE2DEXTPROC vtkgl::CopyTexSubImage2DEXT = NULL;
vtkgl::PFNGLCOPYTEXSUBIMAGE3DEXTPROC vtkgl::CopyTexSubImage3DEXT = NULL;
//Functions for GL_EXT_cull_vertex
vtkgl::PFNGLCULLPARAMETERDVEXTPROC vtkgl::CullParameterdvEXT = NULL;
vtkgl::PFNGLCULLPARAMETERFVEXTPROC vtkgl::CullParameterfvEXT = NULL;
//Functions for GL_EXT_depth_bounds_test
vtkgl::PFNGLDEPTHBOUNDSEXTPROC vtkgl::DepthBoundsEXT = NULL;
//Functions for GL_EXT_direct_state_access
vtkgl::PFNGLCLIENTATTRIBDEFAULTEXTPROC vtkgl::ClientAttribDefaultEXT = NULL;
vtkgl::PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC vtkgl::PushClientAttribDefaultEXT = NULL;
vtkgl::PFNGLMATRIXLOADFEXTPROC vtkgl::MatrixLoadfEXT = NULL;
vtkgl::PFNGLMATRIXLOADDEXTPROC vtkgl::MatrixLoaddEXT = NULL;
vtkgl::PFNGLMATRIXMULTFEXTPROC vtkgl::MatrixMultfEXT = NULL;
vtkgl::PFNGLMATRIXMULTDEXTPROC vtkgl::MatrixMultdEXT = NULL;
vtkgl::PFNGLMATRIXLOADIDENTITYEXTPROC vtkgl::MatrixLoadIdentityEXT = NULL;
vtkgl::PFNGLMATRIXROTATEFEXTPROC vtkgl::MatrixRotatefEXT = NULL;
vtkgl::PFNGLMATRIXROTATEDEXTPROC vtkgl::MatrixRotatedEXT = NULL;
vtkgl::PFNGLMATRIXSCALEFEXTPROC vtkgl::MatrixScalefEXT = NULL;
vtkgl::PFNGLMATRIXSCALEDEXTPROC vtkgl::MatrixScaledEXT = NULL;
vtkgl::PFNGLMATRIXTRANSLATEFEXTPROC vtkgl::MatrixTranslatefEXT = NULL;
vtkgl::PFNGLMATRIXTRANSLATEDEXTPROC vtkgl::MatrixTranslatedEXT = NULL;
vtkgl::PFNGLMATRIXFRUSTUMEXTPROC vtkgl::MatrixFrustumEXT = NULL;
vtkgl::PFNGLMATRIXORTHOEXTPROC vtkgl::MatrixOrthoEXT = NULL;
vtkgl::PFNGLMATRIXPOPEXTPROC vtkgl::MatrixPopEXT = NULL;
vtkgl::PFNGLMATRIXPUSHEXTPROC vtkgl::MatrixPushEXT = NULL;
vtkgl::PFNGLMATRIXLOADTRANSPOSEFEXTPROC vtkgl::MatrixLoadTransposefEXT = NULL;
vtkgl::PFNGLMATRIXLOADTRANSPOSEDEXTPROC vtkgl::MatrixLoadTransposedEXT = NULL;
vtkgl::PFNGLMATRIXMULTTRANSPOSEFEXTPROC vtkgl::MatrixMultTransposefEXT = NULL;
vtkgl::PFNGLMATRIXMULTTRANSPOSEDEXTPROC vtkgl::MatrixMultTransposedEXT = NULL;
vtkgl::PFNGLTEXTUREPARAMETERFEXTPROC vtkgl::TextureParameterfEXT = NULL;
vtkgl::PFNGLTEXTUREPARAMETERFVEXTPROC vtkgl::TextureParameterfvEXT = NULL;
vtkgl::PFNGLTEXTUREPARAMETERIEXTPROC vtkgl::TextureParameteriEXT = NULL;
vtkgl::PFNGLTEXTUREPARAMETERIVEXTPROC vtkgl::TextureParameterivEXT = NULL;
vtkgl::PFNGLTEXTUREIMAGE1DEXTPROC vtkgl::TextureImage1DEXT = NULL;
vtkgl::PFNGLTEXTUREIMAGE2DEXTPROC vtkgl::TextureImage2DEXT = NULL;
vtkgl::PFNGLTEXTURESUBIMAGE1DEXTPROC vtkgl::TextureSubImage1DEXT = NULL;
vtkgl::PFNGLTEXTURESUBIMAGE2DEXTPROC vtkgl::TextureSubImage2DEXT = NULL;
vtkgl::PFNGLCOPYTEXTUREIMAGE1DEXTPROC vtkgl::CopyTextureImage1DEXT = NULL;
vtkgl::PFNGLCOPYTEXTUREIMAGE2DEXTPROC vtkgl::CopyTextureImage2DEXT = NULL;
vtkgl::PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC vtkgl::CopyTextureSubImage1DEXT = NULL;
vtkgl::PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC vtkgl::CopyTextureSubImage2DEXT = NULL;
vtkgl::PFNGLGETTEXTUREIMAGEEXTPROC vtkgl::GetTextureImageEXT = NULL;
vtkgl::PFNGLGETTEXTUREPARAMETERFVEXTPROC vtkgl::GetTextureParameterfvEXT = NULL;
vtkgl::PFNGLGETTEXTUREPARAMETERIVEXTPROC vtkgl::GetTextureParameterivEXT = NULL;
vtkgl::PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC vtkgl::GetTextureLevelParameterfvEXT = NULL;
vtkgl::PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC vtkgl::GetTextureLevelParameterivEXT = NULL;
vtkgl::PFNGLTEXTUREIMAGE3DEXTPROC vtkgl::TextureImage3DEXT = NULL;
vtkgl::PFNGLTEXTURESUBIMAGE3DEXTPROC vtkgl::TextureSubImage3DEXT = NULL;
vtkgl::PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC vtkgl::CopyTextureSubImage3DEXT = NULL;
vtkgl::PFNGLMULTITEXPARAMETERFEXTPROC vtkgl::MultiTexParameterfEXT = NULL;
vtkgl::PFNGLMULTITEXPARAMETERFVEXTPROC vtkgl::MultiTexParameterfvEXT = NULL;
vtkgl::PFNGLMULTITEXPARAMETERIEXTPROC vtkgl::MultiTexParameteriEXT = NULL;
vtkgl::PFNGLMULTITEXPARAMETERIVEXTPROC vtkgl::MultiTexParameterivEXT = NULL;
vtkgl::PFNGLMULTITEXIMAGE1DEXTPROC vtkgl::MultiTexImage1DEXT = NULL;
vtkgl::PFNGLMULTITEXIMAGE2DEXTPROC vtkgl::MultiTexImage2DEXT = NULL;
vtkgl::PFNGLMULTITEXSUBIMAGE1DEXTPROC vtkgl::MultiTexSubImage1DEXT = NULL;
vtkgl::PFNGLMULTITEXSUBIMAGE2DEXTPROC vtkgl::MultiTexSubImage2DEXT = NULL;
vtkgl::PFNGLCOPYMULTITEXIMAGE1DEXTPROC vtkgl::CopyMultiTexImage1DEXT = NULL;
vtkgl::PFNGLCOPYMULTITEXIMAGE2DEXTPROC vtkgl::CopyMultiTexImage2DEXT = NULL;
vtkgl::PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC vtkgl::CopyMultiTexSubImage1DEXT = NULL;
vtkgl::PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC vtkgl::CopyMultiTexSubImage2DEXT = NULL;
vtkgl::PFNGLGETMULTITEXIMAGEEXTPROC vtkgl::GetMultiTexImageEXT = NULL;
vtkgl::PFNGLGETMULTITEXPARAMETERFVEXTPROC vtkgl::GetMultiTexParameterfvEXT = NULL;
vtkgl::PFNGLGETMULTITEXPARAMETERIVEXTPROC vtkgl::GetMultiTexParameterivEXT = NULL;
vtkgl::PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC vtkgl::GetMultiTexLevelParameterfvEXT = NULL;
vtkgl::PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC vtkgl::GetMultiTexLevelParameterivEXT = NULL;
vtkgl::PFNGLMULTITEXIMAGE3DEXTPROC vtkgl::MultiTexImage3DEXT = NULL;
vtkgl::PFNGLMULTITEXSUBIMAGE3DEXTPROC vtkgl::MultiTexSubImage3DEXT = NULL;
vtkgl::PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC vtkgl::CopyMultiTexSubImage3DEXT = NULL;
vtkgl::PFNGLBINDMULTITEXTUREEXTPROC vtkgl::BindMultiTextureEXT = NULL;
vtkgl::PFNGLENABLECLIENTSTATEINDEXEDEXTPROC vtkgl::EnableClientStateIndexedEXT = NULL;
vtkgl::PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC vtkgl::DisableClientStateIndexedEXT = NULL;
vtkgl::PFNGLMULTITEXCOORDPOINTEREXTPROC vtkgl::MultiTexCoordPointerEXT = NULL;
vtkgl::PFNGLMULTITEXENVFEXTPROC vtkgl::MultiTexEnvfEXT = NULL;
vtkgl::PFNGLMULTITEXENVFVEXTPROC vtkgl::MultiTexEnvfvEXT = NULL;
vtkgl::PFNGLMULTITEXENVIEXTPROC vtkgl::MultiTexEnviEXT = NULL;
vtkgl::PFNGLMULTITEXENVIVEXTPROC vtkgl::MultiTexEnvivEXT = NULL;
vtkgl::PFNGLMULTITEXGENDEXTPROC vtkgl::MultiTexGendEXT = NULL;
vtkgl::PFNGLMULTITEXGENDVEXTPROC vtkgl::MultiTexGendvEXT = NULL;
vtkgl::PFNGLMULTITEXGENFEXTPROC vtkgl::MultiTexGenfEXT = NULL;
vtkgl::PFNGLMULTITEXGENFVEXTPROC vtkgl::MultiTexGenfvEXT = NULL;
vtkgl::PFNGLMULTITEXGENIEXTPROC vtkgl::MultiTexGeniEXT = NULL;
vtkgl::PFNGLMULTITEXGENIVEXTPROC vtkgl::MultiTexGenivEXT = NULL;
vtkgl::PFNGLGETMULTITEXENVFVEXTPROC vtkgl::GetMultiTexEnvfvEXT = NULL;
vtkgl::PFNGLGETMULTITEXENVIVEXTPROC vtkgl::GetMultiTexEnvivEXT = NULL;
vtkgl::PFNGLGETMULTITEXGENDVEXTPROC vtkgl::GetMultiTexGendvEXT = NULL;
vtkgl::PFNGLGETMULTITEXGENFVEXTPROC vtkgl::GetMultiTexGenfvEXT = NULL;
vtkgl::PFNGLGETMULTITEXGENIVEXTPROC vtkgl::GetMultiTexGenivEXT = NULL;
vtkgl::PFNGLGETFLOATINDEXEDVEXTPROC vtkgl::GetFloatIndexedvEXT = NULL;
vtkgl::PFNGLGETDOUBLEINDEXEDVEXTPROC vtkgl::GetDoubleIndexedvEXT = NULL;
vtkgl::PFNGLGETPOINTERINDEXEDVEXTPROC vtkgl::GetPointerIndexedvEXT = NULL;
vtkgl::PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC vtkgl::CompressedTextureImage3DEXT = NULL;
vtkgl::PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC vtkgl::CompressedTextureImage2DEXT = NULL;
vtkgl::PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC vtkgl::CompressedTextureImage1DEXT = NULL;
vtkgl::PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC vtkgl::CompressedTextureSubImage3DEXT = NULL;
vtkgl::PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC vtkgl::CompressedTextureSubImage2DEXT = NULL;
vtkgl::PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC vtkgl::CompressedTextureSubImage1DEXT = NULL;
vtkgl::PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC vtkgl::GetCompressedTextureImageEXT = NULL;
vtkgl::PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC vtkgl::CompressedMultiTexImage3DEXT = NULL;
vtkgl::PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC vtkgl::CompressedMultiTexImage2DEXT = NULL;
vtkgl::PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC vtkgl::CompressedMultiTexImage1DEXT = NULL;
vtkgl::PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC vtkgl::CompressedMultiTexSubImage3DEXT = NULL;
vtkgl::PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC vtkgl::CompressedMultiTexSubImage2DEXT = NULL;
vtkgl::PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC vtkgl::CompressedMultiTexSubImage1DEXT = NULL;
vtkgl::PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC vtkgl::GetCompressedMultiTexImageEXT = NULL;
vtkgl::PFNGLNAMEDPROGRAMSTRINGEXTPROC vtkgl::NamedProgramStringEXT = NULL;
vtkgl::PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC vtkgl::NamedProgramLocalParameter4dEXT = NULL;
vtkgl::PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC vtkgl::NamedProgramLocalParameter4dvEXT = NULL;
vtkgl::PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC vtkgl::NamedProgramLocalParameter4fEXT = NULL;
vtkgl::PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC vtkgl::NamedProgramLocalParameter4fvEXT = NULL;
vtkgl::PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC vtkgl::GetNamedProgramLocalParameterdvEXT = NULL;
vtkgl::PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC vtkgl::GetNamedProgramLocalParameterfvEXT = NULL;
vtkgl::PFNGLGETNAMEDPROGRAMIVEXTPROC vtkgl::GetNamedProgramivEXT = NULL;
vtkgl::PFNGLGETNAMEDPROGRAMSTRINGEXTPROC vtkgl::GetNamedProgramStringEXT = NULL;
vtkgl::PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC vtkgl::NamedProgramLocalParameters4fvEXT = NULL;
vtkgl::PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC vtkgl::NamedProgramLocalParameterI4iEXT = NULL;
vtkgl::PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC vtkgl::NamedProgramLocalParameterI4ivEXT = NULL;
vtkgl::PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC vtkgl::NamedProgramLocalParametersI4ivEXT = NULL;
vtkgl::PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC vtkgl::NamedProgramLocalParameterI4uiEXT = NULL;
vtkgl::PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC vtkgl::NamedProgramLocalParameterI4uivEXT = NULL;
vtkgl::PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC vtkgl::NamedProgramLocalParametersI4uivEXT = NULL;
vtkgl::PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC vtkgl::GetNamedProgramLocalParameterIivEXT = NULL;
vtkgl::PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC vtkgl::GetNamedProgramLocalParameterIuivEXT = NULL;
vtkgl::PFNGLTEXTUREPARAMETERIIVEXTPROC vtkgl::TextureParameterIivEXT = NULL;
vtkgl::PFNGLTEXTUREPARAMETERIUIVEXTPROC vtkgl::TextureParameterIuivEXT = NULL;
vtkgl::PFNGLGETTEXTUREPARAMETERIIVEXTPROC vtkgl::GetTextureParameterIivEXT = NULL;
vtkgl::PFNGLGETTEXTUREPARAMETERIUIVEXTPROC vtkgl::GetTextureParameterIuivEXT = NULL;
vtkgl::PFNGLMULTITEXPARAMETERIIVEXTPROC vtkgl::MultiTexParameterIivEXT = NULL;
vtkgl::PFNGLMULTITEXPARAMETERIUIVEXTPROC vtkgl::MultiTexParameterIuivEXT = NULL;
vtkgl::PFNGLGETMULTITEXPARAMETERIIVEXTPROC vtkgl::GetMultiTexParameterIivEXT = NULL;
vtkgl::PFNGLGETMULTITEXPARAMETERIUIVEXTPROC vtkgl::GetMultiTexParameterIuivEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM1FEXTPROC vtkgl::ProgramUniform1fEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM2FEXTPROC vtkgl::ProgramUniform2fEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM3FEXTPROC vtkgl::ProgramUniform3fEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM4FEXTPROC vtkgl::ProgramUniform4fEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM1IEXTPROC vtkgl::ProgramUniform1iEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM2IEXTPROC vtkgl::ProgramUniform2iEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM3IEXTPROC vtkgl::ProgramUniform3iEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM4IEXTPROC vtkgl::ProgramUniform4iEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM1FVEXTPROC vtkgl::ProgramUniform1fvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM2FVEXTPROC vtkgl::ProgramUniform2fvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM3FVEXTPROC vtkgl::ProgramUniform3fvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM4FVEXTPROC vtkgl::ProgramUniform4fvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM1IVEXTPROC vtkgl::ProgramUniform1ivEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM2IVEXTPROC vtkgl::ProgramUniform2ivEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM3IVEXTPROC vtkgl::ProgramUniform3ivEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM4IVEXTPROC vtkgl::ProgramUniform4ivEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC vtkgl::ProgramUniformMatrix2fvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC vtkgl::ProgramUniformMatrix3fvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC vtkgl::ProgramUniformMatrix4fvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC vtkgl::ProgramUniformMatrix2x3fvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC vtkgl::ProgramUniformMatrix3x2fvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC vtkgl::ProgramUniformMatrix2x4fvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC vtkgl::ProgramUniformMatrix4x2fvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC vtkgl::ProgramUniformMatrix3x4fvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC vtkgl::ProgramUniformMatrix4x3fvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM1UIEXTPROC vtkgl::ProgramUniform1uiEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM2UIEXTPROC vtkgl::ProgramUniform2uiEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM3UIEXTPROC vtkgl::ProgramUniform3uiEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM4UIEXTPROC vtkgl::ProgramUniform4uiEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM1UIVEXTPROC vtkgl::ProgramUniform1uivEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM2UIVEXTPROC vtkgl::ProgramUniform2uivEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM3UIVEXTPROC vtkgl::ProgramUniform3uivEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM4UIVEXTPROC vtkgl::ProgramUniform4uivEXT = NULL;
vtkgl::PFNGLNAMEDBUFFERDATAEXTPROC vtkgl::NamedBufferDataEXT = NULL;
vtkgl::PFNGLNAMEDBUFFERSUBDATAEXTPROC vtkgl::NamedBufferSubDataEXT = NULL;
vtkgl::PFNGLMAPNAMEDBUFFEREXTPROC vtkgl::MapNamedBufferEXT = NULL;
vtkgl::PFNGLUNMAPNAMEDBUFFEREXTPROC vtkgl::UnmapNamedBufferEXT = NULL;
vtkgl::PFNGLMAPNAMEDBUFFERRANGEEXTPROC vtkgl::MapNamedBufferRangeEXT = NULL;
vtkgl::PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC vtkgl::FlushMappedNamedBufferRangeEXT = NULL;
vtkgl::PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC vtkgl::NamedCopyBufferSubDataEXT = NULL;
vtkgl::PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC vtkgl::GetNamedBufferParameterivEXT = NULL;
vtkgl::PFNGLGETNAMEDBUFFERPOINTERVEXTPROC vtkgl::GetNamedBufferPointervEXT = NULL;
vtkgl::PFNGLGETNAMEDBUFFERSUBDATAEXTPROC vtkgl::GetNamedBufferSubDataEXT = NULL;
vtkgl::PFNGLTEXTUREBUFFEREXTPROC vtkgl::TextureBufferEXT = NULL;
vtkgl::PFNGLMULTITEXBUFFEREXTPROC vtkgl::MultiTexBufferEXT = NULL;
vtkgl::PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC vtkgl::NamedRenderbufferStorageEXT = NULL;
vtkgl::PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC vtkgl::GetNamedRenderbufferParameterivEXT = NULL;
vtkgl::PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC vtkgl::CheckNamedFramebufferStatusEXT = NULL;
vtkgl::PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC vtkgl::NamedFramebufferTexture1DEXT = NULL;
vtkgl::PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC vtkgl::NamedFramebufferTexture2DEXT = NULL;
vtkgl::PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC vtkgl::NamedFramebufferTexture3DEXT = NULL;
vtkgl::PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC vtkgl::NamedFramebufferRenderbufferEXT = NULL;
vtkgl::PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC vtkgl::GetNamedFramebufferAttachmentParameterivEXT = NULL;
vtkgl::PFNGLGENERATETEXTUREMIPMAPEXTPROC vtkgl::GenerateTextureMipmapEXT = NULL;
vtkgl::PFNGLGENERATEMULTITEXMIPMAPEXTPROC vtkgl::GenerateMultiTexMipmapEXT = NULL;
vtkgl::PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC vtkgl::FramebufferDrawBufferEXT = NULL;
vtkgl::PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC vtkgl::FramebufferDrawBuffersEXT = NULL;
vtkgl::PFNGLFRAMEBUFFERREADBUFFEREXTPROC vtkgl::FramebufferReadBufferEXT = NULL;
vtkgl::PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC vtkgl::GetFramebufferParameterivEXT = NULL;
vtkgl::PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC vtkgl::NamedRenderbufferStorageMultisampleEXT = NULL;
vtkgl::PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC vtkgl::NamedRenderbufferStorageMultisampleCoverageEXT = NULL;
vtkgl::PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC vtkgl::NamedFramebufferTextureEXT = NULL;
vtkgl::PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC vtkgl::NamedFramebufferTextureLayerEXT = NULL;
vtkgl::PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC vtkgl::NamedFramebufferTextureFaceEXT = NULL;
vtkgl::PFNGLTEXTURERENDERBUFFEREXTPROC vtkgl::TextureRenderbufferEXT = NULL;
vtkgl::PFNGLMULTITEXRENDERBUFFEREXTPROC vtkgl::MultiTexRenderbufferEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM1DEXTPROC vtkgl::ProgramUniform1dEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM2DEXTPROC vtkgl::ProgramUniform2dEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM3DEXTPROC vtkgl::ProgramUniform3dEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM4DEXTPROC vtkgl::ProgramUniform4dEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM1DVEXTPROC vtkgl::ProgramUniform1dvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM2DVEXTPROC vtkgl::ProgramUniform2dvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM3DVEXTPROC vtkgl::ProgramUniform3dvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORM4DVEXTPROC vtkgl::ProgramUniform4dvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC vtkgl::ProgramUniformMatrix2dvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC vtkgl::ProgramUniformMatrix3dvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC vtkgl::ProgramUniformMatrix4dvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC vtkgl::ProgramUniformMatrix2x3dvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC vtkgl::ProgramUniformMatrix2x4dvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC vtkgl::ProgramUniformMatrix3x2dvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC vtkgl::ProgramUniformMatrix3x4dvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC vtkgl::ProgramUniformMatrix4x2dvEXT = NULL;
vtkgl::PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC vtkgl::ProgramUniformMatrix4x3dvEXT = NULL;
//Functions for GL_EXT_draw_buffers2
vtkgl::PFNGLCOLORMASKINDEXEDEXTPROC vtkgl::ColorMaskIndexedEXT = NULL;
vtkgl::PFNGLGETBOOLEANINDEXEDVEXTPROC vtkgl::GetBooleanIndexedvEXT = NULL;
vtkgl::PFNGLGETINTEGERINDEXEDVEXTPROC vtkgl::GetIntegerIndexedvEXT = NULL;
vtkgl::PFNGLENABLEINDEXEDEXTPROC vtkgl::EnableIndexedEXT = NULL;
vtkgl::PFNGLDISABLEINDEXEDEXTPROC vtkgl::DisableIndexedEXT = NULL;
vtkgl::PFNGLISENABLEDINDEXEDEXTPROC vtkgl::IsEnabledIndexedEXT = NULL;
//Functions for GL_EXT_draw_instanced
vtkgl::PFNGLDRAWARRAYSINSTANCEDEXTPROC vtkgl::DrawArraysInstancedEXT = NULL;
vtkgl::PFNGLDRAWELEMENTSINSTANCEDEXTPROC vtkgl::DrawElementsInstancedEXT = NULL;
//Functions for GL_EXT_draw_range_elements
vtkgl::PFNGLDRAWRANGEELEMENTSEXTPROC vtkgl::DrawRangeElementsEXT = NULL;
//Functions for GL_EXT_fog_coord
vtkgl::PFNGLFOGCOORDFEXTPROC vtkgl::FogCoordfEXT = NULL;
vtkgl::PFNGLFOGCOORDFVEXTPROC vtkgl::FogCoordfvEXT = NULL;
vtkgl::PFNGLFOGCOORDDEXTPROC vtkgl::FogCoorddEXT = NULL;
vtkgl::PFNGLFOGCOORDDVEXTPROC vtkgl::FogCoorddvEXT = NULL;
vtkgl::PFNGLFOGCOORDPOINTEREXTPROC vtkgl::FogCoordPointerEXT = NULL;
//Functions for GL_EXT_framebuffer_blit
vtkgl::PFNGLBLITFRAMEBUFFEREXTPROC vtkgl::BlitFramebufferEXT = NULL;
//Functions for GL_EXT_framebuffer_multisample
vtkgl::PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC vtkgl::RenderbufferStorageMultisampleEXT = NULL;
//Functions for GL_EXT_framebuffer_object
vtkgl::PFNGLISRENDERBUFFEREXTPROC vtkgl::IsRenderbufferEXT = NULL;
vtkgl::PFNGLBINDRENDERBUFFEREXTPROC vtkgl::BindRenderbufferEXT = NULL;
vtkgl::PFNGLDELETERENDERBUFFERSEXTPROC vtkgl::DeleteRenderbuffersEXT = NULL;
vtkgl::PFNGLGENRENDERBUFFERSEXTPROC vtkgl::GenRenderbuffersEXT = NULL;
vtkgl::PFNGLRENDERBUFFERSTORAGEEXTPROC vtkgl::RenderbufferStorageEXT = NULL;
vtkgl::PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC vtkgl::GetRenderbufferParameterivEXT = NULL;
vtkgl::PFNGLISFRAMEBUFFEREXTPROC vtkgl::IsFramebufferEXT = NULL;
vtkgl::PFNGLBINDFRAMEBUFFEREXTPROC vtkgl::BindFramebufferEXT = NULL;
vtkgl::PFNGLDELETEFRAMEBUFFERSEXTPROC vtkgl::DeleteFramebuffersEXT = NULL;
vtkgl::PFNGLGENFRAMEBUFFERSEXTPROC vtkgl::GenFramebuffersEXT = NULL;
vtkgl::PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC vtkgl::CheckFramebufferStatusEXT = NULL;
vtkgl::PFNGLFRAMEBUFFERTEXTURE1DEXTPROC vtkgl::FramebufferTexture1DEXT = NULL;
vtkgl::PFNGLFRAMEBUFFERTEXTURE2DEXTPROC vtkgl::FramebufferTexture2DEXT = NULL;
vtkgl::PFNGLFRAMEBUFFERTEXTURE3DEXTPROC vtkgl::FramebufferTexture3DEXT = NULL;
vtkgl::PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC vtkgl::FramebufferRenderbufferEXT = NULL;
vtkgl::PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC vtkgl::GetFramebufferAttachmentParameterivEXT = NULL;
vtkgl::PFNGLGENERATEMIPMAPEXTPROC vtkgl::GenerateMipmapEXT = NULL;
//Functions for GL_EXT_geometry_shader4
vtkgl::PFNGLPROGRAMPARAMETERIEXTPROC vtkgl::ProgramParameteriEXT = NULL;
//Functions for GL_EXT_gpu_program_parameters
vtkgl::PFNGLPROGRAMENVPARAMETERS4FVEXTPROC vtkgl::ProgramEnvParameters4fvEXT = NULL;
vtkgl::PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC vtkgl::ProgramLocalParameters4fvEXT = NULL;
//Functions for GL_EXT_gpu_shader4
vtkgl::PFNGLGETUNIFORMUIVEXTPROC vtkgl::GetUniformuivEXT = NULL;
vtkgl::PFNGLBINDFRAGDATALOCATIONEXTPROC vtkgl::BindFragDataLocationEXT = NULL;
vtkgl::PFNGLGETFRAGDATALOCATIONEXTPROC vtkgl::GetFragDataLocationEXT = NULL;
vtkgl::PFNGLUNIFORM1UIEXTPROC vtkgl::Uniform1uiEXT = NULL;
vtkgl::PFNGLUNIFORM2UIEXTPROC vtkgl::Uniform2uiEXT = NULL;
vtkgl::PFNGLUNIFORM3UIEXTPROC vtkgl::Uniform3uiEXT = NULL;
vtkgl::PFNGLUNIFORM4UIEXTPROC vtkgl::Uniform4uiEXT = NULL;
vtkgl::PFNGLUNIFORM1UIVEXTPROC vtkgl::Uniform1uivEXT = NULL;
vtkgl::PFNGLUNIFORM2UIVEXTPROC vtkgl::Uniform2uivEXT = NULL;
vtkgl::PFNGLUNIFORM3UIVEXTPROC vtkgl::Uniform3uivEXT = NULL;
vtkgl::PFNGLUNIFORM4UIVEXTPROC vtkgl::Uniform4uivEXT = NULL;
//Functions for GL_EXT_histogram
vtkgl::PFNGLGETHISTOGRAMEXTPROC vtkgl::GetHistogramEXT = NULL;
vtkgl::PFNGLGETHISTOGRAMPARAMETERFVEXTPROC vtkgl::GetHistogramParameterfvEXT = NULL;
vtkgl::PFNGLGETHISTOGRAMPARAMETERIVEXTPROC vtkgl::GetHistogramParameterivEXT = NULL;
vtkgl::PFNGLGETMINMAXEXTPROC vtkgl::GetMinmaxEXT = NULL;
vtkgl::PFNGLGETMINMAXPARAMETERFVEXTPROC vtkgl::GetMinmaxParameterfvEXT = NULL;
vtkgl::PFNGLGETMINMAXPARAMETERIVEXTPROC vtkgl::GetMinmaxParameterivEXT = NULL;
vtkgl::PFNGLHISTOGRAMEXTPROC vtkgl::HistogramEXT = NULL;
vtkgl::PFNGLMINMAXEXTPROC vtkgl::MinmaxEXT = NULL;
vtkgl::PFNGLRESETHISTOGRAMEXTPROC vtkgl::ResetHistogramEXT = NULL;
vtkgl::PFNGLRESETMINMAXEXTPROC vtkgl::ResetMinmaxEXT = NULL;
//Functions for GL_EXT_index_func
vtkgl::PFNGLINDEXFUNCEXTPROC vtkgl::IndexFuncEXT = NULL;
//Functions for GL_EXT_index_material
vtkgl::PFNGLINDEXMATERIALEXTPROC vtkgl::IndexMaterialEXT = NULL;
//Functions for GL_EXT_light_texture
vtkgl::PFNGLAPPLYTEXTUREEXTPROC vtkgl::ApplyTextureEXT = NULL;
vtkgl::PFNGLTEXTURELIGHTEXTPROC vtkgl::TextureLightEXT = NULL;
vtkgl::PFNGLTEXTUREMATERIALEXTPROC vtkgl::TextureMaterialEXT = NULL;
//Functions for GL_EXT_multi_draw_arrays
vtkgl::PFNGLMULTIDRAWARRAYSEXTPROC vtkgl::MultiDrawArraysEXT = NULL;
vtkgl::PFNGLMULTIDRAWELEMENTSEXTPROC vtkgl::MultiDrawElementsEXT = NULL;
//Functions for GL_EXT_multisample
vtkgl::PFNGLSAMPLEMASKEXTPROC vtkgl::SampleMaskEXT = NULL;
vtkgl::PFNGLSAMPLEPATTERNEXTPROC vtkgl::SamplePatternEXT = NULL;
//Functions for GL_EXT_paletted_texture
vtkgl::PFNGLCOLORTABLEEXTPROC vtkgl::ColorTableEXT = NULL;
vtkgl::PFNGLGETCOLORTABLEEXTPROC vtkgl::GetColorTableEXT = NULL;
vtkgl::PFNGLGETCOLORTABLEPARAMETERIVEXTPROC vtkgl::GetColorTableParameterivEXT = NULL;
vtkgl::PFNGLGETCOLORTABLEPARAMETERFVEXTPROC vtkgl::GetColorTableParameterfvEXT = NULL;
//Functions for GL_EXT_pixel_transform
vtkgl::PFNGLPIXELTRANSFORMPARAMETERIEXTPROC vtkgl::PixelTransformParameteriEXT = NULL;
vtkgl::PFNGLPIXELTRANSFORMPARAMETERFEXTPROC vtkgl::PixelTransformParameterfEXT = NULL;
vtkgl::PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC vtkgl::PixelTransformParameterivEXT = NULL;
vtkgl::PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC vtkgl::PixelTransformParameterfvEXT = NULL;
//Functions for GL_EXT_point_parameters
vtkgl::PFNGLPOINTPARAMETERFEXTPROC vtkgl::PointParameterfEXT = NULL;
vtkgl::PFNGLPOINTPARAMETERFVEXTPROC vtkgl::PointParameterfvEXT = NULL;
//Functions for GL_EXT_polygon_offset
vtkgl::PFNGLPOLYGONOFFSETEXTPROC vtkgl::PolygonOffsetEXT = NULL;
//Functions for GL_EXT_provoking_vertex
vtkgl::PFNGLPROVOKINGVERTEXEXTPROC vtkgl::ProvokingVertexEXT = NULL;
//Functions for GL_EXT_secondary_color
vtkgl::PFNGLSECONDARYCOLOR3BEXTPROC vtkgl::SecondaryColor3bEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3BVEXTPROC vtkgl::SecondaryColor3bvEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3DEXTPROC vtkgl::SecondaryColor3dEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3DVEXTPROC vtkgl::SecondaryColor3dvEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3FEXTPROC vtkgl::SecondaryColor3fEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3FVEXTPROC vtkgl::SecondaryColor3fvEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3IEXTPROC vtkgl::SecondaryColor3iEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3IVEXTPROC vtkgl::SecondaryColor3ivEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3SEXTPROC vtkgl::SecondaryColor3sEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3SVEXTPROC vtkgl::SecondaryColor3svEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3UBEXTPROC vtkgl::SecondaryColor3ubEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3UBVEXTPROC vtkgl::SecondaryColor3ubvEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3UIEXTPROC vtkgl::SecondaryColor3uiEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3UIVEXTPROC vtkgl::SecondaryColor3uivEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3USEXTPROC vtkgl::SecondaryColor3usEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3USVEXTPROC vtkgl::SecondaryColor3usvEXT = NULL;
vtkgl::PFNGLSECONDARYCOLORPOINTEREXTPROC vtkgl::SecondaryColorPointerEXT = NULL;
//Functions for GL_EXT_separate_shader_objects
vtkgl::PFNGLUSESHADERPROGRAMEXTPROC vtkgl::UseShaderProgramEXT = NULL;
vtkgl::PFNGLACTIVEPROGRAMEXTPROC vtkgl::ActiveProgramEXT = NULL;
vtkgl::PFNGLCREATESHADERPROGRAMEXTPROC vtkgl::CreateShaderProgramEXT = NULL;
//Functions for GL_EXT_shader_image_load_store
vtkgl::PFNGLBINDIMAGETEXTUREEXTPROC vtkgl::BindImageTextureEXT = NULL;
vtkgl::PFNGLMEMORYBARRIEREXTPROC vtkgl::MemoryBarrierEXT = NULL;
//Functions for GL_EXT_stencil_clear_tag
vtkgl::PFNGLSTENCILCLEARTAGEXTPROC vtkgl::StencilClearTagEXT = NULL;
//Functions for GL_EXT_stencil_two_side
vtkgl::PFNGLACTIVESTENCILFACEEXTPROC vtkgl::ActiveStencilFaceEXT = NULL;
//Functions for GL_EXT_subtexture
vtkgl::PFNGLTEXSUBIMAGE1DEXTPROC vtkgl::TexSubImage1DEXT = NULL;
vtkgl::PFNGLTEXSUBIMAGE2DEXTPROC vtkgl::TexSubImage2DEXT = NULL;
//Functions for GL_EXT_texture3D
vtkgl::PFNGLTEXIMAGE3DEXTPROC vtkgl::TexImage3DEXT = NULL;
vtkgl::PFNGLTEXSUBIMAGE3DEXTPROC vtkgl::TexSubImage3DEXT = NULL;
//Functions for GL_EXT_texture_buffer_object
vtkgl::PFNGLTEXBUFFEREXTPROC vtkgl::TexBufferEXT = NULL;
//Functions for GL_EXT_texture_integer
vtkgl::PFNGLTEXPARAMETERIIVEXTPROC vtkgl::TexParameterIivEXT = NULL;
vtkgl::PFNGLTEXPARAMETERIUIVEXTPROC vtkgl::TexParameterIuivEXT = NULL;
vtkgl::PFNGLGETTEXPARAMETERIIVEXTPROC vtkgl::GetTexParameterIivEXT = NULL;
vtkgl::PFNGLGETTEXPARAMETERIUIVEXTPROC vtkgl::GetTexParameterIuivEXT = NULL;
vtkgl::PFNGLCLEARCOLORIIEXTPROC vtkgl::ClearColorIiEXT = NULL;
vtkgl::PFNGLCLEARCOLORIUIEXTPROC vtkgl::ClearColorIuiEXT = NULL;
//Functions for GL_EXT_texture_object
vtkgl::PFNGLARETEXTURESRESIDENTEXTPROC vtkgl::AreTexturesResidentEXT = NULL;
vtkgl::PFNGLBINDTEXTUREEXTPROC vtkgl::BindTextureEXT = NULL;
vtkgl::PFNGLDELETETEXTURESEXTPROC vtkgl::DeleteTexturesEXT = NULL;
vtkgl::PFNGLGENTEXTURESEXTPROC vtkgl::GenTexturesEXT = NULL;
vtkgl::PFNGLISTEXTUREEXTPROC vtkgl::IsTextureEXT = NULL;
vtkgl::PFNGLPRIORITIZETEXTURESEXTPROC vtkgl::PrioritizeTexturesEXT = NULL;
//Functions for GL_EXT_texture_perturb_normal
vtkgl::PFNGLTEXTURENORMALEXTPROC vtkgl::TextureNormalEXT = NULL;
//Functions for GL_EXT_timer_query
vtkgl::PFNGLGETQUERYOBJECTI64VEXTPROC vtkgl::GetQueryObjecti64vEXT = NULL;
vtkgl::PFNGLGETQUERYOBJECTUI64VEXTPROC vtkgl::GetQueryObjectui64vEXT = NULL;
//Functions for GL_EXT_transform_feedback
vtkgl::PFNGLBEGINTRANSFORMFEEDBACKEXTPROC vtkgl::BeginTransformFeedbackEXT = NULL;
vtkgl::PFNGLENDTRANSFORMFEEDBACKEXTPROC vtkgl::EndTransformFeedbackEXT = NULL;
vtkgl::PFNGLBINDBUFFERRANGEEXTPROC vtkgl::BindBufferRangeEXT = NULL;
vtkgl::PFNGLBINDBUFFEROFFSETEXTPROC vtkgl::BindBufferOffsetEXT = NULL;
vtkgl::PFNGLBINDBUFFERBASEEXTPROC vtkgl::BindBufferBaseEXT = NULL;
vtkgl::PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC vtkgl::TransformFeedbackVaryingsEXT = NULL;
vtkgl::PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC vtkgl::GetTransformFeedbackVaryingEXT = NULL;
//Functions for GL_EXT_vertex_array
vtkgl::PFNGLARRAYELEMENTEXTPROC vtkgl::ArrayElementEXT = NULL;
vtkgl::PFNGLCOLORPOINTEREXTPROC vtkgl::ColorPointerEXT = NULL;
vtkgl::PFNGLDRAWARRAYSEXTPROC vtkgl::DrawArraysEXT = NULL;
vtkgl::PFNGLEDGEFLAGPOINTEREXTPROC vtkgl::EdgeFlagPointerEXT = NULL;
vtkgl::PFNGLGETPOINTERVEXTPROC vtkgl::GetPointervEXT = NULL;
vtkgl::PFNGLINDEXPOINTEREXTPROC vtkgl::IndexPointerEXT = NULL;
vtkgl::PFNGLNORMALPOINTEREXTPROC vtkgl::NormalPointerEXT = NULL;
vtkgl::PFNGLTEXCOORDPOINTEREXTPROC vtkgl::TexCoordPointerEXT = NULL;
vtkgl::PFNGLVERTEXPOINTEREXTPROC vtkgl::VertexPointerEXT = NULL;
//Functions for GL_EXT_vertex_attrib_64bit
vtkgl::PFNGLVERTEXATTRIBL1DEXTPROC vtkgl::VertexAttribL1dEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBL2DEXTPROC vtkgl::VertexAttribL2dEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBL3DEXTPROC vtkgl::VertexAttribL3dEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBL4DEXTPROC vtkgl::VertexAttribL4dEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBL1DVEXTPROC vtkgl::VertexAttribL1dvEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBL2DVEXTPROC vtkgl::VertexAttribL2dvEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBL3DVEXTPROC vtkgl::VertexAttribL3dvEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBL4DVEXTPROC vtkgl::VertexAttribL4dvEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBLPOINTEREXTPROC vtkgl::VertexAttribLPointerEXT = NULL;
vtkgl::PFNGLGETVERTEXATTRIBLDVEXTPROC vtkgl::GetVertexAttribLdvEXT = NULL;
vtkgl::PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC vtkgl::VertexArrayVertexAttribLOffsetEXT = NULL;
//Functions for GL_EXT_vertex_shader
vtkgl::PFNGLBEGINVERTEXSHADEREXTPROC vtkgl::BeginVertexShaderEXT = NULL;
vtkgl::PFNGLENDVERTEXSHADEREXTPROC vtkgl::EndVertexShaderEXT = NULL;
vtkgl::PFNGLBINDVERTEXSHADEREXTPROC vtkgl::BindVertexShaderEXT = NULL;
vtkgl::PFNGLGENVERTEXSHADERSEXTPROC vtkgl::GenVertexShadersEXT = NULL;
vtkgl::PFNGLDELETEVERTEXSHADEREXTPROC vtkgl::DeleteVertexShaderEXT = NULL;
vtkgl::PFNGLSHADEROP1EXTPROC vtkgl::ShaderOp1EXT = NULL;
vtkgl::PFNGLSHADEROP2EXTPROC vtkgl::ShaderOp2EXT = NULL;
vtkgl::PFNGLSHADEROP3EXTPROC vtkgl::ShaderOp3EXT = NULL;
vtkgl::PFNGLSWIZZLEEXTPROC vtkgl::SwizzleEXT = NULL;
vtkgl::PFNGLWRITEMASKEXTPROC vtkgl::WriteMaskEXT = NULL;
vtkgl::PFNGLINSERTCOMPONENTEXTPROC vtkgl::InsertComponentEXT = NULL;
vtkgl::PFNGLEXTRACTCOMPONENTEXTPROC vtkgl::ExtractComponentEXT = NULL;
vtkgl::PFNGLGENSYMBOLSEXTPROC vtkgl::GenSymbolsEXT = NULL;
vtkgl::PFNGLSETINVARIANTEXTPROC vtkgl::SetInvariantEXT = NULL;
vtkgl::PFNGLSETLOCALCONSTANTEXTPROC vtkgl::SetLocalConstantEXT = NULL;
vtkgl::PFNGLVARIANTBVEXTPROC vtkgl::VariantbvEXT = NULL;
vtkgl::PFNGLVARIANTSVEXTPROC vtkgl::VariantsvEXT = NULL;
vtkgl::PFNGLVARIANTIVEXTPROC vtkgl::VariantivEXT = NULL;
vtkgl::PFNGLVARIANTFVEXTPROC vtkgl::VariantfvEXT = NULL;
vtkgl::PFNGLVARIANTDVEXTPROC vtkgl::VariantdvEXT = NULL;
vtkgl::PFNGLVARIANTUBVEXTPROC vtkgl::VariantubvEXT = NULL;
vtkgl::PFNGLVARIANTUSVEXTPROC vtkgl::VariantusvEXT = NULL;
vtkgl::PFNGLVARIANTUIVEXTPROC vtkgl::VariantuivEXT = NULL;
vtkgl::PFNGLVARIANTPOINTEREXTPROC vtkgl::VariantPointerEXT = NULL;
vtkgl::PFNGLENABLEVARIANTCLIENTSTATEEXTPROC vtkgl::EnableVariantClientStateEXT = NULL;
vtkgl::PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC vtkgl::DisableVariantClientStateEXT = NULL;
vtkgl::PFNGLBINDLIGHTPARAMETEREXTPROC vtkgl::BindLightParameterEXT = NULL;
vtkgl::PFNGLBINDMATERIALPARAMETEREXTPROC vtkgl::BindMaterialParameterEXT = NULL;
vtkgl::PFNGLBINDTEXGENPARAMETEREXTPROC vtkgl::BindTexGenParameterEXT = NULL;
vtkgl::PFNGLBINDTEXTUREUNITPARAMETEREXTPROC vtkgl::BindTextureUnitParameterEXT = NULL;
vtkgl::PFNGLBINDPARAMETEREXTPROC vtkgl::BindParameterEXT = NULL;
vtkgl::PFNGLISVARIANTENABLEDEXTPROC vtkgl::IsVariantEnabledEXT = NULL;
vtkgl::PFNGLGETVARIANTBOOLEANVEXTPROC vtkgl::GetVariantBooleanvEXT = NULL;
vtkgl::PFNGLGETVARIANTINTEGERVEXTPROC vtkgl::GetVariantIntegervEXT = NULL;
vtkgl::PFNGLGETVARIANTFLOATVEXTPROC vtkgl::GetVariantFloatvEXT = NULL;
vtkgl::PFNGLGETVARIANTPOINTERVEXTPROC vtkgl::GetVariantPointervEXT = NULL;
vtkgl::PFNGLGETINVARIANTBOOLEANVEXTPROC vtkgl::GetInvariantBooleanvEXT = NULL;
vtkgl::PFNGLGETINVARIANTINTEGERVEXTPROC vtkgl::GetInvariantIntegervEXT = NULL;
vtkgl::PFNGLGETINVARIANTFLOATVEXTPROC vtkgl::GetInvariantFloatvEXT = NULL;
vtkgl::PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC vtkgl::GetLocalConstantBooleanvEXT = NULL;
vtkgl::PFNGLGETLOCALCONSTANTINTEGERVEXTPROC vtkgl::GetLocalConstantIntegervEXT = NULL;
vtkgl::PFNGLGETLOCALCONSTANTFLOATVEXTPROC vtkgl::GetLocalConstantFloatvEXT = NULL;
//Functions for GL_EXT_vertex_weighting
vtkgl::PFNGLVERTEXWEIGHTFEXTPROC vtkgl::VertexWeightfEXT = NULL;
vtkgl::PFNGLVERTEXWEIGHTFVEXTPROC vtkgl::VertexWeightfvEXT = NULL;
vtkgl::PFNGLVERTEXWEIGHTPOINTEREXTPROC vtkgl::VertexWeightPointerEXT = NULL;
//Functions for GL_GREMEDY_frame_terminator
vtkgl::PFNGLFRAMETERMINATORGREMEDYPROC vtkgl::FrameTerminatorGREMEDY = NULL;
//Functions for GL_GREMEDY_string_marker
vtkgl::PFNGLSTRINGMARKERGREMEDYPROC vtkgl::StringMarkerGREMEDY = NULL;
//Functions for GL_HP_image_transform
vtkgl::PFNGLIMAGETRANSFORMPARAMETERIHPPROC vtkgl::ImageTransformParameteriHP = NULL;
vtkgl::PFNGLIMAGETRANSFORMPARAMETERFHPPROC vtkgl::ImageTransformParameterfHP = NULL;
vtkgl::PFNGLIMAGETRANSFORMPARAMETERIVHPPROC vtkgl::ImageTransformParameterivHP = NULL;
vtkgl::PFNGLIMAGETRANSFORMPARAMETERFVHPPROC vtkgl::ImageTransformParameterfvHP = NULL;
vtkgl::PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC vtkgl::GetImageTransformParameterivHP = NULL;
vtkgl::PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC vtkgl::GetImageTransformParameterfvHP = NULL;
//Functions for GL_IBM_multimode_draw_arrays
vtkgl::PFNGLMULTIMODEDRAWARRAYSIBMPROC vtkgl::MultiModeDrawArraysIBM = NULL;
vtkgl::PFNGLMULTIMODEDRAWELEMENTSIBMPROC vtkgl::MultiModeDrawElementsIBM = NULL;
//Functions for GL_IBM_vertex_array_lists
vtkgl::PFNGLCOLORPOINTERLISTIBMPROC vtkgl::ColorPointerListIBM = NULL;
vtkgl::PFNGLSECONDARYCOLORPOINTERLISTIBMPROC vtkgl::SecondaryColorPointerListIBM = NULL;
vtkgl::PFNGLEDGEFLAGPOINTERLISTIBMPROC vtkgl::EdgeFlagPointerListIBM = NULL;
vtkgl::PFNGLFOGCOORDPOINTERLISTIBMPROC vtkgl::FogCoordPointerListIBM = NULL;
vtkgl::PFNGLINDEXPOINTERLISTIBMPROC vtkgl::IndexPointerListIBM = NULL;
vtkgl::PFNGLNORMALPOINTERLISTIBMPROC vtkgl::NormalPointerListIBM = NULL;
vtkgl::PFNGLTEXCOORDPOINTERLISTIBMPROC vtkgl::TexCoordPointerListIBM = NULL;
vtkgl::PFNGLVERTEXPOINTERLISTIBMPROC vtkgl::VertexPointerListIBM = NULL;
//Functions for GL_INGR_blend_func_separate
vtkgl::PFNGLBLENDFUNCSEPARATEINGRPROC vtkgl::BlendFuncSeparateINGR = NULL;
//Functions for GL_INTEL_parallel_arrays
vtkgl::PFNGLVERTEXPOINTERVINTELPROC vtkgl::VertexPointervINTEL = NULL;
vtkgl::PFNGLNORMALPOINTERVINTELPROC vtkgl::NormalPointervINTEL = NULL;
vtkgl::PFNGLCOLORPOINTERVINTELPROC vtkgl::ColorPointervINTEL = NULL;
vtkgl::PFNGLTEXCOORDPOINTERVINTELPROC vtkgl::TexCoordPointervINTEL = NULL;
//Functions for GL_MESA_resize_buffers
vtkgl::PFNGLRESIZEBUFFERSMESAPROC vtkgl::ResizeBuffersMESA = NULL;
//Functions for GL_MESA_window_pos
vtkgl::PFNGLWINDOWPOS2DMESAPROC vtkgl::WindowPos2dMESA = NULL;
vtkgl::PFNGLWINDOWPOS2DVMESAPROC vtkgl::WindowPos2dvMESA = NULL;
vtkgl::PFNGLWINDOWPOS2FMESAPROC vtkgl::WindowPos2fMESA = NULL;
vtkgl::PFNGLWINDOWPOS2FVMESAPROC vtkgl::WindowPos2fvMESA = NULL;
vtkgl::PFNGLWINDOWPOS2IMESAPROC vtkgl::WindowPos2iMESA = NULL;
vtkgl::PFNGLWINDOWPOS2IVMESAPROC vtkgl::WindowPos2ivMESA = NULL;
vtkgl::PFNGLWINDOWPOS2SMESAPROC vtkgl::WindowPos2sMESA = NULL;
vtkgl::PFNGLWINDOWPOS2SVMESAPROC vtkgl::WindowPos2svMESA = NULL;
vtkgl::PFNGLWINDOWPOS3DMESAPROC vtkgl::WindowPos3dMESA = NULL;
vtkgl::PFNGLWINDOWPOS3DVMESAPROC vtkgl::WindowPos3dvMESA = NULL;
vtkgl::PFNGLWINDOWPOS3FMESAPROC vtkgl::WindowPos3fMESA = NULL;
vtkgl::PFNGLWINDOWPOS3FVMESAPROC vtkgl::WindowPos3fvMESA = NULL;
vtkgl::PFNGLWINDOWPOS3IMESAPROC vtkgl::WindowPos3iMESA = NULL;
vtkgl::PFNGLWINDOWPOS3IVMESAPROC vtkgl::WindowPos3ivMESA = NULL;
vtkgl::PFNGLWINDOWPOS3SMESAPROC vtkgl::WindowPos3sMESA = NULL;
vtkgl::PFNGLWINDOWPOS3SVMESAPROC vtkgl::WindowPos3svMESA = NULL;
vtkgl::PFNGLWINDOWPOS4DMESAPROC vtkgl::WindowPos4dMESA = NULL;
vtkgl::PFNGLWINDOWPOS4DVMESAPROC vtkgl::WindowPos4dvMESA = NULL;
vtkgl::PFNGLWINDOWPOS4FMESAPROC vtkgl::WindowPos4fMESA = NULL;
vtkgl::PFNGLWINDOWPOS4FVMESAPROC vtkgl::WindowPos4fvMESA = NULL;
vtkgl::PFNGLWINDOWPOS4IMESAPROC vtkgl::WindowPos4iMESA = NULL;
vtkgl::PFNGLWINDOWPOS4IVMESAPROC vtkgl::WindowPos4ivMESA = NULL;
vtkgl::PFNGLWINDOWPOS4SMESAPROC vtkgl::WindowPos4sMESA = NULL;
vtkgl::PFNGLWINDOWPOS4SVMESAPROC vtkgl::WindowPos4svMESA = NULL;
//Functions for GL_NV_conditional_render
vtkgl::PFNGLBEGINCONDITIONALRENDERNVPROC vtkgl::BeginConditionalRenderNV = NULL;
vtkgl::PFNGLENDCONDITIONALRENDERNVPROC vtkgl::EndConditionalRenderNV = NULL;
//Functions for GL_NV_copy_image
vtkgl::PFNGLCOPYIMAGESUBDATANVPROC vtkgl::CopyImageSubDataNV = NULL;
//Functions for GL_NV_depth_buffer_float
vtkgl::PFNGLDEPTHRANGEDNVPROC vtkgl::DepthRangedNV = NULL;
vtkgl::PFNGLCLEARDEPTHDNVPROC vtkgl::ClearDepthdNV = NULL;
vtkgl::PFNGLDEPTHBOUNDSDNVPROC vtkgl::DepthBoundsdNV = NULL;
//Functions for GL_NV_evaluators
vtkgl::PFNGLMAPCONTROLPOINTSNVPROC vtkgl::MapControlPointsNV = NULL;
vtkgl::PFNGLMAPPARAMETERIVNVPROC vtkgl::MapParameterivNV = NULL;
vtkgl::PFNGLMAPPARAMETERFVNVPROC vtkgl::MapParameterfvNV = NULL;
vtkgl::PFNGLGETMAPCONTROLPOINTSNVPROC vtkgl::GetMapControlPointsNV = NULL;
vtkgl::PFNGLGETMAPPARAMETERIVNVPROC vtkgl::GetMapParameterivNV = NULL;
vtkgl::PFNGLGETMAPPARAMETERFVNVPROC vtkgl::GetMapParameterfvNV = NULL;
vtkgl::PFNGLGETMAPATTRIBPARAMETERIVNVPROC vtkgl::GetMapAttribParameterivNV = NULL;
vtkgl::PFNGLGETMAPATTRIBPARAMETERFVNVPROC vtkgl::GetMapAttribParameterfvNV = NULL;
vtkgl::PFNGLEVALMAPSNVPROC vtkgl::EvalMapsNV = NULL;
//Functions for GL_NV_explicit_multisample
vtkgl::PFNGLGETMULTISAMPLEFVNVPROC vtkgl::GetMultisamplefvNV = NULL;
vtkgl::PFNGLSAMPLEMASKINDEXEDNVPROC vtkgl::SampleMaskIndexedNV = NULL;
vtkgl::PFNGLTEXRENDERBUFFERNVPROC vtkgl::TexRenderbufferNV = NULL;
//Functions for GL_NV_fence
vtkgl::PFNGLDELETEFENCESNVPROC vtkgl::DeleteFencesNV = NULL;
vtkgl::PFNGLGENFENCESNVPROC vtkgl::GenFencesNV = NULL;
vtkgl::PFNGLISFENCENVPROC vtkgl::IsFenceNV = NULL;
vtkgl::PFNGLTESTFENCENVPROC vtkgl::TestFenceNV = NULL;
vtkgl::PFNGLGETFENCEIVNVPROC vtkgl::GetFenceivNV = NULL;
vtkgl::PFNGLFINISHFENCENVPROC vtkgl::FinishFenceNV = NULL;
vtkgl::PFNGLSETFENCENVPROC vtkgl::SetFenceNV = NULL;
//Functions for GL_NV_fragment_program
vtkgl::PFNGLPROGRAMNAMEDPARAMETER4FNVPROC vtkgl::ProgramNamedParameter4fNV = NULL;
vtkgl::PFNGLPROGRAMNAMEDPARAMETER4DNVPROC vtkgl::ProgramNamedParameter4dNV = NULL;
vtkgl::PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC vtkgl::ProgramNamedParameter4fvNV = NULL;
vtkgl::PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC vtkgl::ProgramNamedParameter4dvNV = NULL;
vtkgl::PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC vtkgl::GetProgramNamedParameterfvNV = NULL;
vtkgl::PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC vtkgl::GetProgramNamedParameterdvNV = NULL;
//Functions for GL_NV_framebuffer_multisample_coverage
vtkgl::PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC vtkgl::RenderbufferStorageMultisampleCoverageNV = NULL;
//Functions for GL_NV_geometry_program4
vtkgl::PFNGLPROGRAMVERTEXLIMITNVPROC vtkgl::ProgramVertexLimitNV = NULL;
vtkgl::PFNGLFRAMEBUFFERTEXTUREEXTPROC vtkgl::FramebufferTextureEXT = NULL;
vtkgl::PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC vtkgl::FramebufferTextureLayerEXT = NULL;
vtkgl::PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC vtkgl::FramebufferTextureFaceEXT = NULL;
//Functions for GL_NV_gpu_program4
vtkgl::PFNGLPROGRAMLOCALPARAMETERI4INVPROC vtkgl::ProgramLocalParameterI4iNV = NULL;
vtkgl::PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC vtkgl::ProgramLocalParameterI4ivNV = NULL;
vtkgl::PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC vtkgl::ProgramLocalParametersI4ivNV = NULL;
vtkgl::PFNGLPROGRAMLOCALPARAMETERI4UINVPROC vtkgl::ProgramLocalParameterI4uiNV = NULL;
vtkgl::PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC vtkgl::ProgramLocalParameterI4uivNV = NULL;
vtkgl::PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC vtkgl::ProgramLocalParametersI4uivNV = NULL;
vtkgl::PFNGLPROGRAMENVPARAMETERI4INVPROC vtkgl::ProgramEnvParameterI4iNV = NULL;
vtkgl::PFNGLPROGRAMENVPARAMETERI4IVNVPROC vtkgl::ProgramEnvParameterI4ivNV = NULL;
vtkgl::PFNGLPROGRAMENVPARAMETERSI4IVNVPROC vtkgl::ProgramEnvParametersI4ivNV = NULL;
vtkgl::PFNGLPROGRAMENVPARAMETERI4UINVPROC vtkgl::ProgramEnvParameterI4uiNV = NULL;
vtkgl::PFNGLPROGRAMENVPARAMETERI4UIVNVPROC vtkgl::ProgramEnvParameterI4uivNV = NULL;
vtkgl::PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC vtkgl::ProgramEnvParametersI4uivNV = NULL;
vtkgl::PFNGLGETPROGRAMLOCALPARAMETERIIVNVPROC vtkgl::GetProgramLocalParameterIivNV = NULL;
vtkgl::PFNGLGETPROGRAMLOCALPARAMETERIUIVNVPROC vtkgl::GetProgramLocalParameterIuivNV = NULL;
vtkgl::PFNGLGETPROGRAMENVPARAMETERIIVNVPROC vtkgl::GetProgramEnvParameterIivNV = NULL;
vtkgl::PFNGLGETPROGRAMENVPARAMETERIUIVNVPROC vtkgl::GetProgramEnvParameterIuivNV = NULL;
//Functions for GL_NV_gpu_program5
vtkgl::PFNGLPROGRAMSUBROUTINEPARAMETERSUIVNVPROC vtkgl::ProgramSubroutineParametersuivNV = NULL;
vtkgl::PFNGLGETPROGRAMSUBROUTINEPARAMETERUIVNVPROC vtkgl::GetProgramSubroutineParameteruivNV = NULL;
//Functions for GL_NV_gpu_shader5
vtkgl::PFNGLUNIFORM1I64NVPROC vtkgl::Uniform1i64NV = NULL;
vtkgl::PFNGLUNIFORM2I64NVPROC vtkgl::Uniform2i64NV = NULL;
vtkgl::PFNGLUNIFORM3I64NVPROC vtkgl::Uniform3i64NV = NULL;
vtkgl::PFNGLUNIFORM4I64NVPROC vtkgl::Uniform4i64NV = NULL;
vtkgl::PFNGLUNIFORM1I64VNVPROC vtkgl::Uniform1i64vNV = NULL;
vtkgl::PFNGLUNIFORM2I64VNVPROC vtkgl::Uniform2i64vNV = NULL;
vtkgl::PFNGLUNIFORM3I64VNVPROC vtkgl::Uniform3i64vNV = NULL;
vtkgl::PFNGLUNIFORM4I64VNVPROC vtkgl::Uniform4i64vNV = NULL;
vtkgl::PFNGLUNIFORM1UI64NVPROC vtkgl::Uniform1ui64NV = NULL;
vtkgl::PFNGLUNIFORM2UI64NVPROC vtkgl::Uniform2ui64NV = NULL;
vtkgl::PFNGLUNIFORM3UI64NVPROC vtkgl::Uniform3ui64NV = NULL;
vtkgl::PFNGLUNIFORM4UI64NVPROC vtkgl::Uniform4ui64NV = NULL;
vtkgl::PFNGLUNIFORM1UI64VNVPROC vtkgl::Uniform1ui64vNV = NULL;
vtkgl::PFNGLUNIFORM2UI64VNVPROC vtkgl::Uniform2ui64vNV = NULL;
vtkgl::PFNGLUNIFORM3UI64VNVPROC vtkgl::Uniform3ui64vNV = NULL;
vtkgl::PFNGLUNIFORM4UI64VNVPROC vtkgl::Uniform4ui64vNV = NULL;
vtkgl::PFNGLGETUNIFORMI64VNVPROC vtkgl::GetUniformi64vNV = NULL;
vtkgl::PFNGLPROGRAMUNIFORM1I64NVPROC vtkgl::ProgramUniform1i64NV = NULL;
vtkgl::PFNGLPROGRAMUNIFORM2I64NVPROC vtkgl::ProgramUniform2i64NV = NULL;
vtkgl::PFNGLPROGRAMUNIFORM3I64NVPROC vtkgl::ProgramUniform3i64NV = NULL;
vtkgl::PFNGLPROGRAMUNIFORM4I64NVPROC vtkgl::ProgramUniform4i64NV = NULL;
vtkgl::PFNGLPROGRAMUNIFORM1I64VNVPROC vtkgl::ProgramUniform1i64vNV = NULL;
vtkgl::PFNGLPROGRAMUNIFORM2I64VNVPROC vtkgl::ProgramUniform2i64vNV = NULL;
vtkgl::PFNGLPROGRAMUNIFORM3I64VNVPROC vtkgl::ProgramUniform3i64vNV = NULL;
vtkgl::PFNGLPROGRAMUNIFORM4I64VNVPROC vtkgl::ProgramUniform4i64vNV = NULL;
vtkgl::PFNGLPROGRAMUNIFORM1UI64NVPROC vtkgl::ProgramUniform1ui64NV = NULL;
vtkgl::PFNGLPROGRAMUNIFORM2UI64NVPROC vtkgl::ProgramUniform2ui64NV = NULL;
vtkgl::PFNGLPROGRAMUNIFORM3UI64NVPROC vtkgl::ProgramUniform3ui64NV = NULL;
vtkgl::PFNGLPROGRAMUNIFORM4UI64NVPROC vtkgl::ProgramUniform4ui64NV = NULL;
vtkgl::PFNGLPROGRAMUNIFORM1UI64VNVPROC vtkgl::ProgramUniform1ui64vNV = NULL;
vtkgl::PFNGLPROGRAMUNIFORM2UI64VNVPROC vtkgl::ProgramUniform2ui64vNV = NULL;
vtkgl::PFNGLPROGRAMUNIFORM3UI64VNVPROC vtkgl::ProgramUniform3ui64vNV = NULL;
vtkgl::PFNGLPROGRAMUNIFORM4UI64VNVPROC vtkgl::ProgramUniform4ui64vNV = NULL;
//Functions for GL_NV_half_float
vtkgl::PFNGLVERTEX2HNVPROC vtkgl::Vertex2hNV = NULL;
vtkgl::PFNGLVERTEX2HVNVPROC vtkgl::Vertex2hvNV = NULL;
vtkgl::PFNGLVERTEX3HNVPROC vtkgl::Vertex3hNV = NULL;
vtkgl::PFNGLVERTEX3HVNVPROC vtkgl::Vertex3hvNV = NULL;
vtkgl::PFNGLVERTEX4HNVPROC vtkgl::Vertex4hNV = NULL;
vtkgl::PFNGLVERTEX4HVNVPROC vtkgl::Vertex4hvNV = NULL;
vtkgl::PFNGLNORMAL3HNVPROC vtkgl::Normal3hNV = NULL;
vtkgl::PFNGLNORMAL3HVNVPROC vtkgl::Normal3hvNV = NULL;
vtkgl::PFNGLCOLOR3HNVPROC vtkgl::Color3hNV = NULL;
vtkgl::PFNGLCOLOR3HVNVPROC vtkgl::Color3hvNV = NULL;
vtkgl::PFNGLCOLOR4HNVPROC vtkgl::Color4hNV = NULL;
vtkgl::PFNGLCOLOR4HVNVPROC vtkgl::Color4hvNV = NULL;
vtkgl::PFNGLTEXCOORD1HNVPROC vtkgl::TexCoord1hNV = NULL;
vtkgl::PFNGLTEXCOORD1HVNVPROC vtkgl::TexCoord1hvNV = NULL;
vtkgl::PFNGLTEXCOORD2HNVPROC vtkgl::TexCoord2hNV = NULL;
vtkgl::PFNGLTEXCOORD2HVNVPROC vtkgl::TexCoord2hvNV = NULL;
vtkgl::PFNGLTEXCOORD3HNVPROC vtkgl::TexCoord3hNV = NULL;
vtkgl::PFNGLTEXCOORD3HVNVPROC vtkgl::TexCoord3hvNV = NULL;
vtkgl::PFNGLTEXCOORD4HNVPROC vtkgl::TexCoord4hNV = NULL;
vtkgl::PFNGLTEXCOORD4HVNVPROC vtkgl::TexCoord4hvNV = NULL;
vtkgl::PFNGLMULTITEXCOORD1HNVPROC vtkgl::MultiTexCoord1hNV = NULL;
vtkgl::PFNGLMULTITEXCOORD1HVNVPROC vtkgl::MultiTexCoord1hvNV = NULL;
vtkgl::PFNGLMULTITEXCOORD2HNVPROC vtkgl::MultiTexCoord2hNV = NULL;
vtkgl::PFNGLMULTITEXCOORD2HVNVPROC vtkgl::MultiTexCoord2hvNV = NULL;
vtkgl::PFNGLMULTITEXCOORD3HNVPROC vtkgl::MultiTexCoord3hNV = NULL;
vtkgl::PFNGLMULTITEXCOORD3HVNVPROC vtkgl::MultiTexCoord3hvNV = NULL;
vtkgl::PFNGLMULTITEXCOORD4HNVPROC vtkgl::MultiTexCoord4hNV = NULL;
vtkgl::PFNGLMULTITEXCOORD4HVNVPROC vtkgl::MultiTexCoord4hvNV = NULL;
vtkgl::PFNGLFOGCOORDHNVPROC vtkgl::FogCoordhNV = NULL;
vtkgl::PFNGLFOGCOORDHVNVPROC vtkgl::FogCoordhvNV = NULL;
vtkgl::PFNGLSECONDARYCOLOR3HNVPROC vtkgl::SecondaryColor3hNV = NULL;
vtkgl::PFNGLSECONDARYCOLOR3HVNVPROC vtkgl::SecondaryColor3hvNV = NULL;
vtkgl::PFNGLVERTEXWEIGHTHNVPROC vtkgl::VertexWeighthNV = NULL;
vtkgl::PFNGLVERTEXWEIGHTHVNVPROC vtkgl::VertexWeighthvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB1HNVPROC vtkgl::VertexAttrib1hNV = NULL;
vtkgl::PFNGLVERTEXATTRIB1HVNVPROC vtkgl::VertexAttrib1hvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB2HNVPROC vtkgl::VertexAttrib2hNV = NULL;
vtkgl::PFNGLVERTEXATTRIB2HVNVPROC vtkgl::VertexAttrib2hvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB3HNVPROC vtkgl::VertexAttrib3hNV = NULL;
vtkgl::PFNGLVERTEXATTRIB3HVNVPROC vtkgl::VertexAttrib3hvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB4HNVPROC vtkgl::VertexAttrib4hNV = NULL;
vtkgl::PFNGLVERTEXATTRIB4HVNVPROC vtkgl::VertexAttrib4hvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS1HVNVPROC vtkgl::VertexAttribs1hvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS2HVNVPROC vtkgl::VertexAttribs2hvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS3HVNVPROC vtkgl::VertexAttribs3hvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS4HVNVPROC vtkgl::VertexAttribs4hvNV = NULL;
//Functions for GL_NV_occlusion_query
vtkgl::PFNGLGENOCCLUSIONQUERIESNVPROC vtkgl::GenOcclusionQueriesNV = NULL;
vtkgl::PFNGLDELETEOCCLUSIONQUERIESNVPROC vtkgl::DeleteOcclusionQueriesNV = NULL;
vtkgl::PFNGLISOCCLUSIONQUERYNVPROC vtkgl::IsOcclusionQueryNV = NULL;
vtkgl::PFNGLBEGINOCCLUSIONQUERYNVPROC vtkgl::BeginOcclusionQueryNV = NULL;
vtkgl::PFNGLENDOCCLUSIONQUERYNVPROC vtkgl::EndOcclusionQueryNV = NULL;
vtkgl::PFNGLGETOCCLUSIONQUERYIVNVPROC vtkgl::GetOcclusionQueryivNV = NULL;
vtkgl::PFNGLGETOCCLUSIONQUERYUIVNVPROC vtkgl::GetOcclusionQueryuivNV = NULL;
//Functions for GL_NV_parameter_buffer_object
vtkgl::PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC vtkgl::ProgramBufferParametersfvNV = NULL;
vtkgl::PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC vtkgl::ProgramBufferParametersIivNV = NULL;
vtkgl::PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC vtkgl::ProgramBufferParametersIuivNV = NULL;
//Functions for GL_NV_pixel_data_range
vtkgl::PFNGLPIXELDATARANGENVPROC vtkgl::PixelDataRangeNV = NULL;
vtkgl::PFNGLFLUSHPIXELDATARANGENVPROC vtkgl::FlushPixelDataRangeNV = NULL;
//Functions for GL_NV_point_sprite
vtkgl::PFNGLPOINTPARAMETERINVPROC vtkgl::PointParameteriNV = NULL;
vtkgl::PFNGLPOINTPARAMETERIVNVPROC vtkgl::PointParameterivNV = NULL;
//Functions for GL_NV_present_video
vtkgl::PFNGLPRESENTFRAMEKEYEDNVPROC vtkgl::PresentFrameKeyedNV = NULL;
vtkgl::PFNGLPRESENTFRAMEDUALFILLNVPROC vtkgl::PresentFrameDualFillNV = NULL;
vtkgl::PFNGLGETVIDEOIVNVPROC vtkgl::GetVideoivNV = NULL;
vtkgl::PFNGLGETVIDEOUIVNVPROC vtkgl::GetVideouivNV = NULL;
vtkgl::PFNGLGETVIDEOI64VNVPROC vtkgl::GetVideoi64vNV = NULL;
vtkgl::PFNGLGETVIDEOUI64VNVPROC vtkgl::GetVideoui64vNV = NULL;
//Functions for GL_NV_primitive_restart
vtkgl::PFNGLPRIMITIVERESTARTNVPROC vtkgl::PrimitiveRestartNV = NULL;
vtkgl::PFNGLPRIMITIVERESTARTINDEXNVPROC vtkgl::PrimitiveRestartIndexNV = NULL;
//Functions for GL_NV_register_combiners
vtkgl::PFNGLCOMBINERPARAMETERFVNVPROC vtkgl::CombinerParameterfvNV = NULL;
vtkgl::PFNGLCOMBINERPARAMETERFNVPROC vtkgl::CombinerParameterfNV = NULL;
vtkgl::PFNGLCOMBINERPARAMETERIVNVPROC vtkgl::CombinerParameterivNV = NULL;
vtkgl::PFNGLCOMBINERPARAMETERINVPROC vtkgl::CombinerParameteriNV = NULL;
vtkgl::PFNGLCOMBINERINPUTNVPROC vtkgl::CombinerInputNV = NULL;
vtkgl::PFNGLCOMBINEROUTPUTNVPROC vtkgl::CombinerOutputNV = NULL;
vtkgl::PFNGLFINALCOMBINERINPUTNVPROC vtkgl::FinalCombinerInputNV = NULL;
vtkgl::PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC vtkgl::GetCombinerInputParameterfvNV = NULL;
vtkgl::PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC vtkgl::GetCombinerInputParameterivNV = NULL;
vtkgl::PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC vtkgl::GetCombinerOutputParameterfvNV = NULL;
vtkgl::PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC vtkgl::GetCombinerOutputParameterivNV = NULL;
vtkgl::PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC vtkgl::GetFinalCombinerInputParameterfvNV = NULL;
vtkgl::PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC vtkgl::GetFinalCombinerInputParameterivNV = NULL;
//Functions for GL_NV_register_combiners2
vtkgl::PFNGLCOMBINERSTAGEPARAMETERFVNVPROC vtkgl::CombinerStageParameterfvNV = NULL;
vtkgl::PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC vtkgl::GetCombinerStageParameterfvNV = NULL;
//Functions for GL_NV_shader_buffer_load
vtkgl::PFNGLMAKEBUFFERRESIDENTNVPROC vtkgl::MakeBufferResidentNV = NULL;
vtkgl::PFNGLMAKEBUFFERNONRESIDENTNVPROC vtkgl::MakeBufferNonResidentNV = NULL;
vtkgl::PFNGLISBUFFERRESIDENTNVPROC vtkgl::IsBufferResidentNV = NULL;
vtkgl::PFNGLMAKENAMEDBUFFERRESIDENTNVPROC vtkgl::MakeNamedBufferResidentNV = NULL;
vtkgl::PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC vtkgl::MakeNamedBufferNonResidentNV = NULL;
vtkgl::PFNGLISNAMEDBUFFERRESIDENTNVPROC vtkgl::IsNamedBufferResidentNV = NULL;
vtkgl::PFNGLGETBUFFERPARAMETERUI64VNVPROC vtkgl::GetBufferParameterui64vNV = NULL;
vtkgl::PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC vtkgl::GetNamedBufferParameterui64vNV = NULL;
vtkgl::PFNGLGETINTEGERUI64VNVPROC vtkgl::GetIntegerui64vNV = NULL;
vtkgl::PFNGLUNIFORMUI64NVPROC vtkgl::Uniformui64NV = NULL;
vtkgl::PFNGLUNIFORMUI64VNVPROC vtkgl::Uniformui64vNV = NULL;
vtkgl::PFNGLGETUNIFORMUI64VNVPROC vtkgl::GetUniformui64vNV = NULL;
vtkgl::PFNGLPROGRAMUNIFORMUI64NVPROC vtkgl::ProgramUniformui64NV = NULL;
vtkgl::PFNGLPROGRAMUNIFORMUI64VNVPROC vtkgl::ProgramUniformui64vNV = NULL;
//Functions for GL_NV_texture_barrier
vtkgl::PFNGLTEXTUREBARRIERNVPROC vtkgl::TextureBarrierNV = NULL;
//Functions for GL_NV_transform_feedback
vtkgl::PFNGLBEGINTRANSFORMFEEDBACKNVPROC vtkgl::BeginTransformFeedbackNV = NULL;
vtkgl::PFNGLENDTRANSFORMFEEDBACKNVPROC vtkgl::EndTransformFeedbackNV = NULL;
vtkgl::PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC vtkgl::TransformFeedbackAttribsNV = NULL;
vtkgl::PFNGLBINDBUFFERRANGENVPROC vtkgl::BindBufferRangeNV = NULL;
vtkgl::PFNGLBINDBUFFEROFFSETNVPROC vtkgl::BindBufferOffsetNV = NULL;
vtkgl::PFNGLBINDBUFFERBASENVPROC vtkgl::BindBufferBaseNV = NULL;
vtkgl::PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC vtkgl::TransformFeedbackVaryingsNV = NULL;
vtkgl::PFNGLACTIVEVARYINGNVPROC vtkgl::ActiveVaryingNV = NULL;
vtkgl::PFNGLGETVARYINGLOCATIONNVPROC vtkgl::GetVaryingLocationNV = NULL;
vtkgl::PFNGLGETACTIVEVARYINGNVPROC vtkgl::GetActiveVaryingNV = NULL;
vtkgl::PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC vtkgl::GetTransformFeedbackVaryingNV = NULL;
vtkgl::PFNGLTRANSFORMFEEDBACKSTREAMATTRIBSNVPROC vtkgl::TransformFeedbackStreamAttribsNV = NULL;
//Functions for GL_NV_transform_feedback2
vtkgl::PFNGLBINDTRANSFORMFEEDBACKNVPROC vtkgl::BindTransformFeedbackNV = NULL;
vtkgl::PFNGLDELETETRANSFORMFEEDBACKSNVPROC vtkgl::DeleteTransformFeedbacksNV = NULL;
vtkgl::PFNGLGENTRANSFORMFEEDBACKSNVPROC vtkgl::GenTransformFeedbacksNV = NULL;
vtkgl::PFNGLISTRANSFORMFEEDBACKNVPROC vtkgl::IsTransformFeedbackNV = NULL;
vtkgl::PFNGLPAUSETRANSFORMFEEDBACKNVPROC vtkgl::PauseTransformFeedbackNV = NULL;
vtkgl::PFNGLRESUMETRANSFORMFEEDBACKNVPROC vtkgl::ResumeTransformFeedbackNV = NULL;
vtkgl::PFNGLDRAWTRANSFORMFEEDBACKNVPROC vtkgl::DrawTransformFeedbackNV = NULL;
//Functions for GL_NV_vdpau_interop
vtkgl::PFNGLVDPAUINITNVPROC vtkgl::VDPAUInitNV = NULL;
vtkgl::PFNGLVDPAUFININVPROC vtkgl::VDPAUFiniNV = NULL;
vtkgl::PFNGLVDPAUREGISTERVIDEOSURFACENVPROC vtkgl::VDPAURegisterVideoSurfaceNV = NULL;
vtkgl::PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC vtkgl::VDPAURegisterOutputSurfaceNV = NULL;
vtkgl::PFNGLVDPAUISSURFACENVPROC vtkgl::VDPAUIsSurfaceNV = NULL;
vtkgl::PFNGLVDPAUUNREGISTERSURFACENVPROC vtkgl::VDPAUUnregisterSurfaceNV = NULL;
vtkgl::PFNGLVDPAUGETSURFACEIVNVPROC vtkgl::VDPAUGetSurfaceivNV = NULL;
vtkgl::PFNGLVDPAUSURFACEACCESSNVPROC vtkgl::VDPAUSurfaceAccessNV = NULL;
vtkgl::PFNGLVDPAUMAPSURFACESNVPROC vtkgl::VDPAUMapSurfacesNV = NULL;
vtkgl::PFNGLVDPAUUNMAPSURFACESNVPROC vtkgl::VDPAUUnmapSurfacesNV = NULL;
//Functions for GL_NV_vertex_array_range
vtkgl::PFNGLFLUSHVERTEXARRAYRANGENVPROC vtkgl::FlushVertexArrayRangeNV = NULL;
vtkgl::PFNGLVERTEXARRAYRANGENVPROC vtkgl::VertexArrayRangeNV = NULL;
//Functions for GL_NV_vertex_attrib_integer_64bit
vtkgl::PFNGLVERTEXATTRIBL1I64NVPROC vtkgl::VertexAttribL1i64NV = NULL;
vtkgl::PFNGLVERTEXATTRIBL2I64NVPROC vtkgl::VertexAttribL2i64NV = NULL;
vtkgl::PFNGLVERTEXATTRIBL3I64NVPROC vtkgl::VertexAttribL3i64NV = NULL;
vtkgl::PFNGLVERTEXATTRIBL4I64NVPROC vtkgl::VertexAttribL4i64NV = NULL;
vtkgl::PFNGLVERTEXATTRIBL1I64VNVPROC vtkgl::VertexAttribL1i64vNV = NULL;
vtkgl::PFNGLVERTEXATTRIBL2I64VNVPROC vtkgl::VertexAttribL2i64vNV = NULL;
vtkgl::PFNGLVERTEXATTRIBL3I64VNVPROC vtkgl::VertexAttribL3i64vNV = NULL;
vtkgl::PFNGLVERTEXATTRIBL4I64VNVPROC vtkgl::VertexAttribL4i64vNV = NULL;
vtkgl::PFNGLVERTEXATTRIBL1UI64NVPROC vtkgl::VertexAttribL1ui64NV = NULL;
vtkgl::PFNGLVERTEXATTRIBL2UI64NVPROC vtkgl::VertexAttribL2ui64NV = NULL;
vtkgl::PFNGLVERTEXATTRIBL3UI64NVPROC vtkgl::VertexAttribL3ui64NV = NULL;
vtkgl::PFNGLVERTEXATTRIBL4UI64NVPROC vtkgl::VertexAttribL4ui64NV = NULL;
vtkgl::PFNGLVERTEXATTRIBL1UI64VNVPROC vtkgl::VertexAttribL1ui64vNV = NULL;
vtkgl::PFNGLVERTEXATTRIBL2UI64VNVPROC vtkgl::VertexAttribL2ui64vNV = NULL;
vtkgl::PFNGLVERTEXATTRIBL3UI64VNVPROC vtkgl::VertexAttribL3ui64vNV = NULL;
vtkgl::PFNGLVERTEXATTRIBL4UI64VNVPROC vtkgl::VertexAttribL4ui64vNV = NULL;
vtkgl::PFNGLGETVERTEXATTRIBLI64VNVPROC vtkgl::GetVertexAttribLi64vNV = NULL;
vtkgl::PFNGLGETVERTEXATTRIBLUI64VNVPROC vtkgl::GetVertexAttribLui64vNV = NULL;
vtkgl::PFNGLVERTEXATTRIBLFORMATNVPROC vtkgl::VertexAttribLFormatNV = NULL;
//Functions for GL_NV_vertex_buffer_unified_memory
vtkgl::PFNGLBUFFERADDRESSRANGENVPROC vtkgl::BufferAddressRangeNV = NULL;
vtkgl::PFNGLVERTEXFORMATNVPROC vtkgl::VertexFormatNV = NULL;
vtkgl::PFNGLNORMALFORMATNVPROC vtkgl::NormalFormatNV = NULL;
vtkgl::PFNGLCOLORFORMATNVPROC vtkgl::ColorFormatNV = NULL;
vtkgl::PFNGLINDEXFORMATNVPROC vtkgl::IndexFormatNV = NULL;
vtkgl::PFNGLTEXCOORDFORMATNVPROC vtkgl::TexCoordFormatNV = NULL;
vtkgl::PFNGLEDGEFLAGFORMATNVPROC vtkgl::EdgeFlagFormatNV = NULL;
vtkgl::PFNGLSECONDARYCOLORFORMATNVPROC vtkgl::SecondaryColorFormatNV = NULL;
vtkgl::PFNGLFOGCOORDFORMATNVPROC vtkgl::FogCoordFormatNV = NULL;
vtkgl::PFNGLVERTEXATTRIBFORMATNVPROC vtkgl::VertexAttribFormatNV = NULL;
vtkgl::PFNGLVERTEXATTRIBIFORMATNVPROC vtkgl::VertexAttribIFormatNV = NULL;
vtkgl::PFNGLGETINTEGERUI64I_VNVPROC vtkgl::GetIntegerui64i_vNV = NULL;
//Functions for GL_NV_vertex_program
vtkgl::PFNGLAREPROGRAMSRESIDENTNVPROC vtkgl::AreProgramsResidentNV = NULL;
vtkgl::PFNGLBINDPROGRAMNVPROC vtkgl::BindProgramNV = NULL;
vtkgl::PFNGLDELETEPROGRAMSNVPROC vtkgl::DeleteProgramsNV = NULL;
vtkgl::PFNGLEXECUTEPROGRAMNVPROC vtkgl::ExecuteProgramNV = NULL;
vtkgl::PFNGLGENPROGRAMSNVPROC vtkgl::GenProgramsNV = NULL;
vtkgl::PFNGLGETPROGRAMPARAMETERDVNVPROC vtkgl::GetProgramParameterdvNV = NULL;
vtkgl::PFNGLGETPROGRAMPARAMETERFVNVPROC vtkgl::GetProgramParameterfvNV = NULL;
vtkgl::PFNGLGETPROGRAMIVNVPROC vtkgl::GetProgramivNV = NULL;
vtkgl::PFNGLGETPROGRAMSTRINGNVPROC vtkgl::GetProgramStringNV = NULL;
vtkgl::PFNGLGETTRACKMATRIXIVNVPROC vtkgl::GetTrackMatrixivNV = NULL;
vtkgl::PFNGLGETVERTEXATTRIBDVNVPROC vtkgl::GetVertexAttribdvNV = NULL;
vtkgl::PFNGLGETVERTEXATTRIBFVNVPROC vtkgl::GetVertexAttribfvNV = NULL;
vtkgl::PFNGLGETVERTEXATTRIBIVNVPROC vtkgl::GetVertexAttribivNV = NULL;
vtkgl::PFNGLGETVERTEXATTRIBPOINTERVNVPROC vtkgl::GetVertexAttribPointervNV = NULL;
vtkgl::PFNGLISPROGRAMNVPROC vtkgl::IsProgramNV = NULL;
vtkgl::PFNGLLOADPROGRAMNVPROC vtkgl::LoadProgramNV = NULL;
vtkgl::PFNGLPROGRAMPARAMETER4DNVPROC vtkgl::ProgramParameter4dNV = NULL;
vtkgl::PFNGLPROGRAMPARAMETER4DVNVPROC vtkgl::ProgramParameter4dvNV = NULL;
vtkgl::PFNGLPROGRAMPARAMETER4FNVPROC vtkgl::ProgramParameter4fNV = NULL;
vtkgl::PFNGLPROGRAMPARAMETER4FVNVPROC vtkgl::ProgramParameter4fvNV = NULL;
vtkgl::PFNGLPROGRAMPARAMETERS4DVNVPROC vtkgl::ProgramParameters4dvNV = NULL;
vtkgl::PFNGLPROGRAMPARAMETERS4FVNVPROC vtkgl::ProgramParameters4fvNV = NULL;
vtkgl::PFNGLREQUESTRESIDENTPROGRAMSNVPROC vtkgl::RequestResidentProgramsNV = NULL;
vtkgl::PFNGLTRACKMATRIXNVPROC vtkgl::TrackMatrixNV = NULL;
vtkgl::PFNGLVERTEXATTRIBPOINTERNVPROC vtkgl::VertexAttribPointerNV = NULL;
vtkgl::PFNGLVERTEXATTRIB1DNVPROC vtkgl::VertexAttrib1dNV = NULL;
vtkgl::PFNGLVERTEXATTRIB1DVNVPROC vtkgl::VertexAttrib1dvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB1FNVPROC vtkgl::VertexAttrib1fNV = NULL;
vtkgl::PFNGLVERTEXATTRIB1FVNVPROC vtkgl::VertexAttrib1fvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB1SNVPROC vtkgl::VertexAttrib1sNV = NULL;
vtkgl::PFNGLVERTEXATTRIB1SVNVPROC vtkgl::VertexAttrib1svNV = NULL;
vtkgl::PFNGLVERTEXATTRIB2DNVPROC vtkgl::VertexAttrib2dNV = NULL;
vtkgl::PFNGLVERTEXATTRIB2DVNVPROC vtkgl::VertexAttrib2dvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB2FNVPROC vtkgl::VertexAttrib2fNV = NULL;
vtkgl::PFNGLVERTEXATTRIB2FVNVPROC vtkgl::VertexAttrib2fvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB2SNVPROC vtkgl::VertexAttrib2sNV = NULL;
vtkgl::PFNGLVERTEXATTRIB2SVNVPROC vtkgl::VertexAttrib2svNV = NULL;
vtkgl::PFNGLVERTEXATTRIB3DNVPROC vtkgl::VertexAttrib3dNV = NULL;
vtkgl::PFNGLVERTEXATTRIB3DVNVPROC vtkgl::VertexAttrib3dvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB3FNVPROC vtkgl::VertexAttrib3fNV = NULL;
vtkgl::PFNGLVERTEXATTRIB3FVNVPROC vtkgl::VertexAttrib3fvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB3SNVPROC vtkgl::VertexAttrib3sNV = NULL;
vtkgl::PFNGLVERTEXATTRIB3SVNVPROC vtkgl::VertexAttrib3svNV = NULL;
vtkgl::PFNGLVERTEXATTRIB4DNVPROC vtkgl::VertexAttrib4dNV = NULL;
vtkgl::PFNGLVERTEXATTRIB4DVNVPROC vtkgl::VertexAttrib4dvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB4FNVPROC vtkgl::VertexAttrib4fNV = NULL;
vtkgl::PFNGLVERTEXATTRIB4FVNVPROC vtkgl::VertexAttrib4fvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB4SNVPROC vtkgl::VertexAttrib4sNV = NULL;
vtkgl::PFNGLVERTEXATTRIB4SVNVPROC vtkgl::VertexAttrib4svNV = NULL;
vtkgl::PFNGLVERTEXATTRIB4UBNVPROC vtkgl::VertexAttrib4ubNV = NULL;
vtkgl::PFNGLVERTEXATTRIB4UBVNVPROC vtkgl::VertexAttrib4ubvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS1DVNVPROC vtkgl::VertexAttribs1dvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS1FVNVPROC vtkgl::VertexAttribs1fvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS1SVNVPROC vtkgl::VertexAttribs1svNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS2DVNVPROC vtkgl::VertexAttribs2dvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS2FVNVPROC vtkgl::VertexAttribs2fvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS2SVNVPROC vtkgl::VertexAttribs2svNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS3DVNVPROC vtkgl::VertexAttribs3dvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS3FVNVPROC vtkgl::VertexAttribs3fvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS3SVNVPROC vtkgl::VertexAttribs3svNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS4DVNVPROC vtkgl::VertexAttribs4dvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS4FVNVPROC vtkgl::VertexAttribs4fvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS4SVNVPROC vtkgl::VertexAttribs4svNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS4UBVNVPROC vtkgl::VertexAttribs4ubvNV = NULL;
//Functions for GL_NV_vertex_program4
vtkgl::PFNGLVERTEXATTRIBI1IEXTPROC vtkgl::VertexAttribI1iEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBI2IEXTPROC vtkgl::VertexAttribI2iEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBI3IEXTPROC vtkgl::VertexAttribI3iEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBI4IEXTPROC vtkgl::VertexAttribI4iEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBI1UIEXTPROC vtkgl::VertexAttribI1uiEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBI2UIEXTPROC vtkgl::VertexAttribI2uiEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBI3UIEXTPROC vtkgl::VertexAttribI3uiEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBI4UIEXTPROC vtkgl::VertexAttribI4uiEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBI1IVEXTPROC vtkgl::VertexAttribI1ivEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBI2IVEXTPROC vtkgl::VertexAttribI2ivEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBI3IVEXTPROC vtkgl::VertexAttribI3ivEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBI4IVEXTPROC vtkgl::VertexAttribI4ivEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBI1UIVEXTPROC vtkgl::VertexAttribI1uivEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBI2UIVEXTPROC vtkgl::VertexAttribI2uivEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBI3UIVEXTPROC vtkgl::VertexAttribI3uivEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBI4UIVEXTPROC vtkgl::VertexAttribI4uivEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBI4BVEXTPROC vtkgl::VertexAttribI4bvEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBI4SVEXTPROC vtkgl::VertexAttribI4svEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBI4UBVEXTPROC vtkgl::VertexAttribI4ubvEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBI4USVEXTPROC vtkgl::VertexAttribI4usvEXT = NULL;
vtkgl::PFNGLVERTEXATTRIBIPOINTEREXTPROC vtkgl::VertexAttribIPointerEXT = NULL;
vtkgl::PFNGLGETVERTEXATTRIBIIVEXTPROC vtkgl::GetVertexAttribIivEXT = NULL;
vtkgl::PFNGLGETVERTEXATTRIBIUIVEXTPROC vtkgl::GetVertexAttribIuivEXT = NULL;
//Functions for GL_NV_video_capture
vtkgl::PFNGLBEGINVIDEOCAPTURENVPROC vtkgl::BeginVideoCaptureNV = NULL;
vtkgl::PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC vtkgl::BindVideoCaptureStreamBufferNV = NULL;
vtkgl::PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC vtkgl::BindVideoCaptureStreamTextureNV = NULL;
vtkgl::PFNGLENDVIDEOCAPTURENVPROC vtkgl::EndVideoCaptureNV = NULL;
vtkgl::PFNGLGETVIDEOCAPTUREIVNVPROC vtkgl::GetVideoCaptureivNV = NULL;
vtkgl::PFNGLGETVIDEOCAPTURESTREAMIVNVPROC vtkgl::GetVideoCaptureStreamivNV = NULL;
vtkgl::PFNGLGETVIDEOCAPTURESTREAMFVNVPROC vtkgl::GetVideoCaptureStreamfvNV = NULL;
vtkgl::PFNGLGETVIDEOCAPTURESTREAMDVNVPROC vtkgl::GetVideoCaptureStreamdvNV = NULL;
vtkgl::PFNGLVIDEOCAPTURENVPROC vtkgl::VideoCaptureNV = NULL;
vtkgl::PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC vtkgl::VideoCaptureStreamParameterivNV = NULL;
vtkgl::PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC vtkgl::VideoCaptureStreamParameterfvNV = NULL;
vtkgl::PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC vtkgl::VideoCaptureStreamParameterdvNV = NULL;
//Functions for GL_PGI_misc_hints
vtkgl::PFNGLHINTPGIPROC vtkgl::HintPGI = NULL;
//Functions for GL_SGIS_detail_texture
vtkgl::PFNGLDETAILTEXFUNCSGISPROC vtkgl::DetailTexFuncSGIS = NULL;
vtkgl::PFNGLGETDETAILTEXFUNCSGISPROC vtkgl::GetDetailTexFuncSGIS = NULL;
//Functions for GL_SGIS_fog_function
vtkgl::PFNGLFOGFUNCSGISPROC vtkgl::FogFuncSGIS = NULL;
vtkgl::PFNGLGETFOGFUNCSGISPROC vtkgl::GetFogFuncSGIS = NULL;
//Functions for GL_SGIS_multisample
vtkgl::PFNGLSAMPLEMASKSGISPROC vtkgl::SampleMaskSGIS = NULL;
vtkgl::PFNGLSAMPLEPATTERNSGISPROC vtkgl::SamplePatternSGIS = NULL;
//Functions for GL_SGIS_pixel_texture
vtkgl::PFNGLPIXELTEXGENPARAMETERISGISPROC vtkgl::PixelTexGenParameteriSGIS = NULL;
vtkgl::PFNGLPIXELTEXGENPARAMETERIVSGISPROC vtkgl::PixelTexGenParameterivSGIS = NULL;
vtkgl::PFNGLPIXELTEXGENPARAMETERFSGISPROC vtkgl::PixelTexGenParameterfSGIS = NULL;
vtkgl::PFNGLPIXELTEXGENPARAMETERFVSGISPROC vtkgl::PixelTexGenParameterfvSGIS = NULL;
vtkgl::PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC vtkgl::GetPixelTexGenParameterivSGIS = NULL;
vtkgl::PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC vtkgl::GetPixelTexGenParameterfvSGIS = NULL;
//Functions for GL_SGIS_point_parameters
vtkgl::PFNGLPOINTPARAMETERFSGISPROC vtkgl::PointParameterfSGIS = NULL;
vtkgl::PFNGLPOINTPARAMETERFVSGISPROC vtkgl::PointParameterfvSGIS = NULL;
//Functions for GL_SGIS_sharpen_texture
vtkgl::PFNGLSHARPENTEXFUNCSGISPROC vtkgl::SharpenTexFuncSGIS = NULL;
vtkgl::PFNGLGETSHARPENTEXFUNCSGISPROC vtkgl::GetSharpenTexFuncSGIS = NULL;
//Functions for GL_SGIS_texture4D
vtkgl::PFNGLTEXIMAGE4DSGISPROC vtkgl::TexImage4DSGIS = NULL;
vtkgl::PFNGLTEXSUBIMAGE4DSGISPROC vtkgl::TexSubImage4DSGIS = NULL;
//Functions for GL_SGIS_texture_color_mask
vtkgl::PFNGLTEXTURECOLORMASKSGISPROC vtkgl::TextureColorMaskSGIS = NULL;
//Functions for GL_SGIS_texture_filter4
vtkgl::PFNGLGETTEXFILTERFUNCSGISPROC vtkgl::GetTexFilterFuncSGIS = NULL;
vtkgl::PFNGLTEXFILTERFUNCSGISPROC vtkgl::TexFilterFuncSGIS = NULL;
//Functions for GL_SGIX_async
vtkgl::PFNGLASYNCMARKERSGIXPROC vtkgl::AsyncMarkerSGIX = NULL;
vtkgl::PFNGLFINISHASYNCSGIXPROC vtkgl::FinishAsyncSGIX = NULL;
vtkgl::PFNGLPOLLASYNCSGIXPROC vtkgl::PollAsyncSGIX = NULL;
vtkgl::PFNGLGENASYNCMARKERSSGIXPROC vtkgl::GenAsyncMarkersSGIX = NULL;
vtkgl::PFNGLDELETEASYNCMARKERSSGIXPROC vtkgl::DeleteAsyncMarkersSGIX = NULL;
vtkgl::PFNGLISASYNCMARKERSGIXPROC vtkgl::IsAsyncMarkerSGIX = NULL;
//Functions for GL_SGIX_flush_raster
vtkgl::PFNGLFLUSHRASTERSGIXPROC vtkgl::FlushRasterSGIX = NULL;
//Functions for GL_SGIX_fragment_lighting
vtkgl::PFNGLFRAGMENTCOLORMATERIALSGIXPROC vtkgl::FragmentColorMaterialSGIX = NULL;
vtkgl::PFNGLFRAGMENTLIGHTFSGIXPROC vtkgl::FragmentLightfSGIX = NULL;
vtkgl::PFNGLFRAGMENTLIGHTFVSGIXPROC vtkgl::FragmentLightfvSGIX = NULL;
vtkgl::PFNGLFRAGMENTLIGHTISGIXPROC vtkgl::FragmentLightiSGIX = NULL;
vtkgl::PFNGLFRAGMENTLIGHTIVSGIXPROC vtkgl::FragmentLightivSGIX = NULL;
vtkgl::PFNGLFRAGMENTLIGHTMODELFSGIXPROC vtkgl::FragmentLightModelfSGIX = NULL;
vtkgl::PFNGLFRAGMENTLIGHTMODELFVSGIXPROC vtkgl::FragmentLightModelfvSGIX = NULL;
vtkgl::PFNGLFRAGMENTLIGHTMODELISGIXPROC vtkgl::FragmentLightModeliSGIX = NULL;
vtkgl::PFNGLFRAGMENTLIGHTMODELIVSGIXPROC vtkgl::FragmentLightModelivSGIX = NULL;
vtkgl::PFNGLFRAGMENTMATERIALFSGIXPROC vtkgl::FragmentMaterialfSGIX = NULL;
vtkgl::PFNGLFRAGMENTMATERIALFVSGIXPROC vtkgl::FragmentMaterialfvSGIX = NULL;
vtkgl::PFNGLFRAGMENTMATERIALISGIXPROC vtkgl::FragmentMaterialiSGIX = NULL;
vtkgl::PFNGLFRAGMENTMATERIALIVSGIXPROC vtkgl::FragmentMaterialivSGIX = NULL;
vtkgl::PFNGLGETFRAGMENTLIGHTFVSGIXPROC vtkgl::GetFragmentLightfvSGIX = NULL;
vtkgl::PFNGLGETFRAGMENTLIGHTIVSGIXPROC vtkgl::GetFragmentLightivSGIX = NULL;
vtkgl::PFNGLGETFRAGMENTMATERIALFVSGIXPROC vtkgl::GetFragmentMaterialfvSGIX = NULL;
vtkgl::PFNGLGETFRAGMENTMATERIALIVSGIXPROC vtkgl::GetFragmentMaterialivSGIX = NULL;
vtkgl::PFNGLLIGHTENVISGIXPROC vtkgl::LightEnviSGIX = NULL;
//Functions for GL_SGIX_framezoom
vtkgl::PFNGLFRAMEZOOMSGIXPROC vtkgl::FrameZoomSGIX = NULL;
//Functions for GL_SGIX_igloo_interface
vtkgl::PFNGLIGLOOINTERFACESGIXPROC vtkgl::IglooInterfaceSGIX = NULL;
//Functions for GL_SGIX_instruments
vtkgl::PFNGLGETINSTRUMENTSSGIXPROC vtkgl::GetInstrumentsSGIX = NULL;
vtkgl::PFNGLINSTRUMENTSBUFFERSGIXPROC vtkgl::InstrumentsBufferSGIX = NULL;
vtkgl::PFNGLPOLLINSTRUMENTSSGIXPROC vtkgl::PollInstrumentsSGIX = NULL;
vtkgl::PFNGLREADINSTRUMENTSSGIXPROC vtkgl::ReadInstrumentsSGIX = NULL;
vtkgl::PFNGLSTARTINSTRUMENTSSGIXPROC vtkgl::StartInstrumentsSGIX = NULL;
vtkgl::PFNGLSTOPINSTRUMENTSSGIXPROC vtkgl::StopInstrumentsSGIX = NULL;
//Functions for GL_SGIX_list_priority
vtkgl::PFNGLGETLISTPARAMETERFVSGIXPROC vtkgl::GetListParameterfvSGIX = NULL;
vtkgl::PFNGLGETLISTPARAMETERIVSGIXPROC vtkgl::GetListParameterivSGIX = NULL;
vtkgl::PFNGLLISTPARAMETERFSGIXPROC vtkgl::ListParameterfSGIX = NULL;
vtkgl::PFNGLLISTPARAMETERFVSGIXPROC vtkgl::ListParameterfvSGIX = NULL;
vtkgl::PFNGLLISTPARAMETERISGIXPROC vtkgl::ListParameteriSGIX = NULL;
vtkgl::PFNGLLISTPARAMETERIVSGIXPROC vtkgl::ListParameterivSGIX = NULL;
//Functions for GL_SGIX_pixel_texture
vtkgl::PFNGLPIXELTEXGENSGIXPROC vtkgl::PixelTexGenSGIX = NULL;
//Functions for GL_SGIX_polynomial_ffd
vtkgl::PFNGLDEFORMATIONMAP3DSGIXPROC vtkgl::DeformationMap3dSGIX = NULL;
vtkgl::PFNGLDEFORMATIONMAP3FSGIXPROC vtkgl::DeformationMap3fSGIX = NULL;
vtkgl::PFNGLDEFORMSGIXPROC vtkgl::DeformSGIX = NULL;
vtkgl::PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC vtkgl::LoadIdentityDeformationMapSGIX = NULL;
//Functions for GL_SGIX_reference_plane
vtkgl::PFNGLREFERENCEPLANESGIXPROC vtkgl::ReferencePlaneSGIX = NULL;
//Functions for GL_SGIX_sprite
vtkgl::PFNGLSPRITEPARAMETERFSGIXPROC vtkgl::SpriteParameterfSGIX = NULL;
vtkgl::PFNGLSPRITEPARAMETERFVSGIXPROC vtkgl::SpriteParameterfvSGIX = NULL;
vtkgl::PFNGLSPRITEPARAMETERISGIXPROC vtkgl::SpriteParameteriSGIX = NULL;
vtkgl::PFNGLSPRITEPARAMETERIVSGIXPROC vtkgl::SpriteParameterivSGIX = NULL;
//Functions for GL_SGIX_tag_sample_buffer
vtkgl::PFNGLTAGSAMPLEBUFFERSGIXPROC vtkgl::TagSampleBufferSGIX = NULL;
//Functions for GL_SGI_color_table
vtkgl::PFNGLCOLORTABLESGIPROC vtkgl::ColorTableSGI = NULL;
vtkgl::PFNGLCOLORTABLEPARAMETERFVSGIPROC vtkgl::ColorTableParameterfvSGI = NULL;
vtkgl::PFNGLCOLORTABLEPARAMETERIVSGIPROC vtkgl::ColorTableParameterivSGI = NULL;
vtkgl::PFNGLCOPYCOLORTABLESGIPROC vtkgl::CopyColorTableSGI = NULL;
vtkgl::PFNGLGETCOLORTABLESGIPROC vtkgl::GetColorTableSGI = NULL;
vtkgl::PFNGLGETCOLORTABLEPARAMETERFVSGIPROC vtkgl::GetColorTableParameterfvSGI = NULL;
vtkgl::PFNGLGETCOLORTABLEPARAMETERIVSGIPROC vtkgl::GetColorTableParameterivSGI = NULL;
//Functions for GL_SUNX_constant_data
vtkgl::PFNGLFINISHTEXTURESUNXPROC vtkgl::FinishTextureSUNX = NULL;
//Functions for GL_SUN_global_alpha
vtkgl::PFNGLGLOBALALPHAFACTORBSUNPROC vtkgl::GlobalAlphaFactorbSUN = NULL;
vtkgl::PFNGLGLOBALALPHAFACTORSSUNPROC vtkgl::GlobalAlphaFactorsSUN = NULL;
vtkgl::PFNGLGLOBALALPHAFACTORISUNPROC vtkgl::GlobalAlphaFactoriSUN = NULL;
vtkgl::PFNGLGLOBALALPHAFACTORFSUNPROC vtkgl::GlobalAlphaFactorfSUN = NULL;
vtkgl::PFNGLGLOBALALPHAFACTORDSUNPROC vtkgl::GlobalAlphaFactordSUN = NULL;
vtkgl::PFNGLGLOBALALPHAFACTORUBSUNPROC vtkgl::GlobalAlphaFactorubSUN = NULL;
vtkgl::PFNGLGLOBALALPHAFACTORUSSUNPROC vtkgl::GlobalAlphaFactorusSUN = NULL;
vtkgl::PFNGLGLOBALALPHAFACTORUISUNPROC vtkgl::GlobalAlphaFactoruiSUN = NULL;
//Functions for GL_SUN_mesh_array
vtkgl::PFNGLDRAWMESHARRAYSSUNPROC vtkgl::DrawMeshArraysSUN = NULL;
//Functions for GL_SUN_triangle_list
vtkgl::PFNGLREPLACEMENTCODEUISUNPROC vtkgl::ReplacementCodeuiSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUSSUNPROC vtkgl::ReplacementCodeusSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUBSUNPROC vtkgl::ReplacementCodeubSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUIVSUNPROC vtkgl::ReplacementCodeuivSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUSVSUNPROC vtkgl::ReplacementCodeusvSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUBVSUNPROC vtkgl::ReplacementCodeubvSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEPOINTERSUNPROC vtkgl::ReplacementCodePointerSUN = NULL;
//Functions for GL_SUN_vertex
vtkgl::PFNGLCOLOR4UBVERTEX2FSUNPROC vtkgl::Color4ubVertex2fSUN = NULL;
vtkgl::PFNGLCOLOR4UBVERTEX2FVSUNPROC vtkgl::Color4ubVertex2fvSUN = NULL;
vtkgl::PFNGLCOLOR4UBVERTEX3FSUNPROC vtkgl::Color4ubVertex3fSUN = NULL;
vtkgl::PFNGLCOLOR4UBVERTEX3FVSUNPROC vtkgl::Color4ubVertex3fvSUN = NULL;
vtkgl::PFNGLCOLOR3FVERTEX3FSUNPROC vtkgl::Color3fVertex3fSUN = NULL;
vtkgl::PFNGLCOLOR3FVERTEX3FVSUNPROC vtkgl::Color3fVertex3fvSUN = NULL;
vtkgl::PFNGLNORMAL3FVERTEX3FSUNPROC vtkgl::Normal3fVertex3fSUN = NULL;
vtkgl::PFNGLNORMAL3FVERTEX3FVSUNPROC vtkgl::Normal3fVertex3fvSUN = NULL;
vtkgl::PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC vtkgl::Color4fNormal3fVertex3fSUN = NULL;
vtkgl::PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC vtkgl::Color4fNormal3fVertex3fvSUN = NULL;
vtkgl::PFNGLTEXCOORD2FVERTEX3FSUNPROC vtkgl::TexCoord2fVertex3fSUN = NULL;
vtkgl::PFNGLTEXCOORD2FVERTEX3FVSUNPROC vtkgl::TexCoord2fVertex3fvSUN = NULL;
vtkgl::PFNGLTEXCOORD4FVERTEX4FSUNPROC vtkgl::TexCoord4fVertex4fSUN = NULL;
vtkgl::PFNGLTEXCOORD4FVERTEX4FVSUNPROC vtkgl::TexCoord4fVertex4fvSUN = NULL;
vtkgl::PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC vtkgl::TexCoord2fColor4ubVertex3fSUN = NULL;
vtkgl::PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC vtkgl::TexCoord2fColor4ubVertex3fvSUN = NULL;
vtkgl::PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC vtkgl::TexCoord2fColor3fVertex3fSUN = NULL;
vtkgl::PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC vtkgl::TexCoord2fColor3fVertex3fvSUN = NULL;
vtkgl::PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC vtkgl::TexCoord2fNormal3fVertex3fSUN = NULL;
vtkgl::PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC vtkgl::TexCoord2fNormal3fVertex3fvSUN = NULL;
vtkgl::PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC vtkgl::TexCoord2fColor4fNormal3fVertex3fSUN = NULL;
vtkgl::PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC vtkgl::TexCoord2fColor4fNormal3fVertex3fvSUN = NULL;
vtkgl::PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC vtkgl::TexCoord4fColor4fNormal3fVertex4fSUN = NULL;
vtkgl::PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC vtkgl::TexCoord4fColor4fNormal3fVertex4fvSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC vtkgl::ReplacementCodeuiVertex3fSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC vtkgl::ReplacementCodeuiVertex3fvSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC vtkgl::ReplacementCodeuiColor4ubVertex3fSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC vtkgl::ReplacementCodeuiColor4ubVertex3fvSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC vtkgl::ReplacementCodeuiColor3fVertex3fSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC vtkgl::ReplacementCodeuiColor3fVertex3fvSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC vtkgl::ReplacementCodeuiNormal3fVertex3fSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC vtkgl::ReplacementCodeuiNormal3fVertex3fvSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC vtkgl::ReplacementCodeuiColor4fNormal3fVertex3fSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC vtkgl::ReplacementCodeuiColor4fNormal3fVertex3fvSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC vtkgl::ReplacementCodeuiTexCoord2fVertex3fSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC vtkgl::ReplacementCodeuiTexCoord2fVertex3fvSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC vtkgl::ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC vtkgl::ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC vtkgl::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC vtkgl::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN = NULL;
//Functions for GL_VERSION_1_2
vtkgl::PFNGLBLENDCOLORPROC vtkgl::BlendColor = NULL;
vtkgl::PFNGLBLENDEQUATIONPROC vtkgl::BlendEquation = NULL;
vtkgl::PFNGLDRAWRANGEELEMENTSPROC vtkgl::DrawRangeElements = NULL;
vtkgl::PFNGLTEXIMAGE3DPROC vtkgl::TexImage3D = NULL;
vtkgl::PFNGLTEXSUBIMAGE3DPROC vtkgl::TexSubImage3D = NULL;
vtkgl::PFNGLCOPYTEXSUBIMAGE3DPROC vtkgl::CopyTexSubImage3D = NULL;
//Functions for GL_VERSION_1_2_DEPRECATED
vtkgl::PFNGLCOLORTABLEPROC vtkgl::ColorTable = NULL;
vtkgl::PFNGLCOLORTABLEPARAMETERFVPROC vtkgl::ColorTableParameterfv = NULL;
vtkgl::PFNGLCOLORTABLEPARAMETERIVPROC vtkgl::ColorTableParameteriv = NULL;
vtkgl::PFNGLCOPYCOLORTABLEPROC vtkgl::CopyColorTable = NULL;
vtkgl::PFNGLGETCOLORTABLEPROC vtkgl::GetColorTable = NULL;
vtkgl::PFNGLGETCOLORTABLEPARAMETERFVPROC vtkgl::GetColorTableParameterfv = NULL;
vtkgl::PFNGLGETCOLORTABLEPARAMETERIVPROC vtkgl::GetColorTableParameteriv = NULL;
vtkgl::PFNGLCOLORSUBTABLEPROC vtkgl::ColorSubTable = NULL;
vtkgl::PFNGLCOPYCOLORSUBTABLEPROC vtkgl::CopyColorSubTable = NULL;
vtkgl::PFNGLCONVOLUTIONFILTER1DPROC vtkgl::ConvolutionFilter1D = NULL;
vtkgl::PFNGLCONVOLUTIONFILTER2DPROC vtkgl::ConvolutionFilter2D = NULL;
vtkgl::PFNGLCONVOLUTIONPARAMETERFPROC vtkgl::ConvolutionParameterf = NULL;
vtkgl::PFNGLCONVOLUTIONPARAMETERFVPROC vtkgl::ConvolutionParameterfv = NULL;
vtkgl::PFNGLCONVOLUTIONPARAMETERIPROC vtkgl::ConvolutionParameteri = NULL;
vtkgl::PFNGLCONVOLUTIONPARAMETERIVPROC vtkgl::ConvolutionParameteriv = NULL;
vtkgl::PFNGLCOPYCONVOLUTIONFILTER1DPROC vtkgl::CopyConvolutionFilter1D = NULL;
vtkgl::PFNGLCOPYCONVOLUTIONFILTER2DPROC vtkgl::CopyConvolutionFilter2D = NULL;
vtkgl::PFNGLGETCONVOLUTIONFILTERPROC vtkgl::GetConvolutionFilter = NULL;
vtkgl::PFNGLGETCONVOLUTIONPARAMETERFVPROC vtkgl::GetConvolutionParameterfv = NULL;
vtkgl::PFNGLGETCONVOLUTIONPARAMETERIVPROC vtkgl::GetConvolutionParameteriv = NULL;
vtkgl::PFNGLGETSEPARABLEFILTERPROC vtkgl::GetSeparableFilter = NULL;
vtkgl::PFNGLSEPARABLEFILTER2DPROC vtkgl::SeparableFilter2D = NULL;
vtkgl::PFNGLGETHISTOGRAMPROC vtkgl::GetHistogram = NULL;
vtkgl::PFNGLGETHISTOGRAMPARAMETERFVPROC vtkgl::GetHistogramParameterfv = NULL;
vtkgl::PFNGLGETHISTOGRAMPARAMETERIVPROC vtkgl::GetHistogramParameteriv = NULL;
vtkgl::PFNGLGETMINMAXPROC vtkgl::GetMinmax = NULL;
vtkgl::PFNGLGETMINMAXPARAMETERFVPROC vtkgl::GetMinmaxParameterfv = NULL;
vtkgl::PFNGLGETMINMAXPARAMETERIVPROC vtkgl::GetMinmaxParameteriv = NULL;
vtkgl::PFNGLHISTOGRAMPROC vtkgl::Histogram = NULL;
vtkgl::PFNGLMINMAXPROC vtkgl::Minmax = NULL;
vtkgl::PFNGLRESETHISTOGRAMPROC vtkgl::ResetHistogram = NULL;
vtkgl::PFNGLRESETMINMAXPROC vtkgl::ResetMinmax = NULL;
//Functions for GL_VERSION_1_3
vtkgl::PFNGLACTIVETEXTUREPROC vtkgl::ActiveTexture = NULL;
vtkgl::PFNGLSAMPLECOVERAGEPROC vtkgl::SampleCoverage = NULL;
vtkgl::PFNGLCOMPRESSEDTEXIMAGE3DPROC vtkgl::CompressedTexImage3D = NULL;
vtkgl::PFNGLCOMPRESSEDTEXIMAGE2DPROC vtkgl::CompressedTexImage2D = NULL;
vtkgl::PFNGLCOMPRESSEDTEXIMAGE1DPROC vtkgl::CompressedTexImage1D = NULL;
vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC vtkgl::CompressedTexSubImage3D = NULL;
vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC vtkgl::CompressedTexSubImage2D = NULL;
vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC vtkgl::CompressedTexSubImage1D = NULL;
vtkgl::PFNGLGETCOMPRESSEDTEXIMAGEPROC vtkgl::GetCompressedTexImage = NULL;
//Functions for GL_VERSION_1_3_DEPRECATED
vtkgl::PFNGLCLIENTACTIVETEXTUREPROC vtkgl::ClientActiveTexture = NULL;
vtkgl::PFNGLMULTITEXCOORD1DPROC vtkgl::MultiTexCoord1d = NULL;
vtkgl::PFNGLMULTITEXCOORD1DVPROC vtkgl::MultiTexCoord1dv = NULL;
vtkgl::PFNGLMULTITEXCOORD1FPROC vtkgl::MultiTexCoord1f = NULL;
vtkgl::PFNGLMULTITEXCOORD1FVPROC vtkgl::MultiTexCoord1fv = NULL;
vtkgl::PFNGLMULTITEXCOORD1IPROC vtkgl::MultiTexCoord1i = NULL;
vtkgl::PFNGLMULTITEXCOORD1IVPROC vtkgl::MultiTexCoord1iv = NULL;
vtkgl::PFNGLMULTITEXCOORD1SPROC vtkgl::MultiTexCoord1s = NULL;
vtkgl::PFNGLMULTITEXCOORD1SVPROC vtkgl::MultiTexCoord1sv = NULL;
vtkgl::PFNGLMULTITEXCOORD2DPROC vtkgl::MultiTexCoord2d = NULL;
vtkgl::PFNGLMULTITEXCOORD2DVPROC vtkgl::MultiTexCoord2dv = NULL;
vtkgl::PFNGLMULTITEXCOORD2FPROC vtkgl::MultiTexCoord2f = NULL;
vtkgl::PFNGLMULTITEXCOORD2FVPROC vtkgl::MultiTexCoord2fv = NULL;
vtkgl::PFNGLMULTITEXCOORD2IPROC vtkgl::MultiTexCoord2i = NULL;
vtkgl::PFNGLMULTITEXCOORD2IVPROC vtkgl::MultiTexCoord2iv = NULL;
vtkgl::PFNGLMULTITEXCOORD2SPROC vtkgl::MultiTexCoord2s = NULL;
vtkgl::PFNGLMULTITEXCOORD2SVPROC vtkgl::MultiTexCoord2sv = NULL;
vtkgl::PFNGLMULTITEXCOORD3DPROC vtkgl::MultiTexCoord3d = NULL;
vtkgl::PFNGLMULTITEXCOORD3DVPROC vtkgl::MultiTexCoord3dv = NULL;
vtkgl::PFNGLMULTITEXCOORD3FPROC vtkgl::MultiTexCoord3f = NULL;
vtkgl::PFNGLMULTITEXCOORD3FVPROC vtkgl::MultiTexCoord3fv = NULL;
vtkgl::PFNGLMULTITEXCOORD3IPROC vtkgl::MultiTexCoord3i = NULL;
vtkgl::PFNGLMULTITEXCOORD3IVPROC vtkgl::MultiTexCoord3iv = NULL;
vtkgl::PFNGLMULTITEXCOORD3SPROC vtkgl::MultiTexCoord3s = NULL;
vtkgl::PFNGLMULTITEXCOORD3SVPROC vtkgl::MultiTexCoord3sv = NULL;
vtkgl::PFNGLMULTITEXCOORD4DPROC vtkgl::MultiTexCoord4d = NULL;
vtkgl::PFNGLMULTITEXCOORD4DVPROC vtkgl::MultiTexCoord4dv = NULL;
vtkgl::PFNGLMULTITEXCOORD4FPROC vtkgl::MultiTexCoord4f = NULL;
vtkgl::PFNGLMULTITEXCOORD4FVPROC vtkgl::MultiTexCoord4fv = NULL;
vtkgl::PFNGLMULTITEXCOORD4IPROC vtkgl::MultiTexCoord4i = NULL;
vtkgl::PFNGLMULTITEXCOORD4IVPROC vtkgl::MultiTexCoord4iv = NULL;
vtkgl::PFNGLMULTITEXCOORD4SPROC vtkgl::MultiTexCoord4s = NULL;
vtkgl::PFNGLMULTITEXCOORD4SVPROC vtkgl::MultiTexCoord4sv = NULL;
vtkgl::PFNGLLOADTRANSPOSEMATRIXFPROC vtkgl::LoadTransposeMatrixf = NULL;
vtkgl::PFNGLLOADTRANSPOSEMATRIXDPROC vtkgl::LoadTransposeMatrixd = NULL;
vtkgl::PFNGLMULTTRANSPOSEMATRIXFPROC vtkgl::MultTransposeMatrixf = NULL;
vtkgl::PFNGLMULTTRANSPOSEMATRIXDPROC vtkgl::MultTransposeMatrixd = NULL;
//Functions for GL_VERSION_1_4
vtkgl::PFNGLBLENDFUNCSEPARATEPROC vtkgl::BlendFuncSeparate = NULL;
vtkgl::PFNGLMULTIDRAWARRAYSPROC vtkgl::MultiDrawArrays = NULL;
vtkgl::PFNGLMULTIDRAWELEMENTSPROC vtkgl::MultiDrawElements = NULL;
vtkgl::PFNGLPOINTPARAMETERFPROC vtkgl::PointParameterf = NULL;
vtkgl::PFNGLPOINTPARAMETERFVPROC vtkgl::PointParameterfv = NULL;
vtkgl::PFNGLPOINTPARAMETERIPROC vtkgl::PointParameteri = NULL;
vtkgl::PFNGLPOINTPARAMETERIVPROC vtkgl::PointParameteriv = NULL;
//Functions for GL_VERSION_1_4_DEPRECATED
vtkgl::PFNGLFOGCOORDFPROC vtkgl::FogCoordf = NULL;
vtkgl::PFNGLFOGCOORDFVPROC vtkgl::FogCoordfv = NULL;
vtkgl::PFNGLFOGCOORDDPROC vtkgl::FogCoordd = NULL;
vtkgl::PFNGLFOGCOORDDVPROC vtkgl::FogCoorddv = NULL;
vtkgl::PFNGLFOGCOORDPOINTERPROC vtkgl::FogCoordPointer = NULL;
vtkgl::PFNGLSECONDARYCOLOR3BPROC vtkgl::SecondaryColor3b = NULL;
vtkgl::PFNGLSECONDARYCOLOR3BVPROC vtkgl::SecondaryColor3bv = NULL;
vtkgl::PFNGLSECONDARYCOLOR3DPROC vtkgl::SecondaryColor3d = NULL;
vtkgl::PFNGLSECONDARYCOLOR3DVPROC vtkgl::SecondaryColor3dv = NULL;
vtkgl::PFNGLSECONDARYCOLOR3FPROC vtkgl::SecondaryColor3f = NULL;
vtkgl::PFNGLSECONDARYCOLOR3FVPROC vtkgl::SecondaryColor3fv = NULL;
vtkgl::PFNGLSECONDARYCOLOR3IPROC vtkgl::SecondaryColor3i = NULL;
vtkgl::PFNGLSECONDARYCOLOR3IVPROC vtkgl::SecondaryColor3iv = NULL;
vtkgl::PFNGLSECONDARYCOLOR3SPROC vtkgl::SecondaryColor3s = NULL;
vtkgl::PFNGLSECONDARYCOLOR3SVPROC vtkgl::SecondaryColor3sv = NULL;
vtkgl::PFNGLSECONDARYCOLOR3UBPROC vtkgl::SecondaryColor3ub = NULL;
vtkgl::PFNGLSECONDARYCOLOR3UBVPROC vtkgl::SecondaryColor3ubv = NULL;
vtkgl::PFNGLSECONDARYCOLOR3UIPROC vtkgl::SecondaryColor3ui = NULL;
vtkgl::PFNGLSECONDARYCOLOR3UIVPROC vtkgl::SecondaryColor3uiv = NULL;
vtkgl::PFNGLSECONDARYCOLOR3USPROC vtkgl::SecondaryColor3us = NULL;
vtkgl::PFNGLSECONDARYCOLOR3USVPROC vtkgl::SecondaryColor3usv = NULL;
vtkgl::PFNGLSECONDARYCOLORPOINTERPROC vtkgl::SecondaryColorPointer = NULL;
vtkgl::PFNGLWINDOWPOS2DPROC vtkgl::WindowPos2d = NULL;
vtkgl::PFNGLWINDOWPOS2DVPROC vtkgl::WindowPos2dv = NULL;
vtkgl::PFNGLWINDOWPOS2FPROC vtkgl::WindowPos2f = NULL;
vtkgl::PFNGLWINDOWPOS2FVPROC vtkgl::WindowPos2fv = NULL;
vtkgl::PFNGLWINDOWPOS2IPROC vtkgl::WindowPos2i = NULL;
vtkgl::PFNGLWINDOWPOS2IVPROC vtkgl::WindowPos2iv = NULL;
vtkgl::PFNGLWINDOWPOS2SPROC vtkgl::WindowPos2s = NULL;
vtkgl::PFNGLWINDOWPOS2SVPROC vtkgl::WindowPos2sv = NULL;
vtkgl::PFNGLWINDOWPOS3DPROC vtkgl::WindowPos3d = NULL;
vtkgl::PFNGLWINDOWPOS3DVPROC vtkgl::WindowPos3dv = NULL;
vtkgl::PFNGLWINDOWPOS3FPROC vtkgl::WindowPos3f = NULL;
vtkgl::PFNGLWINDOWPOS3FVPROC vtkgl::WindowPos3fv = NULL;
vtkgl::PFNGLWINDOWPOS3IPROC vtkgl::WindowPos3i = NULL;
vtkgl::PFNGLWINDOWPOS3IVPROC vtkgl::WindowPos3iv = NULL;
vtkgl::PFNGLWINDOWPOS3SPROC vtkgl::WindowPos3s = NULL;
vtkgl::PFNGLWINDOWPOS3SVPROC vtkgl::WindowPos3sv = NULL;
//Functions for GL_VERSION_1_5
vtkgl::PFNGLGENQUERIESPROC vtkgl::GenQueries = NULL;
vtkgl::PFNGLDELETEQUERIESPROC vtkgl::DeleteQueries = NULL;
vtkgl::PFNGLISQUERYPROC vtkgl::IsQuery = NULL;
vtkgl::PFNGLBEGINQUERYPROC vtkgl::BeginQuery = NULL;
vtkgl::PFNGLENDQUERYPROC vtkgl::EndQuery = NULL;
vtkgl::PFNGLGETQUERYIVPROC vtkgl::GetQueryiv = NULL;
vtkgl::PFNGLGETQUERYOBJECTIVPROC vtkgl::GetQueryObjectiv = NULL;
vtkgl::PFNGLGETQUERYOBJECTUIVPROC vtkgl::GetQueryObjectuiv = NULL;
vtkgl::PFNGLBINDBUFFERPROC vtkgl::BindBuffer = NULL;
vtkgl::PFNGLDELETEBUFFERSPROC vtkgl::DeleteBuffers = NULL;
vtkgl::PFNGLGENBUFFERSPROC vtkgl::GenBuffers = NULL;
vtkgl::PFNGLISBUFFERPROC vtkgl::IsBuffer = NULL;
vtkgl::PFNGLBUFFERDATAPROC vtkgl::BufferData = NULL;
vtkgl::PFNGLBUFFERSUBDATAPROC vtkgl::BufferSubData = NULL;
vtkgl::PFNGLGETBUFFERSUBDATAPROC vtkgl::GetBufferSubData = NULL;
vtkgl::PFNGLMAPBUFFERPROC vtkgl::MapBuffer = NULL;
vtkgl::PFNGLUNMAPBUFFERPROC vtkgl::UnmapBuffer = NULL;
vtkgl::PFNGLGETBUFFERPARAMETERIVPROC vtkgl::GetBufferParameteriv = NULL;
vtkgl::PFNGLGETBUFFERPOINTERVPROC vtkgl::GetBufferPointerv = NULL;
//Functions for GL_VERSION_2_0
vtkgl::PFNGLBLENDEQUATIONSEPARATEPROC vtkgl::BlendEquationSeparate = NULL;
vtkgl::PFNGLDRAWBUFFERSPROC vtkgl::DrawBuffers = NULL;
vtkgl::PFNGLSTENCILOPSEPARATEPROC vtkgl::StencilOpSeparate = NULL;
vtkgl::PFNGLSTENCILFUNCSEPARATEPROC vtkgl::StencilFuncSeparate = NULL;
vtkgl::PFNGLSTENCILMASKSEPARATEPROC vtkgl::StencilMaskSeparate = NULL;
vtkgl::PFNGLATTACHSHADERPROC vtkgl::AttachShader = NULL;
vtkgl::PFNGLBINDATTRIBLOCATIONPROC vtkgl::BindAttribLocation = NULL;
vtkgl::PFNGLCOMPILESHADERPROC vtkgl::CompileShader = NULL;
vtkgl::PFNGLCREATEPROGRAMPROC vtkgl::CreateProgram = NULL;
vtkgl::PFNGLCREATESHADERPROC vtkgl::CreateShader = NULL;
vtkgl::PFNGLDELETEPROGRAMPROC vtkgl::DeleteProgram = NULL;
vtkgl::PFNGLDELETESHADERPROC vtkgl::DeleteShader = NULL;
vtkgl::PFNGLDETACHSHADERPROC vtkgl::DetachShader = NULL;
vtkgl::PFNGLDISABLEVERTEXATTRIBARRAYPROC vtkgl::DisableVertexAttribArray = NULL;
vtkgl::PFNGLENABLEVERTEXATTRIBARRAYPROC vtkgl::EnableVertexAttribArray = NULL;
vtkgl::PFNGLGETACTIVEATTRIBPROC vtkgl::GetActiveAttrib = NULL;
vtkgl::PFNGLGETACTIVEUNIFORMPROC vtkgl::GetActiveUniform = NULL;
vtkgl::PFNGLGETATTACHEDSHADERSPROC vtkgl::GetAttachedShaders = NULL;
vtkgl::PFNGLGETATTRIBLOCATIONPROC vtkgl::GetAttribLocation = NULL;
vtkgl::PFNGLGETPROGRAMIVPROC vtkgl::GetProgramiv = NULL;
vtkgl::PFNGLGETPROGRAMINFOLOGPROC vtkgl::GetProgramInfoLog = NULL;
vtkgl::PFNGLGETSHADERIVPROC vtkgl::GetShaderiv = NULL;
vtkgl::PFNGLGETSHADERINFOLOGPROC vtkgl::GetShaderInfoLog = NULL;
vtkgl::PFNGLGETSHADERSOURCEPROC vtkgl::GetShaderSource = NULL;
vtkgl::PFNGLGETUNIFORMLOCATIONPROC vtkgl::GetUniformLocation = NULL;
vtkgl::PFNGLGETUNIFORMFVPROC vtkgl::GetUniformfv = NULL;
vtkgl::PFNGLGETUNIFORMIVPROC vtkgl::GetUniformiv = NULL;
vtkgl::PFNGLGETVERTEXATTRIBDVPROC vtkgl::GetVertexAttribdv = NULL;
vtkgl::PFNGLGETVERTEXATTRIBFVPROC vtkgl::GetVertexAttribfv = NULL;
vtkgl::PFNGLGETVERTEXATTRIBIVPROC vtkgl::GetVertexAttribiv = NULL;
vtkgl::PFNGLGETVERTEXATTRIBPOINTERVPROC vtkgl::GetVertexAttribPointerv = NULL;
vtkgl::PFNGLISPROGRAMPROC vtkgl::IsProgram = NULL;
vtkgl::PFNGLISSHADERPROC vtkgl::IsShader = NULL;
vtkgl::PFNGLLINKPROGRAMPROC vtkgl::LinkProgram = NULL;
vtkgl::PFNGLSHADERSOURCEPROC vtkgl::ShaderSource = NULL;
vtkgl::PFNGLUSEPROGRAMPROC vtkgl::UseProgram = NULL;
vtkgl::PFNGLUNIFORM1FPROC vtkgl::Uniform1f = NULL;
vtkgl::PFNGLUNIFORM2FPROC vtkgl::Uniform2f = NULL;
vtkgl::PFNGLUNIFORM3FPROC vtkgl::Uniform3f = NULL;
vtkgl::PFNGLUNIFORM4FPROC vtkgl::Uniform4f = NULL;
vtkgl::PFNGLUNIFORM1IPROC vtkgl::Uniform1i = NULL;
vtkgl::PFNGLUNIFORM2IPROC vtkgl::Uniform2i = NULL;
vtkgl::PFNGLUNIFORM3IPROC vtkgl::Uniform3i = NULL;
vtkgl::PFNGLUNIFORM4IPROC vtkgl::Uniform4i = NULL;
vtkgl::PFNGLUNIFORM1FVPROC vtkgl::Uniform1fv = NULL;
vtkgl::PFNGLUNIFORM2FVPROC vtkgl::Uniform2fv = NULL;
vtkgl::PFNGLUNIFORM3FVPROC vtkgl::Uniform3fv = NULL;
vtkgl::PFNGLUNIFORM4FVPROC vtkgl::Uniform4fv = NULL;
vtkgl::PFNGLUNIFORM1IVPROC vtkgl::Uniform1iv = NULL;
vtkgl::PFNGLUNIFORM2IVPROC vtkgl::Uniform2iv = NULL;
vtkgl::PFNGLUNIFORM3IVPROC vtkgl::Uniform3iv = NULL;
vtkgl::PFNGLUNIFORM4IVPROC vtkgl::Uniform4iv = NULL;
vtkgl::PFNGLUNIFORMMATRIX2FVPROC vtkgl::UniformMatrix2fv = NULL;
vtkgl::PFNGLUNIFORMMATRIX3FVPROC vtkgl::UniformMatrix3fv = NULL;
vtkgl::PFNGLUNIFORMMATRIX4FVPROC vtkgl::UniformMatrix4fv = NULL;
vtkgl::PFNGLVALIDATEPROGRAMPROC vtkgl::ValidateProgram = NULL;
vtkgl::PFNGLVERTEXATTRIB1DPROC vtkgl::VertexAttrib1d = NULL;
vtkgl::PFNGLVERTEXATTRIB1DVPROC vtkgl::VertexAttrib1dv = NULL;
vtkgl::PFNGLVERTEXATTRIB1FPROC vtkgl::VertexAttrib1f = NULL;
vtkgl::PFNGLVERTEXATTRIB1FVPROC vtkgl::VertexAttrib1fv = NULL;
vtkgl::PFNGLVERTEXATTRIB1SPROC vtkgl::VertexAttrib1s = NULL;
vtkgl::PFNGLVERTEXATTRIB1SVPROC vtkgl::VertexAttrib1sv = NULL;
vtkgl::PFNGLVERTEXATTRIB2DPROC vtkgl::VertexAttrib2d = NULL;
vtkgl::PFNGLVERTEXATTRIB2DVPROC vtkgl::VertexAttrib2dv = NULL;
vtkgl::PFNGLVERTEXATTRIB2FPROC vtkgl::VertexAttrib2f = NULL;
vtkgl::PFNGLVERTEXATTRIB2FVPROC vtkgl::VertexAttrib2fv = NULL;
vtkgl::PFNGLVERTEXATTRIB2SPROC vtkgl::VertexAttrib2s = NULL;
vtkgl::PFNGLVERTEXATTRIB2SVPROC vtkgl::VertexAttrib2sv = NULL;
vtkgl::PFNGLVERTEXATTRIB3DPROC vtkgl::VertexAttrib3d = NULL;
vtkgl::PFNGLVERTEXATTRIB3DVPROC vtkgl::VertexAttrib3dv = NULL;
vtkgl::PFNGLVERTEXATTRIB3FPROC vtkgl::VertexAttrib3f = NULL;
vtkgl::PFNGLVERTEXATTRIB3FVPROC vtkgl::VertexAttrib3fv = NULL;
vtkgl::PFNGLVERTEXATTRIB3SPROC vtkgl::VertexAttrib3s = NULL;
vtkgl::PFNGLVERTEXATTRIB3SVPROC vtkgl::VertexAttrib3sv = NULL;
vtkgl::PFNGLVERTEXATTRIB4NBVPROC vtkgl::VertexAttrib4Nbv = NULL;
vtkgl::PFNGLVERTEXATTRIB4NIVPROC vtkgl::VertexAttrib4Niv = NULL;
vtkgl::PFNGLVERTEXATTRIB4NSVPROC vtkgl::VertexAttrib4Nsv = NULL;
vtkgl::PFNGLVERTEXATTRIB4NUBPROC vtkgl::VertexAttrib4Nub = NULL;
vtkgl::PFNGLVERTEXATTRIB4NUBVPROC vtkgl::VertexAttrib4Nubv = NULL;
vtkgl::PFNGLVERTEXATTRIB4NUIVPROC vtkgl::VertexAttrib4Nuiv = NULL;
vtkgl::PFNGLVERTEXATTRIB4NUSVPROC vtkgl::VertexAttrib4Nusv = NULL;
vtkgl::PFNGLVERTEXATTRIB4BVPROC vtkgl::VertexAttrib4bv = NULL;
vtkgl::PFNGLVERTEXATTRIB4DPROC vtkgl::VertexAttrib4d = NULL;
vtkgl::PFNGLVERTEXATTRIB4DVPROC vtkgl::VertexAttrib4dv = NULL;
vtkgl::PFNGLVERTEXATTRIB4FPROC vtkgl::VertexAttrib4f = NULL;
vtkgl::PFNGLVERTEXATTRIB4FVPROC vtkgl::VertexAttrib4fv = NULL;
vtkgl::PFNGLVERTEXATTRIB4IVPROC vtkgl::VertexAttrib4iv = NULL;
vtkgl::PFNGLVERTEXATTRIB4SPROC vtkgl::VertexAttrib4s = NULL;
vtkgl::PFNGLVERTEXATTRIB4SVPROC vtkgl::VertexAttrib4sv = NULL;
vtkgl::PFNGLVERTEXATTRIB4UBVPROC vtkgl::VertexAttrib4ubv = NULL;
vtkgl::PFNGLVERTEXATTRIB4UIVPROC vtkgl::VertexAttrib4uiv = NULL;
vtkgl::PFNGLVERTEXATTRIB4USVPROC vtkgl::VertexAttrib4usv = NULL;
vtkgl::PFNGLVERTEXATTRIBPOINTERPROC vtkgl::VertexAttribPointer = NULL;
//Functions for GL_VERSION_2_1
vtkgl::PFNGLUNIFORMMATRIX2X3FVPROC vtkgl::UniformMatrix2x3fv = NULL;
vtkgl::PFNGLUNIFORMMATRIX3X2FVPROC vtkgl::UniformMatrix3x2fv = NULL;
vtkgl::PFNGLUNIFORMMATRIX2X4FVPROC vtkgl::UniformMatrix2x4fv = NULL;
vtkgl::PFNGLUNIFORMMATRIX4X2FVPROC vtkgl::UniformMatrix4x2fv = NULL;
vtkgl::PFNGLUNIFORMMATRIX3X4FVPROC vtkgl::UniformMatrix3x4fv = NULL;
vtkgl::PFNGLUNIFORMMATRIX4X3FVPROC vtkgl::UniformMatrix4x3fv = NULL;
//Functions for GL_VERSION_3_0
vtkgl::PFNGLCOLORMASKIPROC vtkgl::ColorMaski = NULL;
vtkgl::PFNGLGETBOOLEANI_VPROC vtkgl::GetBooleani_v = NULL;
vtkgl::PFNGLGETINTEGERI_VPROC vtkgl::GetIntegeri_v = NULL;
vtkgl::PFNGLENABLEIPROC vtkgl::Enablei = NULL;
vtkgl::PFNGLDISABLEIPROC vtkgl::Disablei = NULL;
vtkgl::PFNGLISENABLEDIPROC vtkgl::IsEnabledi = NULL;
vtkgl::PFNGLBEGINTRANSFORMFEEDBACKPROC vtkgl::BeginTransformFeedback = NULL;
vtkgl::PFNGLENDTRANSFORMFEEDBACKPROC vtkgl::EndTransformFeedback = NULL;
vtkgl::PFNGLBINDBUFFERRANGEPROC vtkgl::BindBufferRange = NULL;
vtkgl::PFNGLBINDBUFFERBASEPROC vtkgl::BindBufferBase = NULL;
vtkgl::PFNGLTRANSFORMFEEDBACKVARYINGSPROC vtkgl::TransformFeedbackVaryings = NULL;
vtkgl::PFNGLGETTRANSFORMFEEDBACKVARYINGPROC vtkgl::GetTransformFeedbackVarying = NULL;
vtkgl::PFNGLCLAMPCOLORPROC vtkgl::ClampColor = NULL;
vtkgl::PFNGLBEGINCONDITIONALRENDERPROC vtkgl::BeginConditionalRender = NULL;
vtkgl::PFNGLENDCONDITIONALRENDERPROC vtkgl::EndConditionalRender = NULL;
vtkgl::PFNGLVERTEXATTRIBIPOINTERPROC vtkgl::VertexAttribIPointer = NULL;
vtkgl::PFNGLGETVERTEXATTRIBIIVPROC vtkgl::GetVertexAttribIiv = NULL;
vtkgl::PFNGLGETVERTEXATTRIBIUIVPROC vtkgl::GetVertexAttribIuiv = NULL;
vtkgl::PFNGLVERTEXATTRIBI1IPROC vtkgl::VertexAttribI1i = NULL;
vtkgl::PFNGLVERTEXATTRIBI2IPROC vtkgl::VertexAttribI2i = NULL;
vtkgl::PFNGLVERTEXATTRIBI3IPROC vtkgl::VertexAttribI3i = NULL;
vtkgl::PFNGLVERTEXATTRIBI4IPROC vtkgl::VertexAttribI4i = NULL;
vtkgl::PFNGLVERTEXATTRIBI1UIPROC vtkgl::VertexAttribI1ui = NULL;
vtkgl::PFNGLVERTEXATTRIBI2UIPROC vtkgl::VertexAttribI2ui = NULL;
vtkgl::PFNGLVERTEXATTRIBI3UIPROC vtkgl::VertexAttribI3ui = NULL;
vtkgl::PFNGLVERTEXATTRIBI4UIPROC vtkgl::VertexAttribI4ui = NULL;
vtkgl::PFNGLVERTEXATTRIBI1IVPROC vtkgl::VertexAttribI1iv = NULL;
vtkgl::PFNGLVERTEXATTRIBI2IVPROC vtkgl::VertexAttribI2iv = NULL;
vtkgl::PFNGLVERTEXATTRIBI3IVPROC vtkgl::VertexAttribI3iv = NULL;
vtkgl::PFNGLVERTEXATTRIBI4IVPROC vtkgl::VertexAttribI4iv = NULL;
vtkgl::PFNGLVERTEXATTRIBI1UIVPROC vtkgl::VertexAttribI1uiv = NULL;
vtkgl::PFNGLVERTEXATTRIBI2UIVPROC vtkgl::VertexAttribI2uiv = NULL;
vtkgl::PFNGLVERTEXATTRIBI3UIVPROC vtkgl::VertexAttribI3uiv = NULL;
vtkgl::PFNGLVERTEXATTRIBI4UIVPROC vtkgl::VertexAttribI4uiv = NULL;
vtkgl::PFNGLVERTEXATTRIBI4BVPROC vtkgl::VertexAttribI4bv = NULL;
vtkgl::PFNGLVERTEXATTRIBI4SVPROC vtkgl::VertexAttribI4sv = NULL;
vtkgl::PFNGLVERTEXATTRIBI4UBVPROC vtkgl::VertexAttribI4ubv = NULL;
vtkgl::PFNGLVERTEXATTRIBI4USVPROC vtkgl::VertexAttribI4usv = NULL;
vtkgl::PFNGLGETUNIFORMUIVPROC vtkgl::GetUniformuiv = NULL;
vtkgl::PFNGLBINDFRAGDATALOCATIONPROC vtkgl::BindFragDataLocation = NULL;
vtkgl::PFNGLGETFRAGDATALOCATIONPROC vtkgl::GetFragDataLocation = NULL;
vtkgl::PFNGLUNIFORM1UIPROC vtkgl::Uniform1ui = NULL;
vtkgl::PFNGLUNIFORM2UIPROC vtkgl::Uniform2ui = NULL;
vtkgl::PFNGLUNIFORM3UIPROC vtkgl::Uniform3ui = NULL;
vtkgl::PFNGLUNIFORM4UIPROC vtkgl::Uniform4ui = NULL;
vtkgl::PFNGLUNIFORM1UIVPROC vtkgl::Uniform1uiv = NULL;
vtkgl::PFNGLUNIFORM2UIVPROC vtkgl::Uniform2uiv = NULL;
vtkgl::PFNGLUNIFORM3UIVPROC vtkgl::Uniform3uiv = NULL;
vtkgl::PFNGLUNIFORM4UIVPROC vtkgl::Uniform4uiv = NULL;
vtkgl::PFNGLTEXPARAMETERIIVPROC vtkgl::TexParameterIiv = NULL;
vtkgl::PFNGLTEXPARAMETERIUIVPROC vtkgl::TexParameterIuiv = NULL;
vtkgl::PFNGLGETTEXPARAMETERIIVPROC vtkgl::GetTexParameterIiv = NULL;
vtkgl::PFNGLGETTEXPARAMETERIUIVPROC vtkgl::GetTexParameterIuiv = NULL;
vtkgl::PFNGLCLEARBUFFERIVPROC vtkgl::ClearBufferiv = NULL;
vtkgl::PFNGLCLEARBUFFERUIVPROC vtkgl::ClearBufferuiv = NULL;
vtkgl::PFNGLCLEARBUFFERFVPROC vtkgl::ClearBufferfv = NULL;
vtkgl::PFNGLCLEARBUFFERFIPROC vtkgl::ClearBufferfi = NULL;
vtkgl::PFNGLGETSTRINGIPROC vtkgl::GetStringi = NULL;
//Functions for GL_VERSION_3_1
vtkgl::PFNGLDRAWARRAYSINSTANCEDPROC vtkgl::DrawArraysInstanced = NULL;
vtkgl::PFNGLDRAWELEMENTSINSTANCEDPROC vtkgl::DrawElementsInstanced = NULL;
vtkgl::PFNGLTEXBUFFERPROC vtkgl::TexBuffer = NULL;
vtkgl::PFNGLPRIMITIVERESTARTINDEXPROC vtkgl::PrimitiveRestartIndex = NULL;
//Functions for GL_VERSION_3_2
vtkgl::PFNGLGETINTEGER64I_VPROC vtkgl::GetInteger64i_v = NULL;
vtkgl::PFNGLGETBUFFERPARAMETERI64VPROC vtkgl::GetBufferParameteri64v = NULL;
vtkgl::PFNGLFRAMEBUFFERTEXTUREPROC vtkgl::FramebufferTexture = NULL;
//Functions for GL_VERSION_3_3
vtkgl::PFNGLVERTEXATTRIBDIVISORPROC vtkgl::VertexAttribDivisor = NULL;
//Functions for GL_VERSION_4_0
vtkgl::PFNGLMINSAMPLESHADINGPROC vtkgl::MinSampleShading = NULL;
vtkgl::PFNGLBLENDEQUATIONIPROC vtkgl::BlendEquationi = NULL;
vtkgl::PFNGLBLENDEQUATIONSEPARATEIPROC vtkgl::BlendEquationSeparatei = NULL;
vtkgl::PFNGLBLENDFUNCIPROC vtkgl::BlendFunci = NULL;
vtkgl::PFNGLBLENDFUNCSEPARATEIPROC vtkgl::BlendFuncSeparatei = NULL;

#ifdef VTK_USE_X
//Functions for GLX_ARB_create_context
vtkglX::PFNGLXCREATECONTEXTATTRIBSARBPROC vtkglX::CreateContextAttribsARB = NULL;
//Functions for GLX_ARB_get_proc_address
vtkglX::PFNGLXGETPROCADDRESSARBPROC vtkglX::GetProcAddressARB = NULL;
//Functions for GLX_EXT_import_context
vtkglX::PFNGLXGETCURRENTDISPLAYEXTPROC vtkglX::GetCurrentDisplayEXT = NULL;
vtkglX::PFNGLXQUERYCONTEXTINFOEXTPROC vtkglX::QueryContextInfoEXT = NULL;
vtkglX::PFNGLXGETCONTEXTIDEXTPROC vtkglX::GetContextIDEXT = NULL;
vtkglX::PFNGLXIMPORTCONTEXTEXTPROC vtkglX::ImportContextEXT = NULL;
vtkglX::PFNGLXFREECONTEXTEXTPROC vtkglX::FreeContextEXT = NULL;
//Functions for GLX_EXT_swap_control
vtkglX::PFNGLXSWAPINTERVALEXTPROC vtkglX::SwapIntervalEXT = NULL;
//Functions for GLX_EXT_texture_from_pixmap
vtkglX::PFNGLXBINDTEXIMAGEEXTPROC vtkglX::BindTexImageEXT = NULL;
vtkglX::PFNGLXRELEASETEXIMAGEEXTPROC vtkglX::ReleaseTexImageEXT = NULL;
//Functions for GLX_MESA_agp_offset
vtkglX::PFNGLXGETAGPOFFSETMESAPROC vtkglX::GetAGPOffsetMESA = NULL;
//Functions for GLX_MESA_copy_sub_buffer
vtkglX::PFNGLXCOPYSUBBUFFERMESAPROC vtkglX::CopySubBufferMESA = NULL;
//Functions for GLX_MESA_pixmap_colormap
vtkglX::PFNGLXCREATEGLXPIXMAPMESAPROC vtkglX::CreateGLXPixmapMESA = NULL;
//Functions for GLX_MESA_release_buffers
vtkglX::PFNGLXRELEASEBUFFERSMESAPROC vtkglX::ReleaseBuffersMESA = NULL;
//Functions for GLX_MESA_set_3dfx_mode
vtkglX::PFNGLXSET3DFXMODEMESAPROC vtkglX::Set3DfxModeMESA = NULL;
//Functions for GLX_NV_copy_image
vtkglX::PFNGLXCOPYIMAGESUBDATANVPROC vtkglX::CopyImageSubDataNV = NULL;
//Functions for GLX_NV_present_video
vtkglX::PFNGLXENUMERATEVIDEODEVICESNVPROC vtkglX::EnumerateVideoDevicesNV = NULL;
vtkglX::PFNGLXBINDVIDEODEVICENVPROC vtkglX::BindVideoDeviceNV = NULL;
//Functions for GLX_NV_swap_group
vtkglX::PFNGLXJOINSWAPGROUPNVPROC vtkglX::JoinSwapGroupNV = NULL;
vtkglX::PFNGLXBINDSWAPBARRIERNVPROC vtkglX::BindSwapBarrierNV = NULL;
vtkglX::PFNGLXQUERYSWAPGROUPNVPROC vtkglX::QuerySwapGroupNV = NULL;
vtkglX::PFNGLXQUERYMAXSWAPGROUPSNVPROC vtkglX::QueryMaxSwapGroupsNV = NULL;
vtkglX::PFNGLXQUERYFRAMECOUNTNVPROC vtkglX::QueryFrameCountNV = NULL;
vtkglX::PFNGLXRESETFRAMECOUNTNVPROC vtkglX::ResetFrameCountNV = NULL;
//Functions for GLX_NV_video_capture
vtkglX::PFNGLXBINDVIDEOCAPTUREDEVICENVPROC vtkglX::BindVideoCaptureDeviceNV = NULL;
vtkglX::PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC vtkglX::EnumerateVideoCaptureDevicesNV = NULL;
vtkglX::PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC vtkglX::LockVideoCaptureDeviceNV = NULL;
vtkglX::PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC vtkglX::QueryVideoCaptureDeviceNV = NULL;
vtkglX::PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC vtkglX::ReleaseVideoCaptureDeviceNV = NULL;
//Functions for GLX_NV_video_output
vtkglX::PFNGLXGETVIDEODEVICENVPROC vtkglX::GetVideoDeviceNV = NULL;
vtkglX::PFNGLXRELEASEVIDEODEVICENVPROC vtkglX::ReleaseVideoDeviceNV = NULL;
vtkglX::PFNGLXBINDVIDEOIMAGENVPROC vtkglX::BindVideoImageNV = NULL;
vtkglX::PFNGLXRELEASEVIDEOIMAGENVPROC vtkglX::ReleaseVideoImageNV = NULL;
vtkglX::PFNGLXSENDPBUFFERTOVIDEONVPROC vtkglX::SendPbufferToVideoNV = NULL;
vtkglX::PFNGLXGETVIDEOINFONVPROC vtkglX::GetVideoInfoNV = NULL;
//Functions for GLX_OML_sync_control
vtkglX::PFNGLXGETSYNCVALUESOMLPROC vtkglX::GetSyncValuesOML = NULL;
vtkglX::PFNGLXGETMSCRATEOMLPROC vtkglX::GetMscRateOML = NULL;
vtkglX::PFNGLXSWAPBUFFERSMSCOMLPROC vtkglX::SwapBuffersMscOML = NULL;
vtkglX::PFNGLXWAITFORMSCOMLPROC vtkglX::WaitForMscOML = NULL;
vtkglX::PFNGLXWAITFORSBCOMLPROC vtkglX::WaitForSbcOML = NULL;
//Functions for GLX_SGIX_fbconfig
vtkglX::PFNGLXGETFBCONFIGATTRIBSGIXPROC vtkglX::GetFBConfigAttribSGIX = NULL;
vtkglX::PFNGLXCHOOSEFBCONFIGSGIXPROC vtkglX::ChooseFBConfigSGIX = NULL;
vtkglX::PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC vtkglX::CreateGLXPixmapWithConfigSGIX = NULL;
vtkglX::PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC vtkglX::CreateContextWithConfigSGIX = NULL;
vtkglX::PFNGLXGETVISUALFROMFBCONFIGSGIXPROC vtkglX::GetVisualFromFBConfigSGIX = NULL;
vtkglX::PFNGLXGETFBCONFIGFROMVISUALSGIXPROC vtkglX::GetFBConfigFromVisualSGIX = NULL;
//Functions for GLX_SGIX_pbuffer
vtkglX::PFNGLXCREATEGLXPBUFFERSGIXPROC vtkglX::CreateGLXPbufferSGIX = NULL;
vtkglX::PFNGLXDESTROYGLXPBUFFERSGIXPROC vtkglX::DestroyGLXPbufferSGIX = NULL;
vtkglX::PFNGLXQUERYGLXPBUFFERSGIXPROC vtkglX::QueryGLXPbufferSGIX = NULL;
vtkglX::PFNGLXSELECTEVENTSGIXPROC vtkglX::SelectEventSGIX = NULL;
vtkglX::PFNGLXGETSELECTEDEVENTSGIXPROC vtkglX::GetSelectedEventSGIX = NULL;
//Functions for GLX_SGIX_swap_barrier
vtkglX::PFNGLXBINDSWAPBARRIERSGIXPROC vtkglX::BindSwapBarrierSGIX = NULL;
vtkglX::PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC vtkglX::QueryMaxSwapBarriersSGIX = NULL;
//Functions for GLX_SGIX_swap_group
vtkglX::PFNGLXJOINSWAPGROUPSGIXPROC vtkglX::JoinSwapGroupSGIX = NULL;
//Functions for GLX_SGIX_video_resize
vtkglX::PFNGLXBINDCHANNELTOWINDOWSGIXPROC vtkglX::BindChannelToWindowSGIX = NULL;
vtkglX::PFNGLXCHANNELRECTSGIXPROC vtkglX::ChannelRectSGIX = NULL;
vtkglX::PFNGLXQUERYCHANNELRECTSGIXPROC vtkglX::QueryChannelRectSGIX = NULL;
vtkglX::PFNGLXQUERYCHANNELDELTASSGIXPROC vtkglX::QueryChannelDeltasSGIX = NULL;
vtkglX::PFNGLXCHANNELRECTSYNCSGIXPROC vtkglX::ChannelRectSyncSGIX = NULL;
//Functions for GLX_SGI_cushion
vtkglX::PFNGLXCUSHIONSGIPROC vtkglX::CushionSGI = NULL;
//Functions for GLX_SGI_make_current_read
vtkglX::PFNGLXMAKECURRENTREADSGIPROC vtkglX::MakeCurrentReadSGI = NULL;
vtkglX::PFNGLXGETCURRENTREADDRAWABLESGIPROC vtkglX::GetCurrentReadDrawableSGI = NULL;
//Functions for GLX_SGI_swap_control
vtkglX::PFNGLXSWAPINTERVALSGIPROC vtkglX::SwapIntervalSGI = NULL;
//Functions for GLX_SGI_video_sync
vtkglX::PFNGLXGETVIDEOSYNCSGIPROC vtkglX::GetVideoSyncSGI = NULL;
vtkglX::PFNGLXWAITVIDEOSYNCSGIPROC vtkglX::WaitVideoSyncSGI = NULL;
//Functions for GLX_SUN_get_transparent_index
vtkglX::PFNGLXGETTRANSPARENTINDEXSUNPROC vtkglX::GetTransparentIndexSUN = NULL;
//Functions for GLX_VERSION_1_3
vtkglX::PFNGLXGETFBCONFIGSPROC vtkglX::GetFBConfigs = NULL;
vtkglX::PFNGLXCHOOSEFBCONFIGPROC vtkglX::ChooseFBConfig = NULL;
vtkglX::PFNGLXGETFBCONFIGATTRIBPROC vtkglX::GetFBConfigAttrib = NULL;
vtkglX::PFNGLXGETVISUALFROMFBCONFIGPROC vtkglX::GetVisualFromFBConfig = NULL;
vtkglX::PFNGLXCREATEWINDOWPROC vtkglX::CreateWindow = NULL;
vtkglX::PFNGLXDESTROYWINDOWPROC vtkglX::DestroyWindow = NULL;
vtkglX::PFNGLXCREATEPIXMAPPROC vtkglX::CreatePixmap = NULL;
vtkglX::PFNGLXDESTROYPIXMAPPROC vtkglX::DestroyPixmap = NULL;
vtkglX::PFNGLXCREATEPBUFFERPROC vtkglX::CreatePbuffer = NULL;
vtkglX::PFNGLXDESTROYPBUFFERPROC vtkglX::DestroyPbuffer = NULL;
vtkglX::PFNGLXQUERYDRAWABLEPROC vtkglX::QueryDrawable = NULL;
vtkglX::PFNGLXCREATENEWCONTEXTPROC vtkglX::CreateNewContext = NULL;
vtkglX::PFNGLXMAKECONTEXTCURRENTPROC vtkglX::MakeContextCurrent = NULL;
vtkglX::PFNGLXGETCURRENTREADDRAWABLEPROC vtkglX::GetCurrentReadDrawable = NULL;
vtkglX::PFNGLXGETCURRENTDISPLAYPROC vtkglX::GetCurrentDisplay = NULL;
vtkglX::PFNGLXQUERYCONTEXTPROC vtkglX::QueryContext = NULL;
vtkglX::PFNGLXSELECTEVENTPROC vtkglX::SelectEvent = NULL;
vtkglX::PFNGLXGETSELECTEDEVENTPROC vtkglX::GetSelectedEvent = NULL;
//Functions for GLX_VERSION_1_4
vtkglX::PFNGLXGETPROCADDRESSPROC vtkglX::GetProcAddress = NULL;
#endif

#ifdef WIN32
//Functions for WGL_ARB_buffer_region
vtkwgl::PFNWGLCREATEBUFFERREGIONARBPROC vtkwgl::CreateBufferRegionARB = NULL;
vtkwgl::PFNWGLDELETEBUFFERREGIONARBPROC vtkwgl::DeleteBufferRegionARB = NULL;
vtkwgl::PFNWGLSAVEBUFFERREGIONARBPROC vtkwgl::SaveBufferRegionARB = NULL;
vtkwgl::PFNWGLRESTOREBUFFERREGIONARBPROC vtkwgl::RestoreBufferRegionARB = NULL;
//Functions for WGL_ARB_create_context
vtkwgl::PFNWGLCREATECONTEXTATTRIBSARBPROC vtkwgl::CreateContextAttribsARB = NULL;
//Functions for WGL_ARB_extensions_string
vtkwgl::PFNWGLGETEXTENSIONSSTRINGARBPROC vtkwgl::GetExtensionsStringARB = NULL;
//Functions for WGL_ARB_make_current_read
vtkwgl::PFNWGLMAKECONTEXTCURRENTARBPROC vtkwgl::MakeContextCurrentARB = NULL;
vtkwgl::PFNWGLGETCURRENTREADDCARBPROC vtkwgl::GetCurrentReadDCARB = NULL;
//Functions for WGL_ARB_pbuffer
vtkwgl::PFNWGLCREATEPBUFFERARBPROC vtkwgl::CreatePbufferARB = NULL;
vtkwgl::PFNWGLGETPBUFFERDCARBPROC vtkwgl::GetPbufferDCARB = NULL;
vtkwgl::PFNWGLRELEASEPBUFFERDCARBPROC vtkwgl::ReleasePbufferDCARB = NULL;
vtkwgl::PFNWGLDESTROYPBUFFERARBPROC vtkwgl::DestroyPbufferARB = NULL;
vtkwgl::PFNWGLQUERYPBUFFERARBPROC vtkwgl::QueryPbufferARB = NULL;
//Functions for WGL_ARB_pixel_format
vtkwgl::PFNWGLGETPIXELFORMATATTRIBIVARBPROC vtkwgl::GetPixelFormatAttribivARB = NULL;
vtkwgl::PFNWGLGETPIXELFORMATATTRIBFVARBPROC vtkwgl::GetPixelFormatAttribfvARB = NULL;
vtkwgl::PFNWGLCHOOSEPIXELFORMATARBPROC vtkwgl::ChoosePixelFormatARB = NULL;
//Functions for WGL_ARB_render_texture
vtkwgl::PFNWGLBINDTEXIMAGEARBPROC vtkwgl::BindTexImageARB = NULL;
vtkwgl::PFNWGLRELEASETEXIMAGEARBPROC vtkwgl::ReleaseTexImageARB = NULL;
vtkwgl::PFNWGLSETPBUFFERATTRIBARBPROC vtkwgl::SetPbufferAttribARB = NULL;
//Functions for WGL_EXT_display_color_table
vtkwgl::PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC vtkwgl::CreateDisplayColorTableEXT = NULL;
vtkwgl::PFNWGLLOADDISPLAYCOLORTABLEEXTPROC vtkwgl::LoadDisplayColorTableEXT = NULL;
vtkwgl::PFNWGLBINDDISPLAYCOLORTABLEEXTPROC vtkwgl::BindDisplayColorTableEXT = NULL;
vtkwgl::PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC vtkwgl::DestroyDisplayColorTableEXT = NULL;
//Functions for WGL_EXT_extensions_string
vtkwgl::PFNWGLGETEXTENSIONSSTRINGEXTPROC vtkwgl::GetExtensionsStringEXT = NULL;
//Functions for WGL_EXT_make_current_read
vtkwgl::PFNWGLMAKECONTEXTCURRENTEXTPROC vtkwgl::MakeContextCurrentEXT = NULL;
vtkwgl::PFNWGLGETCURRENTREADDCEXTPROC vtkwgl::GetCurrentReadDCEXT = NULL;
//Functions for WGL_EXT_pbuffer
vtkwgl::PFNWGLCREATEPBUFFEREXTPROC vtkwgl::CreatePbufferEXT = NULL;
vtkwgl::PFNWGLGETPBUFFERDCEXTPROC vtkwgl::GetPbufferDCEXT = NULL;
vtkwgl::PFNWGLRELEASEPBUFFERDCEXTPROC vtkwgl::ReleasePbufferDCEXT = NULL;
vtkwgl::PFNWGLDESTROYPBUFFEREXTPROC vtkwgl::DestroyPbufferEXT = NULL;
vtkwgl::PFNWGLQUERYPBUFFEREXTPROC vtkwgl::QueryPbufferEXT = NULL;
//Functions for WGL_EXT_pixel_format
vtkwgl::PFNWGLGETPIXELFORMATATTRIBIVEXTPROC vtkwgl::GetPixelFormatAttribivEXT = NULL;
vtkwgl::PFNWGLGETPIXELFORMATATTRIBFVEXTPROC vtkwgl::GetPixelFormatAttribfvEXT = NULL;
vtkwgl::PFNWGLCHOOSEPIXELFORMATEXTPROC vtkwgl::ChoosePixelFormatEXT = NULL;
//Functions for WGL_EXT_swap_control
vtkwgl::PFNWGLSWAPINTERVALEXTPROC vtkwgl::SwapIntervalEXT = NULL;
vtkwgl::PFNWGLGETSWAPINTERVALEXTPROC vtkwgl::GetSwapIntervalEXT = NULL;
//Functions for WGL_I3D_digital_video_control
vtkwgl::PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC vtkwgl::GetDigitalVideoParametersI3D = NULL;
vtkwgl::PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC vtkwgl::SetDigitalVideoParametersI3D = NULL;
//Functions for WGL_I3D_gamma
vtkwgl::PFNWGLGETGAMMATABLEPARAMETERSI3DPROC vtkwgl::GetGammaTableParametersI3D = NULL;
vtkwgl::PFNWGLSETGAMMATABLEPARAMETERSI3DPROC vtkwgl::SetGammaTableParametersI3D = NULL;
vtkwgl::PFNWGLGETGAMMATABLEI3DPROC vtkwgl::GetGammaTableI3D = NULL;
vtkwgl::PFNWGLSETGAMMATABLEI3DPROC vtkwgl::SetGammaTableI3D = NULL;
//Functions for WGL_I3D_genlock
vtkwgl::PFNWGLENABLEGENLOCKI3DPROC vtkwgl::EnableGenlockI3D = NULL;
vtkwgl::PFNWGLDISABLEGENLOCKI3DPROC vtkwgl::DisableGenlockI3D = NULL;
vtkwgl::PFNWGLISENABLEDGENLOCKI3DPROC vtkwgl::IsEnabledGenlockI3D = NULL;
vtkwgl::PFNWGLGENLOCKSOURCEI3DPROC vtkwgl::GenlockSourceI3D = NULL;
vtkwgl::PFNWGLGETGENLOCKSOURCEI3DPROC vtkwgl::GetGenlockSourceI3D = NULL;
vtkwgl::PFNWGLGENLOCKSOURCEEDGEI3DPROC vtkwgl::GenlockSourceEdgeI3D = NULL;
vtkwgl::PFNWGLGETGENLOCKSOURCEEDGEI3DPROC vtkwgl::GetGenlockSourceEdgeI3D = NULL;
vtkwgl::PFNWGLGENLOCKSAMPLERATEI3DPROC vtkwgl::GenlockSampleRateI3D = NULL;
vtkwgl::PFNWGLGETGENLOCKSAMPLERATEI3DPROC vtkwgl::GetGenlockSampleRateI3D = NULL;
vtkwgl::PFNWGLGENLOCKSOURCEDELAYI3DPROC vtkwgl::GenlockSourceDelayI3D = NULL;
vtkwgl::PFNWGLGETGENLOCKSOURCEDELAYI3DPROC vtkwgl::GetGenlockSourceDelayI3D = NULL;
vtkwgl::PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC vtkwgl::QueryGenlockMaxSourceDelayI3D = NULL;
//Functions for WGL_I3D_image_buffer
vtkwgl::PFNWGLCREATEIMAGEBUFFERI3DPROC vtkwgl::CreateImageBufferI3D = NULL;
vtkwgl::PFNWGLDESTROYIMAGEBUFFERI3DPROC vtkwgl::DestroyImageBufferI3D = NULL;
vtkwgl::PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC vtkwgl::AssociateImageBufferEventsI3D = NULL;
vtkwgl::PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC vtkwgl::ReleaseImageBufferEventsI3D = NULL;
//Functions for WGL_I3D_swap_frame_lock
vtkwgl::PFNWGLENABLEFRAMELOCKI3DPROC vtkwgl::EnableFrameLockI3D = NULL;
vtkwgl::PFNWGLDISABLEFRAMELOCKI3DPROC vtkwgl::DisableFrameLockI3D = NULL;
vtkwgl::PFNWGLISENABLEDFRAMELOCKI3DPROC vtkwgl::IsEnabledFrameLockI3D = NULL;
vtkwgl::PFNWGLQUERYFRAMELOCKMASTERI3DPROC vtkwgl::QueryFrameLockMasterI3D = NULL;
//Functions for WGL_I3D_swap_frame_usage
vtkwgl::PFNWGLGETFRAMEUSAGEI3DPROC vtkwgl::GetFrameUsageI3D = NULL;
vtkwgl::PFNWGLBEGINFRAMETRACKINGI3DPROC vtkwgl::BeginFrameTrackingI3D = NULL;
vtkwgl::PFNWGLENDFRAMETRACKINGI3DPROC vtkwgl::EndFrameTrackingI3D = NULL;
vtkwgl::PFNWGLQUERYFRAMETRACKINGI3DPROC vtkwgl::QueryFrameTrackingI3D = NULL;
//Functions for WGL_NV_vertex_array_range
vtkwgl::PFNWGLALLOCATEMEMORYNVPROC vtkwgl::AllocateMemoryNV = NULL;
vtkwgl::PFNWGLFREEMEMORYNVPROC vtkwgl::FreeMemoryNV = NULL;
//Functions for WGL_OML_sync_control
vtkwgl::PFNWGLGETSYNCVALUESOMLPROC vtkwgl::GetSyncValuesOML = NULL;
vtkwgl::PFNWGLGETMSCRATEOMLPROC vtkwgl::GetMscRateOML = NULL;
vtkwgl::PFNWGLSWAPBUFFERSMSCOMLPROC vtkwgl::SwapBuffersMscOML = NULL;
vtkwgl::PFNWGLSWAPLAYERBUFFERSMSCOMLPROC vtkwgl::SwapLayerBuffersMscOML = NULL;
vtkwgl::PFNWGLWAITFORMSCOMLPROC vtkwgl::WaitForMscOML = NULL;
vtkwgl::PFNWGLWAITFORSBCOMLPROC vtkwgl::WaitForSbcOML = NULL;
#endif

int vtkgl::LoadExtension(const char *name, vtkOpenGLExtensionManager *manager)
{
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_ARB_get_proc_address") == 0)
    {
    vtkglX::GetProcAddressARB = reinterpret_cast<vtkglX::PFNGLXGETPROCADDRESSARBPROC>(manager->GetProcAddress("glXGetProcAddressARB"));
    return 1 && (vtkglX::GetProcAddressARB != NULL);
    }
#endif
  if (strcmp(name, "GL_VERSION_1_2") == 0)
    {
    vtkgl::BlendColor = reinterpret_cast<vtkgl::PFNGLBLENDCOLORPROC>(manager->GetProcAddress("glBlendColor"));
    vtkgl::BlendEquation = reinterpret_cast<vtkgl::PFNGLBLENDEQUATIONPROC>(manager->GetProcAddress("glBlendEquation"));
    vtkgl::DrawRangeElements = reinterpret_cast<vtkgl::PFNGLDRAWRANGEELEMENTSPROC>(manager->GetProcAddress("glDrawRangeElements"));
    vtkgl::TexImage3D = reinterpret_cast<vtkgl::PFNGLTEXIMAGE3DPROC>(manager->GetProcAddress("glTexImage3D"));
    vtkgl::TexSubImage3D = reinterpret_cast<vtkgl::PFNGLTEXSUBIMAGE3DPROC>(manager->GetProcAddress("glTexSubImage3D"));
    vtkgl::CopyTexSubImage3D = reinterpret_cast<vtkgl::PFNGLCOPYTEXSUBIMAGE3DPROC>(manager->GetProcAddress("glCopyTexSubImage3D"));
    return 1 && (vtkgl::BlendColor != NULL) && (vtkgl::BlendEquation != NULL) && (vtkgl::DrawRangeElements != NULL) && (vtkgl::TexImage3D != NULL) && (vtkgl::TexSubImage3D != NULL) && (vtkgl::CopyTexSubImage3D != NULL);
    }
  if (strcmp(name, "GL_VERSION_1_2_DEPRECATED") == 0)
    {
    vtkgl::ColorTable = reinterpret_cast<vtkgl::PFNGLCOLORTABLEPROC>(manager->GetProcAddress("glColorTable"));
    vtkgl::ColorTableParameterfv = reinterpret_cast<vtkgl::PFNGLCOLORTABLEPARAMETERFVPROC>(manager->GetProcAddress("glColorTableParameterfv"));
    vtkgl::ColorTableParameteriv = reinterpret_cast<vtkgl::PFNGLCOLORTABLEPARAMETERIVPROC>(manager->GetProcAddress("glColorTableParameteriv"));
    vtkgl::CopyColorTable = reinterpret_cast<vtkgl::PFNGLCOPYCOLORTABLEPROC>(manager->GetProcAddress("glCopyColorTable"));
    vtkgl::GetColorTable = reinterpret_cast<vtkgl::PFNGLGETCOLORTABLEPROC>(manager->GetProcAddress("glGetColorTable"));
    vtkgl::GetColorTableParameterfv = reinterpret_cast<vtkgl::PFNGLGETCOLORTABLEPARAMETERFVPROC>(manager->GetProcAddress("glGetColorTableParameterfv"));
    vtkgl::GetColorTableParameteriv = reinterpret_cast<vtkgl::PFNGLGETCOLORTABLEPARAMETERIVPROC>(manager->GetProcAddress("glGetColorTableParameteriv"));
    vtkgl::ColorSubTable = reinterpret_cast<vtkgl::PFNGLCOLORSUBTABLEPROC>(manager->GetProcAddress("glColorSubTable"));
    vtkgl::CopyColorSubTable = reinterpret_cast<vtkgl::PFNGLCOPYCOLORSUBTABLEPROC>(manager->GetProcAddress("glCopyColorSubTable"));
    vtkgl::ConvolutionFilter1D = reinterpret_cast<vtkgl::PFNGLCONVOLUTIONFILTER1DPROC>(manager->GetProcAddress("glConvolutionFilter1D"));
    vtkgl::ConvolutionFilter2D = reinterpret_cast<vtkgl::PFNGLCONVOLUTIONFILTER2DPROC>(manager->GetProcAddress("glConvolutionFilter2D"));
    vtkgl::ConvolutionParameterf = reinterpret_cast<vtkgl::PFNGLCONVOLUTIONPARAMETERFPROC>(manager->GetProcAddress("glConvolutionParameterf"));
    vtkgl::ConvolutionParameterfv = reinterpret_cast<vtkgl::PFNGLCONVOLUTIONPARAMETERFVPROC>(manager->GetProcAddress("glConvolutionParameterfv"));
    vtkgl::ConvolutionParameteri = reinterpret_cast<vtkgl::PFNGLCONVOLUTIONPARAMETERIPROC>(manager->GetProcAddress("glConvolutionParameteri"));
    vtkgl::ConvolutionParameteriv = reinterpret_cast<vtkgl::PFNGLCONVOLUTIONPARAMETERIVPROC>(manager->GetProcAddress("glConvolutionParameteriv"));
    vtkgl::CopyConvolutionFilter1D = reinterpret_cast<vtkgl::PFNGLCOPYCONVOLUTIONFILTER1DPROC>(manager->GetProcAddress("glCopyConvolutionFilter1D"));
    vtkgl::CopyConvolutionFilter2D = reinterpret_cast<vtkgl::PFNGLCOPYCONVOLUTIONFILTER2DPROC>(manager->GetProcAddress("glCopyConvolutionFilter2D"));
    vtkgl::GetConvolutionFilter = reinterpret_cast<vtkgl::PFNGLGETCONVOLUTIONFILTERPROC>(manager->GetProcAddress("glGetConvolutionFilter"));
    vtkgl::GetConvolutionParameterfv = reinterpret_cast<vtkgl::PFNGLGETCONVOLUTIONPARAMETERFVPROC>(manager->GetProcAddress("glGetConvolutionParameterfv"));
    vtkgl::GetConvolutionParameteriv = reinterpret_cast<vtkgl::PFNGLGETCONVOLUTIONPARAMETERIVPROC>(manager->GetProcAddress("glGetConvolutionParameteriv"));
    vtkgl::GetSeparableFilter = reinterpret_cast<vtkgl::PFNGLGETSEPARABLEFILTERPROC>(manager->GetProcAddress("glGetSeparableFilter"));
    vtkgl::SeparableFilter2D = reinterpret_cast<vtkgl::PFNGLSEPARABLEFILTER2DPROC>(manager->GetProcAddress("glSeparableFilter2D"));
    vtkgl::GetHistogram = reinterpret_cast<vtkgl::PFNGLGETHISTOGRAMPROC>(manager->GetProcAddress("glGetHistogram"));
    vtkgl::GetHistogramParameterfv = reinterpret_cast<vtkgl::PFNGLGETHISTOGRAMPARAMETERFVPROC>(manager->GetProcAddress("glGetHistogramParameterfv"));
    vtkgl::GetHistogramParameteriv = reinterpret_cast<vtkgl::PFNGLGETHISTOGRAMPARAMETERIVPROC>(manager->GetProcAddress("glGetHistogramParameteriv"));
    vtkgl::GetMinmax = reinterpret_cast<vtkgl::PFNGLGETMINMAXPROC>(manager->GetProcAddress("glGetMinmax"));
    vtkgl::GetMinmaxParameterfv = reinterpret_cast<vtkgl::PFNGLGETMINMAXPARAMETERFVPROC>(manager->GetProcAddress("glGetMinmaxParameterfv"));
    vtkgl::GetMinmaxParameteriv = reinterpret_cast<vtkgl::PFNGLGETMINMAXPARAMETERIVPROC>(manager->GetProcAddress("glGetMinmaxParameteriv"));
    vtkgl::Histogram = reinterpret_cast<vtkgl::PFNGLHISTOGRAMPROC>(manager->GetProcAddress("glHistogram"));
    vtkgl::Minmax = reinterpret_cast<vtkgl::PFNGLMINMAXPROC>(manager->GetProcAddress("glMinmax"));
    vtkgl::ResetHistogram = reinterpret_cast<vtkgl::PFNGLRESETHISTOGRAMPROC>(manager->GetProcAddress("glResetHistogram"));
    vtkgl::ResetMinmax = reinterpret_cast<vtkgl::PFNGLRESETMINMAXPROC>(manager->GetProcAddress("glResetMinmax"));
    return 1 && (vtkgl::ColorTable != NULL) && (vtkgl::ColorTableParameterfv != NULL) && (vtkgl::ColorTableParameteriv != NULL) && (vtkgl::CopyColorTable != NULL) && (vtkgl::GetColorTable != NULL) && (vtkgl::GetColorTableParameterfv != NULL) && (vtkgl::GetColorTableParameteriv != NULL) && (vtkgl::ColorSubTable != NULL) && (vtkgl::CopyColorSubTable != NULL) && (vtkgl::ConvolutionFilter1D != NULL) && (vtkgl::ConvolutionFilter2D != NULL) && (vtkgl::ConvolutionParameterf != NULL) && (vtkgl::ConvolutionParameterfv != NULL) && (vtkgl::ConvolutionParameteri != NULL) && (vtkgl::ConvolutionParameteriv != NULL) && (vtkgl::CopyConvolutionFilter1D != NULL) && (vtkgl::CopyConvolutionFilter2D != NULL) && (vtkgl::GetConvolutionFilter != NULL) && (vtkgl::GetConvolutionParameterfv != NULL) && (vtkgl::GetConvolutionParameteriv != NULL) && (vtkgl::GetSeparableFilter != NULL) && (vtkgl::SeparableFilter2D != NULL) && (vtkgl::GetHistogram != NULL) && (vtkgl::GetHistogramParameterfv != NULL) && (vtkgl::GetHistogramParameteriv != NULL) && (vtkgl::GetMinmax != NULL) && (vtkgl::GetMinmaxParameterfv != NULL) && (vtkgl::GetMinmaxParameteriv != NULL) && (vtkgl::Histogram != NULL) && (vtkgl::Minmax != NULL) && (vtkgl::ResetHistogram != NULL) && (vtkgl::ResetMinmax != NULL);
    }
  if (strcmp(name, "GL_ARB_imaging") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_imaging_DEPRECATED") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_VERSION_1_3") == 0)
    {
    vtkgl::ActiveTexture = reinterpret_cast<vtkgl::PFNGLACTIVETEXTUREPROC>(manager->GetProcAddress("glActiveTexture"));
    vtkgl::SampleCoverage = reinterpret_cast<vtkgl::PFNGLSAMPLECOVERAGEPROC>(manager->GetProcAddress("glSampleCoverage"));
    vtkgl::CompressedTexImage3D = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDTEXIMAGE3DPROC>(manager->GetProcAddress("glCompressedTexImage3D"));
    vtkgl::CompressedTexImage2D = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDTEXIMAGE2DPROC>(manager->GetProcAddress("glCompressedTexImage2D"));
    vtkgl::CompressedTexImage1D = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDTEXIMAGE1DPROC>(manager->GetProcAddress("glCompressedTexImage1D"));
    vtkgl::CompressedTexSubImage3D = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC>(manager->GetProcAddress("glCompressedTexSubImage3D"));
    vtkgl::CompressedTexSubImage2D = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC>(manager->GetProcAddress("glCompressedTexSubImage2D"));
    vtkgl::CompressedTexSubImage1D = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC>(manager->GetProcAddress("glCompressedTexSubImage1D"));
    vtkgl::GetCompressedTexImage = reinterpret_cast<vtkgl::PFNGLGETCOMPRESSEDTEXIMAGEPROC>(manager->GetProcAddress("glGetCompressedTexImage"));
    return 1 && (vtkgl::ActiveTexture != NULL) && (vtkgl::SampleCoverage != NULL) && (vtkgl::CompressedTexImage3D != NULL) && (vtkgl::CompressedTexImage2D != NULL) && (vtkgl::CompressedTexImage1D != NULL) && (vtkgl::CompressedTexSubImage3D != NULL) && (vtkgl::CompressedTexSubImage2D != NULL) && (vtkgl::CompressedTexSubImage1D != NULL) && (vtkgl::GetCompressedTexImage != NULL);
    }
  if (strcmp(name, "GL_VERSION_1_3_DEPRECATED") == 0)
    {
    vtkgl::ClientActiveTexture = reinterpret_cast<vtkgl::PFNGLCLIENTACTIVETEXTUREPROC>(manager->GetProcAddress("glClientActiveTexture"));
    vtkgl::MultiTexCoord1d = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD1DPROC>(manager->GetProcAddress("glMultiTexCoord1d"));
    vtkgl::MultiTexCoord1dv = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD1DVPROC>(manager->GetProcAddress("glMultiTexCoord1dv"));
    vtkgl::MultiTexCoord1f = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD1FPROC>(manager->GetProcAddress("glMultiTexCoord1f"));
    vtkgl::MultiTexCoord1fv = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD1FVPROC>(manager->GetProcAddress("glMultiTexCoord1fv"));
    vtkgl::MultiTexCoord1i = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD1IPROC>(manager->GetProcAddress("glMultiTexCoord1i"));
    vtkgl::MultiTexCoord1iv = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD1IVPROC>(manager->GetProcAddress("glMultiTexCoord1iv"));
    vtkgl::MultiTexCoord1s = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD1SPROC>(manager->GetProcAddress("glMultiTexCoord1s"));
    vtkgl::MultiTexCoord1sv = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD1SVPROC>(manager->GetProcAddress("glMultiTexCoord1sv"));
    vtkgl::MultiTexCoord2d = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD2DPROC>(manager->GetProcAddress("glMultiTexCoord2d"));
    vtkgl::MultiTexCoord2dv = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD2DVPROC>(manager->GetProcAddress("glMultiTexCoord2dv"));
    vtkgl::MultiTexCoord2f = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD2FPROC>(manager->GetProcAddress("glMultiTexCoord2f"));
    vtkgl::MultiTexCoord2fv = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD2FVPROC>(manager->GetProcAddress("glMultiTexCoord2fv"));
    vtkgl::MultiTexCoord2i = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD2IPROC>(manager->GetProcAddress("glMultiTexCoord2i"));
    vtkgl::MultiTexCoord2iv = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD2IVPROC>(manager->GetProcAddress("glMultiTexCoord2iv"));
    vtkgl::MultiTexCoord2s = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD2SPROC>(manager->GetProcAddress("glMultiTexCoord2s"));
    vtkgl::MultiTexCoord2sv = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD2SVPROC>(manager->GetProcAddress("glMultiTexCoord2sv"));
    vtkgl::MultiTexCoord3d = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD3DPROC>(manager->GetProcAddress("glMultiTexCoord3d"));
    vtkgl::MultiTexCoord3dv = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD3DVPROC>(manager->GetProcAddress("glMultiTexCoord3dv"));
    vtkgl::MultiTexCoord3f = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD3FPROC>(manager->GetProcAddress("glMultiTexCoord3f"));
    vtkgl::MultiTexCoord3fv = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD3FVPROC>(manager->GetProcAddress("glMultiTexCoord3fv"));
    vtkgl::MultiTexCoord3i = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD3IPROC>(manager->GetProcAddress("glMultiTexCoord3i"));
    vtkgl::MultiTexCoord3iv = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD3IVPROC>(manager->GetProcAddress("glMultiTexCoord3iv"));
    vtkgl::MultiTexCoord3s = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD3SPROC>(manager->GetProcAddress("glMultiTexCoord3s"));
    vtkgl::MultiTexCoord3sv = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD3SVPROC>(manager->GetProcAddress("glMultiTexCoord3sv"));
    vtkgl::MultiTexCoord4d = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD4DPROC>(manager->GetProcAddress("glMultiTexCoord4d"));
    vtkgl::MultiTexCoord4dv = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD4DVPROC>(manager->GetProcAddress("glMultiTexCoord4dv"));
    vtkgl::MultiTexCoord4f = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD4FPROC>(manager->GetProcAddress("glMultiTexCoord4f"));
    vtkgl::MultiTexCoord4fv = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD4FVPROC>(manager->GetProcAddress("glMultiTexCoord4fv"));
    vtkgl::MultiTexCoord4i = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD4IPROC>(manager->GetProcAddress("glMultiTexCoord4i"));
    vtkgl::MultiTexCoord4iv = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD4IVPROC>(manager->GetProcAddress("glMultiTexCoord4iv"));
    vtkgl::MultiTexCoord4s = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD4SPROC>(manager->GetProcAddress("glMultiTexCoord4s"));
    vtkgl::MultiTexCoord4sv = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD4SVPROC>(manager->GetProcAddress("glMultiTexCoord4sv"));
    vtkgl::LoadTransposeMatrixf = reinterpret_cast<vtkgl::PFNGLLOADTRANSPOSEMATRIXFPROC>(manager->GetProcAddress("glLoadTransposeMatrixf"));
    vtkgl::LoadTransposeMatrixd = reinterpret_cast<vtkgl::PFNGLLOADTRANSPOSEMATRIXDPROC>(manager->GetProcAddress("glLoadTransposeMatrixd"));
    vtkgl::MultTransposeMatrixf = reinterpret_cast<vtkgl::PFNGLMULTTRANSPOSEMATRIXFPROC>(manager->GetProcAddress("glMultTransposeMatrixf"));
    vtkgl::MultTransposeMatrixd = reinterpret_cast<vtkgl::PFNGLMULTTRANSPOSEMATRIXDPROC>(manager->GetProcAddress("glMultTransposeMatrixd"));
    return 1 && (vtkgl::ClientActiveTexture != NULL) && (vtkgl::MultiTexCoord1d != NULL) && (vtkgl::MultiTexCoord1dv != NULL) && (vtkgl::MultiTexCoord1f != NULL) && (vtkgl::MultiTexCoord1fv != NULL) && (vtkgl::MultiTexCoord1i != NULL) && (vtkgl::MultiTexCoord1iv != NULL) && (vtkgl::MultiTexCoord1s != NULL) && (vtkgl::MultiTexCoord1sv != NULL) && (vtkgl::MultiTexCoord2d != NULL) && (vtkgl::MultiTexCoord2dv != NULL) && (vtkgl::MultiTexCoord2f != NULL) && (vtkgl::MultiTexCoord2fv != NULL) && (vtkgl::MultiTexCoord2i != NULL) && (vtkgl::MultiTexCoord2iv != NULL) && (vtkgl::MultiTexCoord2s != NULL) && (vtkgl::MultiTexCoord2sv != NULL) && (vtkgl::MultiTexCoord3d != NULL) && (vtkgl::MultiTexCoord3dv != NULL) && (vtkgl::MultiTexCoord3f != NULL) && (vtkgl::MultiTexCoord3fv != NULL) && (vtkgl::MultiTexCoord3i != NULL) && (vtkgl::MultiTexCoord3iv != NULL) && (vtkgl::MultiTexCoord3s != NULL) && (vtkgl::MultiTexCoord3sv != NULL) && (vtkgl::MultiTexCoord4d != NULL) && (vtkgl::MultiTexCoord4dv != NULL) && (vtkgl::MultiTexCoord4f != NULL) && (vtkgl::MultiTexCoord4fv != NULL) && (vtkgl::MultiTexCoord4i != NULL) && (vtkgl::MultiTexCoord4iv != NULL) && (vtkgl::MultiTexCoord4s != NULL) && (vtkgl::MultiTexCoord4sv != NULL) && (vtkgl::LoadTransposeMatrixf != NULL) && (vtkgl::LoadTransposeMatrixd != NULL) && (vtkgl::MultTransposeMatrixf != NULL) && (vtkgl::MultTransposeMatrixd != NULL);
    }
  if (strcmp(name, "GL_VERSION_1_4") == 0)
    {
    vtkgl::BlendFuncSeparate = reinterpret_cast<vtkgl::PFNGLBLENDFUNCSEPARATEPROC>(manager->GetProcAddress("glBlendFuncSeparate"));
    vtkgl::MultiDrawArrays = reinterpret_cast<vtkgl::PFNGLMULTIDRAWARRAYSPROC>(manager->GetProcAddress("glMultiDrawArrays"));
    vtkgl::MultiDrawElements = reinterpret_cast<vtkgl::PFNGLMULTIDRAWELEMENTSPROC>(manager->GetProcAddress("glMultiDrawElements"));
    vtkgl::PointParameterf = reinterpret_cast<vtkgl::PFNGLPOINTPARAMETERFPROC>(manager->GetProcAddress("glPointParameterf"));
    vtkgl::PointParameterfv = reinterpret_cast<vtkgl::PFNGLPOINTPARAMETERFVPROC>(manager->GetProcAddress("glPointParameterfv"));
    vtkgl::PointParameteri = reinterpret_cast<vtkgl::PFNGLPOINTPARAMETERIPROC>(manager->GetProcAddress("glPointParameteri"));
    vtkgl::PointParameteriv = reinterpret_cast<vtkgl::PFNGLPOINTPARAMETERIVPROC>(manager->GetProcAddress("glPointParameteriv"));
    return 1 && (vtkgl::BlendFuncSeparate != NULL) && (vtkgl::MultiDrawArrays != NULL) && (vtkgl::MultiDrawElements != NULL) && (vtkgl::PointParameterf != NULL) && (vtkgl::PointParameterfv != NULL) && (vtkgl::PointParameteri != NULL) && (vtkgl::PointParameteriv != NULL);
    }
  if (strcmp(name, "GL_VERSION_1_4_DEPRECATED") == 0)
    {
    vtkgl::FogCoordf = reinterpret_cast<vtkgl::PFNGLFOGCOORDFPROC>(manager->GetProcAddress("glFogCoordf"));
    vtkgl::FogCoordfv = reinterpret_cast<vtkgl::PFNGLFOGCOORDFVPROC>(manager->GetProcAddress("glFogCoordfv"));
    vtkgl::FogCoordd = reinterpret_cast<vtkgl::PFNGLFOGCOORDDPROC>(manager->GetProcAddress("glFogCoordd"));
    vtkgl::FogCoorddv = reinterpret_cast<vtkgl::PFNGLFOGCOORDDVPROC>(manager->GetProcAddress("glFogCoorddv"));
    vtkgl::FogCoordPointer = reinterpret_cast<vtkgl::PFNGLFOGCOORDPOINTERPROC>(manager->GetProcAddress("glFogCoordPointer"));
    vtkgl::SecondaryColor3b = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3BPROC>(manager->GetProcAddress("glSecondaryColor3b"));
    vtkgl::SecondaryColor3bv = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3BVPROC>(manager->GetProcAddress("glSecondaryColor3bv"));
    vtkgl::SecondaryColor3d = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3DPROC>(manager->GetProcAddress("glSecondaryColor3d"));
    vtkgl::SecondaryColor3dv = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3DVPROC>(manager->GetProcAddress("glSecondaryColor3dv"));
    vtkgl::SecondaryColor3f = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3FPROC>(manager->GetProcAddress("glSecondaryColor3f"));
    vtkgl::SecondaryColor3fv = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3FVPROC>(manager->GetProcAddress("glSecondaryColor3fv"));
    vtkgl::SecondaryColor3i = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3IPROC>(manager->GetProcAddress("glSecondaryColor3i"));
    vtkgl::SecondaryColor3iv = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3IVPROC>(manager->GetProcAddress("glSecondaryColor3iv"));
    vtkgl::SecondaryColor3s = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3SPROC>(manager->GetProcAddress("glSecondaryColor3s"));
    vtkgl::SecondaryColor3sv = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3SVPROC>(manager->GetProcAddress("glSecondaryColor3sv"));
    vtkgl::SecondaryColor3ub = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3UBPROC>(manager->GetProcAddress("glSecondaryColor3ub"));
    vtkgl::SecondaryColor3ubv = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3UBVPROC>(manager->GetProcAddress("glSecondaryColor3ubv"));
    vtkgl::SecondaryColor3ui = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3UIPROC>(manager->GetProcAddress("glSecondaryColor3ui"));
    vtkgl::SecondaryColor3uiv = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3UIVPROC>(manager->GetProcAddress("glSecondaryColor3uiv"));
    vtkgl::SecondaryColor3us = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3USPROC>(manager->GetProcAddress("glSecondaryColor3us"));
    vtkgl::SecondaryColor3usv = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3USVPROC>(manager->GetProcAddress("glSecondaryColor3usv"));
    vtkgl::SecondaryColorPointer = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLORPOINTERPROC>(manager->GetProcAddress("glSecondaryColorPointer"));
    vtkgl::WindowPos2d = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2DPROC>(manager->GetProcAddress("glWindowPos2d"));
    vtkgl::WindowPos2dv = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2DVPROC>(manager->GetProcAddress("glWindowPos2dv"));
    vtkgl::WindowPos2f = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2FPROC>(manager->GetProcAddress("glWindowPos2f"));
    vtkgl::WindowPos2fv = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2FVPROC>(manager->GetProcAddress("glWindowPos2fv"));
    vtkgl::WindowPos2i = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2IPROC>(manager->GetProcAddress("glWindowPos2i"));
    vtkgl::WindowPos2iv = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2IVPROC>(manager->GetProcAddress("glWindowPos2iv"));
    vtkgl::WindowPos2s = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2SPROC>(manager->GetProcAddress("glWindowPos2s"));
    vtkgl::WindowPos2sv = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2SVPROC>(manager->GetProcAddress("glWindowPos2sv"));
    vtkgl::WindowPos3d = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3DPROC>(manager->GetProcAddress("glWindowPos3d"));
    vtkgl::WindowPos3dv = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3DVPROC>(manager->GetProcAddress("glWindowPos3dv"));
    vtkgl::WindowPos3f = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3FPROC>(manager->GetProcAddress("glWindowPos3f"));
    vtkgl::WindowPos3fv = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3FVPROC>(manager->GetProcAddress("glWindowPos3fv"));
    vtkgl::WindowPos3i = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3IPROC>(manager->GetProcAddress("glWindowPos3i"));
    vtkgl::WindowPos3iv = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3IVPROC>(manager->GetProcAddress("glWindowPos3iv"));
    vtkgl::WindowPos3s = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3SPROC>(manager->GetProcAddress("glWindowPos3s"));
    vtkgl::WindowPos3sv = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3SVPROC>(manager->GetProcAddress("glWindowPos3sv"));
    return 1 && (vtkgl::FogCoordf != NULL) && (vtkgl::FogCoordfv != NULL) && (vtkgl::FogCoordd != NULL) && (vtkgl::FogCoorddv != NULL) && (vtkgl::FogCoordPointer != NULL) && (vtkgl::SecondaryColor3b != NULL) && (vtkgl::SecondaryColor3bv != NULL) && (vtkgl::SecondaryColor3d != NULL) && (vtkgl::SecondaryColor3dv != NULL) && (vtkgl::SecondaryColor3f != NULL) && (vtkgl::SecondaryColor3fv != NULL) && (vtkgl::SecondaryColor3i != NULL) && (vtkgl::SecondaryColor3iv != NULL) && (vtkgl::SecondaryColor3s != NULL) && (vtkgl::SecondaryColor3sv != NULL) && (vtkgl::SecondaryColor3ub != NULL) && (vtkgl::SecondaryColor3ubv != NULL) && (vtkgl::SecondaryColor3ui != NULL) && (vtkgl::SecondaryColor3uiv != NULL) && (vtkgl::SecondaryColor3us != NULL) && (vtkgl::SecondaryColor3usv != NULL) && (vtkgl::SecondaryColorPointer != NULL) && (vtkgl::WindowPos2d != NULL) && (vtkgl::WindowPos2dv != NULL) && (vtkgl::WindowPos2f != NULL) && (vtkgl::WindowPos2fv != NULL) && (vtkgl::WindowPos2i != NULL) && (vtkgl::WindowPos2iv != NULL) && (vtkgl::WindowPos2s != NULL) && (vtkgl::WindowPos2sv != NULL) && (vtkgl::WindowPos3d != NULL) && (vtkgl::WindowPos3dv != NULL) && (vtkgl::WindowPos3f != NULL) && (vtkgl::WindowPos3fv != NULL) && (vtkgl::WindowPos3i != NULL) && (vtkgl::WindowPos3iv != NULL) && (vtkgl::WindowPos3s != NULL) && (vtkgl::WindowPos3sv != NULL);
    }
  if (strcmp(name, "GL_VERSION_1_5") == 0)
    {
    vtkgl::GenQueries = reinterpret_cast<vtkgl::PFNGLGENQUERIESPROC>(manager->GetProcAddress("glGenQueries"));
    vtkgl::DeleteQueries = reinterpret_cast<vtkgl::PFNGLDELETEQUERIESPROC>(manager->GetProcAddress("glDeleteQueries"));
    vtkgl::IsQuery = reinterpret_cast<vtkgl::PFNGLISQUERYPROC>(manager->GetProcAddress("glIsQuery"));
    vtkgl::BeginQuery = reinterpret_cast<vtkgl::PFNGLBEGINQUERYPROC>(manager->GetProcAddress("glBeginQuery"));
    vtkgl::EndQuery = reinterpret_cast<vtkgl::PFNGLENDQUERYPROC>(manager->GetProcAddress("glEndQuery"));
    vtkgl::GetQueryiv = reinterpret_cast<vtkgl::PFNGLGETQUERYIVPROC>(manager->GetProcAddress("glGetQueryiv"));
    vtkgl::GetQueryObjectiv = reinterpret_cast<vtkgl::PFNGLGETQUERYOBJECTIVPROC>(manager->GetProcAddress("glGetQueryObjectiv"));
    vtkgl::GetQueryObjectuiv = reinterpret_cast<vtkgl::PFNGLGETQUERYOBJECTUIVPROC>(manager->GetProcAddress("glGetQueryObjectuiv"));
    vtkgl::BindBuffer = reinterpret_cast<vtkgl::PFNGLBINDBUFFERPROC>(manager->GetProcAddress("glBindBuffer"));
    vtkgl::DeleteBuffers = reinterpret_cast<vtkgl::PFNGLDELETEBUFFERSPROC>(manager->GetProcAddress("glDeleteBuffers"));
    vtkgl::GenBuffers = reinterpret_cast<vtkgl::PFNGLGENBUFFERSPROC>(manager->GetProcAddress("glGenBuffers"));
    vtkgl::IsBuffer = reinterpret_cast<vtkgl::PFNGLISBUFFERPROC>(manager->GetProcAddress("glIsBuffer"));
    vtkgl::BufferData = reinterpret_cast<vtkgl::PFNGLBUFFERDATAPROC>(manager->GetProcAddress("glBufferData"));
    vtkgl::BufferSubData = reinterpret_cast<vtkgl::PFNGLBUFFERSUBDATAPROC>(manager->GetProcAddress("glBufferSubData"));
    vtkgl::GetBufferSubData = reinterpret_cast<vtkgl::PFNGLGETBUFFERSUBDATAPROC>(manager->GetProcAddress("glGetBufferSubData"));
    vtkgl::MapBuffer = reinterpret_cast<vtkgl::PFNGLMAPBUFFERPROC>(manager->GetProcAddress("glMapBuffer"));
    vtkgl::UnmapBuffer = reinterpret_cast<vtkgl::PFNGLUNMAPBUFFERPROC>(manager->GetProcAddress("glUnmapBuffer"));
    vtkgl::GetBufferParameteriv = reinterpret_cast<vtkgl::PFNGLGETBUFFERPARAMETERIVPROC>(manager->GetProcAddress("glGetBufferParameteriv"));
    vtkgl::GetBufferPointerv = reinterpret_cast<vtkgl::PFNGLGETBUFFERPOINTERVPROC>(manager->GetProcAddress("glGetBufferPointerv"));
    return 1 && (vtkgl::GenQueries != NULL) && (vtkgl::DeleteQueries != NULL) && (vtkgl::IsQuery != NULL) && (vtkgl::BeginQuery != NULL) && (vtkgl::EndQuery != NULL) && (vtkgl::GetQueryiv != NULL) && (vtkgl::GetQueryObjectiv != NULL) && (vtkgl::GetQueryObjectuiv != NULL) && (vtkgl::BindBuffer != NULL) && (vtkgl::DeleteBuffers != NULL) && (vtkgl::GenBuffers != NULL) && (vtkgl::IsBuffer != NULL) && (vtkgl::BufferData != NULL) && (vtkgl::BufferSubData != NULL) && (vtkgl::GetBufferSubData != NULL) && (vtkgl::MapBuffer != NULL) && (vtkgl::UnmapBuffer != NULL) && (vtkgl::GetBufferParameteriv != NULL) && (vtkgl::GetBufferPointerv != NULL);
    }
  if (strcmp(name, "GL_VERSION_1_5_DEPRECATED") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_VERSION_2_0") == 0)
    {
    vtkgl::BlendEquationSeparate = reinterpret_cast<vtkgl::PFNGLBLENDEQUATIONSEPARATEPROC>(manager->GetProcAddress("glBlendEquationSeparate"));
    vtkgl::DrawBuffers = reinterpret_cast<vtkgl::PFNGLDRAWBUFFERSPROC>(manager->GetProcAddress("glDrawBuffers"));
    vtkgl::StencilOpSeparate = reinterpret_cast<vtkgl::PFNGLSTENCILOPSEPARATEPROC>(manager->GetProcAddress("glStencilOpSeparate"));
    vtkgl::StencilFuncSeparate = reinterpret_cast<vtkgl::PFNGLSTENCILFUNCSEPARATEPROC>(manager->GetProcAddress("glStencilFuncSeparate"));
    vtkgl::StencilMaskSeparate = reinterpret_cast<vtkgl::PFNGLSTENCILMASKSEPARATEPROC>(manager->GetProcAddress("glStencilMaskSeparate"));
    vtkgl::AttachShader = reinterpret_cast<vtkgl::PFNGLATTACHSHADERPROC>(manager->GetProcAddress("glAttachShader"));
    vtkgl::BindAttribLocation = reinterpret_cast<vtkgl::PFNGLBINDATTRIBLOCATIONPROC>(manager->GetProcAddress("glBindAttribLocation"));
    vtkgl::CompileShader = reinterpret_cast<vtkgl::PFNGLCOMPILESHADERPROC>(manager->GetProcAddress("glCompileShader"));
    vtkgl::CreateProgram = reinterpret_cast<vtkgl::PFNGLCREATEPROGRAMPROC>(manager->GetProcAddress("glCreateProgram"));
    vtkgl::CreateShader = reinterpret_cast<vtkgl::PFNGLCREATESHADERPROC>(manager->GetProcAddress("glCreateShader"));
    vtkgl::DeleteProgram = reinterpret_cast<vtkgl::PFNGLDELETEPROGRAMPROC>(manager->GetProcAddress("glDeleteProgram"));
    vtkgl::DeleteShader = reinterpret_cast<vtkgl::PFNGLDELETESHADERPROC>(manager->GetProcAddress("glDeleteShader"));
    vtkgl::DetachShader = reinterpret_cast<vtkgl::PFNGLDETACHSHADERPROC>(manager->GetProcAddress("glDetachShader"));
    vtkgl::DisableVertexAttribArray = reinterpret_cast<vtkgl::PFNGLDISABLEVERTEXATTRIBARRAYPROC>(manager->GetProcAddress("glDisableVertexAttribArray"));
    vtkgl::EnableVertexAttribArray = reinterpret_cast<vtkgl::PFNGLENABLEVERTEXATTRIBARRAYPROC>(manager->GetProcAddress("glEnableVertexAttribArray"));
    vtkgl::GetActiveAttrib = reinterpret_cast<vtkgl::PFNGLGETACTIVEATTRIBPROC>(manager->GetProcAddress("glGetActiveAttrib"));
    vtkgl::GetActiveUniform = reinterpret_cast<vtkgl::PFNGLGETACTIVEUNIFORMPROC>(manager->GetProcAddress("glGetActiveUniform"));
    vtkgl::GetAttachedShaders = reinterpret_cast<vtkgl::PFNGLGETATTACHEDSHADERSPROC>(manager->GetProcAddress("glGetAttachedShaders"));
    vtkgl::GetAttribLocation = reinterpret_cast<vtkgl::PFNGLGETATTRIBLOCATIONPROC>(manager->GetProcAddress("glGetAttribLocation"));
    vtkgl::GetProgramiv = reinterpret_cast<vtkgl::PFNGLGETPROGRAMIVPROC>(manager->GetProcAddress("glGetProgramiv"));
    vtkgl::GetProgramInfoLog = reinterpret_cast<vtkgl::PFNGLGETPROGRAMINFOLOGPROC>(manager->GetProcAddress("glGetProgramInfoLog"));
    vtkgl::GetShaderiv = reinterpret_cast<vtkgl::PFNGLGETSHADERIVPROC>(manager->GetProcAddress("glGetShaderiv"));
    vtkgl::GetShaderInfoLog = reinterpret_cast<vtkgl::PFNGLGETSHADERINFOLOGPROC>(manager->GetProcAddress("glGetShaderInfoLog"));
    vtkgl::GetShaderSource = reinterpret_cast<vtkgl::PFNGLGETSHADERSOURCEPROC>(manager->GetProcAddress("glGetShaderSource"));
    vtkgl::GetUniformLocation = reinterpret_cast<vtkgl::PFNGLGETUNIFORMLOCATIONPROC>(manager->GetProcAddress("glGetUniformLocation"));
    vtkgl::GetUniformfv = reinterpret_cast<vtkgl::PFNGLGETUNIFORMFVPROC>(manager->GetProcAddress("glGetUniformfv"));
    vtkgl::GetUniformiv = reinterpret_cast<vtkgl::PFNGLGETUNIFORMIVPROC>(manager->GetProcAddress("glGetUniformiv"));
    vtkgl::GetVertexAttribdv = reinterpret_cast<vtkgl::PFNGLGETVERTEXATTRIBDVPROC>(manager->GetProcAddress("glGetVertexAttribdv"));
    vtkgl::GetVertexAttribfv = reinterpret_cast<vtkgl::PFNGLGETVERTEXATTRIBFVPROC>(manager->GetProcAddress("glGetVertexAttribfv"));
    vtkgl::GetVertexAttribiv = reinterpret_cast<vtkgl::PFNGLGETVERTEXATTRIBIVPROC>(manager->GetProcAddress("glGetVertexAttribiv"));
    vtkgl::GetVertexAttribPointerv = reinterpret_cast<vtkgl::PFNGLGETVERTEXATTRIBPOINTERVPROC>(manager->GetProcAddress("glGetVertexAttribPointerv"));
    vtkgl::IsProgram = reinterpret_cast<vtkgl::PFNGLISPROGRAMPROC>(manager->GetProcAddress("glIsProgram"));
    vtkgl::IsShader = reinterpret_cast<vtkgl::PFNGLISSHADERPROC>(manager->GetProcAddress("glIsShader"));
    vtkgl::LinkProgram = reinterpret_cast<vtkgl::PFNGLLINKPROGRAMPROC>(manager->GetProcAddress("glLinkProgram"));
    vtkgl::ShaderSource = reinterpret_cast<vtkgl::PFNGLSHADERSOURCEPROC>(manager->GetProcAddress("glShaderSource"));
    vtkgl::UseProgram = reinterpret_cast<vtkgl::PFNGLUSEPROGRAMPROC>(manager->GetProcAddress("glUseProgram"));
    vtkgl::Uniform1f = reinterpret_cast<vtkgl::PFNGLUNIFORM1FPROC>(manager->GetProcAddress("glUniform1f"));
    vtkgl::Uniform2f = reinterpret_cast<vtkgl::PFNGLUNIFORM2FPROC>(manager->GetProcAddress("glUniform2f"));
    vtkgl::Uniform3f = reinterpret_cast<vtkgl::PFNGLUNIFORM3FPROC>(manager->GetProcAddress("glUniform3f"));
    vtkgl::Uniform4f = reinterpret_cast<vtkgl::PFNGLUNIFORM4FPROC>(manager->GetProcAddress("glUniform4f"));
    vtkgl::Uniform1i = reinterpret_cast<vtkgl::PFNGLUNIFORM1IPROC>(manager->GetProcAddress("glUniform1i"));
    vtkgl::Uniform2i = reinterpret_cast<vtkgl::PFNGLUNIFORM2IPROC>(manager->GetProcAddress("glUniform2i"));
    vtkgl::Uniform3i = reinterpret_cast<vtkgl::PFNGLUNIFORM3IPROC>(manager->GetProcAddress("glUniform3i"));
    vtkgl::Uniform4i = reinterpret_cast<vtkgl::PFNGLUNIFORM4IPROC>(manager->GetProcAddress("glUniform4i"));
    vtkgl::Uniform1fv = reinterpret_cast<vtkgl::PFNGLUNIFORM1FVPROC>(manager->GetProcAddress("glUniform1fv"));
    vtkgl::Uniform2fv = reinterpret_cast<vtkgl::PFNGLUNIFORM2FVPROC>(manager->GetProcAddress("glUniform2fv"));
    vtkgl::Uniform3fv = reinterpret_cast<vtkgl::PFNGLUNIFORM3FVPROC>(manager->GetProcAddress("glUniform3fv"));
    vtkgl::Uniform4fv = reinterpret_cast<vtkgl::PFNGLUNIFORM4FVPROC>(manager->GetProcAddress("glUniform4fv"));
    vtkgl::Uniform1iv = reinterpret_cast<vtkgl::PFNGLUNIFORM1IVPROC>(manager->GetProcAddress("glUniform1iv"));
    vtkgl::Uniform2iv = reinterpret_cast<vtkgl::PFNGLUNIFORM2IVPROC>(manager->GetProcAddress("glUniform2iv"));
    vtkgl::Uniform3iv = reinterpret_cast<vtkgl::PFNGLUNIFORM3IVPROC>(manager->GetProcAddress("glUniform3iv"));
    vtkgl::Uniform4iv = reinterpret_cast<vtkgl::PFNGLUNIFORM4IVPROC>(manager->GetProcAddress("glUniform4iv"));
    vtkgl::UniformMatrix2fv = reinterpret_cast<vtkgl::PFNGLUNIFORMMATRIX2FVPROC>(manager->GetProcAddress("glUniformMatrix2fv"));
    vtkgl::UniformMatrix3fv = reinterpret_cast<vtkgl::PFNGLUNIFORMMATRIX3FVPROC>(manager->GetProcAddress("glUniformMatrix3fv"));
    vtkgl::UniformMatrix4fv = reinterpret_cast<vtkgl::PFNGLUNIFORMMATRIX4FVPROC>(manager->GetProcAddress("glUniformMatrix4fv"));
    vtkgl::ValidateProgram = reinterpret_cast<vtkgl::PFNGLVALIDATEPROGRAMPROC>(manager->GetProcAddress("glValidateProgram"));
    vtkgl::VertexAttrib1d = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB1DPROC>(manager->GetProcAddress("glVertexAttrib1d"));
    vtkgl::VertexAttrib1dv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB1DVPROC>(manager->GetProcAddress("glVertexAttrib1dv"));
    vtkgl::VertexAttrib1f = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB1FPROC>(manager->GetProcAddress("glVertexAttrib1f"));
    vtkgl::VertexAttrib1fv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB1FVPROC>(manager->GetProcAddress("glVertexAttrib1fv"));
    vtkgl::VertexAttrib1s = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB1SPROC>(manager->GetProcAddress("glVertexAttrib1s"));
    vtkgl::VertexAttrib1sv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB1SVPROC>(manager->GetProcAddress("glVertexAttrib1sv"));
    vtkgl::VertexAttrib2d = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB2DPROC>(manager->GetProcAddress("glVertexAttrib2d"));
    vtkgl::VertexAttrib2dv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB2DVPROC>(manager->GetProcAddress("glVertexAttrib2dv"));
    vtkgl::VertexAttrib2f = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB2FPROC>(manager->GetProcAddress("glVertexAttrib2f"));
    vtkgl::VertexAttrib2fv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB2FVPROC>(manager->GetProcAddress("glVertexAttrib2fv"));
    vtkgl::VertexAttrib2s = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB2SPROC>(manager->GetProcAddress("glVertexAttrib2s"));
    vtkgl::VertexAttrib2sv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB2SVPROC>(manager->GetProcAddress("glVertexAttrib2sv"));
    vtkgl::VertexAttrib3d = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB3DPROC>(manager->GetProcAddress("glVertexAttrib3d"));
    vtkgl::VertexAttrib3dv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB3DVPROC>(manager->GetProcAddress("glVertexAttrib3dv"));
    vtkgl::VertexAttrib3f = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB3FPROC>(manager->GetProcAddress("glVertexAttrib3f"));
    vtkgl::VertexAttrib3fv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB3FVPROC>(manager->GetProcAddress("glVertexAttrib3fv"));
    vtkgl::VertexAttrib3s = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB3SPROC>(manager->GetProcAddress("glVertexAttrib3s"));
    vtkgl::VertexAttrib3sv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB3SVPROC>(manager->GetProcAddress("glVertexAttrib3sv"));
    vtkgl::VertexAttrib4Nbv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4NBVPROC>(manager->GetProcAddress("glVertexAttrib4Nbv"));
    vtkgl::VertexAttrib4Niv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4NIVPROC>(manager->GetProcAddress("glVertexAttrib4Niv"));
    vtkgl::VertexAttrib4Nsv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4NSVPROC>(manager->GetProcAddress("glVertexAttrib4Nsv"));
    vtkgl::VertexAttrib4Nub = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4NUBPROC>(manager->GetProcAddress("glVertexAttrib4Nub"));
    vtkgl::VertexAttrib4Nubv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4NUBVPROC>(manager->GetProcAddress("glVertexAttrib4Nubv"));
    vtkgl::VertexAttrib4Nuiv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4NUIVPROC>(manager->GetProcAddress("glVertexAttrib4Nuiv"));
    vtkgl::VertexAttrib4Nusv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4NUSVPROC>(manager->GetProcAddress("glVertexAttrib4Nusv"));
    vtkgl::VertexAttrib4bv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4BVPROC>(manager->GetProcAddress("glVertexAttrib4bv"));
    vtkgl::VertexAttrib4d = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4DPROC>(manager->GetProcAddress("glVertexAttrib4d"));
    vtkgl::VertexAttrib4dv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4DVPROC>(manager->GetProcAddress("glVertexAttrib4dv"));
    vtkgl::VertexAttrib4f = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4FPROC>(manager->GetProcAddress("glVertexAttrib4f"));
    vtkgl::VertexAttrib4fv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4FVPROC>(manager->GetProcAddress("glVertexAttrib4fv"));
    vtkgl::VertexAttrib4iv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4IVPROC>(manager->GetProcAddress("glVertexAttrib4iv"));
    vtkgl::VertexAttrib4s = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4SPROC>(manager->GetProcAddress("glVertexAttrib4s"));
    vtkgl::VertexAttrib4sv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4SVPROC>(manager->GetProcAddress("glVertexAttrib4sv"));
    vtkgl::VertexAttrib4ubv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4UBVPROC>(manager->GetProcAddress("glVertexAttrib4ubv"));
    vtkgl::VertexAttrib4uiv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4UIVPROC>(manager->GetProcAddress("glVertexAttrib4uiv"));
    vtkgl::VertexAttrib4usv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4USVPROC>(manager->GetProcAddress("glVertexAttrib4usv"));
    vtkgl::VertexAttribPointer = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBPOINTERPROC>(manager->GetProcAddress("glVertexAttribPointer"));
    return 1 && (vtkgl::BlendEquationSeparate != NULL) && (vtkgl::DrawBuffers != NULL) && (vtkgl::StencilOpSeparate != NULL) && (vtkgl::StencilFuncSeparate != NULL) && (vtkgl::StencilMaskSeparate != NULL) && (vtkgl::AttachShader != NULL) && (vtkgl::BindAttribLocation != NULL) && (vtkgl::CompileShader != NULL) && (vtkgl::CreateProgram != NULL) && (vtkgl::CreateShader != NULL) && (vtkgl::DeleteProgram != NULL) && (vtkgl::DeleteShader != NULL) && (vtkgl::DetachShader != NULL) && (vtkgl::DisableVertexAttribArray != NULL) && (vtkgl::EnableVertexAttribArray != NULL) && (vtkgl::GetActiveAttrib != NULL) && (vtkgl::GetActiveUniform != NULL) && (vtkgl::GetAttachedShaders != NULL) && (vtkgl::GetAttribLocation != NULL) && (vtkgl::GetProgramiv != NULL) && (vtkgl::GetProgramInfoLog != NULL) && (vtkgl::GetShaderiv != NULL) && (vtkgl::GetShaderInfoLog != NULL) && (vtkgl::GetShaderSource != NULL) && (vtkgl::GetUniformLocation != NULL) && (vtkgl::GetUniformfv != NULL) && (vtkgl::GetUniformiv != NULL) && (vtkgl::GetVertexAttribdv != NULL) && (vtkgl::GetVertexAttribfv != NULL) && (vtkgl::GetVertexAttribiv != NULL) && (vtkgl::GetVertexAttribPointerv != NULL) && (vtkgl::IsProgram != NULL) && (vtkgl::IsShader != NULL) && (vtkgl::LinkProgram != NULL) && (vtkgl::ShaderSource != NULL) && (vtkgl::UseProgram != NULL) && (vtkgl::Uniform1f != NULL) && (vtkgl::Uniform2f != NULL) && (vtkgl::Uniform3f != NULL) && (vtkgl::Uniform4f != NULL) && (vtkgl::Uniform1i != NULL) && (vtkgl::Uniform2i != NULL) && (vtkgl::Uniform3i != NULL) && (vtkgl::Uniform4i != NULL) && (vtkgl::Uniform1fv != NULL) && (vtkgl::Uniform2fv != NULL) && (vtkgl::Uniform3fv != NULL) && (vtkgl::Uniform4fv != NULL) && (vtkgl::Uniform1iv != NULL) && (vtkgl::Uniform2iv != NULL) && (vtkgl::Uniform3iv != NULL) && (vtkgl::Uniform4iv != NULL) && (vtkgl::UniformMatrix2fv != NULL) && (vtkgl::UniformMatrix3fv != NULL) && (vtkgl::UniformMatrix4fv != NULL) && (vtkgl::ValidateProgram != NULL) && (vtkgl::VertexAttrib1d != NULL) && (vtkgl::VertexAttrib1dv != NULL) && (vtkgl::VertexAttrib1f != NULL) && (vtkgl::VertexAttrib1fv != NULL) && (vtkgl::VertexAttrib1s != NULL) && (vtkgl::VertexAttrib1sv != NULL) && (vtkgl::VertexAttrib2d != NULL) && (vtkgl::VertexAttrib2dv != NULL) && (vtkgl::VertexAttrib2f != NULL) && (vtkgl::VertexAttrib2fv != NULL) && (vtkgl::VertexAttrib2s != NULL) && (vtkgl::VertexAttrib2sv != NULL) && (vtkgl::VertexAttrib3d != NULL) && (vtkgl::VertexAttrib3dv != NULL) && (vtkgl::VertexAttrib3f != NULL) && (vtkgl::VertexAttrib3fv != NULL) && (vtkgl::VertexAttrib3s != NULL) && (vtkgl::VertexAttrib3sv != NULL) && (vtkgl::VertexAttrib4Nbv != NULL) && (vtkgl::VertexAttrib4Niv != NULL) && (vtkgl::VertexAttrib4Nsv != NULL) && (vtkgl::VertexAttrib4Nub != NULL) && (vtkgl::VertexAttrib4Nubv != NULL) && (vtkgl::VertexAttrib4Nuiv != NULL) && (vtkgl::VertexAttrib4Nusv != NULL) && (vtkgl::VertexAttrib4bv != NULL) && (vtkgl::VertexAttrib4d != NULL) && (vtkgl::VertexAttrib4dv != NULL) && (vtkgl::VertexAttrib4f != NULL) && (vtkgl::VertexAttrib4fv != NULL) && (vtkgl::VertexAttrib4iv != NULL) && (vtkgl::VertexAttrib4s != NULL) && (vtkgl::VertexAttrib4sv != NULL) && (vtkgl::VertexAttrib4ubv != NULL) && (vtkgl::VertexAttrib4uiv != NULL) && (vtkgl::VertexAttrib4usv != NULL) && (vtkgl::VertexAttribPointer != NULL);
    }
  if (strcmp(name, "GL_VERSION_2_0_DEPRECATED") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_VERSION_2_1") == 0)
    {
    vtkgl::UniformMatrix2x3fv = reinterpret_cast<vtkgl::PFNGLUNIFORMMATRIX2X3FVPROC>(manager->GetProcAddress("glUniformMatrix2x3fv"));
    vtkgl::UniformMatrix3x2fv = reinterpret_cast<vtkgl::PFNGLUNIFORMMATRIX3X2FVPROC>(manager->GetProcAddress("glUniformMatrix3x2fv"));
    vtkgl::UniformMatrix2x4fv = reinterpret_cast<vtkgl::PFNGLUNIFORMMATRIX2X4FVPROC>(manager->GetProcAddress("glUniformMatrix2x4fv"));
    vtkgl::UniformMatrix4x2fv = reinterpret_cast<vtkgl::PFNGLUNIFORMMATRIX4X2FVPROC>(manager->GetProcAddress("glUniformMatrix4x2fv"));
    vtkgl::UniformMatrix3x4fv = reinterpret_cast<vtkgl::PFNGLUNIFORMMATRIX3X4FVPROC>(manager->GetProcAddress("glUniformMatrix3x4fv"));
    vtkgl::UniformMatrix4x3fv = reinterpret_cast<vtkgl::PFNGLUNIFORMMATRIX4X3FVPROC>(manager->GetProcAddress("glUniformMatrix4x3fv"));
    return 1 && (vtkgl::UniformMatrix2x3fv != NULL) && (vtkgl::UniformMatrix3x2fv != NULL) && (vtkgl::UniformMatrix2x4fv != NULL) && (vtkgl::UniformMatrix4x2fv != NULL) && (vtkgl::UniformMatrix3x4fv != NULL) && (vtkgl::UniformMatrix4x3fv != NULL);
    }
  if (strcmp(name, "GL_VERSION_2_1_DEPRECATED") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_VERSION_3_0") == 0)
    {
    vtkgl::ColorMaski = reinterpret_cast<vtkgl::PFNGLCOLORMASKIPROC>(manager->GetProcAddress("glColorMaski"));
    vtkgl::GetBooleani_v = reinterpret_cast<vtkgl::PFNGLGETBOOLEANI_VPROC>(manager->GetProcAddress("glGetBooleani_v"));
    vtkgl::GetIntegeri_v = reinterpret_cast<vtkgl::PFNGLGETINTEGERI_VPROC>(manager->GetProcAddress("glGetIntegeri_v"));
    vtkgl::Enablei = reinterpret_cast<vtkgl::PFNGLENABLEIPROC>(manager->GetProcAddress("glEnablei"));
    vtkgl::Disablei = reinterpret_cast<vtkgl::PFNGLDISABLEIPROC>(manager->GetProcAddress("glDisablei"));
    vtkgl::IsEnabledi = reinterpret_cast<vtkgl::PFNGLISENABLEDIPROC>(manager->GetProcAddress("glIsEnabledi"));
    vtkgl::BeginTransformFeedback = reinterpret_cast<vtkgl::PFNGLBEGINTRANSFORMFEEDBACKPROC>(manager->GetProcAddress("glBeginTransformFeedback"));
    vtkgl::EndTransformFeedback = reinterpret_cast<vtkgl::PFNGLENDTRANSFORMFEEDBACKPROC>(manager->GetProcAddress("glEndTransformFeedback"));
    vtkgl::BindBufferRange = reinterpret_cast<vtkgl::PFNGLBINDBUFFERRANGEPROC>(manager->GetProcAddress("glBindBufferRange"));
    vtkgl::BindBufferBase = reinterpret_cast<vtkgl::PFNGLBINDBUFFERBASEPROC>(manager->GetProcAddress("glBindBufferBase"));
    vtkgl::TransformFeedbackVaryings = reinterpret_cast<vtkgl::PFNGLTRANSFORMFEEDBACKVARYINGSPROC>(manager->GetProcAddress("glTransformFeedbackVaryings"));
    vtkgl::GetTransformFeedbackVarying = reinterpret_cast<vtkgl::PFNGLGETTRANSFORMFEEDBACKVARYINGPROC>(manager->GetProcAddress("glGetTransformFeedbackVarying"));
    vtkgl::ClampColor = reinterpret_cast<vtkgl::PFNGLCLAMPCOLORPROC>(manager->GetProcAddress("glClampColor"));
    vtkgl::BeginConditionalRender = reinterpret_cast<vtkgl::PFNGLBEGINCONDITIONALRENDERPROC>(manager->GetProcAddress("glBeginConditionalRender"));
    vtkgl::EndConditionalRender = reinterpret_cast<vtkgl::PFNGLENDCONDITIONALRENDERPROC>(manager->GetProcAddress("glEndConditionalRender"));
    vtkgl::VertexAttribIPointer = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBIPOINTERPROC>(manager->GetProcAddress("glVertexAttribIPointer"));
    vtkgl::GetVertexAttribIiv = reinterpret_cast<vtkgl::PFNGLGETVERTEXATTRIBIIVPROC>(manager->GetProcAddress("glGetVertexAttribIiv"));
    vtkgl::GetVertexAttribIuiv = reinterpret_cast<vtkgl::PFNGLGETVERTEXATTRIBIUIVPROC>(manager->GetProcAddress("glGetVertexAttribIuiv"));
    vtkgl::VertexAttribI1i = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI1IPROC>(manager->GetProcAddress("glVertexAttribI1i"));
    vtkgl::VertexAttribI2i = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI2IPROC>(manager->GetProcAddress("glVertexAttribI2i"));
    vtkgl::VertexAttribI3i = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI3IPROC>(manager->GetProcAddress("glVertexAttribI3i"));
    vtkgl::VertexAttribI4i = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI4IPROC>(manager->GetProcAddress("glVertexAttribI4i"));
    vtkgl::VertexAttribI1ui = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI1UIPROC>(manager->GetProcAddress("glVertexAttribI1ui"));
    vtkgl::VertexAttribI2ui = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI2UIPROC>(manager->GetProcAddress("glVertexAttribI2ui"));
    vtkgl::VertexAttribI3ui = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI3UIPROC>(manager->GetProcAddress("glVertexAttribI3ui"));
    vtkgl::VertexAttribI4ui = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI4UIPROC>(manager->GetProcAddress("glVertexAttribI4ui"));
    vtkgl::VertexAttribI1iv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI1IVPROC>(manager->GetProcAddress("glVertexAttribI1iv"));
    vtkgl::VertexAttribI2iv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI2IVPROC>(manager->GetProcAddress("glVertexAttribI2iv"));
    vtkgl::VertexAttribI3iv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI3IVPROC>(manager->GetProcAddress("glVertexAttribI3iv"));
    vtkgl::VertexAttribI4iv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI4IVPROC>(manager->GetProcAddress("glVertexAttribI4iv"));
    vtkgl::VertexAttribI1uiv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI1UIVPROC>(manager->GetProcAddress("glVertexAttribI1uiv"));
    vtkgl::VertexAttribI2uiv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI2UIVPROC>(manager->GetProcAddress("glVertexAttribI2uiv"));
    vtkgl::VertexAttribI3uiv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI3UIVPROC>(manager->GetProcAddress("glVertexAttribI3uiv"));
    vtkgl::VertexAttribI4uiv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI4UIVPROC>(manager->GetProcAddress("glVertexAttribI4uiv"));
    vtkgl::VertexAttribI4bv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI4BVPROC>(manager->GetProcAddress("glVertexAttribI4bv"));
    vtkgl::VertexAttribI4sv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI4SVPROC>(manager->GetProcAddress("glVertexAttribI4sv"));
    vtkgl::VertexAttribI4ubv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI4UBVPROC>(manager->GetProcAddress("glVertexAttribI4ubv"));
    vtkgl::VertexAttribI4usv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI4USVPROC>(manager->GetProcAddress("glVertexAttribI4usv"));
    vtkgl::GetUniformuiv = reinterpret_cast<vtkgl::PFNGLGETUNIFORMUIVPROC>(manager->GetProcAddress("glGetUniformuiv"));
    vtkgl::BindFragDataLocation = reinterpret_cast<vtkgl::PFNGLBINDFRAGDATALOCATIONPROC>(manager->GetProcAddress("glBindFragDataLocation"));
    vtkgl::GetFragDataLocation = reinterpret_cast<vtkgl::PFNGLGETFRAGDATALOCATIONPROC>(manager->GetProcAddress("glGetFragDataLocation"));
    vtkgl::Uniform1ui = reinterpret_cast<vtkgl::PFNGLUNIFORM1UIPROC>(manager->GetProcAddress("glUniform1ui"));
    vtkgl::Uniform2ui = reinterpret_cast<vtkgl::PFNGLUNIFORM2UIPROC>(manager->GetProcAddress("glUniform2ui"));
    vtkgl::Uniform3ui = reinterpret_cast<vtkgl::PFNGLUNIFORM3UIPROC>(manager->GetProcAddress("glUniform3ui"));
    vtkgl::Uniform4ui = reinterpret_cast<vtkgl::PFNGLUNIFORM4UIPROC>(manager->GetProcAddress("glUniform4ui"));
    vtkgl::Uniform1uiv = reinterpret_cast<vtkgl::PFNGLUNIFORM1UIVPROC>(manager->GetProcAddress("glUniform1uiv"));
    vtkgl::Uniform2uiv = reinterpret_cast<vtkgl::PFNGLUNIFORM2UIVPROC>(manager->GetProcAddress("glUniform2uiv"));
    vtkgl::Uniform3uiv = reinterpret_cast<vtkgl::PFNGLUNIFORM3UIVPROC>(manager->GetProcAddress("glUniform3uiv"));
    vtkgl::Uniform4uiv = reinterpret_cast<vtkgl::PFNGLUNIFORM4UIVPROC>(manager->GetProcAddress("glUniform4uiv"));
    vtkgl::TexParameterIiv = reinterpret_cast<vtkgl::PFNGLTEXPARAMETERIIVPROC>(manager->GetProcAddress("glTexParameterIiv"));
    vtkgl::TexParameterIuiv = reinterpret_cast<vtkgl::PFNGLTEXPARAMETERIUIVPROC>(manager->GetProcAddress("glTexParameterIuiv"));
    vtkgl::GetTexParameterIiv = reinterpret_cast<vtkgl::PFNGLGETTEXPARAMETERIIVPROC>(manager->GetProcAddress("glGetTexParameterIiv"));
    vtkgl::GetTexParameterIuiv = reinterpret_cast<vtkgl::PFNGLGETTEXPARAMETERIUIVPROC>(manager->GetProcAddress("glGetTexParameterIuiv"));
    vtkgl::ClearBufferiv = reinterpret_cast<vtkgl::PFNGLCLEARBUFFERIVPROC>(manager->GetProcAddress("glClearBufferiv"));
    vtkgl::ClearBufferuiv = reinterpret_cast<vtkgl::PFNGLCLEARBUFFERUIVPROC>(manager->GetProcAddress("glClearBufferuiv"));
    vtkgl::ClearBufferfv = reinterpret_cast<vtkgl::PFNGLCLEARBUFFERFVPROC>(manager->GetProcAddress("glClearBufferfv"));
    vtkgl::ClearBufferfi = reinterpret_cast<vtkgl::PFNGLCLEARBUFFERFIPROC>(manager->GetProcAddress("glClearBufferfi"));
    vtkgl::GetStringi = reinterpret_cast<vtkgl::PFNGLGETSTRINGIPROC>(manager->GetProcAddress("glGetStringi"));
    return 1 && (vtkgl::ColorMaski != NULL) && (vtkgl::GetBooleani_v != NULL) && (vtkgl::GetIntegeri_v != NULL) && (vtkgl::Enablei != NULL) && (vtkgl::Disablei != NULL) && (vtkgl::IsEnabledi != NULL) && (vtkgl::BeginTransformFeedback != NULL) && (vtkgl::EndTransformFeedback != NULL) && (vtkgl::BindBufferRange != NULL) && (vtkgl::BindBufferBase != NULL) && (vtkgl::TransformFeedbackVaryings != NULL) && (vtkgl::GetTransformFeedbackVarying != NULL) && (vtkgl::ClampColor != NULL) && (vtkgl::BeginConditionalRender != NULL) && (vtkgl::EndConditionalRender != NULL) && (vtkgl::VertexAttribIPointer != NULL) && (vtkgl::GetVertexAttribIiv != NULL) && (vtkgl::GetVertexAttribIuiv != NULL) && (vtkgl::VertexAttribI1i != NULL) && (vtkgl::VertexAttribI2i != NULL) && (vtkgl::VertexAttribI3i != NULL) && (vtkgl::VertexAttribI4i != NULL) && (vtkgl::VertexAttribI1ui != NULL) && (vtkgl::VertexAttribI2ui != NULL) && (vtkgl::VertexAttribI3ui != NULL) && (vtkgl::VertexAttribI4ui != NULL) && (vtkgl::VertexAttribI1iv != NULL) && (vtkgl::VertexAttribI2iv != NULL) && (vtkgl::VertexAttribI3iv != NULL) && (vtkgl::VertexAttribI4iv != NULL) && (vtkgl::VertexAttribI1uiv != NULL) && (vtkgl::VertexAttribI2uiv != NULL) && (vtkgl::VertexAttribI3uiv != NULL) && (vtkgl::VertexAttribI4uiv != NULL) && (vtkgl::VertexAttribI4bv != NULL) && (vtkgl::VertexAttribI4sv != NULL) && (vtkgl::VertexAttribI4ubv != NULL) && (vtkgl::VertexAttribI4usv != NULL) && (vtkgl::GetUniformuiv != NULL) && (vtkgl::BindFragDataLocation != NULL) && (vtkgl::GetFragDataLocation != NULL) && (vtkgl::Uniform1ui != NULL) && (vtkgl::Uniform2ui != NULL) && (vtkgl::Uniform3ui != NULL) && (vtkgl::Uniform4ui != NULL) && (vtkgl::Uniform1uiv != NULL) && (vtkgl::Uniform2uiv != NULL) && (vtkgl::Uniform3uiv != NULL) && (vtkgl::Uniform4uiv != NULL) && (vtkgl::TexParameterIiv != NULL) && (vtkgl::TexParameterIuiv != NULL) && (vtkgl::GetTexParameterIiv != NULL) && (vtkgl::GetTexParameterIuiv != NULL) && (vtkgl::ClearBufferiv != NULL) && (vtkgl::ClearBufferuiv != NULL) && (vtkgl::ClearBufferfv != NULL) && (vtkgl::ClearBufferfi != NULL) && (vtkgl::GetStringi != NULL);
    }
  if (strcmp(name, "GL_VERSION_3_0_DEPRECATED") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_VERSION_3_1") == 0)
    {
    vtkgl::DrawArraysInstanced = reinterpret_cast<vtkgl::PFNGLDRAWARRAYSINSTANCEDPROC>(manager->GetProcAddress("glDrawArraysInstanced"));
    vtkgl::DrawElementsInstanced = reinterpret_cast<vtkgl::PFNGLDRAWELEMENTSINSTANCEDPROC>(manager->GetProcAddress("glDrawElementsInstanced"));
    vtkgl::TexBuffer = reinterpret_cast<vtkgl::PFNGLTEXBUFFERPROC>(manager->GetProcAddress("glTexBuffer"));
    vtkgl::PrimitiveRestartIndex = reinterpret_cast<vtkgl::PFNGLPRIMITIVERESTARTINDEXPROC>(manager->GetProcAddress("glPrimitiveRestartIndex"));
    return 1 && (vtkgl::DrawArraysInstanced != NULL) && (vtkgl::DrawElementsInstanced != NULL) && (vtkgl::TexBuffer != NULL) && (vtkgl::PrimitiveRestartIndex != NULL);
    }
  if (strcmp(name, "GL_VERSION_3_2") == 0)
    {
    vtkgl::GetInteger64i_v = reinterpret_cast<vtkgl::PFNGLGETINTEGER64I_VPROC>(manager->GetProcAddress("glGetInteger64i_v"));
    vtkgl::GetBufferParameteri64v = reinterpret_cast<vtkgl::PFNGLGETBUFFERPARAMETERI64VPROC>(manager->GetProcAddress("glGetBufferParameteri64v"));
    vtkgl::FramebufferTexture = reinterpret_cast<vtkgl::PFNGLFRAMEBUFFERTEXTUREPROC>(manager->GetProcAddress("glFramebufferTexture"));
    return 1 && (vtkgl::GetInteger64i_v != NULL) && (vtkgl::GetBufferParameteri64v != NULL) && (vtkgl::FramebufferTexture != NULL);
    }
  if (strcmp(name, "GL_VERSION_3_3") == 0)
    {
    vtkgl::VertexAttribDivisor = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBDIVISORPROC>(manager->GetProcAddress("glVertexAttribDivisor"));
    return 1 && (vtkgl::VertexAttribDivisor != NULL);
    }
  if (strcmp(name, "GL_VERSION_4_0") == 0)
    {
    vtkgl::MinSampleShading = reinterpret_cast<vtkgl::PFNGLMINSAMPLESHADINGPROC>(manager->GetProcAddress("glMinSampleShading"));
    vtkgl::BlendEquationi = reinterpret_cast<vtkgl::PFNGLBLENDEQUATIONIPROC>(manager->GetProcAddress("glBlendEquationi"));
    vtkgl::BlendEquationSeparatei = reinterpret_cast<vtkgl::PFNGLBLENDEQUATIONSEPARATEIPROC>(manager->GetProcAddress("glBlendEquationSeparatei"));
    vtkgl::BlendFunci = reinterpret_cast<vtkgl::PFNGLBLENDFUNCIPROC>(manager->GetProcAddress("glBlendFunci"));
    vtkgl::BlendFuncSeparatei = reinterpret_cast<vtkgl::PFNGLBLENDFUNCSEPARATEIPROC>(manager->GetProcAddress("glBlendFuncSeparatei"));
    return 1 && (vtkgl::MinSampleShading != NULL) && (vtkgl::BlendEquationi != NULL) && (vtkgl::BlendEquationSeparatei != NULL) && (vtkgl::BlendFunci != NULL) && (vtkgl::BlendFuncSeparatei != NULL);
    }
  if (strcmp(name, "GL_VERSION_4_1") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_multitexture") == 0)
    {
    vtkgl::ActiveTextureARB = reinterpret_cast<vtkgl::PFNGLACTIVETEXTUREARBPROC>(manager->GetProcAddress("glActiveTextureARB"));
    vtkgl::ClientActiveTextureARB = reinterpret_cast<vtkgl::PFNGLCLIENTACTIVETEXTUREARBPROC>(manager->GetProcAddress("glClientActiveTextureARB"));
    vtkgl::MultiTexCoord1dARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD1DARBPROC>(manager->GetProcAddress("glMultiTexCoord1dARB"));
    vtkgl::MultiTexCoord1dvARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD1DVARBPROC>(manager->GetProcAddress("glMultiTexCoord1dvARB"));
    vtkgl::MultiTexCoord1fARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD1FARBPROC>(manager->GetProcAddress("glMultiTexCoord1fARB"));
    vtkgl::MultiTexCoord1fvARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD1FVARBPROC>(manager->GetProcAddress("glMultiTexCoord1fvARB"));
    vtkgl::MultiTexCoord1iARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD1IARBPROC>(manager->GetProcAddress("glMultiTexCoord1iARB"));
    vtkgl::MultiTexCoord1ivARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD1IVARBPROC>(manager->GetProcAddress("glMultiTexCoord1ivARB"));
    vtkgl::MultiTexCoord1sARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD1SARBPROC>(manager->GetProcAddress("glMultiTexCoord1sARB"));
    vtkgl::MultiTexCoord1svARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD1SVARBPROC>(manager->GetProcAddress("glMultiTexCoord1svARB"));
    vtkgl::MultiTexCoord2dARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD2DARBPROC>(manager->GetProcAddress("glMultiTexCoord2dARB"));
    vtkgl::MultiTexCoord2dvARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD2DVARBPROC>(manager->GetProcAddress("glMultiTexCoord2dvARB"));
    vtkgl::MultiTexCoord2fARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD2FARBPROC>(manager->GetProcAddress("glMultiTexCoord2fARB"));
    vtkgl::MultiTexCoord2fvARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD2FVARBPROC>(manager->GetProcAddress("glMultiTexCoord2fvARB"));
    vtkgl::MultiTexCoord2iARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD2IARBPROC>(manager->GetProcAddress("glMultiTexCoord2iARB"));
    vtkgl::MultiTexCoord2ivARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD2IVARBPROC>(manager->GetProcAddress("glMultiTexCoord2ivARB"));
    vtkgl::MultiTexCoord2sARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD2SARBPROC>(manager->GetProcAddress("glMultiTexCoord2sARB"));
    vtkgl::MultiTexCoord2svARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD2SVARBPROC>(manager->GetProcAddress("glMultiTexCoord2svARB"));
    vtkgl::MultiTexCoord3dARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD3DARBPROC>(manager->GetProcAddress("glMultiTexCoord3dARB"));
    vtkgl::MultiTexCoord3dvARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD3DVARBPROC>(manager->GetProcAddress("glMultiTexCoord3dvARB"));
    vtkgl::MultiTexCoord3fARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD3FARBPROC>(manager->GetProcAddress("glMultiTexCoord3fARB"));
    vtkgl::MultiTexCoord3fvARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD3FVARBPROC>(manager->GetProcAddress("glMultiTexCoord3fvARB"));
    vtkgl::MultiTexCoord3iARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD3IARBPROC>(manager->GetProcAddress("glMultiTexCoord3iARB"));
    vtkgl::MultiTexCoord3ivARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD3IVARBPROC>(manager->GetProcAddress("glMultiTexCoord3ivARB"));
    vtkgl::MultiTexCoord3sARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD3SARBPROC>(manager->GetProcAddress("glMultiTexCoord3sARB"));
    vtkgl::MultiTexCoord3svARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD3SVARBPROC>(manager->GetProcAddress("glMultiTexCoord3svARB"));
    vtkgl::MultiTexCoord4dARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD4DARBPROC>(manager->GetProcAddress("glMultiTexCoord4dARB"));
    vtkgl::MultiTexCoord4dvARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD4DVARBPROC>(manager->GetProcAddress("glMultiTexCoord4dvARB"));
    vtkgl::MultiTexCoord4fARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD4FARBPROC>(manager->GetProcAddress("glMultiTexCoord4fARB"));
    vtkgl::MultiTexCoord4fvARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD4FVARBPROC>(manager->GetProcAddress("glMultiTexCoord4fvARB"));
    vtkgl::MultiTexCoord4iARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD4IARBPROC>(manager->GetProcAddress("glMultiTexCoord4iARB"));
    vtkgl::MultiTexCoord4ivARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD4IVARBPROC>(manager->GetProcAddress("glMultiTexCoord4ivARB"));
    vtkgl::MultiTexCoord4sARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD4SARBPROC>(manager->GetProcAddress("glMultiTexCoord4sARB"));
    vtkgl::MultiTexCoord4svARB = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD4SVARBPROC>(manager->GetProcAddress("glMultiTexCoord4svARB"));
    return 1 && (vtkgl::ActiveTextureARB != NULL) && (vtkgl::ClientActiveTextureARB != NULL) && (vtkgl::MultiTexCoord1dARB != NULL) && (vtkgl::MultiTexCoord1dvARB != NULL) && (vtkgl::MultiTexCoord1fARB != NULL) && (vtkgl::MultiTexCoord1fvARB != NULL) && (vtkgl::MultiTexCoord1iARB != NULL) && (vtkgl::MultiTexCoord1ivARB != NULL) && (vtkgl::MultiTexCoord1sARB != NULL) && (vtkgl::MultiTexCoord1svARB != NULL) && (vtkgl::MultiTexCoord2dARB != NULL) && (vtkgl::MultiTexCoord2dvARB != NULL) && (vtkgl::MultiTexCoord2fARB != NULL) && (vtkgl::MultiTexCoord2fvARB != NULL) && (vtkgl::MultiTexCoord2iARB != NULL) && (vtkgl::MultiTexCoord2ivARB != NULL) && (vtkgl::MultiTexCoord2sARB != NULL) && (vtkgl::MultiTexCoord2svARB != NULL) && (vtkgl::MultiTexCoord3dARB != NULL) && (vtkgl::MultiTexCoord3dvARB != NULL) && (vtkgl::MultiTexCoord3fARB != NULL) && (vtkgl::MultiTexCoord3fvARB != NULL) && (vtkgl::MultiTexCoord3iARB != NULL) && (vtkgl::MultiTexCoord3ivARB != NULL) && (vtkgl::MultiTexCoord3sARB != NULL) && (vtkgl::MultiTexCoord3svARB != NULL) && (vtkgl::MultiTexCoord4dARB != NULL) && (vtkgl::MultiTexCoord4dvARB != NULL) && (vtkgl::MultiTexCoord4fARB != NULL) && (vtkgl::MultiTexCoord4fvARB != NULL) && (vtkgl::MultiTexCoord4iARB != NULL) && (vtkgl::MultiTexCoord4ivARB != NULL) && (vtkgl::MultiTexCoord4sARB != NULL) && (vtkgl::MultiTexCoord4svARB != NULL);
    }
  if (strcmp(name, "GL_ARB_transpose_matrix") == 0)
    {
    vtkgl::LoadTransposeMatrixfARB = reinterpret_cast<vtkgl::PFNGLLOADTRANSPOSEMATRIXFARBPROC>(manager->GetProcAddress("glLoadTransposeMatrixfARB"));
    vtkgl::LoadTransposeMatrixdARB = reinterpret_cast<vtkgl::PFNGLLOADTRANSPOSEMATRIXDARBPROC>(manager->GetProcAddress("glLoadTransposeMatrixdARB"));
    vtkgl::MultTransposeMatrixfARB = reinterpret_cast<vtkgl::PFNGLMULTTRANSPOSEMATRIXFARBPROC>(manager->GetProcAddress("glMultTransposeMatrixfARB"));
    vtkgl::MultTransposeMatrixdARB = reinterpret_cast<vtkgl::PFNGLMULTTRANSPOSEMATRIXDARBPROC>(manager->GetProcAddress("glMultTransposeMatrixdARB"));
    return 1 && (vtkgl::LoadTransposeMatrixfARB != NULL) && (vtkgl::LoadTransposeMatrixdARB != NULL) && (vtkgl::MultTransposeMatrixfARB != NULL) && (vtkgl::MultTransposeMatrixdARB != NULL);
    }
  if (strcmp(name, "GL_ARB_multisample") == 0)
    {
    vtkgl::SampleCoverageARB = reinterpret_cast<vtkgl::PFNGLSAMPLECOVERAGEARBPROC>(manager->GetProcAddress("glSampleCoverageARB"));
    return 1 && (vtkgl::SampleCoverageARB != NULL);
    }
  if (strcmp(name, "GL_ARB_texture_env_add") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_texture_cube_map") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_texture_compression") == 0)
    {
    vtkgl::CompressedTexImage3DARB = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDTEXIMAGE3DARBPROC>(manager->GetProcAddress("glCompressedTexImage3DARB"));
    vtkgl::CompressedTexImage2DARB = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDTEXIMAGE2DARBPROC>(manager->GetProcAddress("glCompressedTexImage2DARB"));
    vtkgl::CompressedTexImage1DARB = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDTEXIMAGE1DARBPROC>(manager->GetProcAddress("glCompressedTexImage1DARB"));
    vtkgl::CompressedTexSubImage3DARB = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC>(manager->GetProcAddress("glCompressedTexSubImage3DARB"));
    vtkgl::CompressedTexSubImage2DARB = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC>(manager->GetProcAddress("glCompressedTexSubImage2DARB"));
    vtkgl::CompressedTexSubImage1DARB = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC>(manager->GetProcAddress("glCompressedTexSubImage1DARB"));
    vtkgl::GetCompressedTexImageARB = reinterpret_cast<vtkgl::PFNGLGETCOMPRESSEDTEXIMAGEARBPROC>(manager->GetProcAddress("glGetCompressedTexImageARB"));
    return 1 && (vtkgl::CompressedTexImage3DARB != NULL) && (vtkgl::CompressedTexImage2DARB != NULL) && (vtkgl::CompressedTexImage1DARB != NULL) && (vtkgl::CompressedTexSubImage3DARB != NULL) && (vtkgl::CompressedTexSubImage2DARB != NULL) && (vtkgl::CompressedTexSubImage1DARB != NULL) && (vtkgl::GetCompressedTexImageARB != NULL);
    }
  if (strcmp(name, "GL_ARB_texture_border_clamp") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_point_parameters") == 0)
    {
    vtkgl::PointParameterfARB = reinterpret_cast<vtkgl::PFNGLPOINTPARAMETERFARBPROC>(manager->GetProcAddress("glPointParameterfARB"));
    vtkgl::PointParameterfvARB = reinterpret_cast<vtkgl::PFNGLPOINTPARAMETERFVARBPROC>(manager->GetProcAddress("glPointParameterfvARB"));
    return 1 && (vtkgl::PointParameterfARB != NULL) && (vtkgl::PointParameterfvARB != NULL);
    }
  if (strcmp(name, "GL_ARB_vertex_blend") == 0)
    {
    vtkgl::WeightbvARB = reinterpret_cast<vtkgl::PFNGLWEIGHTBVARBPROC>(manager->GetProcAddress("glWeightbvARB"));
    vtkgl::WeightsvARB = reinterpret_cast<vtkgl::PFNGLWEIGHTSVARBPROC>(manager->GetProcAddress("glWeightsvARB"));
    vtkgl::WeightivARB = reinterpret_cast<vtkgl::PFNGLWEIGHTIVARBPROC>(manager->GetProcAddress("glWeightivARB"));
    vtkgl::WeightfvARB = reinterpret_cast<vtkgl::PFNGLWEIGHTFVARBPROC>(manager->GetProcAddress("glWeightfvARB"));
    vtkgl::WeightdvARB = reinterpret_cast<vtkgl::PFNGLWEIGHTDVARBPROC>(manager->GetProcAddress("glWeightdvARB"));
    vtkgl::WeightubvARB = reinterpret_cast<vtkgl::PFNGLWEIGHTUBVARBPROC>(manager->GetProcAddress("glWeightubvARB"));
    vtkgl::WeightusvARB = reinterpret_cast<vtkgl::PFNGLWEIGHTUSVARBPROC>(manager->GetProcAddress("glWeightusvARB"));
    vtkgl::WeightuivARB = reinterpret_cast<vtkgl::PFNGLWEIGHTUIVARBPROC>(manager->GetProcAddress("glWeightuivARB"));
    vtkgl::WeightPointerARB = reinterpret_cast<vtkgl::PFNGLWEIGHTPOINTERARBPROC>(manager->GetProcAddress("glWeightPointerARB"));
    vtkgl::VertexBlendARB = reinterpret_cast<vtkgl::PFNGLVERTEXBLENDARBPROC>(manager->GetProcAddress("glVertexBlendARB"));
    return 1 && (vtkgl::WeightbvARB != NULL) && (vtkgl::WeightsvARB != NULL) && (vtkgl::WeightivARB != NULL) && (vtkgl::WeightfvARB != NULL) && (vtkgl::WeightdvARB != NULL) && (vtkgl::WeightubvARB != NULL) && (vtkgl::WeightusvARB != NULL) && (vtkgl::WeightuivARB != NULL) && (vtkgl::WeightPointerARB != NULL) && (vtkgl::VertexBlendARB != NULL);
    }
  if (strcmp(name, "GL_ARB_matrix_palette") == 0)
    {
    vtkgl::CurrentPaletteMatrixARB = reinterpret_cast<vtkgl::PFNGLCURRENTPALETTEMATRIXARBPROC>(manager->GetProcAddress("glCurrentPaletteMatrixARB"));
    vtkgl::MatrixIndexubvARB = reinterpret_cast<vtkgl::PFNGLMATRIXINDEXUBVARBPROC>(manager->GetProcAddress("glMatrixIndexubvARB"));
    vtkgl::MatrixIndexusvARB = reinterpret_cast<vtkgl::PFNGLMATRIXINDEXUSVARBPROC>(manager->GetProcAddress("glMatrixIndexusvARB"));
    vtkgl::MatrixIndexuivARB = reinterpret_cast<vtkgl::PFNGLMATRIXINDEXUIVARBPROC>(manager->GetProcAddress("glMatrixIndexuivARB"));
    vtkgl::MatrixIndexPointerARB = reinterpret_cast<vtkgl::PFNGLMATRIXINDEXPOINTERARBPROC>(manager->GetProcAddress("glMatrixIndexPointerARB"));
    return 1 && (vtkgl::CurrentPaletteMatrixARB != NULL) && (vtkgl::MatrixIndexubvARB != NULL) && (vtkgl::MatrixIndexusvARB != NULL) && (vtkgl::MatrixIndexuivARB != NULL) && (vtkgl::MatrixIndexPointerARB != NULL);
    }
  if (strcmp(name, "GL_ARB_texture_env_combine") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_texture_env_crossbar") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_texture_env_dot3") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_texture_mirrored_repeat") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_depth_texture") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_shadow") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_shadow_ambient") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_window_pos") == 0)
    {
    vtkgl::WindowPos2dARB = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2DARBPROC>(manager->GetProcAddress("glWindowPos2dARB"));
    vtkgl::WindowPos2dvARB = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2DVARBPROC>(manager->GetProcAddress("glWindowPos2dvARB"));
    vtkgl::WindowPos2fARB = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2FARBPROC>(manager->GetProcAddress("glWindowPos2fARB"));
    vtkgl::WindowPos2fvARB = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2FVARBPROC>(manager->GetProcAddress("glWindowPos2fvARB"));
    vtkgl::WindowPos2iARB = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2IARBPROC>(manager->GetProcAddress("glWindowPos2iARB"));
    vtkgl::WindowPos2ivARB = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2IVARBPROC>(manager->GetProcAddress("glWindowPos2ivARB"));
    vtkgl::WindowPos2sARB = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2SARBPROC>(manager->GetProcAddress("glWindowPos2sARB"));
    vtkgl::WindowPos2svARB = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2SVARBPROC>(manager->GetProcAddress("glWindowPos2svARB"));
    vtkgl::WindowPos3dARB = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3DARBPROC>(manager->GetProcAddress("glWindowPos3dARB"));
    vtkgl::WindowPos3dvARB = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3DVARBPROC>(manager->GetProcAddress("glWindowPos3dvARB"));
    vtkgl::WindowPos3fARB = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3FARBPROC>(manager->GetProcAddress("glWindowPos3fARB"));
    vtkgl::WindowPos3fvARB = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3FVARBPROC>(manager->GetProcAddress("glWindowPos3fvARB"));
    vtkgl::WindowPos3iARB = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3IARBPROC>(manager->GetProcAddress("glWindowPos3iARB"));
    vtkgl::WindowPos3ivARB = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3IVARBPROC>(manager->GetProcAddress("glWindowPos3ivARB"));
    vtkgl::WindowPos3sARB = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3SARBPROC>(manager->GetProcAddress("glWindowPos3sARB"));
    vtkgl::WindowPos3svARB = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3SVARBPROC>(manager->GetProcAddress("glWindowPos3svARB"));
    return 1 && (vtkgl::WindowPos2dARB != NULL) && (vtkgl::WindowPos2dvARB != NULL) && (vtkgl::WindowPos2fARB != NULL) && (vtkgl::WindowPos2fvARB != NULL) && (vtkgl::WindowPos2iARB != NULL) && (vtkgl::WindowPos2ivARB != NULL) && (vtkgl::WindowPos2sARB != NULL) && (vtkgl::WindowPos2svARB != NULL) && (vtkgl::WindowPos3dARB != NULL) && (vtkgl::WindowPos3dvARB != NULL) && (vtkgl::WindowPos3fARB != NULL) && (vtkgl::WindowPos3fvARB != NULL) && (vtkgl::WindowPos3iARB != NULL) && (vtkgl::WindowPos3ivARB != NULL) && (vtkgl::WindowPos3sARB != NULL) && (vtkgl::WindowPos3svARB != NULL);
    }
  if (strcmp(name, "GL_ARB_vertex_program") == 0)
    {
    vtkgl::VertexAttrib1dARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB1DARBPROC>(manager->GetProcAddress("glVertexAttrib1dARB"));
    vtkgl::VertexAttrib1dvARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB1DVARBPROC>(manager->GetProcAddress("glVertexAttrib1dvARB"));
    vtkgl::VertexAttrib1fARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB1FARBPROC>(manager->GetProcAddress("glVertexAttrib1fARB"));
    vtkgl::VertexAttrib1fvARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB1FVARBPROC>(manager->GetProcAddress("glVertexAttrib1fvARB"));
    vtkgl::VertexAttrib1sARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB1SARBPROC>(manager->GetProcAddress("glVertexAttrib1sARB"));
    vtkgl::VertexAttrib1svARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB1SVARBPROC>(manager->GetProcAddress("glVertexAttrib1svARB"));
    vtkgl::VertexAttrib2dARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB2DARBPROC>(manager->GetProcAddress("glVertexAttrib2dARB"));
    vtkgl::VertexAttrib2dvARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB2DVARBPROC>(manager->GetProcAddress("glVertexAttrib2dvARB"));
    vtkgl::VertexAttrib2fARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB2FARBPROC>(manager->GetProcAddress("glVertexAttrib2fARB"));
    vtkgl::VertexAttrib2fvARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB2FVARBPROC>(manager->GetProcAddress("glVertexAttrib2fvARB"));
    vtkgl::VertexAttrib2sARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB2SARBPROC>(manager->GetProcAddress("glVertexAttrib2sARB"));
    vtkgl::VertexAttrib2svARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB2SVARBPROC>(manager->GetProcAddress("glVertexAttrib2svARB"));
    vtkgl::VertexAttrib3dARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB3DARBPROC>(manager->GetProcAddress("glVertexAttrib3dARB"));
    vtkgl::VertexAttrib3dvARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB3DVARBPROC>(manager->GetProcAddress("glVertexAttrib3dvARB"));
    vtkgl::VertexAttrib3fARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB3FARBPROC>(manager->GetProcAddress("glVertexAttrib3fARB"));
    vtkgl::VertexAttrib3fvARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB3FVARBPROC>(manager->GetProcAddress("glVertexAttrib3fvARB"));
    vtkgl::VertexAttrib3sARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB3SARBPROC>(manager->GetProcAddress("glVertexAttrib3sARB"));
    vtkgl::VertexAttrib3svARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB3SVARBPROC>(manager->GetProcAddress("glVertexAttrib3svARB"));
    vtkgl::VertexAttrib4NbvARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4NBVARBPROC>(manager->GetProcAddress("glVertexAttrib4NbvARB"));
    vtkgl::VertexAttrib4NivARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4NIVARBPROC>(manager->GetProcAddress("glVertexAttrib4NivARB"));
    vtkgl::VertexAttrib4NsvARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4NSVARBPROC>(manager->GetProcAddress("glVertexAttrib4NsvARB"));
    vtkgl::VertexAttrib4NubARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4NUBARBPROC>(manager->GetProcAddress("glVertexAttrib4NubARB"));
    vtkgl::VertexAttrib4NubvARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4NUBVARBPROC>(manager->GetProcAddress("glVertexAttrib4NubvARB"));
    vtkgl::VertexAttrib4NuivARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4NUIVARBPROC>(manager->GetProcAddress("glVertexAttrib4NuivARB"));
    vtkgl::VertexAttrib4NusvARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4NUSVARBPROC>(manager->GetProcAddress("glVertexAttrib4NusvARB"));
    vtkgl::VertexAttrib4bvARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4BVARBPROC>(manager->GetProcAddress("glVertexAttrib4bvARB"));
    vtkgl::VertexAttrib4dARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4DARBPROC>(manager->GetProcAddress("glVertexAttrib4dARB"));
    vtkgl::VertexAttrib4dvARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4DVARBPROC>(manager->GetProcAddress("glVertexAttrib4dvARB"));
    vtkgl::VertexAttrib4fARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4FARBPROC>(manager->GetProcAddress("glVertexAttrib4fARB"));
    vtkgl::VertexAttrib4fvARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4FVARBPROC>(manager->GetProcAddress("glVertexAttrib4fvARB"));
    vtkgl::VertexAttrib4ivARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4IVARBPROC>(manager->GetProcAddress("glVertexAttrib4ivARB"));
    vtkgl::VertexAttrib4sARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4SARBPROC>(manager->GetProcAddress("glVertexAttrib4sARB"));
    vtkgl::VertexAttrib4svARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4SVARBPROC>(manager->GetProcAddress("glVertexAttrib4svARB"));
    vtkgl::VertexAttrib4ubvARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4UBVARBPROC>(manager->GetProcAddress("glVertexAttrib4ubvARB"));
    vtkgl::VertexAttrib4uivARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4UIVARBPROC>(manager->GetProcAddress("glVertexAttrib4uivARB"));
    vtkgl::VertexAttrib4usvARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4USVARBPROC>(manager->GetProcAddress("glVertexAttrib4usvARB"));
    vtkgl::VertexAttribPointerARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBPOINTERARBPROC>(manager->GetProcAddress("glVertexAttribPointerARB"));
    vtkgl::EnableVertexAttribArrayARB = reinterpret_cast<vtkgl::PFNGLENABLEVERTEXATTRIBARRAYARBPROC>(manager->GetProcAddress("glEnableVertexAttribArrayARB"));
    vtkgl::DisableVertexAttribArrayARB = reinterpret_cast<vtkgl::PFNGLDISABLEVERTEXATTRIBARRAYARBPROC>(manager->GetProcAddress("glDisableVertexAttribArrayARB"));
    vtkgl::ProgramStringARB = reinterpret_cast<vtkgl::PFNGLPROGRAMSTRINGARBPROC>(manager->GetProcAddress("glProgramStringARB"));
    vtkgl::BindProgramARB = reinterpret_cast<vtkgl::PFNGLBINDPROGRAMARBPROC>(manager->GetProcAddress("glBindProgramARB"));
    vtkgl::DeleteProgramsARB = reinterpret_cast<vtkgl::PFNGLDELETEPROGRAMSARBPROC>(manager->GetProcAddress("glDeleteProgramsARB"));
    vtkgl::GenProgramsARB = reinterpret_cast<vtkgl::PFNGLGENPROGRAMSARBPROC>(manager->GetProcAddress("glGenProgramsARB"));
    vtkgl::ProgramEnvParameter4dARB = reinterpret_cast<vtkgl::PFNGLPROGRAMENVPARAMETER4DARBPROC>(manager->GetProcAddress("glProgramEnvParameter4dARB"));
    vtkgl::ProgramEnvParameter4dvARB = reinterpret_cast<vtkgl::PFNGLPROGRAMENVPARAMETER4DVARBPROC>(manager->GetProcAddress("glProgramEnvParameter4dvARB"));
    vtkgl::ProgramEnvParameter4fARB = reinterpret_cast<vtkgl::PFNGLPROGRAMENVPARAMETER4FARBPROC>(manager->GetProcAddress("glProgramEnvParameter4fARB"));
    vtkgl::ProgramEnvParameter4fvARB = reinterpret_cast<vtkgl::PFNGLPROGRAMENVPARAMETER4FVARBPROC>(manager->GetProcAddress("glProgramEnvParameter4fvARB"));
    vtkgl::ProgramLocalParameter4dARB = reinterpret_cast<vtkgl::PFNGLPROGRAMLOCALPARAMETER4DARBPROC>(manager->GetProcAddress("glProgramLocalParameter4dARB"));
    vtkgl::ProgramLocalParameter4dvARB = reinterpret_cast<vtkgl::PFNGLPROGRAMLOCALPARAMETER4DVARBPROC>(manager->GetProcAddress("glProgramLocalParameter4dvARB"));
    vtkgl::ProgramLocalParameter4fARB = reinterpret_cast<vtkgl::PFNGLPROGRAMLOCALPARAMETER4FARBPROC>(manager->GetProcAddress("glProgramLocalParameter4fARB"));
    vtkgl::ProgramLocalParameter4fvARB = reinterpret_cast<vtkgl::PFNGLPROGRAMLOCALPARAMETER4FVARBPROC>(manager->GetProcAddress("glProgramLocalParameter4fvARB"));
    vtkgl::GetProgramEnvParameterdvARB = reinterpret_cast<vtkgl::PFNGLGETPROGRAMENVPARAMETERDVARBPROC>(manager->GetProcAddress("glGetProgramEnvParameterdvARB"));
    vtkgl::GetProgramEnvParameterfvARB = reinterpret_cast<vtkgl::PFNGLGETPROGRAMENVPARAMETERFVARBPROC>(manager->GetProcAddress("glGetProgramEnvParameterfvARB"));
    vtkgl::GetProgramLocalParameterdvARB = reinterpret_cast<vtkgl::PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC>(manager->GetProcAddress("glGetProgramLocalParameterdvARB"));
    vtkgl::GetProgramLocalParameterfvARB = reinterpret_cast<vtkgl::PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC>(manager->GetProcAddress("glGetProgramLocalParameterfvARB"));
    vtkgl::GetProgramivARB = reinterpret_cast<vtkgl::PFNGLGETPROGRAMIVARBPROC>(manager->GetProcAddress("glGetProgramivARB"));
    vtkgl::GetProgramStringARB = reinterpret_cast<vtkgl::PFNGLGETPROGRAMSTRINGARBPROC>(manager->GetProcAddress("glGetProgramStringARB"));
    vtkgl::GetVertexAttribdvARB = reinterpret_cast<vtkgl::PFNGLGETVERTEXATTRIBDVARBPROC>(manager->GetProcAddress("glGetVertexAttribdvARB"));
    vtkgl::GetVertexAttribfvARB = reinterpret_cast<vtkgl::PFNGLGETVERTEXATTRIBFVARBPROC>(manager->GetProcAddress("glGetVertexAttribfvARB"));
    vtkgl::GetVertexAttribivARB = reinterpret_cast<vtkgl::PFNGLGETVERTEXATTRIBIVARBPROC>(manager->GetProcAddress("glGetVertexAttribivARB"));
    vtkgl::GetVertexAttribPointervARB = reinterpret_cast<vtkgl::PFNGLGETVERTEXATTRIBPOINTERVARBPROC>(manager->GetProcAddress("glGetVertexAttribPointervARB"));
    vtkgl::IsProgramARB = reinterpret_cast<vtkgl::PFNGLISPROGRAMARBPROC>(manager->GetProcAddress("glIsProgramARB"));
    return 1 && (vtkgl::VertexAttrib1dARB != NULL) && (vtkgl::VertexAttrib1dvARB != NULL) && (vtkgl::VertexAttrib1fARB != NULL) && (vtkgl::VertexAttrib1fvARB != NULL) && (vtkgl::VertexAttrib1sARB != NULL) && (vtkgl::VertexAttrib1svARB != NULL) && (vtkgl::VertexAttrib2dARB != NULL) && (vtkgl::VertexAttrib2dvARB != NULL) && (vtkgl::VertexAttrib2fARB != NULL) && (vtkgl::VertexAttrib2fvARB != NULL) && (vtkgl::VertexAttrib2sARB != NULL) && (vtkgl::VertexAttrib2svARB != NULL) && (vtkgl::VertexAttrib3dARB != NULL) && (vtkgl::VertexAttrib3dvARB != NULL) && (vtkgl::VertexAttrib3fARB != NULL) && (vtkgl::VertexAttrib3fvARB != NULL) && (vtkgl::VertexAttrib3sARB != NULL) && (vtkgl::VertexAttrib3svARB != NULL) && (vtkgl::VertexAttrib4NbvARB != NULL) && (vtkgl::VertexAttrib4NivARB != NULL) && (vtkgl::VertexAttrib4NsvARB != NULL) && (vtkgl::VertexAttrib4NubARB != NULL) && (vtkgl::VertexAttrib4NubvARB != NULL) && (vtkgl::VertexAttrib4NuivARB != NULL) && (vtkgl::VertexAttrib4NusvARB != NULL) && (vtkgl::VertexAttrib4bvARB != NULL) && (vtkgl::VertexAttrib4dARB != NULL) && (vtkgl::VertexAttrib4dvARB != NULL) && (vtkgl::VertexAttrib4fARB != NULL) && (vtkgl::VertexAttrib4fvARB != NULL) && (vtkgl::VertexAttrib4ivARB != NULL) && (vtkgl::VertexAttrib4sARB != NULL) && (vtkgl::VertexAttrib4svARB != NULL) && (vtkgl::VertexAttrib4ubvARB != NULL) && (vtkgl::VertexAttrib4uivARB != NULL) && (vtkgl::VertexAttrib4usvARB != NULL) && (vtkgl::VertexAttribPointerARB != NULL) && (vtkgl::EnableVertexAttribArrayARB != NULL) && (vtkgl::DisableVertexAttribArrayARB != NULL) && (vtkgl::ProgramStringARB != NULL) && (vtkgl::BindProgramARB != NULL) && (vtkgl::DeleteProgramsARB != NULL) && (vtkgl::GenProgramsARB != NULL) && (vtkgl::ProgramEnvParameter4dARB != NULL) && (vtkgl::ProgramEnvParameter4dvARB != NULL) && (vtkgl::ProgramEnvParameter4fARB != NULL) && (vtkgl::ProgramEnvParameter4fvARB != NULL) && (vtkgl::ProgramLocalParameter4dARB != NULL) && (vtkgl::ProgramLocalParameter4dvARB != NULL) && (vtkgl::ProgramLocalParameter4fARB != NULL) && (vtkgl::ProgramLocalParameter4fvARB != NULL) && (vtkgl::GetProgramEnvParameterdvARB != NULL) && (vtkgl::GetProgramEnvParameterfvARB != NULL) && (vtkgl::GetProgramLocalParameterdvARB != NULL) && (vtkgl::GetProgramLocalParameterfvARB != NULL) && (vtkgl::GetProgramivARB != NULL) && (vtkgl::GetProgramStringARB != NULL) && (vtkgl::GetVertexAttribdvARB != NULL) && (vtkgl::GetVertexAttribfvARB != NULL) && (vtkgl::GetVertexAttribivARB != NULL) && (vtkgl::GetVertexAttribPointervARB != NULL) && (vtkgl::IsProgramARB != NULL);
    }
  if (strcmp(name, "GL_ARB_fragment_program") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_vertex_buffer_object") == 0)
    {
    vtkgl::BindBufferARB = reinterpret_cast<vtkgl::PFNGLBINDBUFFERARBPROC>(manager->GetProcAddress("glBindBufferARB"));
    vtkgl::DeleteBuffersARB = reinterpret_cast<vtkgl::PFNGLDELETEBUFFERSARBPROC>(manager->GetProcAddress("glDeleteBuffersARB"));
    vtkgl::GenBuffersARB = reinterpret_cast<vtkgl::PFNGLGENBUFFERSARBPROC>(manager->GetProcAddress("glGenBuffersARB"));
    vtkgl::IsBufferARB = reinterpret_cast<vtkgl::PFNGLISBUFFERARBPROC>(manager->GetProcAddress("glIsBufferARB"));
    vtkgl::BufferDataARB = reinterpret_cast<vtkgl::PFNGLBUFFERDATAARBPROC>(manager->GetProcAddress("glBufferDataARB"));
    vtkgl::BufferSubDataARB = reinterpret_cast<vtkgl::PFNGLBUFFERSUBDATAARBPROC>(manager->GetProcAddress("glBufferSubDataARB"));
    vtkgl::GetBufferSubDataARB = reinterpret_cast<vtkgl::PFNGLGETBUFFERSUBDATAARBPROC>(manager->GetProcAddress("glGetBufferSubDataARB"));
    vtkgl::MapBufferARB = reinterpret_cast<vtkgl::PFNGLMAPBUFFERARBPROC>(manager->GetProcAddress("glMapBufferARB"));
    vtkgl::UnmapBufferARB = reinterpret_cast<vtkgl::PFNGLUNMAPBUFFERARBPROC>(manager->GetProcAddress("glUnmapBufferARB"));
    vtkgl::GetBufferParameterivARB = reinterpret_cast<vtkgl::PFNGLGETBUFFERPARAMETERIVARBPROC>(manager->GetProcAddress("glGetBufferParameterivARB"));
    vtkgl::GetBufferPointervARB = reinterpret_cast<vtkgl::PFNGLGETBUFFERPOINTERVARBPROC>(manager->GetProcAddress("glGetBufferPointervARB"));
    return 1 && (vtkgl::BindBufferARB != NULL) && (vtkgl::DeleteBuffersARB != NULL) && (vtkgl::GenBuffersARB != NULL) && (vtkgl::IsBufferARB != NULL) && (vtkgl::BufferDataARB != NULL) && (vtkgl::BufferSubDataARB != NULL) && (vtkgl::GetBufferSubDataARB != NULL) && (vtkgl::MapBufferARB != NULL) && (vtkgl::UnmapBufferARB != NULL) && (vtkgl::GetBufferParameterivARB != NULL) && (vtkgl::GetBufferPointervARB != NULL);
    }
  if (strcmp(name, "GL_ARB_occlusion_query") == 0)
    {
    vtkgl::GenQueriesARB = reinterpret_cast<vtkgl::PFNGLGENQUERIESARBPROC>(manager->GetProcAddress("glGenQueriesARB"));
    vtkgl::DeleteQueriesARB = reinterpret_cast<vtkgl::PFNGLDELETEQUERIESARBPROC>(manager->GetProcAddress("glDeleteQueriesARB"));
    vtkgl::IsQueryARB = reinterpret_cast<vtkgl::PFNGLISQUERYARBPROC>(manager->GetProcAddress("glIsQueryARB"));
    vtkgl::BeginQueryARB = reinterpret_cast<vtkgl::PFNGLBEGINQUERYARBPROC>(manager->GetProcAddress("glBeginQueryARB"));
    vtkgl::EndQueryARB = reinterpret_cast<vtkgl::PFNGLENDQUERYARBPROC>(manager->GetProcAddress("glEndQueryARB"));
    vtkgl::GetQueryivARB = reinterpret_cast<vtkgl::PFNGLGETQUERYIVARBPROC>(manager->GetProcAddress("glGetQueryivARB"));
    vtkgl::GetQueryObjectivARB = reinterpret_cast<vtkgl::PFNGLGETQUERYOBJECTIVARBPROC>(manager->GetProcAddress("glGetQueryObjectivARB"));
    vtkgl::GetQueryObjectuivARB = reinterpret_cast<vtkgl::PFNGLGETQUERYOBJECTUIVARBPROC>(manager->GetProcAddress("glGetQueryObjectuivARB"));
    return 1 && (vtkgl::GenQueriesARB != NULL) && (vtkgl::DeleteQueriesARB != NULL) && (vtkgl::IsQueryARB != NULL) && (vtkgl::BeginQueryARB != NULL) && (vtkgl::EndQueryARB != NULL) && (vtkgl::GetQueryivARB != NULL) && (vtkgl::GetQueryObjectivARB != NULL) && (vtkgl::GetQueryObjectuivARB != NULL);
    }
  if (strcmp(name, "GL_ARB_shader_objects") == 0)
    {
    vtkgl::DeleteObjectARB = reinterpret_cast<vtkgl::PFNGLDELETEOBJECTARBPROC>(manager->GetProcAddress("glDeleteObjectARB"));
    vtkgl::GetHandleARB = reinterpret_cast<vtkgl::PFNGLGETHANDLEARBPROC>(manager->GetProcAddress("glGetHandleARB"));
    vtkgl::DetachObjectARB = reinterpret_cast<vtkgl::PFNGLDETACHOBJECTARBPROC>(manager->GetProcAddress("glDetachObjectARB"));
    vtkgl::CreateShaderObjectARB = reinterpret_cast<vtkgl::PFNGLCREATESHADEROBJECTARBPROC>(manager->GetProcAddress("glCreateShaderObjectARB"));
    vtkgl::ShaderSourceARB = reinterpret_cast<vtkgl::PFNGLSHADERSOURCEARBPROC>(manager->GetProcAddress("glShaderSourceARB"));
    vtkgl::CompileShaderARB = reinterpret_cast<vtkgl::PFNGLCOMPILESHADERARBPROC>(manager->GetProcAddress("glCompileShaderARB"));
    vtkgl::CreateProgramObjectARB = reinterpret_cast<vtkgl::PFNGLCREATEPROGRAMOBJECTARBPROC>(manager->GetProcAddress("glCreateProgramObjectARB"));
    vtkgl::AttachObjectARB = reinterpret_cast<vtkgl::PFNGLATTACHOBJECTARBPROC>(manager->GetProcAddress("glAttachObjectARB"));
    vtkgl::LinkProgramARB = reinterpret_cast<vtkgl::PFNGLLINKPROGRAMARBPROC>(manager->GetProcAddress("glLinkProgramARB"));
    vtkgl::UseProgramObjectARB = reinterpret_cast<vtkgl::PFNGLUSEPROGRAMOBJECTARBPROC>(manager->GetProcAddress("glUseProgramObjectARB"));
    vtkgl::ValidateProgramARB = reinterpret_cast<vtkgl::PFNGLVALIDATEPROGRAMARBPROC>(manager->GetProcAddress("glValidateProgramARB"));
    vtkgl::Uniform1fARB = reinterpret_cast<vtkgl::PFNGLUNIFORM1FARBPROC>(manager->GetProcAddress("glUniform1fARB"));
    vtkgl::Uniform2fARB = reinterpret_cast<vtkgl::PFNGLUNIFORM2FARBPROC>(manager->GetProcAddress("glUniform2fARB"));
    vtkgl::Uniform3fARB = reinterpret_cast<vtkgl::PFNGLUNIFORM3FARBPROC>(manager->GetProcAddress("glUniform3fARB"));
    vtkgl::Uniform4fARB = reinterpret_cast<vtkgl::PFNGLUNIFORM4FARBPROC>(manager->GetProcAddress("glUniform4fARB"));
    vtkgl::Uniform1iARB = reinterpret_cast<vtkgl::PFNGLUNIFORM1IARBPROC>(manager->GetProcAddress("glUniform1iARB"));
    vtkgl::Uniform2iARB = reinterpret_cast<vtkgl::PFNGLUNIFORM2IARBPROC>(manager->GetProcAddress("glUniform2iARB"));
    vtkgl::Uniform3iARB = reinterpret_cast<vtkgl::PFNGLUNIFORM3IARBPROC>(manager->GetProcAddress("glUniform3iARB"));
    vtkgl::Uniform4iARB = reinterpret_cast<vtkgl::PFNGLUNIFORM4IARBPROC>(manager->GetProcAddress("glUniform4iARB"));
    vtkgl::Uniform1fvARB = reinterpret_cast<vtkgl::PFNGLUNIFORM1FVARBPROC>(manager->GetProcAddress("glUniform1fvARB"));
    vtkgl::Uniform2fvARB = reinterpret_cast<vtkgl::PFNGLUNIFORM2FVARBPROC>(manager->GetProcAddress("glUniform2fvARB"));
    vtkgl::Uniform3fvARB = reinterpret_cast<vtkgl::PFNGLUNIFORM3FVARBPROC>(manager->GetProcAddress("glUniform3fvARB"));
    vtkgl::Uniform4fvARB = reinterpret_cast<vtkgl::PFNGLUNIFORM4FVARBPROC>(manager->GetProcAddress("glUniform4fvARB"));
    vtkgl::Uniform1ivARB = reinterpret_cast<vtkgl::PFNGLUNIFORM1IVARBPROC>(manager->GetProcAddress("glUniform1ivARB"));
    vtkgl::Uniform2ivARB = reinterpret_cast<vtkgl::PFNGLUNIFORM2IVARBPROC>(manager->GetProcAddress("glUniform2ivARB"));
    vtkgl::Uniform3ivARB = reinterpret_cast<vtkgl::PFNGLUNIFORM3IVARBPROC>(manager->GetProcAddress("glUniform3ivARB"));
    vtkgl::Uniform4ivARB = reinterpret_cast<vtkgl::PFNGLUNIFORM4IVARBPROC>(manager->GetProcAddress("glUniform4ivARB"));
    vtkgl::UniformMatrix2fvARB = reinterpret_cast<vtkgl::PFNGLUNIFORMMATRIX2FVARBPROC>(manager->GetProcAddress("glUniformMatrix2fvARB"));
    vtkgl::UniformMatrix3fvARB = reinterpret_cast<vtkgl::PFNGLUNIFORMMATRIX3FVARBPROC>(manager->GetProcAddress("glUniformMatrix3fvARB"));
    vtkgl::UniformMatrix4fvARB = reinterpret_cast<vtkgl::PFNGLUNIFORMMATRIX4FVARBPROC>(manager->GetProcAddress("glUniformMatrix4fvARB"));
    vtkgl::GetObjectParameterfvARB = reinterpret_cast<vtkgl::PFNGLGETOBJECTPARAMETERFVARBPROC>(manager->GetProcAddress("glGetObjectParameterfvARB"));
    vtkgl::GetObjectParameterivARB = reinterpret_cast<vtkgl::PFNGLGETOBJECTPARAMETERIVARBPROC>(manager->GetProcAddress("glGetObjectParameterivARB"));
    vtkgl::GetInfoLogARB = reinterpret_cast<vtkgl::PFNGLGETINFOLOGARBPROC>(manager->GetProcAddress("glGetInfoLogARB"));
    vtkgl::GetAttachedObjectsARB = reinterpret_cast<vtkgl::PFNGLGETATTACHEDOBJECTSARBPROC>(manager->GetProcAddress("glGetAttachedObjectsARB"));
    vtkgl::GetUniformLocationARB = reinterpret_cast<vtkgl::PFNGLGETUNIFORMLOCATIONARBPROC>(manager->GetProcAddress("glGetUniformLocationARB"));
    vtkgl::GetActiveUniformARB = reinterpret_cast<vtkgl::PFNGLGETACTIVEUNIFORMARBPROC>(manager->GetProcAddress("glGetActiveUniformARB"));
    vtkgl::GetUniformfvARB = reinterpret_cast<vtkgl::PFNGLGETUNIFORMFVARBPROC>(manager->GetProcAddress("glGetUniformfvARB"));
    vtkgl::GetUniformivARB = reinterpret_cast<vtkgl::PFNGLGETUNIFORMIVARBPROC>(manager->GetProcAddress("glGetUniformivARB"));
    vtkgl::GetShaderSourceARB = reinterpret_cast<vtkgl::PFNGLGETSHADERSOURCEARBPROC>(manager->GetProcAddress("glGetShaderSourceARB"));
    return 1 && (vtkgl::DeleteObjectARB != NULL) && (vtkgl::GetHandleARB != NULL) && (vtkgl::DetachObjectARB != NULL) && (vtkgl::CreateShaderObjectARB != NULL) && (vtkgl::ShaderSourceARB != NULL) && (vtkgl::CompileShaderARB != NULL) && (vtkgl::CreateProgramObjectARB != NULL) && (vtkgl::AttachObjectARB != NULL) && (vtkgl::LinkProgramARB != NULL) && (vtkgl::UseProgramObjectARB != NULL) && (vtkgl::ValidateProgramARB != NULL) && (vtkgl::Uniform1fARB != NULL) && (vtkgl::Uniform2fARB != NULL) && (vtkgl::Uniform3fARB != NULL) && (vtkgl::Uniform4fARB != NULL) && (vtkgl::Uniform1iARB != NULL) && (vtkgl::Uniform2iARB != NULL) && (vtkgl::Uniform3iARB != NULL) && (vtkgl::Uniform4iARB != NULL) && (vtkgl::Uniform1fvARB != NULL) && (vtkgl::Uniform2fvARB != NULL) && (vtkgl::Uniform3fvARB != NULL) && (vtkgl::Uniform4fvARB != NULL) && (vtkgl::Uniform1ivARB != NULL) && (vtkgl::Uniform2ivARB != NULL) && (vtkgl::Uniform3ivARB != NULL) && (vtkgl::Uniform4ivARB != NULL) && (vtkgl::UniformMatrix2fvARB != NULL) && (vtkgl::UniformMatrix3fvARB != NULL) && (vtkgl::UniformMatrix4fvARB != NULL) && (vtkgl::GetObjectParameterfvARB != NULL) && (vtkgl::GetObjectParameterivARB != NULL) && (vtkgl::GetInfoLogARB != NULL) && (vtkgl::GetAttachedObjectsARB != NULL) && (vtkgl::GetUniformLocationARB != NULL) && (vtkgl::GetActiveUniformARB != NULL) && (vtkgl::GetUniformfvARB != NULL) && (vtkgl::GetUniformivARB != NULL) && (vtkgl::GetShaderSourceARB != NULL);
    }
  if (strcmp(name, "GL_ARB_vertex_shader") == 0)
    {
    vtkgl::BindAttribLocationARB = reinterpret_cast<vtkgl::PFNGLBINDATTRIBLOCATIONARBPROC>(manager->GetProcAddress("glBindAttribLocationARB"));
    vtkgl::GetActiveAttribARB = reinterpret_cast<vtkgl::PFNGLGETACTIVEATTRIBARBPROC>(manager->GetProcAddress("glGetActiveAttribARB"));
    vtkgl::GetAttribLocationARB = reinterpret_cast<vtkgl::PFNGLGETATTRIBLOCATIONARBPROC>(manager->GetProcAddress("glGetAttribLocationARB"));
    return 1 && (vtkgl::BindAttribLocationARB != NULL) && (vtkgl::GetActiveAttribARB != NULL) && (vtkgl::GetAttribLocationARB != NULL);
    }
  if (strcmp(name, "GL_ARB_fragment_shader") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_shading_language_100") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_texture_non_power_of_two") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_point_sprite") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_fragment_program_shadow") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_draw_buffers") == 0)
    {
    vtkgl::DrawBuffersARB = reinterpret_cast<vtkgl::PFNGLDRAWBUFFERSARBPROC>(manager->GetProcAddress("glDrawBuffersARB"));
    return 1 && (vtkgl::DrawBuffersARB != NULL);
    }
  if (strcmp(name, "GL_ARB_texture_rectangle") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_color_buffer_float") == 0)
    {
    vtkgl::ClampColorARB = reinterpret_cast<vtkgl::PFNGLCLAMPCOLORARBPROC>(manager->GetProcAddress("glClampColorARB"));
    return 1 && (vtkgl::ClampColorARB != NULL);
    }
  if (strcmp(name, "GL_ARB_half_float_pixel") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_texture_float") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_pixel_buffer_object") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_depth_buffer_float") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_draw_instanced") == 0)
    {
    vtkgl::DrawArraysInstancedARB = reinterpret_cast<vtkgl::PFNGLDRAWARRAYSINSTANCEDARBPROC>(manager->GetProcAddress("glDrawArraysInstancedARB"));
    vtkgl::DrawElementsInstancedARB = reinterpret_cast<vtkgl::PFNGLDRAWELEMENTSINSTANCEDARBPROC>(manager->GetProcAddress("glDrawElementsInstancedARB"));
    return 1 && (vtkgl::DrawArraysInstancedARB != NULL) && (vtkgl::DrawElementsInstancedARB != NULL);
    }
  if (strcmp(name, "GL_ARB_framebuffer_object") == 0)
    {
    vtkgl::IsRenderbuffer = reinterpret_cast<vtkgl::PFNGLISRENDERBUFFERPROC>(manager->GetProcAddress("glIsRenderbuffer"));
    vtkgl::BindRenderbuffer = reinterpret_cast<vtkgl::PFNGLBINDRENDERBUFFERPROC>(manager->GetProcAddress("glBindRenderbuffer"));
    vtkgl::DeleteRenderbuffers = reinterpret_cast<vtkgl::PFNGLDELETERENDERBUFFERSPROC>(manager->GetProcAddress("glDeleteRenderbuffers"));
    vtkgl::GenRenderbuffers = reinterpret_cast<vtkgl::PFNGLGENRENDERBUFFERSPROC>(manager->GetProcAddress("glGenRenderbuffers"));
    vtkgl::RenderbufferStorage = reinterpret_cast<vtkgl::PFNGLRENDERBUFFERSTORAGEPROC>(manager->GetProcAddress("glRenderbufferStorage"));
    vtkgl::GetRenderbufferParameteriv = reinterpret_cast<vtkgl::PFNGLGETRENDERBUFFERPARAMETERIVPROC>(manager->GetProcAddress("glGetRenderbufferParameteriv"));
    vtkgl::IsFramebuffer = reinterpret_cast<vtkgl::PFNGLISFRAMEBUFFERPROC>(manager->GetProcAddress("glIsFramebuffer"));
    vtkgl::BindFramebuffer = reinterpret_cast<vtkgl::PFNGLBINDFRAMEBUFFERPROC>(manager->GetProcAddress("glBindFramebuffer"));
    vtkgl::DeleteFramebuffers = reinterpret_cast<vtkgl::PFNGLDELETEFRAMEBUFFERSPROC>(manager->GetProcAddress("glDeleteFramebuffers"));
    vtkgl::GenFramebuffers = reinterpret_cast<vtkgl::PFNGLGENFRAMEBUFFERSPROC>(manager->GetProcAddress("glGenFramebuffers"));
    vtkgl::CheckFramebufferStatus = reinterpret_cast<vtkgl::PFNGLCHECKFRAMEBUFFERSTATUSPROC>(manager->GetProcAddress("glCheckFramebufferStatus"));
    vtkgl::FramebufferTexture1D = reinterpret_cast<vtkgl::PFNGLFRAMEBUFFERTEXTURE1DPROC>(manager->GetProcAddress("glFramebufferTexture1D"));
    vtkgl::FramebufferTexture2D = reinterpret_cast<vtkgl::PFNGLFRAMEBUFFERTEXTURE2DPROC>(manager->GetProcAddress("glFramebufferTexture2D"));
    vtkgl::FramebufferTexture3D = reinterpret_cast<vtkgl::PFNGLFRAMEBUFFERTEXTURE3DPROC>(manager->GetProcAddress("glFramebufferTexture3D"));
    vtkgl::FramebufferRenderbuffer = reinterpret_cast<vtkgl::PFNGLFRAMEBUFFERRENDERBUFFERPROC>(manager->GetProcAddress("glFramebufferRenderbuffer"));
    vtkgl::GetFramebufferAttachmentParameteriv = reinterpret_cast<vtkgl::PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC>(manager->GetProcAddress("glGetFramebufferAttachmentParameteriv"));
    vtkgl::GenerateMipmap = reinterpret_cast<vtkgl::PFNGLGENERATEMIPMAPPROC>(manager->GetProcAddress("glGenerateMipmap"));
    vtkgl::BlitFramebuffer = reinterpret_cast<vtkgl::PFNGLBLITFRAMEBUFFERPROC>(manager->GetProcAddress("glBlitFramebuffer"));
    vtkgl::RenderbufferStorageMultisample = reinterpret_cast<vtkgl::PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC>(manager->GetProcAddress("glRenderbufferStorageMultisample"));
    vtkgl::FramebufferTextureLayer = reinterpret_cast<vtkgl::PFNGLFRAMEBUFFERTEXTURELAYERPROC>(manager->GetProcAddress("glFramebufferTextureLayer"));
    return 1 && (vtkgl::IsRenderbuffer != NULL) && (vtkgl::BindRenderbuffer != NULL) && (vtkgl::DeleteRenderbuffers != NULL) && (vtkgl::GenRenderbuffers != NULL) && (vtkgl::RenderbufferStorage != NULL) && (vtkgl::GetRenderbufferParameteriv != NULL) && (vtkgl::IsFramebuffer != NULL) && (vtkgl::BindFramebuffer != NULL) && (vtkgl::DeleteFramebuffers != NULL) && (vtkgl::GenFramebuffers != NULL) && (vtkgl::CheckFramebufferStatus != NULL) && (vtkgl::FramebufferTexture1D != NULL) && (vtkgl::FramebufferTexture2D != NULL) && (vtkgl::FramebufferTexture3D != NULL) && (vtkgl::FramebufferRenderbuffer != NULL) && (vtkgl::GetFramebufferAttachmentParameteriv != NULL) && (vtkgl::GenerateMipmap != NULL) && (vtkgl::BlitFramebuffer != NULL) && (vtkgl::RenderbufferStorageMultisample != NULL) && (vtkgl::FramebufferTextureLayer != NULL);
    }
  if (strcmp(name, "GL_ARB_framebuffer_object_DEPRECATED") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_framebuffer_sRGB") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_geometry_shader4") == 0)
    {
    vtkgl::ProgramParameteriARB = reinterpret_cast<vtkgl::PFNGLPROGRAMPARAMETERIARBPROC>(manager->GetProcAddress("glProgramParameteriARB"));
    vtkgl::FramebufferTextureARB = reinterpret_cast<vtkgl::PFNGLFRAMEBUFFERTEXTUREARBPROC>(manager->GetProcAddress("glFramebufferTextureARB"));
    vtkgl::FramebufferTextureLayerARB = reinterpret_cast<vtkgl::PFNGLFRAMEBUFFERTEXTURELAYERARBPROC>(manager->GetProcAddress("glFramebufferTextureLayerARB"));
    vtkgl::FramebufferTextureFaceARB = reinterpret_cast<vtkgl::PFNGLFRAMEBUFFERTEXTUREFACEARBPROC>(manager->GetProcAddress("glFramebufferTextureFaceARB"));
    return 1 && (vtkgl::ProgramParameteriARB != NULL) && (vtkgl::FramebufferTextureARB != NULL) && (vtkgl::FramebufferTextureLayerARB != NULL) && (vtkgl::FramebufferTextureFaceARB != NULL);
    }
  if (strcmp(name, "GL_ARB_half_float_vertex") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_instanced_arrays") == 0)
    {
    vtkgl::VertexAttribDivisorARB = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBDIVISORARBPROC>(manager->GetProcAddress("glVertexAttribDivisorARB"));
    return 1 && (vtkgl::VertexAttribDivisorARB != NULL);
    }
  if (strcmp(name, "GL_ARB_map_buffer_range") == 0)
    {
    vtkgl::MapBufferRange = reinterpret_cast<vtkgl::PFNGLMAPBUFFERRANGEPROC>(manager->GetProcAddress("glMapBufferRange"));
    vtkgl::FlushMappedBufferRange = reinterpret_cast<vtkgl::PFNGLFLUSHMAPPEDBUFFERRANGEPROC>(manager->GetProcAddress("glFlushMappedBufferRange"));
    return 1 && (vtkgl::MapBufferRange != NULL) && (vtkgl::FlushMappedBufferRange != NULL);
    }
  if (strcmp(name, "GL_ARB_texture_buffer_object") == 0)
    {
    vtkgl::TexBufferARB = reinterpret_cast<vtkgl::PFNGLTEXBUFFERARBPROC>(manager->GetProcAddress("glTexBufferARB"));
    return 1 && (vtkgl::TexBufferARB != NULL);
    }
  if (strcmp(name, "GL_ARB_texture_compression_rgtc") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_texture_rg") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_vertex_array_object") == 0)
    {
    vtkgl::BindVertexArray = reinterpret_cast<vtkgl::PFNGLBINDVERTEXARRAYPROC>(manager->GetProcAddress("glBindVertexArray"));
    vtkgl::DeleteVertexArrays = reinterpret_cast<vtkgl::PFNGLDELETEVERTEXARRAYSPROC>(manager->GetProcAddress("glDeleteVertexArrays"));
    vtkgl::GenVertexArrays = reinterpret_cast<vtkgl::PFNGLGENVERTEXARRAYSPROC>(manager->GetProcAddress("glGenVertexArrays"));
    vtkgl::IsVertexArray = reinterpret_cast<vtkgl::PFNGLISVERTEXARRAYPROC>(manager->GetProcAddress("glIsVertexArray"));
    return 1 && (vtkgl::BindVertexArray != NULL) && (vtkgl::DeleteVertexArrays != NULL) && (vtkgl::GenVertexArrays != NULL) && (vtkgl::IsVertexArray != NULL);
    }
  if (strcmp(name, "GL_ARB_uniform_buffer_object") == 0)
    {
    vtkgl::GetUniformIndices = reinterpret_cast<vtkgl::PFNGLGETUNIFORMINDICESPROC>(manager->GetProcAddress("glGetUniformIndices"));
    vtkgl::GetActiveUniformsiv = reinterpret_cast<vtkgl::PFNGLGETACTIVEUNIFORMSIVPROC>(manager->GetProcAddress("glGetActiveUniformsiv"));
    vtkgl::GetActiveUniformName = reinterpret_cast<vtkgl::PFNGLGETACTIVEUNIFORMNAMEPROC>(manager->GetProcAddress("glGetActiveUniformName"));
    vtkgl::GetUniformBlockIndex = reinterpret_cast<vtkgl::PFNGLGETUNIFORMBLOCKINDEXPROC>(manager->GetProcAddress("glGetUniformBlockIndex"));
    vtkgl::GetActiveUniformBlockiv = reinterpret_cast<vtkgl::PFNGLGETACTIVEUNIFORMBLOCKIVPROC>(manager->GetProcAddress("glGetActiveUniformBlockiv"));
    vtkgl::GetActiveUniformBlockName = reinterpret_cast<vtkgl::PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC>(manager->GetProcAddress("glGetActiveUniformBlockName"));
    vtkgl::UniformBlockBinding = reinterpret_cast<vtkgl::PFNGLUNIFORMBLOCKBINDINGPROC>(manager->GetProcAddress("glUniformBlockBinding"));
    return 1 && (vtkgl::GetUniformIndices != NULL) && (vtkgl::GetActiveUniformsiv != NULL) && (vtkgl::GetActiveUniformName != NULL) && (vtkgl::GetUniformBlockIndex != NULL) && (vtkgl::GetActiveUniformBlockiv != NULL) && (vtkgl::GetActiveUniformBlockName != NULL) && (vtkgl::UniformBlockBinding != NULL);
    }
  if (strcmp(name, "GL_ARB_compatibility") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_copy_buffer") == 0)
    {
    vtkgl::CopyBufferSubData = reinterpret_cast<vtkgl::PFNGLCOPYBUFFERSUBDATAPROC>(manager->GetProcAddress("glCopyBufferSubData"));
    return 1 && (vtkgl::CopyBufferSubData != NULL);
    }
  if (strcmp(name, "GL_ARB_shader_texture_lod") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_depth_clamp") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_draw_elements_base_vertex") == 0)
    {
    vtkgl::DrawElementsBaseVertex = reinterpret_cast<vtkgl::PFNGLDRAWELEMENTSBASEVERTEXPROC>(manager->GetProcAddress("glDrawElementsBaseVertex"));
    vtkgl::DrawRangeElementsBaseVertex = reinterpret_cast<vtkgl::PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC>(manager->GetProcAddress("glDrawRangeElementsBaseVertex"));
    vtkgl::DrawElementsInstancedBaseVertex = reinterpret_cast<vtkgl::PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC>(manager->GetProcAddress("glDrawElementsInstancedBaseVertex"));
    vtkgl::MultiDrawElementsBaseVertex = reinterpret_cast<vtkgl::PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC>(manager->GetProcAddress("glMultiDrawElementsBaseVertex"));
    return 1 && (vtkgl::DrawElementsBaseVertex != NULL) && (vtkgl::DrawRangeElementsBaseVertex != NULL) && (vtkgl::DrawElementsInstancedBaseVertex != NULL) && (vtkgl::MultiDrawElementsBaseVertex != NULL);
    }
  if (strcmp(name, "GL_ARB_fragment_coord_conventions") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_provoking_vertex") == 0)
    {
    vtkgl::ProvokingVertex = reinterpret_cast<vtkgl::PFNGLPROVOKINGVERTEXPROC>(manager->GetProcAddress("glProvokingVertex"));
    return 1 && (vtkgl::ProvokingVertex != NULL);
    }
  if (strcmp(name, "GL_ARB_seamless_cube_map") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_sync") == 0)
    {
    vtkgl::FenceSync = reinterpret_cast<vtkgl::PFNGLFENCESYNCPROC>(manager->GetProcAddress("glFenceSync"));
    vtkgl::IsSync = reinterpret_cast<vtkgl::PFNGLISSYNCPROC>(manager->GetProcAddress("glIsSync"));
    vtkgl::DeleteSync = reinterpret_cast<vtkgl::PFNGLDELETESYNCPROC>(manager->GetProcAddress("glDeleteSync"));
    vtkgl::ClientWaitSync = reinterpret_cast<vtkgl::PFNGLCLIENTWAITSYNCPROC>(manager->GetProcAddress("glClientWaitSync"));
    vtkgl::WaitSync = reinterpret_cast<vtkgl::PFNGLWAITSYNCPROC>(manager->GetProcAddress("glWaitSync"));
    vtkgl::GetInteger64v = reinterpret_cast<vtkgl::PFNGLGETINTEGER64VPROC>(manager->GetProcAddress("glGetInteger64v"));
    vtkgl::GetSynciv = reinterpret_cast<vtkgl::PFNGLGETSYNCIVPROC>(manager->GetProcAddress("glGetSynciv"));
    return 1 && (vtkgl::FenceSync != NULL) && (vtkgl::IsSync != NULL) && (vtkgl::DeleteSync != NULL) && (vtkgl::ClientWaitSync != NULL) && (vtkgl::WaitSync != NULL) && (vtkgl::GetInteger64v != NULL) && (vtkgl::GetSynciv != NULL);
    }
  if (strcmp(name, "GL_ARB_texture_multisample") == 0)
    {
    vtkgl::TexImage2DMultisample = reinterpret_cast<vtkgl::PFNGLTEXIMAGE2DMULTISAMPLEPROC>(manager->GetProcAddress("glTexImage2DMultisample"));
    vtkgl::TexImage3DMultisample = reinterpret_cast<vtkgl::PFNGLTEXIMAGE3DMULTISAMPLEPROC>(manager->GetProcAddress("glTexImage3DMultisample"));
    vtkgl::GetMultisamplefv = reinterpret_cast<vtkgl::PFNGLGETMULTISAMPLEFVPROC>(manager->GetProcAddress("glGetMultisamplefv"));
    vtkgl::SampleMaski = reinterpret_cast<vtkgl::PFNGLSAMPLEMASKIPROC>(manager->GetProcAddress("glSampleMaski"));
    return 1 && (vtkgl::TexImage2DMultisample != NULL) && (vtkgl::TexImage3DMultisample != NULL) && (vtkgl::GetMultisamplefv != NULL) && (vtkgl::SampleMaski != NULL);
    }
  if (strcmp(name, "GL_ARB_vertex_array_bgra") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_draw_buffers_blend") == 0)
    {
    vtkgl::BlendEquationiARB = reinterpret_cast<vtkgl::PFNGLBLENDEQUATIONIARBPROC>(manager->GetProcAddress("glBlendEquationiARB"));
    vtkgl::BlendEquationSeparateiARB = reinterpret_cast<vtkgl::PFNGLBLENDEQUATIONSEPARATEIARBPROC>(manager->GetProcAddress("glBlendEquationSeparateiARB"));
    vtkgl::BlendFunciARB = reinterpret_cast<vtkgl::PFNGLBLENDFUNCIARBPROC>(manager->GetProcAddress("glBlendFunciARB"));
    vtkgl::BlendFuncSeparateiARB = reinterpret_cast<vtkgl::PFNGLBLENDFUNCSEPARATEIARBPROC>(manager->GetProcAddress("glBlendFuncSeparateiARB"));
    return 1 && (vtkgl::BlendEquationiARB != NULL) && (vtkgl::BlendEquationSeparateiARB != NULL) && (vtkgl::BlendFunciARB != NULL) && (vtkgl::BlendFuncSeparateiARB != NULL);
    }
  if (strcmp(name, "GL_ARB_sample_shading") == 0)
    {
    vtkgl::MinSampleShadingARB = reinterpret_cast<vtkgl::PFNGLMINSAMPLESHADINGARBPROC>(manager->GetProcAddress("glMinSampleShadingARB"));
    return 1 && (vtkgl::MinSampleShadingARB != NULL);
    }
  if (strcmp(name, "GL_ARB_texture_cube_map_array") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_texture_gather") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_texture_query_lod") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_shading_language_include") == 0)
    {
    vtkgl::NamedStringARB = reinterpret_cast<vtkgl::PFNGLNAMEDSTRINGARBPROC>(manager->GetProcAddress("glNamedStringARB"));
    vtkgl::DeleteNamedStringARB = reinterpret_cast<vtkgl::PFNGLDELETENAMEDSTRINGARBPROC>(manager->GetProcAddress("glDeleteNamedStringARB"));
    vtkgl::CompileShaderIncludeARB = reinterpret_cast<vtkgl::PFNGLCOMPILESHADERINCLUDEARBPROC>(manager->GetProcAddress("glCompileShaderIncludeARB"));
    vtkgl::IsNamedStringARB = reinterpret_cast<vtkgl::PFNGLISNAMEDSTRINGARBPROC>(manager->GetProcAddress("glIsNamedStringARB"));
    vtkgl::GetNamedStringARB = reinterpret_cast<vtkgl::PFNGLGETNAMEDSTRINGARBPROC>(manager->GetProcAddress("glGetNamedStringARB"));
    vtkgl::GetNamedStringivARB = reinterpret_cast<vtkgl::PFNGLGETNAMEDSTRINGIVARBPROC>(manager->GetProcAddress("glGetNamedStringivARB"));
    return 1 && (vtkgl::NamedStringARB != NULL) && (vtkgl::DeleteNamedStringARB != NULL) && (vtkgl::CompileShaderIncludeARB != NULL) && (vtkgl::IsNamedStringARB != NULL) && (vtkgl::GetNamedStringARB != NULL) && (vtkgl::GetNamedStringivARB != NULL);
    }
  if (strcmp(name, "GL_ARB_texture_compression_bptc") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_blend_func_extended") == 0)
    {
    vtkgl::BindFragDataLocationIndexed = reinterpret_cast<vtkgl::PFNGLBINDFRAGDATALOCATIONINDEXEDPROC>(manager->GetProcAddress("glBindFragDataLocationIndexed"));
    vtkgl::GetFragDataIndex = reinterpret_cast<vtkgl::PFNGLGETFRAGDATAINDEXPROC>(manager->GetProcAddress("glGetFragDataIndex"));
    return 1 && (vtkgl::BindFragDataLocationIndexed != NULL) && (vtkgl::GetFragDataIndex != NULL);
    }
  if (strcmp(name, "GL_ARB_explicit_attrib_location") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_occlusion_query2") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_sampler_objects") == 0)
    {
    vtkgl::GenSamplers = reinterpret_cast<vtkgl::PFNGLGENSAMPLERSPROC>(manager->GetProcAddress("glGenSamplers"));
    vtkgl::DeleteSamplers = reinterpret_cast<vtkgl::PFNGLDELETESAMPLERSPROC>(manager->GetProcAddress("glDeleteSamplers"));
    vtkgl::IsSampler = reinterpret_cast<vtkgl::PFNGLISSAMPLERPROC>(manager->GetProcAddress("glIsSampler"));
    vtkgl::BindSampler = reinterpret_cast<vtkgl::PFNGLBINDSAMPLERPROC>(manager->GetProcAddress("glBindSampler"));
    vtkgl::SamplerParameteri = reinterpret_cast<vtkgl::PFNGLSAMPLERPARAMETERIPROC>(manager->GetProcAddress("glSamplerParameteri"));
    vtkgl::SamplerParameteriv = reinterpret_cast<vtkgl::PFNGLSAMPLERPARAMETERIVPROC>(manager->GetProcAddress("glSamplerParameteriv"));
    vtkgl::SamplerParameterf = reinterpret_cast<vtkgl::PFNGLSAMPLERPARAMETERFPROC>(manager->GetProcAddress("glSamplerParameterf"));
    vtkgl::SamplerParameterfv = reinterpret_cast<vtkgl::PFNGLSAMPLERPARAMETERFVPROC>(manager->GetProcAddress("glSamplerParameterfv"));
    vtkgl::SamplerParameterIiv = reinterpret_cast<vtkgl::PFNGLSAMPLERPARAMETERIIVPROC>(manager->GetProcAddress("glSamplerParameterIiv"));
    vtkgl::SamplerParameterIuiv = reinterpret_cast<vtkgl::PFNGLSAMPLERPARAMETERIUIVPROC>(manager->GetProcAddress("glSamplerParameterIuiv"));
    vtkgl::GetSamplerParameteriv = reinterpret_cast<vtkgl::PFNGLGETSAMPLERPARAMETERIVPROC>(manager->GetProcAddress("glGetSamplerParameteriv"));
    vtkgl::GetSamplerParameterIiv = reinterpret_cast<vtkgl::PFNGLGETSAMPLERPARAMETERIIVPROC>(manager->GetProcAddress("glGetSamplerParameterIiv"));
    vtkgl::GetSamplerParameterfv = reinterpret_cast<vtkgl::PFNGLGETSAMPLERPARAMETERFVPROC>(manager->GetProcAddress("glGetSamplerParameterfv"));
    vtkgl::GetSamplerParameterIuiv = reinterpret_cast<vtkgl::PFNGLGETSAMPLERPARAMETERIUIVPROC>(manager->GetProcAddress("glGetSamplerParameterIuiv"));
    return 1 && (vtkgl::GenSamplers != NULL) && (vtkgl::DeleteSamplers != NULL) && (vtkgl::IsSampler != NULL) && (vtkgl::BindSampler != NULL) && (vtkgl::SamplerParameteri != NULL) && (vtkgl::SamplerParameteriv != NULL) && (vtkgl::SamplerParameterf != NULL) && (vtkgl::SamplerParameterfv != NULL) && (vtkgl::SamplerParameterIiv != NULL) && (vtkgl::SamplerParameterIuiv != NULL) && (vtkgl::GetSamplerParameteriv != NULL) && (vtkgl::GetSamplerParameterIiv != NULL) && (vtkgl::GetSamplerParameterfv != NULL) && (vtkgl::GetSamplerParameterIuiv != NULL);
    }
  if (strcmp(name, "GL_ARB_shader_bit_encoding") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_texture_rgb10_a2ui") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_texture_swizzle") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_timer_query") == 0)
    {
    vtkgl::QueryCounter = reinterpret_cast<vtkgl::PFNGLQUERYCOUNTERPROC>(manager->GetProcAddress("glQueryCounter"));
    vtkgl::GetQueryObjecti64v = reinterpret_cast<vtkgl::PFNGLGETQUERYOBJECTI64VPROC>(manager->GetProcAddress("glGetQueryObjecti64v"));
    vtkgl::GetQueryObjectui64v = reinterpret_cast<vtkgl::PFNGLGETQUERYOBJECTUI64VPROC>(manager->GetProcAddress("glGetQueryObjectui64v"));
    return 1 && (vtkgl::QueryCounter != NULL) && (vtkgl::GetQueryObjecti64v != NULL) && (vtkgl::GetQueryObjectui64v != NULL);
    }
  if (strcmp(name, "GL_ARB_vertex_type_2_10_10_10_rev") == 0)
    {
    vtkgl::VertexP2ui = reinterpret_cast<vtkgl::PFNGLVERTEXP2UIPROC>(manager->GetProcAddress("glVertexP2ui"));
    vtkgl::VertexP2uiv = reinterpret_cast<vtkgl::PFNGLVERTEXP2UIVPROC>(manager->GetProcAddress("glVertexP2uiv"));
    vtkgl::VertexP3ui = reinterpret_cast<vtkgl::PFNGLVERTEXP3UIPROC>(manager->GetProcAddress("glVertexP3ui"));
    vtkgl::VertexP3uiv = reinterpret_cast<vtkgl::PFNGLVERTEXP3UIVPROC>(manager->GetProcAddress("glVertexP3uiv"));
    vtkgl::VertexP4ui = reinterpret_cast<vtkgl::PFNGLVERTEXP4UIPROC>(manager->GetProcAddress("glVertexP4ui"));
    vtkgl::VertexP4uiv = reinterpret_cast<vtkgl::PFNGLVERTEXP4UIVPROC>(manager->GetProcAddress("glVertexP4uiv"));
    vtkgl::TexCoordP1ui = reinterpret_cast<vtkgl::PFNGLTEXCOORDP1UIPROC>(manager->GetProcAddress("glTexCoordP1ui"));
    vtkgl::TexCoordP1uiv = reinterpret_cast<vtkgl::PFNGLTEXCOORDP1UIVPROC>(manager->GetProcAddress("glTexCoordP1uiv"));
    vtkgl::TexCoordP2ui = reinterpret_cast<vtkgl::PFNGLTEXCOORDP2UIPROC>(manager->GetProcAddress("glTexCoordP2ui"));
    vtkgl::TexCoordP2uiv = reinterpret_cast<vtkgl::PFNGLTEXCOORDP2UIVPROC>(manager->GetProcAddress("glTexCoordP2uiv"));
    vtkgl::TexCoordP3ui = reinterpret_cast<vtkgl::PFNGLTEXCOORDP3UIPROC>(manager->GetProcAddress("glTexCoordP3ui"));
    vtkgl::TexCoordP3uiv = reinterpret_cast<vtkgl::PFNGLTEXCOORDP3UIVPROC>(manager->GetProcAddress("glTexCoordP3uiv"));
    vtkgl::TexCoordP4ui = reinterpret_cast<vtkgl::PFNGLTEXCOORDP4UIPROC>(manager->GetProcAddress("glTexCoordP4ui"));
    vtkgl::TexCoordP4uiv = reinterpret_cast<vtkgl::PFNGLTEXCOORDP4UIVPROC>(manager->GetProcAddress("glTexCoordP4uiv"));
    vtkgl::MultiTexCoordP1ui = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORDP1UIPROC>(manager->GetProcAddress("glMultiTexCoordP1ui"));
    vtkgl::MultiTexCoordP1uiv = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORDP1UIVPROC>(manager->GetProcAddress("glMultiTexCoordP1uiv"));
    vtkgl::MultiTexCoordP2ui = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORDP2UIPROC>(manager->GetProcAddress("glMultiTexCoordP2ui"));
    vtkgl::MultiTexCoordP2uiv = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORDP2UIVPROC>(manager->GetProcAddress("glMultiTexCoordP2uiv"));
    vtkgl::MultiTexCoordP3ui = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORDP3UIPROC>(manager->GetProcAddress("glMultiTexCoordP3ui"));
    vtkgl::MultiTexCoordP3uiv = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORDP3UIVPROC>(manager->GetProcAddress("glMultiTexCoordP3uiv"));
    vtkgl::MultiTexCoordP4ui = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORDP4UIPROC>(manager->GetProcAddress("glMultiTexCoordP4ui"));
    vtkgl::MultiTexCoordP4uiv = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORDP4UIVPROC>(manager->GetProcAddress("glMultiTexCoordP4uiv"));
    vtkgl::NormalP3ui = reinterpret_cast<vtkgl::PFNGLNORMALP3UIPROC>(manager->GetProcAddress("glNormalP3ui"));
    vtkgl::NormalP3uiv = reinterpret_cast<vtkgl::PFNGLNORMALP3UIVPROC>(manager->GetProcAddress("glNormalP3uiv"));
    vtkgl::ColorP3ui = reinterpret_cast<vtkgl::PFNGLCOLORP3UIPROC>(manager->GetProcAddress("glColorP3ui"));
    vtkgl::ColorP3uiv = reinterpret_cast<vtkgl::PFNGLCOLORP3UIVPROC>(manager->GetProcAddress("glColorP3uiv"));
    vtkgl::ColorP4ui = reinterpret_cast<vtkgl::PFNGLCOLORP4UIPROC>(manager->GetProcAddress("glColorP4ui"));
    vtkgl::ColorP4uiv = reinterpret_cast<vtkgl::PFNGLCOLORP4UIVPROC>(manager->GetProcAddress("glColorP4uiv"));
    vtkgl::SecondaryColorP3ui = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLORP3UIPROC>(manager->GetProcAddress("glSecondaryColorP3ui"));
    vtkgl::SecondaryColorP3uiv = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLORP3UIVPROC>(manager->GetProcAddress("glSecondaryColorP3uiv"));
    vtkgl::VertexAttribP1ui = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBP1UIPROC>(manager->GetProcAddress("glVertexAttribP1ui"));
    vtkgl::VertexAttribP1uiv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBP1UIVPROC>(manager->GetProcAddress("glVertexAttribP1uiv"));
    vtkgl::VertexAttribP2ui = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBP2UIPROC>(manager->GetProcAddress("glVertexAttribP2ui"));
    vtkgl::VertexAttribP2uiv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBP2UIVPROC>(manager->GetProcAddress("glVertexAttribP2uiv"));
    vtkgl::VertexAttribP3ui = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBP3UIPROC>(manager->GetProcAddress("glVertexAttribP3ui"));
    vtkgl::VertexAttribP3uiv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBP3UIVPROC>(manager->GetProcAddress("glVertexAttribP3uiv"));
    vtkgl::VertexAttribP4ui = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBP4UIPROC>(manager->GetProcAddress("glVertexAttribP4ui"));
    vtkgl::VertexAttribP4uiv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBP4UIVPROC>(manager->GetProcAddress("glVertexAttribP4uiv"));
    return 1 && (vtkgl::VertexP2ui != NULL) && (vtkgl::VertexP2uiv != NULL) && (vtkgl::VertexP3ui != NULL) && (vtkgl::VertexP3uiv != NULL) && (vtkgl::VertexP4ui != NULL) && (vtkgl::VertexP4uiv != NULL) && (vtkgl::TexCoordP1ui != NULL) && (vtkgl::TexCoordP1uiv != NULL) && (vtkgl::TexCoordP2ui != NULL) && (vtkgl::TexCoordP2uiv != NULL) && (vtkgl::TexCoordP3ui != NULL) && (vtkgl::TexCoordP3uiv != NULL) && (vtkgl::TexCoordP4ui != NULL) && (vtkgl::TexCoordP4uiv != NULL) && (vtkgl::MultiTexCoordP1ui != NULL) && (vtkgl::MultiTexCoordP1uiv != NULL) && (vtkgl::MultiTexCoordP2ui != NULL) && (vtkgl::MultiTexCoordP2uiv != NULL) && (vtkgl::MultiTexCoordP3ui != NULL) && (vtkgl::MultiTexCoordP3uiv != NULL) && (vtkgl::MultiTexCoordP4ui != NULL) && (vtkgl::MultiTexCoordP4uiv != NULL) && (vtkgl::NormalP3ui != NULL) && (vtkgl::NormalP3uiv != NULL) && (vtkgl::ColorP3ui != NULL) && (vtkgl::ColorP3uiv != NULL) && (vtkgl::ColorP4ui != NULL) && (vtkgl::ColorP4uiv != NULL) && (vtkgl::SecondaryColorP3ui != NULL) && (vtkgl::SecondaryColorP3uiv != NULL) && (vtkgl::VertexAttribP1ui != NULL) && (vtkgl::VertexAttribP1uiv != NULL) && (vtkgl::VertexAttribP2ui != NULL) && (vtkgl::VertexAttribP2uiv != NULL) && (vtkgl::VertexAttribP3ui != NULL) && (vtkgl::VertexAttribP3uiv != NULL) && (vtkgl::VertexAttribP4ui != NULL) && (vtkgl::VertexAttribP4uiv != NULL);
    }
  if (strcmp(name, "GL_ARB_draw_indirect") == 0)
    {
    vtkgl::DrawArraysIndirect = reinterpret_cast<vtkgl::PFNGLDRAWARRAYSINDIRECTPROC>(manager->GetProcAddress("glDrawArraysIndirect"));
    vtkgl::DrawElementsIndirect = reinterpret_cast<vtkgl::PFNGLDRAWELEMENTSINDIRECTPROC>(manager->GetProcAddress("glDrawElementsIndirect"));
    return 1 && (vtkgl::DrawArraysIndirect != NULL) && (vtkgl::DrawElementsIndirect != NULL);
    }
  if (strcmp(name, "GL_ARB_gpu_shader5") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_gpu_shader_fp64") == 0)
    {
    vtkgl::Uniform1d = reinterpret_cast<vtkgl::PFNGLUNIFORM1DPROC>(manager->GetProcAddress("glUniform1d"));
    vtkgl::Uniform2d = reinterpret_cast<vtkgl::PFNGLUNIFORM2DPROC>(manager->GetProcAddress("glUniform2d"));
    vtkgl::Uniform3d = reinterpret_cast<vtkgl::PFNGLUNIFORM3DPROC>(manager->GetProcAddress("glUniform3d"));
    vtkgl::Uniform4d = reinterpret_cast<vtkgl::PFNGLUNIFORM4DPROC>(manager->GetProcAddress("glUniform4d"));
    vtkgl::Uniform1dv = reinterpret_cast<vtkgl::PFNGLUNIFORM1DVPROC>(manager->GetProcAddress("glUniform1dv"));
    vtkgl::Uniform2dv = reinterpret_cast<vtkgl::PFNGLUNIFORM2DVPROC>(manager->GetProcAddress("glUniform2dv"));
    vtkgl::Uniform3dv = reinterpret_cast<vtkgl::PFNGLUNIFORM3DVPROC>(manager->GetProcAddress("glUniform3dv"));
    vtkgl::Uniform4dv = reinterpret_cast<vtkgl::PFNGLUNIFORM4DVPROC>(manager->GetProcAddress("glUniform4dv"));
    vtkgl::UniformMatrix2dv = reinterpret_cast<vtkgl::PFNGLUNIFORMMATRIX2DVPROC>(manager->GetProcAddress("glUniformMatrix2dv"));
    vtkgl::UniformMatrix3dv = reinterpret_cast<vtkgl::PFNGLUNIFORMMATRIX3DVPROC>(manager->GetProcAddress("glUniformMatrix3dv"));
    vtkgl::UniformMatrix4dv = reinterpret_cast<vtkgl::PFNGLUNIFORMMATRIX4DVPROC>(manager->GetProcAddress("glUniformMatrix4dv"));
    vtkgl::UniformMatrix2x3dv = reinterpret_cast<vtkgl::PFNGLUNIFORMMATRIX2X3DVPROC>(manager->GetProcAddress("glUniformMatrix2x3dv"));
    vtkgl::UniformMatrix2x4dv = reinterpret_cast<vtkgl::PFNGLUNIFORMMATRIX2X4DVPROC>(manager->GetProcAddress("glUniformMatrix2x4dv"));
    vtkgl::UniformMatrix3x2dv = reinterpret_cast<vtkgl::PFNGLUNIFORMMATRIX3X2DVPROC>(manager->GetProcAddress("glUniformMatrix3x2dv"));
    vtkgl::UniformMatrix3x4dv = reinterpret_cast<vtkgl::PFNGLUNIFORMMATRIX3X4DVPROC>(manager->GetProcAddress("glUniformMatrix3x4dv"));
    vtkgl::UniformMatrix4x2dv = reinterpret_cast<vtkgl::PFNGLUNIFORMMATRIX4X2DVPROC>(manager->GetProcAddress("glUniformMatrix4x2dv"));
    vtkgl::UniformMatrix4x3dv = reinterpret_cast<vtkgl::PFNGLUNIFORMMATRIX4X3DVPROC>(manager->GetProcAddress("glUniformMatrix4x3dv"));
    vtkgl::GetUniformdv = reinterpret_cast<vtkgl::PFNGLGETUNIFORMDVPROC>(manager->GetProcAddress("glGetUniformdv"));
    return 1 && (vtkgl::Uniform1d != NULL) && (vtkgl::Uniform2d != NULL) && (vtkgl::Uniform3d != NULL) && (vtkgl::Uniform4d != NULL) && (vtkgl::Uniform1dv != NULL) && (vtkgl::Uniform2dv != NULL) && (vtkgl::Uniform3dv != NULL) && (vtkgl::Uniform4dv != NULL) && (vtkgl::UniformMatrix2dv != NULL) && (vtkgl::UniformMatrix3dv != NULL) && (vtkgl::UniformMatrix4dv != NULL) && (vtkgl::UniformMatrix2x3dv != NULL) && (vtkgl::UniformMatrix2x4dv != NULL) && (vtkgl::UniformMatrix3x2dv != NULL) && (vtkgl::UniformMatrix3x4dv != NULL) && (vtkgl::UniformMatrix4x2dv != NULL) && (vtkgl::UniformMatrix4x3dv != NULL) && (vtkgl::GetUniformdv != NULL);
    }
  if (strcmp(name, "GL_ARB_shader_subroutine") == 0)
    {
    vtkgl::GetSubroutineUniformLocation = reinterpret_cast<vtkgl::PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC>(manager->GetProcAddress("glGetSubroutineUniformLocation"));
    vtkgl::GetSubroutineIndex = reinterpret_cast<vtkgl::PFNGLGETSUBROUTINEINDEXPROC>(manager->GetProcAddress("glGetSubroutineIndex"));
    vtkgl::GetActiveSubroutineUniformiv = reinterpret_cast<vtkgl::PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC>(manager->GetProcAddress("glGetActiveSubroutineUniformiv"));
    vtkgl::GetActiveSubroutineUniformName = reinterpret_cast<vtkgl::PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC>(manager->GetProcAddress("glGetActiveSubroutineUniformName"));
    vtkgl::GetActiveSubroutineName = reinterpret_cast<vtkgl::PFNGLGETACTIVESUBROUTINENAMEPROC>(manager->GetProcAddress("glGetActiveSubroutineName"));
    vtkgl::UniformSubroutinesuiv = reinterpret_cast<vtkgl::PFNGLUNIFORMSUBROUTINESUIVPROC>(manager->GetProcAddress("glUniformSubroutinesuiv"));
    vtkgl::GetUniformSubroutineuiv = reinterpret_cast<vtkgl::PFNGLGETUNIFORMSUBROUTINEUIVPROC>(manager->GetProcAddress("glGetUniformSubroutineuiv"));
    vtkgl::GetProgramStageiv = reinterpret_cast<vtkgl::PFNGLGETPROGRAMSTAGEIVPROC>(manager->GetProcAddress("glGetProgramStageiv"));
    return 1 && (vtkgl::GetSubroutineUniformLocation != NULL) && (vtkgl::GetSubroutineIndex != NULL) && (vtkgl::GetActiveSubroutineUniformiv != NULL) && (vtkgl::GetActiveSubroutineUniformName != NULL) && (vtkgl::GetActiveSubroutineName != NULL) && (vtkgl::UniformSubroutinesuiv != NULL) && (vtkgl::GetUniformSubroutineuiv != NULL) && (vtkgl::GetProgramStageiv != NULL);
    }
  if (strcmp(name, "GL_ARB_tessellation_shader") == 0)
    {
    vtkgl::PatchParameteri = reinterpret_cast<vtkgl::PFNGLPATCHPARAMETERIPROC>(manager->GetProcAddress("glPatchParameteri"));
    vtkgl::PatchParameterfv = reinterpret_cast<vtkgl::PFNGLPATCHPARAMETERFVPROC>(manager->GetProcAddress("glPatchParameterfv"));
    return 1 && (vtkgl::PatchParameteri != NULL) && (vtkgl::PatchParameterfv != NULL);
    }
  if (strcmp(name, "GL_ARB_texture_buffer_object_rgb32") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_transform_feedback2") == 0)
    {
    vtkgl::BindTransformFeedback = reinterpret_cast<vtkgl::PFNGLBINDTRANSFORMFEEDBACKPROC>(manager->GetProcAddress("glBindTransformFeedback"));
    vtkgl::DeleteTransformFeedbacks = reinterpret_cast<vtkgl::PFNGLDELETETRANSFORMFEEDBACKSPROC>(manager->GetProcAddress("glDeleteTransformFeedbacks"));
    vtkgl::GenTransformFeedbacks = reinterpret_cast<vtkgl::PFNGLGENTRANSFORMFEEDBACKSPROC>(manager->GetProcAddress("glGenTransformFeedbacks"));
    vtkgl::IsTransformFeedback = reinterpret_cast<vtkgl::PFNGLISTRANSFORMFEEDBACKPROC>(manager->GetProcAddress("glIsTransformFeedback"));
    vtkgl::PauseTransformFeedback = reinterpret_cast<vtkgl::PFNGLPAUSETRANSFORMFEEDBACKPROC>(manager->GetProcAddress("glPauseTransformFeedback"));
    vtkgl::ResumeTransformFeedback = reinterpret_cast<vtkgl::PFNGLRESUMETRANSFORMFEEDBACKPROC>(manager->GetProcAddress("glResumeTransformFeedback"));
    vtkgl::DrawTransformFeedback = reinterpret_cast<vtkgl::PFNGLDRAWTRANSFORMFEEDBACKPROC>(manager->GetProcAddress("glDrawTransformFeedback"));
    return 1 && (vtkgl::BindTransformFeedback != NULL) && (vtkgl::DeleteTransformFeedbacks != NULL) && (vtkgl::GenTransformFeedbacks != NULL) && (vtkgl::IsTransformFeedback != NULL) && (vtkgl::PauseTransformFeedback != NULL) && (vtkgl::ResumeTransformFeedback != NULL) && (vtkgl::DrawTransformFeedback != NULL);
    }
  if (strcmp(name, "GL_ARB_transform_feedback3") == 0)
    {
    vtkgl::DrawTransformFeedbackStream = reinterpret_cast<vtkgl::PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC>(manager->GetProcAddress("glDrawTransformFeedbackStream"));
    vtkgl::BeginQueryIndexed = reinterpret_cast<vtkgl::PFNGLBEGINQUERYINDEXEDPROC>(manager->GetProcAddress("glBeginQueryIndexed"));
    vtkgl::EndQueryIndexed = reinterpret_cast<vtkgl::PFNGLENDQUERYINDEXEDPROC>(manager->GetProcAddress("glEndQueryIndexed"));
    vtkgl::GetQueryIndexediv = reinterpret_cast<vtkgl::PFNGLGETQUERYINDEXEDIVPROC>(manager->GetProcAddress("glGetQueryIndexediv"));
    return 1 && (vtkgl::DrawTransformFeedbackStream != NULL) && (vtkgl::BeginQueryIndexed != NULL) && (vtkgl::EndQueryIndexed != NULL) && (vtkgl::GetQueryIndexediv != NULL);
    }
  if (strcmp(name, "GL_ARB_ES2_compatibility") == 0)
    {
    vtkgl::ReleaseShaderCompiler = reinterpret_cast<vtkgl::PFNGLRELEASESHADERCOMPILERPROC>(manager->GetProcAddress("glReleaseShaderCompiler"));
    vtkgl::ShaderBinary = reinterpret_cast<vtkgl::PFNGLSHADERBINARYPROC>(manager->GetProcAddress("glShaderBinary"));
    vtkgl::GetShaderPrecisionFormat = reinterpret_cast<vtkgl::PFNGLGETSHADERPRECISIONFORMATPROC>(manager->GetProcAddress("glGetShaderPrecisionFormat"));
    vtkgl::DepthRangef = reinterpret_cast<vtkgl::PFNGLDEPTHRANGEFPROC>(manager->GetProcAddress("glDepthRangef"));
    vtkgl::ClearDepthf = reinterpret_cast<vtkgl::PFNGLCLEARDEPTHFPROC>(manager->GetProcAddress("glClearDepthf"));
    return 1 && (vtkgl::ReleaseShaderCompiler != NULL) && (vtkgl::ShaderBinary != NULL) && (vtkgl::GetShaderPrecisionFormat != NULL) && (vtkgl::DepthRangef != NULL) && (vtkgl::ClearDepthf != NULL);
    }
  if (strcmp(name, "GL_ARB_get_program_binary") == 0)
    {
    vtkgl::GetProgramBinary = reinterpret_cast<vtkgl::PFNGLGETPROGRAMBINARYPROC>(manager->GetProcAddress("glGetProgramBinary"));
    vtkgl::ProgramBinary = reinterpret_cast<vtkgl::PFNGLPROGRAMBINARYPROC>(manager->GetProcAddress("glProgramBinary"));
    vtkgl::ProgramParameteri = reinterpret_cast<vtkgl::PFNGLPROGRAMPARAMETERIPROC>(manager->GetProcAddress("glProgramParameteri"));
    return 1 && (vtkgl::GetProgramBinary != NULL) && (vtkgl::ProgramBinary != NULL) && (vtkgl::ProgramParameteri != NULL);
    }
  if (strcmp(name, "GL_ARB_separate_shader_objects") == 0)
    {
    vtkgl::UseProgramStages = reinterpret_cast<vtkgl::PFNGLUSEPROGRAMSTAGESPROC>(manager->GetProcAddress("glUseProgramStages"));
    vtkgl::ActiveShaderProgram = reinterpret_cast<vtkgl::PFNGLACTIVESHADERPROGRAMPROC>(manager->GetProcAddress("glActiveShaderProgram"));
    vtkgl::CreateShaderProgramv = reinterpret_cast<vtkgl::PFNGLCREATESHADERPROGRAMVPROC>(manager->GetProcAddress("glCreateShaderProgramv"));
    vtkgl::BindProgramPipeline = reinterpret_cast<vtkgl::PFNGLBINDPROGRAMPIPELINEPROC>(manager->GetProcAddress("glBindProgramPipeline"));
    vtkgl::DeleteProgramPipelines = reinterpret_cast<vtkgl::PFNGLDELETEPROGRAMPIPELINESPROC>(manager->GetProcAddress("glDeleteProgramPipelines"));
    vtkgl::GenProgramPipelines = reinterpret_cast<vtkgl::PFNGLGENPROGRAMPIPELINESPROC>(manager->GetProcAddress("glGenProgramPipelines"));
    vtkgl::IsProgramPipeline = reinterpret_cast<vtkgl::PFNGLISPROGRAMPIPELINEPROC>(manager->GetProcAddress("glIsProgramPipeline"));
    vtkgl::GetProgramPipelineiv = reinterpret_cast<vtkgl::PFNGLGETPROGRAMPIPELINEIVPROC>(manager->GetProcAddress("glGetProgramPipelineiv"));
    vtkgl::ProgramUniform1i = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM1IPROC>(manager->GetProcAddress("glProgramUniform1i"));
    vtkgl::ProgramUniform1iv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM1IVPROC>(manager->GetProcAddress("glProgramUniform1iv"));
    vtkgl::ProgramUniform1f = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM1FPROC>(manager->GetProcAddress("glProgramUniform1f"));
    vtkgl::ProgramUniform1fv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM1FVPROC>(manager->GetProcAddress("glProgramUniform1fv"));
    vtkgl::ProgramUniform1d = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM1DPROC>(manager->GetProcAddress("glProgramUniform1d"));
    vtkgl::ProgramUniform1dv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM1DVPROC>(manager->GetProcAddress("glProgramUniform1dv"));
    vtkgl::ProgramUniform1ui = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM1UIPROC>(manager->GetProcAddress("glProgramUniform1ui"));
    vtkgl::ProgramUniform1uiv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM1UIVPROC>(manager->GetProcAddress("glProgramUniform1uiv"));
    vtkgl::ProgramUniform2i = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM2IPROC>(manager->GetProcAddress("glProgramUniform2i"));
    vtkgl::ProgramUniform2iv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM2IVPROC>(manager->GetProcAddress("glProgramUniform2iv"));
    vtkgl::ProgramUniform2f = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM2FPROC>(manager->GetProcAddress("glProgramUniform2f"));
    vtkgl::ProgramUniform2fv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM2FVPROC>(manager->GetProcAddress("glProgramUniform2fv"));
    vtkgl::ProgramUniform2d = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM2DPROC>(manager->GetProcAddress("glProgramUniform2d"));
    vtkgl::ProgramUniform2dv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM2DVPROC>(manager->GetProcAddress("glProgramUniform2dv"));
    vtkgl::ProgramUniform2ui = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM2UIPROC>(manager->GetProcAddress("glProgramUniform2ui"));
    vtkgl::ProgramUniform2uiv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM2UIVPROC>(manager->GetProcAddress("glProgramUniform2uiv"));
    vtkgl::ProgramUniform3i = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM3IPROC>(manager->GetProcAddress("glProgramUniform3i"));
    vtkgl::ProgramUniform3iv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM3IVPROC>(manager->GetProcAddress("glProgramUniform3iv"));
    vtkgl::ProgramUniform3f = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM3FPROC>(manager->GetProcAddress("glProgramUniform3f"));
    vtkgl::ProgramUniform3fv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM3FVPROC>(manager->GetProcAddress("glProgramUniform3fv"));
    vtkgl::ProgramUniform3d = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM3DPROC>(manager->GetProcAddress("glProgramUniform3d"));
    vtkgl::ProgramUniform3dv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM3DVPROC>(manager->GetProcAddress("glProgramUniform3dv"));
    vtkgl::ProgramUniform3ui = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM3UIPROC>(manager->GetProcAddress("glProgramUniform3ui"));
    vtkgl::ProgramUniform3uiv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM3UIVPROC>(manager->GetProcAddress("glProgramUniform3uiv"));
    vtkgl::ProgramUniform4i = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM4IPROC>(manager->GetProcAddress("glProgramUniform4i"));
    vtkgl::ProgramUniform4iv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM4IVPROC>(manager->GetProcAddress("glProgramUniform4iv"));
    vtkgl::ProgramUniform4f = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM4FPROC>(manager->GetProcAddress("glProgramUniform4f"));
    vtkgl::ProgramUniform4fv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM4FVPROC>(manager->GetProcAddress("glProgramUniform4fv"));
    vtkgl::ProgramUniform4d = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM4DPROC>(manager->GetProcAddress("glProgramUniform4d"));
    vtkgl::ProgramUniform4dv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM4DVPROC>(manager->GetProcAddress("glProgramUniform4dv"));
    vtkgl::ProgramUniform4ui = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM4UIPROC>(manager->GetProcAddress("glProgramUniform4ui"));
    vtkgl::ProgramUniform4uiv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM4UIVPROC>(manager->GetProcAddress("glProgramUniform4uiv"));
    vtkgl::ProgramUniformMatrix2fv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX2FVPROC>(manager->GetProcAddress("glProgramUniformMatrix2fv"));
    vtkgl::ProgramUniformMatrix3fv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX3FVPROC>(manager->GetProcAddress("glProgramUniformMatrix3fv"));
    vtkgl::ProgramUniformMatrix4fv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX4FVPROC>(manager->GetProcAddress("glProgramUniformMatrix4fv"));
    vtkgl::ProgramUniformMatrix2dv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX2DVPROC>(manager->GetProcAddress("glProgramUniformMatrix2dv"));
    vtkgl::ProgramUniformMatrix3dv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX3DVPROC>(manager->GetProcAddress("glProgramUniformMatrix3dv"));
    vtkgl::ProgramUniformMatrix4dv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX4DVPROC>(manager->GetProcAddress("glProgramUniformMatrix4dv"));
    vtkgl::ProgramUniformMatrix2x3fv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC>(manager->GetProcAddress("glProgramUniformMatrix2x3fv"));
    vtkgl::ProgramUniformMatrix3x2fv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC>(manager->GetProcAddress("glProgramUniformMatrix3x2fv"));
    vtkgl::ProgramUniformMatrix2x4fv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC>(manager->GetProcAddress("glProgramUniformMatrix2x4fv"));
    vtkgl::ProgramUniformMatrix4x2fv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC>(manager->GetProcAddress("glProgramUniformMatrix4x2fv"));
    vtkgl::ProgramUniformMatrix3x4fv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC>(manager->GetProcAddress("glProgramUniformMatrix3x4fv"));
    vtkgl::ProgramUniformMatrix4x3fv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC>(manager->GetProcAddress("glProgramUniformMatrix4x3fv"));
    vtkgl::ProgramUniformMatrix2x3dv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC>(manager->GetProcAddress("glProgramUniformMatrix2x3dv"));
    vtkgl::ProgramUniformMatrix3x2dv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC>(manager->GetProcAddress("glProgramUniformMatrix3x2dv"));
    vtkgl::ProgramUniformMatrix2x4dv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC>(manager->GetProcAddress("glProgramUniformMatrix2x4dv"));
    vtkgl::ProgramUniformMatrix4x2dv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC>(manager->GetProcAddress("glProgramUniformMatrix4x2dv"));
    vtkgl::ProgramUniformMatrix3x4dv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC>(manager->GetProcAddress("glProgramUniformMatrix3x4dv"));
    vtkgl::ProgramUniformMatrix4x3dv = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC>(manager->GetProcAddress("glProgramUniformMatrix4x3dv"));
    vtkgl::ValidateProgramPipeline = reinterpret_cast<vtkgl::PFNGLVALIDATEPROGRAMPIPELINEPROC>(manager->GetProcAddress("glValidateProgramPipeline"));
    vtkgl::GetProgramPipelineInfoLog = reinterpret_cast<vtkgl::PFNGLGETPROGRAMPIPELINEINFOLOGPROC>(manager->GetProcAddress("glGetProgramPipelineInfoLog"));
    return 1 && (vtkgl::UseProgramStages != NULL) && (vtkgl::ActiveShaderProgram != NULL) && (vtkgl::CreateShaderProgramv != NULL) && (vtkgl::BindProgramPipeline != NULL) && (vtkgl::DeleteProgramPipelines != NULL) && (vtkgl::GenProgramPipelines != NULL) && (vtkgl::IsProgramPipeline != NULL) && (vtkgl::GetProgramPipelineiv != NULL) && (vtkgl::ProgramUniform1i != NULL) && (vtkgl::ProgramUniform1iv != NULL) && (vtkgl::ProgramUniform1f != NULL) && (vtkgl::ProgramUniform1fv != NULL) && (vtkgl::ProgramUniform1d != NULL) && (vtkgl::ProgramUniform1dv != NULL) && (vtkgl::ProgramUniform1ui != NULL) && (vtkgl::ProgramUniform1uiv != NULL) && (vtkgl::ProgramUniform2i != NULL) && (vtkgl::ProgramUniform2iv != NULL) && (vtkgl::ProgramUniform2f != NULL) && (vtkgl::ProgramUniform2fv != NULL) && (vtkgl::ProgramUniform2d != NULL) && (vtkgl::ProgramUniform2dv != NULL) && (vtkgl::ProgramUniform2ui != NULL) && (vtkgl::ProgramUniform2uiv != NULL) && (vtkgl::ProgramUniform3i != NULL) && (vtkgl::ProgramUniform3iv != NULL) && (vtkgl::ProgramUniform3f != NULL) && (vtkgl::ProgramUniform3fv != NULL) && (vtkgl::ProgramUniform3d != NULL) && (vtkgl::ProgramUniform3dv != NULL) && (vtkgl::ProgramUniform3ui != NULL) && (vtkgl::ProgramUniform3uiv != NULL) && (vtkgl::ProgramUniform4i != NULL) && (vtkgl::ProgramUniform4iv != NULL) && (vtkgl::ProgramUniform4f != NULL) && (vtkgl::ProgramUniform4fv != NULL) && (vtkgl::ProgramUniform4d != NULL) && (vtkgl::ProgramUniform4dv != NULL) && (vtkgl::ProgramUniform4ui != NULL) && (vtkgl::ProgramUniform4uiv != NULL) && (vtkgl::ProgramUniformMatrix2fv != NULL) && (vtkgl::ProgramUniformMatrix3fv != NULL) && (vtkgl::ProgramUniformMatrix4fv != NULL) && (vtkgl::ProgramUniformMatrix2dv != NULL) && (vtkgl::ProgramUniformMatrix3dv != NULL) && (vtkgl::ProgramUniformMatrix4dv != NULL) && (vtkgl::ProgramUniformMatrix2x3fv != NULL) && (vtkgl::ProgramUniformMatrix3x2fv != NULL) && (vtkgl::ProgramUniformMatrix2x4fv != NULL) && (vtkgl::ProgramUniformMatrix4x2fv != NULL) && (vtkgl::ProgramUniformMatrix3x4fv != NULL) && (vtkgl::ProgramUniformMatrix4x3fv != NULL) && (vtkgl::ProgramUniformMatrix2x3dv != NULL) && (vtkgl::ProgramUniformMatrix3x2dv != NULL) && (vtkgl::ProgramUniformMatrix2x4dv != NULL) && (vtkgl::ProgramUniformMatrix4x2dv != NULL) && (vtkgl::ProgramUniformMatrix3x4dv != NULL) && (vtkgl::ProgramUniformMatrix4x3dv != NULL) && (vtkgl::ValidateProgramPipeline != NULL) && (vtkgl::GetProgramPipelineInfoLog != NULL);
    }
  if (strcmp(name, "GL_ARB_shader_precision") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_vertex_attrib_64bit") == 0)
    {
    vtkgl::VertexAttribL1d = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL1DPROC>(manager->GetProcAddress("glVertexAttribL1d"));
    vtkgl::VertexAttribL2d = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL2DPROC>(manager->GetProcAddress("glVertexAttribL2d"));
    vtkgl::VertexAttribL3d = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL3DPROC>(manager->GetProcAddress("glVertexAttribL3d"));
    vtkgl::VertexAttribL4d = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL4DPROC>(manager->GetProcAddress("glVertexAttribL4d"));
    vtkgl::VertexAttribL1dv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL1DVPROC>(manager->GetProcAddress("glVertexAttribL1dv"));
    vtkgl::VertexAttribL2dv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL2DVPROC>(manager->GetProcAddress("glVertexAttribL2dv"));
    vtkgl::VertexAttribL3dv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL3DVPROC>(manager->GetProcAddress("glVertexAttribL3dv"));
    vtkgl::VertexAttribL4dv = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL4DVPROC>(manager->GetProcAddress("glVertexAttribL4dv"));
    vtkgl::VertexAttribLPointer = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBLPOINTERPROC>(manager->GetProcAddress("glVertexAttribLPointer"));
    vtkgl::GetVertexAttribLdv = reinterpret_cast<vtkgl::PFNGLGETVERTEXATTRIBLDVPROC>(manager->GetProcAddress("glGetVertexAttribLdv"));
    return 1 && (vtkgl::VertexAttribL1d != NULL) && (vtkgl::VertexAttribL2d != NULL) && (vtkgl::VertexAttribL3d != NULL) && (vtkgl::VertexAttribL4d != NULL) && (vtkgl::VertexAttribL1dv != NULL) && (vtkgl::VertexAttribL2dv != NULL) && (vtkgl::VertexAttribL3dv != NULL) && (vtkgl::VertexAttribL4dv != NULL) && (vtkgl::VertexAttribLPointer != NULL) && (vtkgl::GetVertexAttribLdv != NULL);
    }
  if (strcmp(name, "GL_ARB_viewport_array") == 0)
    {
    vtkgl::ViewportArrayv = reinterpret_cast<vtkgl::PFNGLVIEWPORTARRAYVPROC>(manager->GetProcAddress("glViewportArrayv"));
    vtkgl::ViewportIndexedf = reinterpret_cast<vtkgl::PFNGLVIEWPORTINDEXEDFPROC>(manager->GetProcAddress("glViewportIndexedf"));
    vtkgl::ViewportIndexedfv = reinterpret_cast<vtkgl::PFNGLVIEWPORTINDEXEDFVPROC>(manager->GetProcAddress("glViewportIndexedfv"));
    vtkgl::ScissorArrayv = reinterpret_cast<vtkgl::PFNGLSCISSORARRAYVPROC>(manager->GetProcAddress("glScissorArrayv"));
    vtkgl::ScissorIndexed = reinterpret_cast<vtkgl::PFNGLSCISSORINDEXEDPROC>(manager->GetProcAddress("glScissorIndexed"));
    vtkgl::ScissorIndexedv = reinterpret_cast<vtkgl::PFNGLSCISSORINDEXEDVPROC>(manager->GetProcAddress("glScissorIndexedv"));
    vtkgl::DepthRangeArrayv = reinterpret_cast<vtkgl::PFNGLDEPTHRANGEARRAYVPROC>(manager->GetProcAddress("glDepthRangeArrayv"));
    vtkgl::DepthRangeIndexed = reinterpret_cast<vtkgl::PFNGLDEPTHRANGEINDEXEDPROC>(manager->GetProcAddress("glDepthRangeIndexed"));
    vtkgl::GetFloati_v = reinterpret_cast<vtkgl::PFNGLGETFLOATI_VPROC>(manager->GetProcAddress("glGetFloati_v"));
    vtkgl::GetDoublei_v = reinterpret_cast<vtkgl::PFNGLGETDOUBLEI_VPROC>(manager->GetProcAddress("glGetDoublei_v"));
    return 1 && (vtkgl::ViewportArrayv != NULL) && (vtkgl::ViewportIndexedf != NULL) && (vtkgl::ViewportIndexedfv != NULL) && (vtkgl::ScissorArrayv != NULL) && (vtkgl::ScissorIndexed != NULL) && (vtkgl::ScissorIndexedv != NULL) && (vtkgl::DepthRangeArrayv != NULL) && (vtkgl::DepthRangeIndexed != NULL) && (vtkgl::GetFloati_v != NULL) && (vtkgl::GetDoublei_v != NULL);
    }
  if (strcmp(name, "GL_ARB_cl_event") == 0)
    {
    vtkgl::CreateSyncFromCLeventARB = reinterpret_cast<vtkgl::PFNGLCREATESYNCFROMCLEVENTARBPROC>(manager->GetProcAddress("glCreateSyncFromCLeventARB"));
    return 1 && (vtkgl::CreateSyncFromCLeventARB != NULL);
    }
  if (strcmp(name, "GL_ARB_debug_output") == 0)
    {
    vtkgl::DebugMessageControlARB = reinterpret_cast<vtkgl::PFNGLDEBUGMESSAGECONTROLARBPROC>(manager->GetProcAddress("glDebugMessageControlARB"));
    vtkgl::DebugMessageInsertARB = reinterpret_cast<vtkgl::PFNGLDEBUGMESSAGEINSERTARBPROC>(manager->GetProcAddress("glDebugMessageInsertARB"));
    vtkgl::DebugMessageCallbackARB = reinterpret_cast<vtkgl::PFNGLDEBUGMESSAGECALLBACKARBPROC>(manager->GetProcAddress("glDebugMessageCallbackARB"));
    vtkgl::GetDebugMessageLogARB = reinterpret_cast<vtkgl::PFNGLGETDEBUGMESSAGELOGARBPROC>(manager->GetProcAddress("glGetDebugMessageLogARB"));
    return 1 && (vtkgl::DebugMessageControlARB != NULL) && (vtkgl::DebugMessageInsertARB != NULL) && (vtkgl::DebugMessageCallbackARB != NULL) && (vtkgl::GetDebugMessageLogARB != NULL);
    }
  if (strcmp(name, "GL_ARB_robustness") == 0)
    {
    vtkgl::GetGraphicsResetStatusARB = reinterpret_cast<vtkgl::PFNGLGETGRAPHICSRESETSTATUSARBPROC>(manager->GetProcAddress("glGetGraphicsResetStatusARB"));
    vtkgl::GetnMapdvARB = reinterpret_cast<vtkgl::PFNGLGETNMAPDVARBPROC>(manager->GetProcAddress("glGetnMapdvARB"));
    vtkgl::GetnMapfvARB = reinterpret_cast<vtkgl::PFNGLGETNMAPFVARBPROC>(manager->GetProcAddress("glGetnMapfvARB"));
    vtkgl::GetnMapivARB = reinterpret_cast<vtkgl::PFNGLGETNMAPIVARBPROC>(manager->GetProcAddress("glGetnMapivARB"));
    vtkgl::GetnPixelMapfvARB = reinterpret_cast<vtkgl::PFNGLGETNPIXELMAPFVARBPROC>(manager->GetProcAddress("glGetnPixelMapfvARB"));
    vtkgl::GetnPixelMapuivARB = reinterpret_cast<vtkgl::PFNGLGETNPIXELMAPUIVARBPROC>(manager->GetProcAddress("glGetnPixelMapuivARB"));
    vtkgl::GetnPixelMapusvARB = reinterpret_cast<vtkgl::PFNGLGETNPIXELMAPUSVARBPROC>(manager->GetProcAddress("glGetnPixelMapusvARB"));
    vtkgl::GetnPolygonStippleARB = reinterpret_cast<vtkgl::PFNGLGETNPOLYGONSTIPPLEARBPROC>(manager->GetProcAddress("glGetnPolygonStippleARB"));
    vtkgl::GetnColorTableARB = reinterpret_cast<vtkgl::PFNGLGETNCOLORTABLEARBPROC>(manager->GetProcAddress("glGetnColorTableARB"));
    vtkgl::GetnConvolutionFilterARB = reinterpret_cast<vtkgl::PFNGLGETNCONVOLUTIONFILTERARBPROC>(manager->GetProcAddress("glGetnConvolutionFilterARB"));
    vtkgl::GetnSeparableFilterARB = reinterpret_cast<vtkgl::PFNGLGETNSEPARABLEFILTERARBPROC>(manager->GetProcAddress("glGetnSeparableFilterARB"));
    vtkgl::GetnHistogramARB = reinterpret_cast<vtkgl::PFNGLGETNHISTOGRAMARBPROC>(manager->GetProcAddress("glGetnHistogramARB"));
    vtkgl::GetnMinmaxARB = reinterpret_cast<vtkgl::PFNGLGETNMINMAXARBPROC>(manager->GetProcAddress("glGetnMinmaxARB"));
    vtkgl::GetnTexImageARB = reinterpret_cast<vtkgl::PFNGLGETNTEXIMAGEARBPROC>(manager->GetProcAddress("glGetnTexImageARB"));
    vtkgl::ReadnPixelsARB = reinterpret_cast<vtkgl::PFNGLREADNPIXELSARBPROC>(manager->GetProcAddress("glReadnPixelsARB"));
    vtkgl::GetnCompressedTexImageARB = reinterpret_cast<vtkgl::PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC>(manager->GetProcAddress("glGetnCompressedTexImageARB"));
    vtkgl::GetnUniformfvARB = reinterpret_cast<vtkgl::PFNGLGETNUNIFORMFVARBPROC>(manager->GetProcAddress("glGetnUniformfvARB"));
    vtkgl::GetnUniformivARB = reinterpret_cast<vtkgl::PFNGLGETNUNIFORMIVARBPROC>(manager->GetProcAddress("glGetnUniformivARB"));
    vtkgl::GetnUniformuivARB = reinterpret_cast<vtkgl::PFNGLGETNUNIFORMUIVARBPROC>(manager->GetProcAddress("glGetnUniformuivARB"));
    vtkgl::GetnUniformdvARB = reinterpret_cast<vtkgl::PFNGLGETNUNIFORMDVARBPROC>(manager->GetProcAddress("glGetnUniformdvARB"));
    return 1 && (vtkgl::GetGraphicsResetStatusARB != NULL) && (vtkgl::GetnMapdvARB != NULL) && (vtkgl::GetnMapfvARB != NULL) && (vtkgl::GetnMapivARB != NULL) && (vtkgl::GetnPixelMapfvARB != NULL) && (vtkgl::GetnPixelMapuivARB != NULL) && (vtkgl::GetnPixelMapusvARB != NULL) && (vtkgl::GetnPolygonStippleARB != NULL) && (vtkgl::GetnColorTableARB != NULL) && (vtkgl::GetnConvolutionFilterARB != NULL) && (vtkgl::GetnSeparableFilterARB != NULL) && (vtkgl::GetnHistogramARB != NULL) && (vtkgl::GetnMinmaxARB != NULL) && (vtkgl::GetnTexImageARB != NULL) && (vtkgl::ReadnPixelsARB != NULL) && (vtkgl::GetnCompressedTexImageARB != NULL) && (vtkgl::GetnUniformfvARB != NULL) && (vtkgl::GetnUniformivARB != NULL) && (vtkgl::GetnUniformuivARB != NULL) && (vtkgl::GetnUniformdvARB != NULL);
    }
  if (strcmp(name, "GL_ARB_shader_stencil_export") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_abgr") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_blend_color") == 0)
    {
    vtkgl::BlendColorEXT = reinterpret_cast<vtkgl::PFNGLBLENDCOLOREXTPROC>(manager->GetProcAddress("glBlendColorEXT"));
    return 1 && (vtkgl::BlendColorEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_polygon_offset") == 0)
    {
    vtkgl::PolygonOffsetEXT = reinterpret_cast<vtkgl::PFNGLPOLYGONOFFSETEXTPROC>(manager->GetProcAddress("glPolygonOffsetEXT"));
    return 1 && (vtkgl::PolygonOffsetEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_texture") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_texture3D") == 0)
    {
    vtkgl::TexImage3DEXT = reinterpret_cast<vtkgl::PFNGLTEXIMAGE3DEXTPROC>(manager->GetProcAddress("glTexImage3DEXT"));
    vtkgl::TexSubImage3DEXT = reinterpret_cast<vtkgl::PFNGLTEXSUBIMAGE3DEXTPROC>(manager->GetProcAddress("glTexSubImage3DEXT"));
    return 1 && (vtkgl::TexImage3DEXT != NULL) && (vtkgl::TexSubImage3DEXT != NULL);
    }
  if (strcmp(name, "GL_SGIS_texture_filter4") == 0)
    {
    vtkgl::GetTexFilterFuncSGIS = reinterpret_cast<vtkgl::PFNGLGETTEXFILTERFUNCSGISPROC>(manager->GetProcAddress("glGetTexFilterFuncSGIS"));
    vtkgl::TexFilterFuncSGIS = reinterpret_cast<vtkgl::PFNGLTEXFILTERFUNCSGISPROC>(manager->GetProcAddress("glTexFilterFuncSGIS"));
    return 1 && (vtkgl::GetTexFilterFuncSGIS != NULL) && (vtkgl::TexFilterFuncSGIS != NULL);
    }
  if (strcmp(name, "GL_EXT_subtexture") == 0)
    {
    vtkgl::TexSubImage1DEXT = reinterpret_cast<vtkgl::PFNGLTEXSUBIMAGE1DEXTPROC>(manager->GetProcAddress("glTexSubImage1DEXT"));
    vtkgl::TexSubImage2DEXT = reinterpret_cast<vtkgl::PFNGLTEXSUBIMAGE2DEXTPROC>(manager->GetProcAddress("glTexSubImage2DEXT"));
    return 1 && (vtkgl::TexSubImage1DEXT != NULL) && (vtkgl::TexSubImage2DEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_copy_texture") == 0)
    {
    vtkgl::CopyTexImage1DEXT = reinterpret_cast<vtkgl::PFNGLCOPYTEXIMAGE1DEXTPROC>(manager->GetProcAddress("glCopyTexImage1DEXT"));
    vtkgl::CopyTexImage2DEXT = reinterpret_cast<vtkgl::PFNGLCOPYTEXIMAGE2DEXTPROC>(manager->GetProcAddress("glCopyTexImage2DEXT"));
    vtkgl::CopyTexSubImage1DEXT = reinterpret_cast<vtkgl::PFNGLCOPYTEXSUBIMAGE1DEXTPROC>(manager->GetProcAddress("glCopyTexSubImage1DEXT"));
    vtkgl::CopyTexSubImage2DEXT = reinterpret_cast<vtkgl::PFNGLCOPYTEXSUBIMAGE2DEXTPROC>(manager->GetProcAddress("glCopyTexSubImage2DEXT"));
    vtkgl::CopyTexSubImage3DEXT = reinterpret_cast<vtkgl::PFNGLCOPYTEXSUBIMAGE3DEXTPROC>(manager->GetProcAddress("glCopyTexSubImage3DEXT"));
    return 1 && (vtkgl::CopyTexImage1DEXT != NULL) && (vtkgl::CopyTexImage2DEXT != NULL) && (vtkgl::CopyTexSubImage1DEXT != NULL) && (vtkgl::CopyTexSubImage2DEXT != NULL) && (vtkgl::CopyTexSubImage3DEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_histogram") == 0)
    {
    vtkgl::GetHistogramEXT = reinterpret_cast<vtkgl::PFNGLGETHISTOGRAMEXTPROC>(manager->GetProcAddress("glGetHistogramEXT"));
    vtkgl::GetHistogramParameterfvEXT = reinterpret_cast<vtkgl::PFNGLGETHISTOGRAMPARAMETERFVEXTPROC>(manager->GetProcAddress("glGetHistogramParameterfvEXT"));
    vtkgl::GetHistogramParameterivEXT = reinterpret_cast<vtkgl::PFNGLGETHISTOGRAMPARAMETERIVEXTPROC>(manager->GetProcAddress("glGetHistogramParameterivEXT"));
    vtkgl::GetMinmaxEXT = reinterpret_cast<vtkgl::PFNGLGETMINMAXEXTPROC>(manager->GetProcAddress("glGetMinmaxEXT"));
    vtkgl::GetMinmaxParameterfvEXT = reinterpret_cast<vtkgl::PFNGLGETMINMAXPARAMETERFVEXTPROC>(manager->GetProcAddress("glGetMinmaxParameterfvEXT"));
    vtkgl::GetMinmaxParameterivEXT = reinterpret_cast<vtkgl::PFNGLGETMINMAXPARAMETERIVEXTPROC>(manager->GetProcAddress("glGetMinmaxParameterivEXT"));
    vtkgl::HistogramEXT = reinterpret_cast<vtkgl::PFNGLHISTOGRAMEXTPROC>(manager->GetProcAddress("glHistogramEXT"));
    vtkgl::MinmaxEXT = reinterpret_cast<vtkgl::PFNGLMINMAXEXTPROC>(manager->GetProcAddress("glMinmaxEXT"));
    vtkgl::ResetHistogramEXT = reinterpret_cast<vtkgl::PFNGLRESETHISTOGRAMEXTPROC>(manager->GetProcAddress("glResetHistogramEXT"));
    vtkgl::ResetMinmaxEXT = reinterpret_cast<vtkgl::PFNGLRESETMINMAXEXTPROC>(manager->GetProcAddress("glResetMinmaxEXT"));
    return 1 && (vtkgl::GetHistogramEXT != NULL) && (vtkgl::GetHistogramParameterfvEXT != NULL) && (vtkgl::GetHistogramParameterivEXT != NULL) && (vtkgl::GetMinmaxEXT != NULL) && (vtkgl::GetMinmaxParameterfvEXT != NULL) && (vtkgl::GetMinmaxParameterivEXT != NULL) && (vtkgl::HistogramEXT != NULL) && (vtkgl::MinmaxEXT != NULL) && (vtkgl::ResetHistogramEXT != NULL) && (vtkgl::ResetMinmaxEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_convolution") == 0)
    {
    vtkgl::ConvolutionFilter1DEXT = reinterpret_cast<vtkgl::PFNGLCONVOLUTIONFILTER1DEXTPROC>(manager->GetProcAddress("glConvolutionFilter1DEXT"));
    vtkgl::ConvolutionFilter2DEXT = reinterpret_cast<vtkgl::PFNGLCONVOLUTIONFILTER2DEXTPROC>(manager->GetProcAddress("glConvolutionFilter2DEXT"));
    vtkgl::ConvolutionParameterfEXT = reinterpret_cast<vtkgl::PFNGLCONVOLUTIONPARAMETERFEXTPROC>(manager->GetProcAddress("glConvolutionParameterfEXT"));
    vtkgl::ConvolutionParameterfvEXT = reinterpret_cast<vtkgl::PFNGLCONVOLUTIONPARAMETERFVEXTPROC>(manager->GetProcAddress("glConvolutionParameterfvEXT"));
    vtkgl::ConvolutionParameteriEXT = reinterpret_cast<vtkgl::PFNGLCONVOLUTIONPARAMETERIEXTPROC>(manager->GetProcAddress("glConvolutionParameteriEXT"));
    vtkgl::ConvolutionParameterivEXT = reinterpret_cast<vtkgl::PFNGLCONVOLUTIONPARAMETERIVEXTPROC>(manager->GetProcAddress("glConvolutionParameterivEXT"));
    vtkgl::CopyConvolutionFilter1DEXT = reinterpret_cast<vtkgl::PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC>(manager->GetProcAddress("glCopyConvolutionFilter1DEXT"));
    vtkgl::CopyConvolutionFilter2DEXT = reinterpret_cast<vtkgl::PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC>(manager->GetProcAddress("glCopyConvolutionFilter2DEXT"));
    vtkgl::GetConvolutionFilterEXT = reinterpret_cast<vtkgl::PFNGLGETCONVOLUTIONFILTEREXTPROC>(manager->GetProcAddress("glGetConvolutionFilterEXT"));
    vtkgl::GetConvolutionParameterfvEXT = reinterpret_cast<vtkgl::PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC>(manager->GetProcAddress("glGetConvolutionParameterfvEXT"));
    vtkgl::GetConvolutionParameterivEXT = reinterpret_cast<vtkgl::PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC>(manager->GetProcAddress("glGetConvolutionParameterivEXT"));
    vtkgl::GetSeparableFilterEXT = reinterpret_cast<vtkgl::PFNGLGETSEPARABLEFILTEREXTPROC>(manager->GetProcAddress("glGetSeparableFilterEXT"));
    vtkgl::SeparableFilter2DEXT = reinterpret_cast<vtkgl::PFNGLSEPARABLEFILTER2DEXTPROC>(manager->GetProcAddress("glSeparableFilter2DEXT"));
    return 1 && (vtkgl::ConvolutionFilter1DEXT != NULL) && (vtkgl::ConvolutionFilter2DEXT != NULL) && (vtkgl::ConvolutionParameterfEXT != NULL) && (vtkgl::ConvolutionParameterfvEXT != NULL) && (vtkgl::ConvolutionParameteriEXT != NULL) && (vtkgl::ConvolutionParameterivEXT != NULL) && (vtkgl::CopyConvolutionFilter1DEXT != NULL) && (vtkgl::CopyConvolutionFilter2DEXT != NULL) && (vtkgl::GetConvolutionFilterEXT != NULL) && (vtkgl::GetConvolutionParameterfvEXT != NULL) && (vtkgl::GetConvolutionParameterivEXT != NULL) && (vtkgl::GetSeparableFilterEXT != NULL) && (vtkgl::SeparableFilter2DEXT != NULL);
    }
  if (strcmp(name, "GL_SGI_color_matrix") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGI_color_table") == 0)
    {
    vtkgl::ColorTableSGI = reinterpret_cast<vtkgl::PFNGLCOLORTABLESGIPROC>(manager->GetProcAddress("glColorTableSGI"));
    vtkgl::ColorTableParameterfvSGI = reinterpret_cast<vtkgl::PFNGLCOLORTABLEPARAMETERFVSGIPROC>(manager->GetProcAddress("glColorTableParameterfvSGI"));
    vtkgl::ColorTableParameterivSGI = reinterpret_cast<vtkgl::PFNGLCOLORTABLEPARAMETERIVSGIPROC>(manager->GetProcAddress("glColorTableParameterivSGI"));
    vtkgl::CopyColorTableSGI = reinterpret_cast<vtkgl::PFNGLCOPYCOLORTABLESGIPROC>(manager->GetProcAddress("glCopyColorTableSGI"));
    vtkgl::GetColorTableSGI = reinterpret_cast<vtkgl::PFNGLGETCOLORTABLESGIPROC>(manager->GetProcAddress("glGetColorTableSGI"));
    vtkgl::GetColorTableParameterfvSGI = reinterpret_cast<vtkgl::PFNGLGETCOLORTABLEPARAMETERFVSGIPROC>(manager->GetProcAddress("glGetColorTableParameterfvSGI"));
    vtkgl::GetColorTableParameterivSGI = reinterpret_cast<vtkgl::PFNGLGETCOLORTABLEPARAMETERIVSGIPROC>(manager->GetProcAddress("glGetColorTableParameterivSGI"));
    return 1 && (vtkgl::ColorTableSGI != NULL) && (vtkgl::ColorTableParameterfvSGI != NULL) && (vtkgl::ColorTableParameterivSGI != NULL) && (vtkgl::CopyColorTableSGI != NULL) && (vtkgl::GetColorTableSGI != NULL) && (vtkgl::GetColorTableParameterfvSGI != NULL) && (vtkgl::GetColorTableParameterivSGI != NULL);
    }
  if (strcmp(name, "GL_SGIS_pixel_texture") == 0)
    {
    vtkgl::PixelTexGenParameteriSGIS = reinterpret_cast<vtkgl::PFNGLPIXELTEXGENPARAMETERISGISPROC>(manager->GetProcAddress("glPixelTexGenParameteriSGIS"));
    vtkgl::PixelTexGenParameterivSGIS = reinterpret_cast<vtkgl::PFNGLPIXELTEXGENPARAMETERIVSGISPROC>(manager->GetProcAddress("glPixelTexGenParameterivSGIS"));
    vtkgl::PixelTexGenParameterfSGIS = reinterpret_cast<vtkgl::PFNGLPIXELTEXGENPARAMETERFSGISPROC>(manager->GetProcAddress("glPixelTexGenParameterfSGIS"));
    vtkgl::PixelTexGenParameterfvSGIS = reinterpret_cast<vtkgl::PFNGLPIXELTEXGENPARAMETERFVSGISPROC>(manager->GetProcAddress("glPixelTexGenParameterfvSGIS"));
    vtkgl::GetPixelTexGenParameterivSGIS = reinterpret_cast<vtkgl::PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC>(manager->GetProcAddress("glGetPixelTexGenParameterivSGIS"));
    vtkgl::GetPixelTexGenParameterfvSGIS = reinterpret_cast<vtkgl::PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC>(manager->GetProcAddress("glGetPixelTexGenParameterfvSGIS"));
    return 1 && (vtkgl::PixelTexGenParameteriSGIS != NULL) && (vtkgl::PixelTexGenParameterivSGIS != NULL) && (vtkgl::PixelTexGenParameterfSGIS != NULL) && (vtkgl::PixelTexGenParameterfvSGIS != NULL) && (vtkgl::GetPixelTexGenParameterivSGIS != NULL) && (vtkgl::GetPixelTexGenParameterfvSGIS != NULL);
    }
  if (strcmp(name, "GL_SGIX_pixel_texture") == 0)
    {
    vtkgl::PixelTexGenSGIX = reinterpret_cast<vtkgl::PFNGLPIXELTEXGENSGIXPROC>(manager->GetProcAddress("glPixelTexGenSGIX"));
    return 1 && (vtkgl::PixelTexGenSGIX != NULL);
    }
  if (strcmp(name, "GL_SGIS_texture4D") == 0)
    {
    vtkgl::TexImage4DSGIS = reinterpret_cast<vtkgl::PFNGLTEXIMAGE4DSGISPROC>(manager->GetProcAddress("glTexImage4DSGIS"));
    vtkgl::TexSubImage4DSGIS = reinterpret_cast<vtkgl::PFNGLTEXSUBIMAGE4DSGISPROC>(manager->GetProcAddress("glTexSubImage4DSGIS"));
    return 1 && (vtkgl::TexImage4DSGIS != NULL) && (vtkgl::TexSubImage4DSGIS != NULL);
    }
  if (strcmp(name, "GL_SGI_texture_color_table") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_cmyka") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_texture_object") == 0)
    {
    vtkgl::AreTexturesResidentEXT = reinterpret_cast<vtkgl::PFNGLARETEXTURESRESIDENTEXTPROC>(manager->GetProcAddress("glAreTexturesResidentEXT"));
    vtkgl::BindTextureEXT = reinterpret_cast<vtkgl::PFNGLBINDTEXTUREEXTPROC>(manager->GetProcAddress("glBindTextureEXT"));
    vtkgl::DeleteTexturesEXT = reinterpret_cast<vtkgl::PFNGLDELETETEXTURESEXTPROC>(manager->GetProcAddress("glDeleteTexturesEXT"));
    vtkgl::GenTexturesEXT = reinterpret_cast<vtkgl::PFNGLGENTEXTURESEXTPROC>(manager->GetProcAddress("glGenTexturesEXT"));
    vtkgl::IsTextureEXT = reinterpret_cast<vtkgl::PFNGLISTEXTUREEXTPROC>(manager->GetProcAddress("glIsTextureEXT"));
    vtkgl::PrioritizeTexturesEXT = reinterpret_cast<vtkgl::PFNGLPRIORITIZETEXTURESEXTPROC>(manager->GetProcAddress("glPrioritizeTexturesEXT"));
    return 1 && (vtkgl::AreTexturesResidentEXT != NULL) && (vtkgl::BindTextureEXT != NULL) && (vtkgl::DeleteTexturesEXT != NULL) && (vtkgl::GenTexturesEXT != NULL) && (vtkgl::IsTextureEXT != NULL) && (vtkgl::PrioritizeTexturesEXT != NULL);
    }
  if (strcmp(name, "GL_SGIS_detail_texture") == 0)
    {
    vtkgl::DetailTexFuncSGIS = reinterpret_cast<vtkgl::PFNGLDETAILTEXFUNCSGISPROC>(manager->GetProcAddress("glDetailTexFuncSGIS"));
    vtkgl::GetDetailTexFuncSGIS = reinterpret_cast<vtkgl::PFNGLGETDETAILTEXFUNCSGISPROC>(manager->GetProcAddress("glGetDetailTexFuncSGIS"));
    return 1 && (vtkgl::DetailTexFuncSGIS != NULL) && (vtkgl::GetDetailTexFuncSGIS != NULL);
    }
  if (strcmp(name, "GL_SGIS_sharpen_texture") == 0)
    {
    vtkgl::SharpenTexFuncSGIS = reinterpret_cast<vtkgl::PFNGLSHARPENTEXFUNCSGISPROC>(manager->GetProcAddress("glSharpenTexFuncSGIS"));
    vtkgl::GetSharpenTexFuncSGIS = reinterpret_cast<vtkgl::PFNGLGETSHARPENTEXFUNCSGISPROC>(manager->GetProcAddress("glGetSharpenTexFuncSGIS"));
    return 1 && (vtkgl::SharpenTexFuncSGIS != NULL) && (vtkgl::GetSharpenTexFuncSGIS != NULL);
    }
  if (strcmp(name, "GL_EXT_packed_pixels") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIS_texture_lod") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIS_multisample") == 0)
    {
    vtkgl::SampleMaskSGIS = reinterpret_cast<vtkgl::PFNGLSAMPLEMASKSGISPROC>(manager->GetProcAddress("glSampleMaskSGIS"));
    vtkgl::SamplePatternSGIS = reinterpret_cast<vtkgl::PFNGLSAMPLEPATTERNSGISPROC>(manager->GetProcAddress("glSamplePatternSGIS"));
    return 1 && (vtkgl::SampleMaskSGIS != NULL) && (vtkgl::SamplePatternSGIS != NULL);
    }
  if (strcmp(name, "GL_EXT_rescale_normal") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_vertex_array") == 0)
    {
    vtkgl::ArrayElementEXT = reinterpret_cast<vtkgl::PFNGLARRAYELEMENTEXTPROC>(manager->GetProcAddress("glArrayElementEXT"));
    vtkgl::ColorPointerEXT = reinterpret_cast<vtkgl::PFNGLCOLORPOINTEREXTPROC>(manager->GetProcAddress("glColorPointerEXT"));
    vtkgl::DrawArraysEXT = reinterpret_cast<vtkgl::PFNGLDRAWARRAYSEXTPROC>(manager->GetProcAddress("glDrawArraysEXT"));
    vtkgl::EdgeFlagPointerEXT = reinterpret_cast<vtkgl::PFNGLEDGEFLAGPOINTEREXTPROC>(manager->GetProcAddress("glEdgeFlagPointerEXT"));
    vtkgl::GetPointervEXT = reinterpret_cast<vtkgl::PFNGLGETPOINTERVEXTPROC>(manager->GetProcAddress("glGetPointervEXT"));
    vtkgl::IndexPointerEXT = reinterpret_cast<vtkgl::PFNGLINDEXPOINTEREXTPROC>(manager->GetProcAddress("glIndexPointerEXT"));
    vtkgl::NormalPointerEXT = reinterpret_cast<vtkgl::PFNGLNORMALPOINTEREXTPROC>(manager->GetProcAddress("glNormalPointerEXT"));
    vtkgl::TexCoordPointerEXT = reinterpret_cast<vtkgl::PFNGLTEXCOORDPOINTEREXTPROC>(manager->GetProcAddress("glTexCoordPointerEXT"));
    vtkgl::VertexPointerEXT = reinterpret_cast<vtkgl::PFNGLVERTEXPOINTEREXTPROC>(manager->GetProcAddress("glVertexPointerEXT"));
    return 1 && (vtkgl::ArrayElementEXT != NULL) && (vtkgl::ColorPointerEXT != NULL) && (vtkgl::DrawArraysEXT != NULL) && (vtkgl::EdgeFlagPointerEXT != NULL) && (vtkgl::GetPointervEXT != NULL) && (vtkgl::IndexPointerEXT != NULL) && (vtkgl::NormalPointerEXT != NULL) && (vtkgl::TexCoordPointerEXT != NULL) && (vtkgl::VertexPointerEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_misc_attribute") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIS_generate_mipmap") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_clipmap") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_shadow") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIS_texture_edge_clamp") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIS_texture_border_clamp") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_blend_minmax") == 0)
    {
    vtkgl::BlendEquationEXT = reinterpret_cast<vtkgl::PFNGLBLENDEQUATIONEXTPROC>(manager->GetProcAddress("glBlendEquationEXT"));
    return 1 && (vtkgl::BlendEquationEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_blend_subtract") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_blend_logic_op") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_interlace") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_pixel_tiles") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIS_texture_select") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_sprite") == 0)
    {
    vtkgl::SpriteParameterfSGIX = reinterpret_cast<vtkgl::PFNGLSPRITEPARAMETERFSGIXPROC>(manager->GetProcAddress("glSpriteParameterfSGIX"));
    vtkgl::SpriteParameterfvSGIX = reinterpret_cast<vtkgl::PFNGLSPRITEPARAMETERFVSGIXPROC>(manager->GetProcAddress("glSpriteParameterfvSGIX"));
    vtkgl::SpriteParameteriSGIX = reinterpret_cast<vtkgl::PFNGLSPRITEPARAMETERISGIXPROC>(manager->GetProcAddress("glSpriteParameteriSGIX"));
    vtkgl::SpriteParameterivSGIX = reinterpret_cast<vtkgl::PFNGLSPRITEPARAMETERIVSGIXPROC>(manager->GetProcAddress("glSpriteParameterivSGIX"));
    return 1 && (vtkgl::SpriteParameterfSGIX != NULL) && (vtkgl::SpriteParameterfvSGIX != NULL) && (vtkgl::SpriteParameteriSGIX != NULL) && (vtkgl::SpriteParameterivSGIX != NULL);
    }
  if (strcmp(name, "GL_SGIX_texture_multi_buffer") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_point_parameters") == 0)
    {
    vtkgl::PointParameterfEXT = reinterpret_cast<vtkgl::PFNGLPOINTPARAMETERFEXTPROC>(manager->GetProcAddress("glPointParameterfEXT"));
    vtkgl::PointParameterfvEXT = reinterpret_cast<vtkgl::PFNGLPOINTPARAMETERFVEXTPROC>(manager->GetProcAddress("glPointParameterfvEXT"));
    return 1 && (vtkgl::PointParameterfEXT != NULL) && (vtkgl::PointParameterfvEXT != NULL);
    }
  if (strcmp(name, "GL_SGIS_point_parameters") == 0)
    {
    vtkgl::PointParameterfSGIS = reinterpret_cast<vtkgl::PFNGLPOINTPARAMETERFSGISPROC>(manager->GetProcAddress("glPointParameterfSGIS"));
    vtkgl::PointParameterfvSGIS = reinterpret_cast<vtkgl::PFNGLPOINTPARAMETERFVSGISPROC>(manager->GetProcAddress("glPointParameterfvSGIS"));
    return 1 && (vtkgl::PointParameterfSGIS != NULL) && (vtkgl::PointParameterfvSGIS != NULL);
    }
  if (strcmp(name, "GL_SGIX_instruments") == 0)
    {
    vtkgl::GetInstrumentsSGIX = reinterpret_cast<vtkgl::PFNGLGETINSTRUMENTSSGIXPROC>(manager->GetProcAddress("glGetInstrumentsSGIX"));
    vtkgl::InstrumentsBufferSGIX = reinterpret_cast<vtkgl::PFNGLINSTRUMENTSBUFFERSGIXPROC>(manager->GetProcAddress("glInstrumentsBufferSGIX"));
    vtkgl::PollInstrumentsSGIX = reinterpret_cast<vtkgl::PFNGLPOLLINSTRUMENTSSGIXPROC>(manager->GetProcAddress("glPollInstrumentsSGIX"));
    vtkgl::ReadInstrumentsSGIX = reinterpret_cast<vtkgl::PFNGLREADINSTRUMENTSSGIXPROC>(manager->GetProcAddress("glReadInstrumentsSGIX"));
    vtkgl::StartInstrumentsSGIX = reinterpret_cast<vtkgl::PFNGLSTARTINSTRUMENTSSGIXPROC>(manager->GetProcAddress("glStartInstrumentsSGIX"));
    vtkgl::StopInstrumentsSGIX = reinterpret_cast<vtkgl::PFNGLSTOPINSTRUMENTSSGIXPROC>(manager->GetProcAddress("glStopInstrumentsSGIX"));
    return 1 && (vtkgl::GetInstrumentsSGIX != NULL) && (vtkgl::InstrumentsBufferSGIX != NULL) && (vtkgl::PollInstrumentsSGIX != NULL) && (vtkgl::ReadInstrumentsSGIX != NULL) && (vtkgl::StartInstrumentsSGIX != NULL) && (vtkgl::StopInstrumentsSGIX != NULL);
    }
  if (strcmp(name, "GL_SGIX_texture_scale_bias") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_framezoom") == 0)
    {
    vtkgl::FrameZoomSGIX = reinterpret_cast<vtkgl::PFNGLFRAMEZOOMSGIXPROC>(manager->GetProcAddress("glFrameZoomSGIX"));
    return 1 && (vtkgl::FrameZoomSGIX != NULL);
    }
  if (strcmp(name, "GL_SGIX_tag_sample_buffer") == 0)
    {
    vtkgl::TagSampleBufferSGIX = reinterpret_cast<vtkgl::PFNGLTAGSAMPLEBUFFERSGIXPROC>(manager->GetProcAddress("glTagSampleBufferSGIX"));
    return 1 && (vtkgl::TagSampleBufferSGIX != NULL);
    }
  if (strcmp(name, "GL_FfdMaskSGIX") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_polynomial_ffd") == 0)
    {
    vtkgl::DeformationMap3dSGIX = reinterpret_cast<vtkgl::PFNGLDEFORMATIONMAP3DSGIXPROC>(manager->GetProcAddress("glDeformationMap3dSGIX"));
    vtkgl::DeformationMap3fSGIX = reinterpret_cast<vtkgl::PFNGLDEFORMATIONMAP3FSGIXPROC>(manager->GetProcAddress("glDeformationMap3fSGIX"));
    vtkgl::DeformSGIX = reinterpret_cast<vtkgl::PFNGLDEFORMSGIXPROC>(manager->GetProcAddress("glDeformSGIX"));
    vtkgl::LoadIdentityDeformationMapSGIX = reinterpret_cast<vtkgl::PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC>(manager->GetProcAddress("glLoadIdentityDeformationMapSGIX"));
    return 1 && (vtkgl::DeformationMap3dSGIX != NULL) && (vtkgl::DeformationMap3fSGIX != NULL) && (vtkgl::DeformSGIX != NULL) && (vtkgl::LoadIdentityDeformationMapSGIX != NULL);
    }
  if (strcmp(name, "GL_SGIX_reference_plane") == 0)
    {
    vtkgl::ReferencePlaneSGIX = reinterpret_cast<vtkgl::PFNGLREFERENCEPLANESGIXPROC>(manager->GetProcAddress("glReferencePlaneSGIX"));
    return 1 && (vtkgl::ReferencePlaneSGIX != NULL);
    }
  if (strcmp(name, "GL_SGIX_flush_raster") == 0)
    {
    vtkgl::FlushRasterSGIX = reinterpret_cast<vtkgl::PFNGLFLUSHRASTERSGIXPROC>(manager->GetProcAddress("glFlushRasterSGIX"));
    return 1 && (vtkgl::FlushRasterSGIX != NULL);
    }
  if (strcmp(name, "GL_SGIX_depth_texture") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIS_fog_function") == 0)
    {
    vtkgl::FogFuncSGIS = reinterpret_cast<vtkgl::PFNGLFOGFUNCSGISPROC>(manager->GetProcAddress("glFogFuncSGIS"));
    vtkgl::GetFogFuncSGIS = reinterpret_cast<vtkgl::PFNGLGETFOGFUNCSGISPROC>(manager->GetProcAddress("glGetFogFuncSGIS"));
    return 1 && (vtkgl::FogFuncSGIS != NULL) && (vtkgl::GetFogFuncSGIS != NULL);
    }
  if (strcmp(name, "GL_SGIX_fog_offset") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_HP_image_transform") == 0)
    {
    vtkgl::ImageTransformParameteriHP = reinterpret_cast<vtkgl::PFNGLIMAGETRANSFORMPARAMETERIHPPROC>(manager->GetProcAddress("glImageTransformParameteriHP"));
    vtkgl::ImageTransformParameterfHP = reinterpret_cast<vtkgl::PFNGLIMAGETRANSFORMPARAMETERFHPPROC>(manager->GetProcAddress("glImageTransformParameterfHP"));
    vtkgl::ImageTransformParameterivHP = reinterpret_cast<vtkgl::PFNGLIMAGETRANSFORMPARAMETERIVHPPROC>(manager->GetProcAddress("glImageTransformParameterivHP"));
    vtkgl::ImageTransformParameterfvHP = reinterpret_cast<vtkgl::PFNGLIMAGETRANSFORMPARAMETERFVHPPROC>(manager->GetProcAddress("glImageTransformParameterfvHP"));
    vtkgl::GetImageTransformParameterivHP = reinterpret_cast<vtkgl::PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC>(manager->GetProcAddress("glGetImageTransformParameterivHP"));
    vtkgl::GetImageTransformParameterfvHP = reinterpret_cast<vtkgl::PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC>(manager->GetProcAddress("glGetImageTransformParameterfvHP"));
    return 1 && (vtkgl::ImageTransformParameteriHP != NULL) && (vtkgl::ImageTransformParameterfHP != NULL) && (vtkgl::ImageTransformParameterivHP != NULL) && (vtkgl::ImageTransformParameterfvHP != NULL) && (vtkgl::GetImageTransformParameterivHP != NULL) && (vtkgl::GetImageTransformParameterfvHP != NULL);
    }
  if (strcmp(name, "GL_HP_convolution_border_modes") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_INGR_palette_buffer") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_texture_add_env") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_color_subtable") == 0)
    {
    vtkgl::ColorSubTableEXT = reinterpret_cast<vtkgl::PFNGLCOLORSUBTABLEEXTPROC>(manager->GetProcAddress("glColorSubTableEXT"));
    vtkgl::CopyColorSubTableEXT = reinterpret_cast<vtkgl::PFNGLCOPYCOLORSUBTABLEEXTPROC>(manager->GetProcAddress("glCopyColorSubTableEXT"));
    return 1 && (vtkgl::ColorSubTableEXT != NULL) && (vtkgl::CopyColorSubTableEXT != NULL);
    }
  if (strcmp(name, "GL_PGI_vertex_hints") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_PGI_misc_hints") == 0)
    {
    vtkgl::HintPGI = reinterpret_cast<vtkgl::PFNGLHINTPGIPROC>(manager->GetProcAddress("glHintPGI"));
    return 1 && (vtkgl::HintPGI != NULL);
    }
  if (strcmp(name, "GL_EXT_paletted_texture") == 0)
    {
    vtkgl::ColorTableEXT = reinterpret_cast<vtkgl::PFNGLCOLORTABLEEXTPROC>(manager->GetProcAddress("glColorTableEXT"));
    vtkgl::GetColorTableEXT = reinterpret_cast<vtkgl::PFNGLGETCOLORTABLEEXTPROC>(manager->GetProcAddress("glGetColorTableEXT"));
    vtkgl::GetColorTableParameterivEXT = reinterpret_cast<vtkgl::PFNGLGETCOLORTABLEPARAMETERIVEXTPROC>(manager->GetProcAddress("glGetColorTableParameterivEXT"));
    vtkgl::GetColorTableParameterfvEXT = reinterpret_cast<vtkgl::PFNGLGETCOLORTABLEPARAMETERFVEXTPROC>(manager->GetProcAddress("glGetColorTableParameterfvEXT"));
    return 1 && (vtkgl::ColorTableEXT != NULL) && (vtkgl::GetColorTableEXT != NULL) && (vtkgl::GetColorTableParameterivEXT != NULL) && (vtkgl::GetColorTableParameterfvEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_clip_volume_hint") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_list_priority") == 0)
    {
    vtkgl::GetListParameterfvSGIX = reinterpret_cast<vtkgl::PFNGLGETLISTPARAMETERFVSGIXPROC>(manager->GetProcAddress("glGetListParameterfvSGIX"));
    vtkgl::GetListParameterivSGIX = reinterpret_cast<vtkgl::PFNGLGETLISTPARAMETERIVSGIXPROC>(manager->GetProcAddress("glGetListParameterivSGIX"));
    vtkgl::ListParameterfSGIX = reinterpret_cast<vtkgl::PFNGLLISTPARAMETERFSGIXPROC>(manager->GetProcAddress("glListParameterfSGIX"));
    vtkgl::ListParameterfvSGIX = reinterpret_cast<vtkgl::PFNGLLISTPARAMETERFVSGIXPROC>(manager->GetProcAddress("glListParameterfvSGIX"));
    vtkgl::ListParameteriSGIX = reinterpret_cast<vtkgl::PFNGLLISTPARAMETERISGIXPROC>(manager->GetProcAddress("glListParameteriSGIX"));
    vtkgl::ListParameterivSGIX = reinterpret_cast<vtkgl::PFNGLLISTPARAMETERIVSGIXPROC>(manager->GetProcAddress("glListParameterivSGIX"));
    return 1 && (vtkgl::GetListParameterfvSGIX != NULL) && (vtkgl::GetListParameterivSGIX != NULL) && (vtkgl::ListParameterfSGIX != NULL) && (vtkgl::ListParameterfvSGIX != NULL) && (vtkgl::ListParameteriSGIX != NULL) && (vtkgl::ListParameterivSGIX != NULL);
    }
  if (strcmp(name, "GL_SGIX_ir_instrument1") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_calligraphic_fragment") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_texture_lod_bias") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_shadow_ambient") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_index_texture") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_index_material") == 0)
    {
    vtkgl::IndexMaterialEXT = reinterpret_cast<vtkgl::PFNGLINDEXMATERIALEXTPROC>(manager->GetProcAddress("glIndexMaterialEXT"));
    return 1 && (vtkgl::IndexMaterialEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_index_func") == 0)
    {
    vtkgl::IndexFuncEXT = reinterpret_cast<vtkgl::PFNGLINDEXFUNCEXTPROC>(manager->GetProcAddress("glIndexFuncEXT"));
    return 1 && (vtkgl::IndexFuncEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_index_array_formats") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_compiled_vertex_array") == 0)
    {
    vtkgl::LockArraysEXT = reinterpret_cast<vtkgl::PFNGLLOCKARRAYSEXTPROC>(manager->GetProcAddress("glLockArraysEXT"));
    vtkgl::UnlockArraysEXT = reinterpret_cast<vtkgl::PFNGLUNLOCKARRAYSEXTPROC>(manager->GetProcAddress("glUnlockArraysEXT"));
    return 1 && (vtkgl::LockArraysEXT != NULL) && (vtkgl::UnlockArraysEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_cull_vertex") == 0)
    {
    vtkgl::CullParameterdvEXT = reinterpret_cast<vtkgl::PFNGLCULLPARAMETERDVEXTPROC>(manager->GetProcAddress("glCullParameterdvEXT"));
    vtkgl::CullParameterfvEXT = reinterpret_cast<vtkgl::PFNGLCULLPARAMETERFVEXTPROC>(manager->GetProcAddress("glCullParameterfvEXT"));
    return 1 && (vtkgl::CullParameterdvEXT != NULL) && (vtkgl::CullParameterfvEXT != NULL);
    }
  if (strcmp(name, "GL_SGIX_ycrcb") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_fragment_lighting") == 0)
    {
    vtkgl::FragmentColorMaterialSGIX = reinterpret_cast<vtkgl::PFNGLFRAGMENTCOLORMATERIALSGIXPROC>(manager->GetProcAddress("glFragmentColorMaterialSGIX"));
    vtkgl::FragmentLightfSGIX = reinterpret_cast<vtkgl::PFNGLFRAGMENTLIGHTFSGIXPROC>(manager->GetProcAddress("glFragmentLightfSGIX"));
    vtkgl::FragmentLightfvSGIX = reinterpret_cast<vtkgl::PFNGLFRAGMENTLIGHTFVSGIXPROC>(manager->GetProcAddress("glFragmentLightfvSGIX"));
    vtkgl::FragmentLightiSGIX = reinterpret_cast<vtkgl::PFNGLFRAGMENTLIGHTISGIXPROC>(manager->GetProcAddress("glFragmentLightiSGIX"));
    vtkgl::FragmentLightivSGIX = reinterpret_cast<vtkgl::PFNGLFRAGMENTLIGHTIVSGIXPROC>(manager->GetProcAddress("glFragmentLightivSGIX"));
    vtkgl::FragmentLightModelfSGIX = reinterpret_cast<vtkgl::PFNGLFRAGMENTLIGHTMODELFSGIXPROC>(manager->GetProcAddress("glFragmentLightModelfSGIX"));
    vtkgl::FragmentLightModelfvSGIX = reinterpret_cast<vtkgl::PFNGLFRAGMENTLIGHTMODELFVSGIXPROC>(manager->GetProcAddress("glFragmentLightModelfvSGIX"));
    vtkgl::FragmentLightModeliSGIX = reinterpret_cast<vtkgl::PFNGLFRAGMENTLIGHTMODELISGIXPROC>(manager->GetProcAddress("glFragmentLightModeliSGIX"));
    vtkgl::FragmentLightModelivSGIX = reinterpret_cast<vtkgl::PFNGLFRAGMENTLIGHTMODELIVSGIXPROC>(manager->GetProcAddress("glFragmentLightModelivSGIX"));
    vtkgl::FragmentMaterialfSGIX = reinterpret_cast<vtkgl::PFNGLFRAGMENTMATERIALFSGIXPROC>(manager->GetProcAddress("glFragmentMaterialfSGIX"));
    vtkgl::FragmentMaterialfvSGIX = reinterpret_cast<vtkgl::PFNGLFRAGMENTMATERIALFVSGIXPROC>(manager->GetProcAddress("glFragmentMaterialfvSGIX"));
    vtkgl::FragmentMaterialiSGIX = reinterpret_cast<vtkgl::PFNGLFRAGMENTMATERIALISGIXPROC>(manager->GetProcAddress("glFragmentMaterialiSGIX"));
    vtkgl::FragmentMaterialivSGIX = reinterpret_cast<vtkgl::PFNGLFRAGMENTMATERIALIVSGIXPROC>(manager->GetProcAddress("glFragmentMaterialivSGIX"));
    vtkgl::GetFragmentLightfvSGIX = reinterpret_cast<vtkgl::PFNGLGETFRAGMENTLIGHTFVSGIXPROC>(manager->GetProcAddress("glGetFragmentLightfvSGIX"));
    vtkgl::GetFragmentLightivSGIX = reinterpret_cast<vtkgl::PFNGLGETFRAGMENTLIGHTIVSGIXPROC>(manager->GetProcAddress("glGetFragmentLightivSGIX"));
    vtkgl::GetFragmentMaterialfvSGIX = reinterpret_cast<vtkgl::PFNGLGETFRAGMENTMATERIALFVSGIXPROC>(manager->GetProcAddress("glGetFragmentMaterialfvSGIX"));
    vtkgl::GetFragmentMaterialivSGIX = reinterpret_cast<vtkgl::PFNGLGETFRAGMENTMATERIALIVSGIXPROC>(manager->GetProcAddress("glGetFragmentMaterialivSGIX"));
    vtkgl::LightEnviSGIX = reinterpret_cast<vtkgl::PFNGLLIGHTENVISGIXPROC>(manager->GetProcAddress("glLightEnviSGIX"));
    return 1 && (vtkgl::FragmentColorMaterialSGIX != NULL) && (vtkgl::FragmentLightfSGIX != NULL) && (vtkgl::FragmentLightfvSGIX != NULL) && (vtkgl::FragmentLightiSGIX != NULL) && (vtkgl::FragmentLightivSGIX != NULL) && (vtkgl::FragmentLightModelfSGIX != NULL) && (vtkgl::FragmentLightModelfvSGIX != NULL) && (vtkgl::FragmentLightModeliSGIX != NULL) && (vtkgl::FragmentLightModelivSGIX != NULL) && (vtkgl::FragmentMaterialfSGIX != NULL) && (vtkgl::FragmentMaterialfvSGIX != NULL) && (vtkgl::FragmentMaterialiSGIX != NULL) && (vtkgl::FragmentMaterialivSGIX != NULL) && (vtkgl::GetFragmentLightfvSGIX != NULL) && (vtkgl::GetFragmentLightivSGIX != NULL) && (vtkgl::GetFragmentMaterialfvSGIX != NULL) && (vtkgl::GetFragmentMaterialivSGIX != NULL) && (vtkgl::LightEnviSGIX != NULL);
    }
  if (strcmp(name, "GL_IBM_rasterpos_clip") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_HP_texture_lighting") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_draw_range_elements") == 0)
    {
    vtkgl::DrawRangeElementsEXT = reinterpret_cast<vtkgl::PFNGLDRAWRANGEELEMENTSEXTPROC>(manager->GetProcAddress("glDrawRangeElementsEXT"));
    return 1 && (vtkgl::DrawRangeElementsEXT != NULL);
    }
  if (strcmp(name, "GL_WIN_phong_shading") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_WIN_specular_fog") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_light_texture") == 0)
    {
    vtkgl::ApplyTextureEXT = reinterpret_cast<vtkgl::PFNGLAPPLYTEXTUREEXTPROC>(manager->GetProcAddress("glApplyTextureEXT"));
    vtkgl::TextureLightEXT = reinterpret_cast<vtkgl::PFNGLTEXTURELIGHTEXTPROC>(manager->GetProcAddress("glTextureLightEXT"));
    vtkgl::TextureMaterialEXT = reinterpret_cast<vtkgl::PFNGLTEXTUREMATERIALEXTPROC>(manager->GetProcAddress("glTextureMaterialEXT"));
    return 1 && (vtkgl::ApplyTextureEXT != NULL) && (vtkgl::TextureLightEXT != NULL) && (vtkgl::TextureMaterialEXT != NULL);
    }
  if (strcmp(name, "GL_SGIX_blend_alpha_minmax") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_impact_pixel_texture") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_bgra") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_async") == 0)
    {
    vtkgl::AsyncMarkerSGIX = reinterpret_cast<vtkgl::PFNGLASYNCMARKERSGIXPROC>(manager->GetProcAddress("glAsyncMarkerSGIX"));
    vtkgl::FinishAsyncSGIX = reinterpret_cast<vtkgl::PFNGLFINISHASYNCSGIXPROC>(manager->GetProcAddress("glFinishAsyncSGIX"));
    vtkgl::PollAsyncSGIX = reinterpret_cast<vtkgl::PFNGLPOLLASYNCSGIXPROC>(manager->GetProcAddress("glPollAsyncSGIX"));
    vtkgl::GenAsyncMarkersSGIX = reinterpret_cast<vtkgl::PFNGLGENASYNCMARKERSSGIXPROC>(manager->GetProcAddress("glGenAsyncMarkersSGIX"));
    vtkgl::DeleteAsyncMarkersSGIX = reinterpret_cast<vtkgl::PFNGLDELETEASYNCMARKERSSGIXPROC>(manager->GetProcAddress("glDeleteAsyncMarkersSGIX"));
    vtkgl::IsAsyncMarkerSGIX = reinterpret_cast<vtkgl::PFNGLISASYNCMARKERSGIXPROC>(manager->GetProcAddress("glIsAsyncMarkerSGIX"));
    return 1 && (vtkgl::AsyncMarkerSGIX != NULL) && (vtkgl::FinishAsyncSGIX != NULL) && (vtkgl::PollAsyncSGIX != NULL) && (vtkgl::GenAsyncMarkersSGIX != NULL) && (vtkgl::DeleteAsyncMarkersSGIX != NULL) && (vtkgl::IsAsyncMarkerSGIX != NULL);
    }
  if (strcmp(name, "GL_SGIX_async_pixel") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_async_histogram") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_INTEL_texture_scissor") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_INTEL_parallel_arrays") == 0)
    {
    vtkgl::VertexPointervINTEL = reinterpret_cast<vtkgl::PFNGLVERTEXPOINTERVINTELPROC>(manager->GetProcAddress("glVertexPointervINTEL"));
    vtkgl::NormalPointervINTEL = reinterpret_cast<vtkgl::PFNGLNORMALPOINTERVINTELPROC>(manager->GetProcAddress("glNormalPointervINTEL"));
    vtkgl::ColorPointervINTEL = reinterpret_cast<vtkgl::PFNGLCOLORPOINTERVINTELPROC>(manager->GetProcAddress("glColorPointervINTEL"));
    vtkgl::TexCoordPointervINTEL = reinterpret_cast<vtkgl::PFNGLTEXCOORDPOINTERVINTELPROC>(manager->GetProcAddress("glTexCoordPointervINTEL"));
    return 1 && (vtkgl::VertexPointervINTEL != NULL) && (vtkgl::NormalPointervINTEL != NULL) && (vtkgl::ColorPointervINTEL != NULL) && (vtkgl::TexCoordPointervINTEL != NULL);
    }
  if (strcmp(name, "GL_HP_occlusion_test") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_pixel_transform") == 0)
    {
    vtkgl::PixelTransformParameteriEXT = reinterpret_cast<vtkgl::PFNGLPIXELTRANSFORMPARAMETERIEXTPROC>(manager->GetProcAddress("glPixelTransformParameteriEXT"));
    vtkgl::PixelTransformParameterfEXT = reinterpret_cast<vtkgl::PFNGLPIXELTRANSFORMPARAMETERFEXTPROC>(manager->GetProcAddress("glPixelTransformParameterfEXT"));
    vtkgl::PixelTransformParameterivEXT = reinterpret_cast<vtkgl::PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC>(manager->GetProcAddress("glPixelTransformParameterivEXT"));
    vtkgl::PixelTransformParameterfvEXT = reinterpret_cast<vtkgl::PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC>(manager->GetProcAddress("glPixelTransformParameterfvEXT"));
    return 1 && (vtkgl::PixelTransformParameteriEXT != NULL) && (vtkgl::PixelTransformParameterfEXT != NULL) && (vtkgl::PixelTransformParameterivEXT != NULL) && (vtkgl::PixelTransformParameterfvEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_pixel_transform_color_table") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_shared_texture_palette") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_separate_specular_color") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_secondary_color") == 0)
    {
    vtkgl::SecondaryColor3bEXT = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3BEXTPROC>(manager->GetProcAddress("glSecondaryColor3bEXT"));
    vtkgl::SecondaryColor3bvEXT = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3BVEXTPROC>(manager->GetProcAddress("glSecondaryColor3bvEXT"));
    vtkgl::SecondaryColor3dEXT = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3DEXTPROC>(manager->GetProcAddress("glSecondaryColor3dEXT"));
    vtkgl::SecondaryColor3dvEXT = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3DVEXTPROC>(manager->GetProcAddress("glSecondaryColor3dvEXT"));
    vtkgl::SecondaryColor3fEXT = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3FEXTPROC>(manager->GetProcAddress("glSecondaryColor3fEXT"));
    vtkgl::SecondaryColor3fvEXT = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3FVEXTPROC>(manager->GetProcAddress("glSecondaryColor3fvEXT"));
    vtkgl::SecondaryColor3iEXT = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3IEXTPROC>(manager->GetProcAddress("glSecondaryColor3iEXT"));
    vtkgl::SecondaryColor3ivEXT = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3IVEXTPROC>(manager->GetProcAddress("glSecondaryColor3ivEXT"));
    vtkgl::SecondaryColor3sEXT = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3SEXTPROC>(manager->GetProcAddress("glSecondaryColor3sEXT"));
    vtkgl::SecondaryColor3svEXT = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3SVEXTPROC>(manager->GetProcAddress("glSecondaryColor3svEXT"));
    vtkgl::SecondaryColor3ubEXT = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3UBEXTPROC>(manager->GetProcAddress("glSecondaryColor3ubEXT"));
    vtkgl::SecondaryColor3ubvEXT = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3UBVEXTPROC>(manager->GetProcAddress("glSecondaryColor3ubvEXT"));
    vtkgl::SecondaryColor3uiEXT = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3UIEXTPROC>(manager->GetProcAddress("glSecondaryColor3uiEXT"));
    vtkgl::SecondaryColor3uivEXT = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3UIVEXTPROC>(manager->GetProcAddress("glSecondaryColor3uivEXT"));
    vtkgl::SecondaryColor3usEXT = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3USEXTPROC>(manager->GetProcAddress("glSecondaryColor3usEXT"));
    vtkgl::SecondaryColor3usvEXT = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3USVEXTPROC>(manager->GetProcAddress("glSecondaryColor3usvEXT"));
    vtkgl::SecondaryColorPointerEXT = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLORPOINTEREXTPROC>(manager->GetProcAddress("glSecondaryColorPointerEXT"));
    return 1 && (vtkgl::SecondaryColor3bEXT != NULL) && (vtkgl::SecondaryColor3bvEXT != NULL) && (vtkgl::SecondaryColor3dEXT != NULL) && (vtkgl::SecondaryColor3dvEXT != NULL) && (vtkgl::SecondaryColor3fEXT != NULL) && (vtkgl::SecondaryColor3fvEXT != NULL) && (vtkgl::SecondaryColor3iEXT != NULL) && (vtkgl::SecondaryColor3ivEXT != NULL) && (vtkgl::SecondaryColor3sEXT != NULL) && (vtkgl::SecondaryColor3svEXT != NULL) && (vtkgl::SecondaryColor3ubEXT != NULL) && (vtkgl::SecondaryColor3ubvEXT != NULL) && (vtkgl::SecondaryColor3uiEXT != NULL) && (vtkgl::SecondaryColor3uivEXT != NULL) && (vtkgl::SecondaryColor3usEXT != NULL) && (vtkgl::SecondaryColor3usvEXT != NULL) && (vtkgl::SecondaryColorPointerEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_texture_perturb_normal") == 0)
    {
    vtkgl::TextureNormalEXT = reinterpret_cast<vtkgl::PFNGLTEXTURENORMALEXTPROC>(manager->GetProcAddress("glTextureNormalEXT"));
    return 1 && (vtkgl::TextureNormalEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_multi_draw_arrays") == 0)
    {
    vtkgl::MultiDrawArraysEXT = reinterpret_cast<vtkgl::PFNGLMULTIDRAWARRAYSEXTPROC>(manager->GetProcAddress("glMultiDrawArraysEXT"));
    vtkgl::MultiDrawElementsEXT = reinterpret_cast<vtkgl::PFNGLMULTIDRAWELEMENTSEXTPROC>(manager->GetProcAddress("glMultiDrawElementsEXT"));
    return 1 && (vtkgl::MultiDrawArraysEXT != NULL) && (vtkgl::MultiDrawElementsEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_fog_coord") == 0)
    {
    vtkgl::FogCoordfEXT = reinterpret_cast<vtkgl::PFNGLFOGCOORDFEXTPROC>(manager->GetProcAddress("glFogCoordfEXT"));
    vtkgl::FogCoordfvEXT = reinterpret_cast<vtkgl::PFNGLFOGCOORDFVEXTPROC>(manager->GetProcAddress("glFogCoordfvEXT"));
    vtkgl::FogCoorddEXT = reinterpret_cast<vtkgl::PFNGLFOGCOORDDEXTPROC>(manager->GetProcAddress("glFogCoorddEXT"));
    vtkgl::FogCoorddvEXT = reinterpret_cast<vtkgl::PFNGLFOGCOORDDVEXTPROC>(manager->GetProcAddress("glFogCoorddvEXT"));
    vtkgl::FogCoordPointerEXT = reinterpret_cast<vtkgl::PFNGLFOGCOORDPOINTEREXTPROC>(manager->GetProcAddress("glFogCoordPointerEXT"));
    return 1 && (vtkgl::FogCoordfEXT != NULL) && (vtkgl::FogCoordfvEXT != NULL) && (vtkgl::FogCoorddEXT != NULL) && (vtkgl::FogCoorddvEXT != NULL) && (vtkgl::FogCoordPointerEXT != NULL);
    }
  if (strcmp(name, "GL_REND_screen_coordinates") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_coordinate_frame") == 0)
    {
    vtkgl::Tangent3bEXT = reinterpret_cast<vtkgl::PFNGLTANGENT3BEXTPROC>(manager->GetProcAddress("glTangent3bEXT"));
    vtkgl::Tangent3bvEXT = reinterpret_cast<vtkgl::PFNGLTANGENT3BVEXTPROC>(manager->GetProcAddress("glTangent3bvEXT"));
    vtkgl::Tangent3dEXT = reinterpret_cast<vtkgl::PFNGLTANGENT3DEXTPROC>(manager->GetProcAddress("glTangent3dEXT"));
    vtkgl::Tangent3dvEXT = reinterpret_cast<vtkgl::PFNGLTANGENT3DVEXTPROC>(manager->GetProcAddress("glTangent3dvEXT"));
    vtkgl::Tangent3fEXT = reinterpret_cast<vtkgl::PFNGLTANGENT3FEXTPROC>(manager->GetProcAddress("glTangent3fEXT"));
    vtkgl::Tangent3fvEXT = reinterpret_cast<vtkgl::PFNGLTANGENT3FVEXTPROC>(manager->GetProcAddress("glTangent3fvEXT"));
    vtkgl::Tangent3iEXT = reinterpret_cast<vtkgl::PFNGLTANGENT3IEXTPROC>(manager->GetProcAddress("glTangent3iEXT"));
    vtkgl::Tangent3ivEXT = reinterpret_cast<vtkgl::PFNGLTANGENT3IVEXTPROC>(manager->GetProcAddress("glTangent3ivEXT"));
    vtkgl::Tangent3sEXT = reinterpret_cast<vtkgl::PFNGLTANGENT3SEXTPROC>(manager->GetProcAddress("glTangent3sEXT"));
    vtkgl::Tangent3svEXT = reinterpret_cast<vtkgl::PFNGLTANGENT3SVEXTPROC>(manager->GetProcAddress("glTangent3svEXT"));
    vtkgl::Binormal3bEXT = reinterpret_cast<vtkgl::PFNGLBINORMAL3BEXTPROC>(manager->GetProcAddress("glBinormal3bEXT"));
    vtkgl::Binormal3bvEXT = reinterpret_cast<vtkgl::PFNGLBINORMAL3BVEXTPROC>(manager->GetProcAddress("glBinormal3bvEXT"));
    vtkgl::Binormal3dEXT = reinterpret_cast<vtkgl::PFNGLBINORMAL3DEXTPROC>(manager->GetProcAddress("glBinormal3dEXT"));
    vtkgl::Binormal3dvEXT = reinterpret_cast<vtkgl::PFNGLBINORMAL3DVEXTPROC>(manager->GetProcAddress("glBinormal3dvEXT"));
    vtkgl::Binormal3fEXT = reinterpret_cast<vtkgl::PFNGLBINORMAL3FEXTPROC>(manager->GetProcAddress("glBinormal3fEXT"));
    vtkgl::Binormal3fvEXT = reinterpret_cast<vtkgl::PFNGLBINORMAL3FVEXTPROC>(manager->GetProcAddress("glBinormal3fvEXT"));
    vtkgl::Binormal3iEXT = reinterpret_cast<vtkgl::PFNGLBINORMAL3IEXTPROC>(manager->GetProcAddress("glBinormal3iEXT"));
    vtkgl::Binormal3ivEXT = reinterpret_cast<vtkgl::PFNGLBINORMAL3IVEXTPROC>(manager->GetProcAddress("glBinormal3ivEXT"));
    vtkgl::Binormal3sEXT = reinterpret_cast<vtkgl::PFNGLBINORMAL3SEXTPROC>(manager->GetProcAddress("glBinormal3sEXT"));
    vtkgl::Binormal3svEXT = reinterpret_cast<vtkgl::PFNGLBINORMAL3SVEXTPROC>(manager->GetProcAddress("glBinormal3svEXT"));
    vtkgl::TangentPointerEXT = reinterpret_cast<vtkgl::PFNGLTANGENTPOINTEREXTPROC>(manager->GetProcAddress("glTangentPointerEXT"));
    vtkgl::BinormalPointerEXT = reinterpret_cast<vtkgl::PFNGLBINORMALPOINTEREXTPROC>(manager->GetProcAddress("glBinormalPointerEXT"));
    return 1 && (vtkgl::Tangent3bEXT != NULL) && (vtkgl::Tangent3bvEXT != NULL) && (vtkgl::Tangent3dEXT != NULL) && (vtkgl::Tangent3dvEXT != NULL) && (vtkgl::Tangent3fEXT != NULL) && (vtkgl::Tangent3fvEXT != NULL) && (vtkgl::Tangent3iEXT != NULL) && (vtkgl::Tangent3ivEXT != NULL) && (vtkgl::Tangent3sEXT != NULL) && (vtkgl::Tangent3svEXT != NULL) && (vtkgl::Binormal3bEXT != NULL) && (vtkgl::Binormal3bvEXT != NULL) && (vtkgl::Binormal3dEXT != NULL) && (vtkgl::Binormal3dvEXT != NULL) && (vtkgl::Binormal3fEXT != NULL) && (vtkgl::Binormal3fvEXT != NULL) && (vtkgl::Binormal3iEXT != NULL) && (vtkgl::Binormal3ivEXT != NULL) && (vtkgl::Binormal3sEXT != NULL) && (vtkgl::Binormal3svEXT != NULL) && (vtkgl::TangentPointerEXT != NULL) && (vtkgl::BinormalPointerEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_texture_env_combine") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_APPLE_specular_vector") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_APPLE_transform_hint") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_fog_scale") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SUNX_constant_data") == 0)
    {
    vtkgl::FinishTextureSUNX = reinterpret_cast<vtkgl::PFNGLFINISHTEXTURESUNXPROC>(manager->GetProcAddress("glFinishTextureSUNX"));
    return 1 && (vtkgl::FinishTextureSUNX != NULL);
    }
  if (strcmp(name, "GL_SUN_global_alpha") == 0)
    {
    vtkgl::GlobalAlphaFactorbSUN = reinterpret_cast<vtkgl::PFNGLGLOBALALPHAFACTORBSUNPROC>(manager->GetProcAddress("glGlobalAlphaFactorbSUN"));
    vtkgl::GlobalAlphaFactorsSUN = reinterpret_cast<vtkgl::PFNGLGLOBALALPHAFACTORSSUNPROC>(manager->GetProcAddress("glGlobalAlphaFactorsSUN"));
    vtkgl::GlobalAlphaFactoriSUN = reinterpret_cast<vtkgl::PFNGLGLOBALALPHAFACTORISUNPROC>(manager->GetProcAddress("glGlobalAlphaFactoriSUN"));
    vtkgl::GlobalAlphaFactorfSUN = reinterpret_cast<vtkgl::PFNGLGLOBALALPHAFACTORFSUNPROC>(manager->GetProcAddress("glGlobalAlphaFactorfSUN"));
    vtkgl::GlobalAlphaFactordSUN = reinterpret_cast<vtkgl::PFNGLGLOBALALPHAFACTORDSUNPROC>(manager->GetProcAddress("glGlobalAlphaFactordSUN"));
    vtkgl::GlobalAlphaFactorubSUN = reinterpret_cast<vtkgl::PFNGLGLOBALALPHAFACTORUBSUNPROC>(manager->GetProcAddress("glGlobalAlphaFactorubSUN"));
    vtkgl::GlobalAlphaFactorusSUN = reinterpret_cast<vtkgl::PFNGLGLOBALALPHAFACTORUSSUNPROC>(manager->GetProcAddress("glGlobalAlphaFactorusSUN"));
    vtkgl::GlobalAlphaFactoruiSUN = reinterpret_cast<vtkgl::PFNGLGLOBALALPHAFACTORUISUNPROC>(manager->GetProcAddress("glGlobalAlphaFactoruiSUN"));
    return 1 && (vtkgl::GlobalAlphaFactorbSUN != NULL) && (vtkgl::GlobalAlphaFactorsSUN != NULL) && (vtkgl::GlobalAlphaFactoriSUN != NULL) && (vtkgl::GlobalAlphaFactorfSUN != NULL) && (vtkgl::GlobalAlphaFactordSUN != NULL) && (vtkgl::GlobalAlphaFactorubSUN != NULL) && (vtkgl::GlobalAlphaFactorusSUN != NULL) && (vtkgl::GlobalAlphaFactoruiSUN != NULL);
    }
  if (strcmp(name, "GL_SUN_triangle_list") == 0)
    {
    vtkgl::ReplacementCodeuiSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEUISUNPROC>(manager->GetProcAddress("glReplacementCodeuiSUN"));
    vtkgl::ReplacementCodeusSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEUSSUNPROC>(manager->GetProcAddress("glReplacementCodeusSUN"));
    vtkgl::ReplacementCodeubSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEUBSUNPROC>(manager->GetProcAddress("glReplacementCodeubSUN"));
    vtkgl::ReplacementCodeuivSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEUIVSUNPROC>(manager->GetProcAddress("glReplacementCodeuivSUN"));
    vtkgl::ReplacementCodeusvSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEUSVSUNPROC>(manager->GetProcAddress("glReplacementCodeusvSUN"));
    vtkgl::ReplacementCodeubvSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEUBVSUNPROC>(manager->GetProcAddress("glReplacementCodeubvSUN"));
    vtkgl::ReplacementCodePointerSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEPOINTERSUNPROC>(manager->GetProcAddress("glReplacementCodePointerSUN"));
    return 1 && (vtkgl::ReplacementCodeuiSUN != NULL) && (vtkgl::ReplacementCodeusSUN != NULL) && (vtkgl::ReplacementCodeubSUN != NULL) && (vtkgl::ReplacementCodeuivSUN != NULL) && (vtkgl::ReplacementCodeusvSUN != NULL) && (vtkgl::ReplacementCodeubvSUN != NULL) && (vtkgl::ReplacementCodePointerSUN != NULL);
    }
  if (strcmp(name, "GL_SUN_vertex") == 0)
    {
    vtkgl::Color4ubVertex2fSUN = reinterpret_cast<vtkgl::PFNGLCOLOR4UBVERTEX2FSUNPROC>(manager->GetProcAddress("glColor4ubVertex2fSUN"));
    vtkgl::Color4ubVertex2fvSUN = reinterpret_cast<vtkgl::PFNGLCOLOR4UBVERTEX2FVSUNPROC>(manager->GetProcAddress("glColor4ubVertex2fvSUN"));
    vtkgl::Color4ubVertex3fSUN = reinterpret_cast<vtkgl::PFNGLCOLOR4UBVERTEX3FSUNPROC>(manager->GetProcAddress("glColor4ubVertex3fSUN"));
    vtkgl::Color4ubVertex3fvSUN = reinterpret_cast<vtkgl::PFNGLCOLOR4UBVERTEX3FVSUNPROC>(manager->GetProcAddress("glColor4ubVertex3fvSUN"));
    vtkgl::Color3fVertex3fSUN = reinterpret_cast<vtkgl::PFNGLCOLOR3FVERTEX3FSUNPROC>(manager->GetProcAddress("glColor3fVertex3fSUN"));
    vtkgl::Color3fVertex3fvSUN = reinterpret_cast<vtkgl::PFNGLCOLOR3FVERTEX3FVSUNPROC>(manager->GetProcAddress("glColor3fVertex3fvSUN"));
    vtkgl::Normal3fVertex3fSUN = reinterpret_cast<vtkgl::PFNGLNORMAL3FVERTEX3FSUNPROC>(manager->GetProcAddress("glNormal3fVertex3fSUN"));
    vtkgl::Normal3fVertex3fvSUN = reinterpret_cast<vtkgl::PFNGLNORMAL3FVERTEX3FVSUNPROC>(manager->GetProcAddress("glNormal3fVertex3fvSUN"));
    vtkgl::Color4fNormal3fVertex3fSUN = reinterpret_cast<vtkgl::PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC>(manager->GetProcAddress("glColor4fNormal3fVertex3fSUN"));
    vtkgl::Color4fNormal3fVertex3fvSUN = reinterpret_cast<vtkgl::PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC>(manager->GetProcAddress("glColor4fNormal3fVertex3fvSUN"));
    vtkgl::TexCoord2fVertex3fSUN = reinterpret_cast<vtkgl::PFNGLTEXCOORD2FVERTEX3FSUNPROC>(manager->GetProcAddress("glTexCoord2fVertex3fSUN"));
    vtkgl::TexCoord2fVertex3fvSUN = reinterpret_cast<vtkgl::PFNGLTEXCOORD2FVERTEX3FVSUNPROC>(manager->GetProcAddress("glTexCoord2fVertex3fvSUN"));
    vtkgl::TexCoord4fVertex4fSUN = reinterpret_cast<vtkgl::PFNGLTEXCOORD4FVERTEX4FSUNPROC>(manager->GetProcAddress("glTexCoord4fVertex4fSUN"));
    vtkgl::TexCoord4fVertex4fvSUN = reinterpret_cast<vtkgl::PFNGLTEXCOORD4FVERTEX4FVSUNPROC>(manager->GetProcAddress("glTexCoord4fVertex4fvSUN"));
    vtkgl::TexCoord2fColor4ubVertex3fSUN = reinterpret_cast<vtkgl::PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC>(manager->GetProcAddress("glTexCoord2fColor4ubVertex3fSUN"));
    vtkgl::TexCoord2fColor4ubVertex3fvSUN = reinterpret_cast<vtkgl::PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC>(manager->GetProcAddress("glTexCoord2fColor4ubVertex3fvSUN"));
    vtkgl::TexCoord2fColor3fVertex3fSUN = reinterpret_cast<vtkgl::PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC>(manager->GetProcAddress("glTexCoord2fColor3fVertex3fSUN"));
    vtkgl::TexCoord2fColor3fVertex3fvSUN = reinterpret_cast<vtkgl::PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC>(manager->GetProcAddress("glTexCoord2fColor3fVertex3fvSUN"));
    vtkgl::TexCoord2fNormal3fVertex3fSUN = reinterpret_cast<vtkgl::PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC>(manager->GetProcAddress("glTexCoord2fNormal3fVertex3fSUN"));
    vtkgl::TexCoord2fNormal3fVertex3fvSUN = reinterpret_cast<vtkgl::PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC>(manager->GetProcAddress("glTexCoord2fNormal3fVertex3fvSUN"));
    vtkgl::TexCoord2fColor4fNormal3fVertex3fSUN = reinterpret_cast<vtkgl::PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC>(manager->GetProcAddress("glTexCoord2fColor4fNormal3fVertex3fSUN"));
    vtkgl::TexCoord2fColor4fNormal3fVertex3fvSUN = reinterpret_cast<vtkgl::PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC>(manager->GetProcAddress("glTexCoord2fColor4fNormal3fVertex3fvSUN"));
    vtkgl::TexCoord4fColor4fNormal3fVertex4fSUN = reinterpret_cast<vtkgl::PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC>(manager->GetProcAddress("glTexCoord4fColor4fNormal3fVertex4fSUN"));
    vtkgl::TexCoord4fColor4fNormal3fVertex4fvSUN = reinterpret_cast<vtkgl::PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC>(manager->GetProcAddress("glTexCoord4fColor4fNormal3fVertex4fvSUN"));
    vtkgl::ReplacementCodeuiVertex3fSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC>(manager->GetProcAddress("glReplacementCodeuiVertex3fSUN"));
    vtkgl::ReplacementCodeuiVertex3fvSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC>(manager->GetProcAddress("glReplacementCodeuiVertex3fvSUN"));
    vtkgl::ReplacementCodeuiColor4ubVertex3fSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC>(manager->GetProcAddress("glReplacementCodeuiColor4ubVertex3fSUN"));
    vtkgl::ReplacementCodeuiColor4ubVertex3fvSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC>(manager->GetProcAddress("glReplacementCodeuiColor4ubVertex3fvSUN"));
    vtkgl::ReplacementCodeuiColor3fVertex3fSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC>(manager->GetProcAddress("glReplacementCodeuiColor3fVertex3fSUN"));
    vtkgl::ReplacementCodeuiColor3fVertex3fvSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC>(manager->GetProcAddress("glReplacementCodeuiColor3fVertex3fvSUN"));
    vtkgl::ReplacementCodeuiNormal3fVertex3fSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC>(manager->GetProcAddress("glReplacementCodeuiNormal3fVertex3fSUN"));
    vtkgl::ReplacementCodeuiNormal3fVertex3fvSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC>(manager->GetProcAddress("glReplacementCodeuiNormal3fVertex3fvSUN"));
    vtkgl::ReplacementCodeuiColor4fNormal3fVertex3fSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC>(manager->GetProcAddress("glReplacementCodeuiColor4fNormal3fVertex3fSUN"));
    vtkgl::ReplacementCodeuiColor4fNormal3fVertex3fvSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC>(manager->GetProcAddress("glReplacementCodeuiColor4fNormal3fVertex3fvSUN"));
    vtkgl::ReplacementCodeuiTexCoord2fVertex3fSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC>(manager->GetProcAddress("glReplacementCodeuiTexCoord2fVertex3fSUN"));
    vtkgl::ReplacementCodeuiTexCoord2fVertex3fvSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC>(manager->GetProcAddress("glReplacementCodeuiTexCoord2fVertex3fvSUN"));
    vtkgl::ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC>(manager->GetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN"));
    vtkgl::ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC>(manager->GetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN"));
    vtkgl::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC>(manager->GetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN"));
    vtkgl::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN = reinterpret_cast<vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC>(manager->GetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN"));
    return 1 && (vtkgl::Color4ubVertex2fSUN != NULL) && (vtkgl::Color4ubVertex2fvSUN != NULL) && (vtkgl::Color4ubVertex3fSUN != NULL) && (vtkgl::Color4ubVertex3fvSUN != NULL) && (vtkgl::Color3fVertex3fSUN != NULL) && (vtkgl::Color3fVertex3fvSUN != NULL) && (vtkgl::Normal3fVertex3fSUN != NULL) && (vtkgl::Normal3fVertex3fvSUN != NULL) && (vtkgl::Color4fNormal3fVertex3fSUN != NULL) && (vtkgl::Color4fNormal3fVertex3fvSUN != NULL) && (vtkgl::TexCoord2fVertex3fSUN != NULL) && (vtkgl::TexCoord2fVertex3fvSUN != NULL) && (vtkgl::TexCoord4fVertex4fSUN != NULL) && (vtkgl::TexCoord4fVertex4fvSUN != NULL) && (vtkgl::TexCoord2fColor4ubVertex3fSUN != NULL) && (vtkgl::TexCoord2fColor4ubVertex3fvSUN != NULL) && (vtkgl::TexCoord2fColor3fVertex3fSUN != NULL) && (vtkgl::TexCoord2fColor3fVertex3fvSUN != NULL) && (vtkgl::TexCoord2fNormal3fVertex3fSUN != NULL) && (vtkgl::TexCoord2fNormal3fVertex3fvSUN != NULL) && (vtkgl::TexCoord2fColor4fNormal3fVertex3fSUN != NULL) && (vtkgl::TexCoord2fColor4fNormal3fVertex3fvSUN != NULL) && (vtkgl::TexCoord4fColor4fNormal3fVertex4fSUN != NULL) && (vtkgl::TexCoord4fColor4fNormal3fVertex4fvSUN != NULL) && (vtkgl::ReplacementCodeuiVertex3fSUN != NULL) && (vtkgl::ReplacementCodeuiVertex3fvSUN != NULL) && (vtkgl::ReplacementCodeuiColor4ubVertex3fSUN != NULL) && (vtkgl::ReplacementCodeuiColor4ubVertex3fvSUN != NULL) && (vtkgl::ReplacementCodeuiColor3fVertex3fSUN != NULL) && (vtkgl::ReplacementCodeuiColor3fVertex3fvSUN != NULL) && (vtkgl::ReplacementCodeuiNormal3fVertex3fSUN != NULL) && (vtkgl::ReplacementCodeuiNormal3fVertex3fvSUN != NULL) && (vtkgl::ReplacementCodeuiColor4fNormal3fVertex3fSUN != NULL) && (vtkgl::ReplacementCodeuiColor4fNormal3fVertex3fvSUN != NULL) && (vtkgl::ReplacementCodeuiTexCoord2fVertex3fSUN != NULL) && (vtkgl::ReplacementCodeuiTexCoord2fVertex3fvSUN != NULL) && (vtkgl::ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN != NULL) && (vtkgl::ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN != NULL) && (vtkgl::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN != NULL) && (vtkgl::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN != NULL);
    }
  if (strcmp(name, "GL_EXT_blend_func_separate") == 0)
    {
    vtkgl::BlendFuncSeparateEXT = reinterpret_cast<vtkgl::PFNGLBLENDFUNCSEPARATEEXTPROC>(manager->GetProcAddress("glBlendFuncSeparateEXT"));
    return 1 && (vtkgl::BlendFuncSeparateEXT != NULL);
    }
  if (strcmp(name, "GL_INGR_color_clamp") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_INGR_interlace_read") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_stencil_wrap") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_422_pixels") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_texgen_reflection") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_texture_cube_map") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SUN_convolution_border_modes") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_texture_env_add") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_texture_lod_bias") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_texture_filter_anisotropic") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_vertex_weighting") == 0)
    {
    vtkgl::VertexWeightfEXT = reinterpret_cast<vtkgl::PFNGLVERTEXWEIGHTFEXTPROC>(manager->GetProcAddress("glVertexWeightfEXT"));
    vtkgl::VertexWeightfvEXT = reinterpret_cast<vtkgl::PFNGLVERTEXWEIGHTFVEXTPROC>(manager->GetProcAddress("glVertexWeightfvEXT"));
    vtkgl::VertexWeightPointerEXT = reinterpret_cast<vtkgl::PFNGLVERTEXWEIGHTPOINTEREXTPROC>(manager->GetProcAddress("glVertexWeightPointerEXT"));
    return 1 && (vtkgl::VertexWeightfEXT != NULL) && (vtkgl::VertexWeightfvEXT != NULL) && (vtkgl::VertexWeightPointerEXT != NULL);
    }
  if (strcmp(name, "GL_NV_light_max_exponent") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_vertex_array_range") == 0)
    {
    vtkgl::FlushVertexArrayRangeNV = reinterpret_cast<vtkgl::PFNGLFLUSHVERTEXARRAYRANGENVPROC>(manager->GetProcAddress("glFlushVertexArrayRangeNV"));
    vtkgl::VertexArrayRangeNV = reinterpret_cast<vtkgl::PFNGLVERTEXARRAYRANGENVPROC>(manager->GetProcAddress("glVertexArrayRangeNV"));
    return 1 && (vtkgl::FlushVertexArrayRangeNV != NULL) && (vtkgl::VertexArrayRangeNV != NULL);
    }
  if (strcmp(name, "GL_NV_register_combiners") == 0)
    {
    vtkgl::CombinerParameterfvNV = reinterpret_cast<vtkgl::PFNGLCOMBINERPARAMETERFVNVPROC>(manager->GetProcAddress("glCombinerParameterfvNV"));
    vtkgl::CombinerParameterfNV = reinterpret_cast<vtkgl::PFNGLCOMBINERPARAMETERFNVPROC>(manager->GetProcAddress("glCombinerParameterfNV"));
    vtkgl::CombinerParameterivNV = reinterpret_cast<vtkgl::PFNGLCOMBINERPARAMETERIVNVPROC>(manager->GetProcAddress("glCombinerParameterivNV"));
    vtkgl::CombinerParameteriNV = reinterpret_cast<vtkgl::PFNGLCOMBINERPARAMETERINVPROC>(manager->GetProcAddress("glCombinerParameteriNV"));
    vtkgl::CombinerInputNV = reinterpret_cast<vtkgl::PFNGLCOMBINERINPUTNVPROC>(manager->GetProcAddress("glCombinerInputNV"));
    vtkgl::CombinerOutputNV = reinterpret_cast<vtkgl::PFNGLCOMBINEROUTPUTNVPROC>(manager->GetProcAddress("glCombinerOutputNV"));
    vtkgl::FinalCombinerInputNV = reinterpret_cast<vtkgl::PFNGLFINALCOMBINERINPUTNVPROC>(manager->GetProcAddress("glFinalCombinerInputNV"));
    vtkgl::GetCombinerInputParameterfvNV = reinterpret_cast<vtkgl::PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC>(manager->GetProcAddress("glGetCombinerInputParameterfvNV"));
    vtkgl::GetCombinerInputParameterivNV = reinterpret_cast<vtkgl::PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC>(manager->GetProcAddress("glGetCombinerInputParameterivNV"));
    vtkgl::GetCombinerOutputParameterfvNV = reinterpret_cast<vtkgl::PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC>(manager->GetProcAddress("glGetCombinerOutputParameterfvNV"));
    vtkgl::GetCombinerOutputParameterivNV = reinterpret_cast<vtkgl::PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC>(manager->GetProcAddress("glGetCombinerOutputParameterivNV"));
    vtkgl::GetFinalCombinerInputParameterfvNV = reinterpret_cast<vtkgl::PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC>(manager->GetProcAddress("glGetFinalCombinerInputParameterfvNV"));
    vtkgl::GetFinalCombinerInputParameterivNV = reinterpret_cast<vtkgl::PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC>(manager->GetProcAddress("glGetFinalCombinerInputParameterivNV"));
    return 1 && (vtkgl::CombinerParameterfvNV != NULL) && (vtkgl::CombinerParameterfNV != NULL) && (vtkgl::CombinerParameterivNV != NULL) && (vtkgl::CombinerParameteriNV != NULL) && (vtkgl::CombinerInputNV != NULL) && (vtkgl::CombinerOutputNV != NULL) && (vtkgl::FinalCombinerInputNV != NULL) && (vtkgl::GetCombinerInputParameterfvNV != NULL) && (vtkgl::GetCombinerInputParameterivNV != NULL) && (vtkgl::GetCombinerOutputParameterfvNV != NULL) && (vtkgl::GetCombinerOutputParameterivNV != NULL) && (vtkgl::GetFinalCombinerInputParameterfvNV != NULL) && (vtkgl::GetFinalCombinerInputParameterivNV != NULL);
    }
  if (strcmp(name, "GL_NV_fog_distance") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_texgen_emboss") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_blend_square") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_texture_env_combine4") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_MESA_resize_buffers") == 0)
    {
    vtkgl::ResizeBuffersMESA = reinterpret_cast<vtkgl::PFNGLRESIZEBUFFERSMESAPROC>(manager->GetProcAddress("glResizeBuffersMESA"));
    return 1 && (vtkgl::ResizeBuffersMESA != NULL);
    }
  if (strcmp(name, "GL_MESA_window_pos") == 0)
    {
    vtkgl::WindowPos2dMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2DMESAPROC>(manager->GetProcAddress("glWindowPos2dMESA"));
    vtkgl::WindowPos2dvMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2DVMESAPROC>(manager->GetProcAddress("glWindowPos2dvMESA"));
    vtkgl::WindowPos2fMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2FMESAPROC>(manager->GetProcAddress("glWindowPos2fMESA"));
    vtkgl::WindowPos2fvMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2FVMESAPROC>(manager->GetProcAddress("glWindowPos2fvMESA"));
    vtkgl::WindowPos2iMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2IMESAPROC>(manager->GetProcAddress("glWindowPos2iMESA"));
    vtkgl::WindowPos2ivMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2IVMESAPROC>(manager->GetProcAddress("glWindowPos2ivMESA"));
    vtkgl::WindowPos2sMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2SMESAPROC>(manager->GetProcAddress("glWindowPos2sMESA"));
    vtkgl::WindowPos2svMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS2SVMESAPROC>(manager->GetProcAddress("glWindowPos2svMESA"));
    vtkgl::WindowPos3dMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3DMESAPROC>(manager->GetProcAddress("glWindowPos3dMESA"));
    vtkgl::WindowPos3dvMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3DVMESAPROC>(manager->GetProcAddress("glWindowPos3dvMESA"));
    vtkgl::WindowPos3fMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3FMESAPROC>(manager->GetProcAddress("glWindowPos3fMESA"));
    vtkgl::WindowPos3fvMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3FVMESAPROC>(manager->GetProcAddress("glWindowPos3fvMESA"));
    vtkgl::WindowPos3iMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3IMESAPROC>(manager->GetProcAddress("glWindowPos3iMESA"));
    vtkgl::WindowPos3ivMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3IVMESAPROC>(manager->GetProcAddress("glWindowPos3ivMESA"));
    vtkgl::WindowPos3sMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3SMESAPROC>(manager->GetProcAddress("glWindowPos3sMESA"));
    vtkgl::WindowPos3svMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS3SVMESAPROC>(manager->GetProcAddress("glWindowPos3svMESA"));
    vtkgl::WindowPos4dMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS4DMESAPROC>(manager->GetProcAddress("glWindowPos4dMESA"));
    vtkgl::WindowPos4dvMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS4DVMESAPROC>(manager->GetProcAddress("glWindowPos4dvMESA"));
    vtkgl::WindowPos4fMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS4FMESAPROC>(manager->GetProcAddress("glWindowPos4fMESA"));
    vtkgl::WindowPos4fvMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS4FVMESAPROC>(manager->GetProcAddress("glWindowPos4fvMESA"));
    vtkgl::WindowPos4iMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS4IMESAPROC>(manager->GetProcAddress("glWindowPos4iMESA"));
    vtkgl::WindowPos4ivMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS4IVMESAPROC>(manager->GetProcAddress("glWindowPos4ivMESA"));
    vtkgl::WindowPos4sMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS4SMESAPROC>(manager->GetProcAddress("glWindowPos4sMESA"));
    vtkgl::WindowPos4svMESA = reinterpret_cast<vtkgl::PFNGLWINDOWPOS4SVMESAPROC>(manager->GetProcAddress("glWindowPos4svMESA"));
    return 1 && (vtkgl::WindowPos2dMESA != NULL) && (vtkgl::WindowPos2dvMESA != NULL) && (vtkgl::WindowPos2fMESA != NULL) && (vtkgl::WindowPos2fvMESA != NULL) && (vtkgl::WindowPos2iMESA != NULL) && (vtkgl::WindowPos2ivMESA != NULL) && (vtkgl::WindowPos2sMESA != NULL) && (vtkgl::WindowPos2svMESA != NULL) && (vtkgl::WindowPos3dMESA != NULL) && (vtkgl::WindowPos3dvMESA != NULL) && (vtkgl::WindowPos3fMESA != NULL) && (vtkgl::WindowPos3fvMESA != NULL) && (vtkgl::WindowPos3iMESA != NULL) && (vtkgl::WindowPos3ivMESA != NULL) && (vtkgl::WindowPos3sMESA != NULL) && (vtkgl::WindowPos3svMESA != NULL) && (vtkgl::WindowPos4dMESA != NULL) && (vtkgl::WindowPos4dvMESA != NULL) && (vtkgl::WindowPos4fMESA != NULL) && (vtkgl::WindowPos4fvMESA != NULL) && (vtkgl::WindowPos4iMESA != NULL) && (vtkgl::WindowPos4ivMESA != NULL) && (vtkgl::WindowPos4sMESA != NULL) && (vtkgl::WindowPos4svMESA != NULL);
    }
  if (strcmp(name, "GL_EXT_texture_compression_s3tc") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_IBM_cull_vertex") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_IBM_multimode_draw_arrays") == 0)
    {
    vtkgl::MultiModeDrawArraysIBM = reinterpret_cast<vtkgl::PFNGLMULTIMODEDRAWARRAYSIBMPROC>(manager->GetProcAddress("glMultiModeDrawArraysIBM"));
    vtkgl::MultiModeDrawElementsIBM = reinterpret_cast<vtkgl::PFNGLMULTIMODEDRAWELEMENTSIBMPROC>(manager->GetProcAddress("glMultiModeDrawElementsIBM"));
    return 1 && (vtkgl::MultiModeDrawArraysIBM != NULL) && (vtkgl::MultiModeDrawElementsIBM != NULL);
    }
  if (strcmp(name, "GL_IBM_vertex_array_lists") == 0)
    {
    vtkgl::ColorPointerListIBM = reinterpret_cast<vtkgl::PFNGLCOLORPOINTERLISTIBMPROC>(manager->GetProcAddress("glColorPointerListIBM"));
    vtkgl::SecondaryColorPointerListIBM = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLORPOINTERLISTIBMPROC>(manager->GetProcAddress("glSecondaryColorPointerListIBM"));
    vtkgl::EdgeFlagPointerListIBM = reinterpret_cast<vtkgl::PFNGLEDGEFLAGPOINTERLISTIBMPROC>(manager->GetProcAddress("glEdgeFlagPointerListIBM"));
    vtkgl::FogCoordPointerListIBM = reinterpret_cast<vtkgl::PFNGLFOGCOORDPOINTERLISTIBMPROC>(manager->GetProcAddress("glFogCoordPointerListIBM"));
    vtkgl::IndexPointerListIBM = reinterpret_cast<vtkgl::PFNGLINDEXPOINTERLISTIBMPROC>(manager->GetProcAddress("glIndexPointerListIBM"));
    vtkgl::NormalPointerListIBM = reinterpret_cast<vtkgl::PFNGLNORMALPOINTERLISTIBMPROC>(manager->GetProcAddress("glNormalPointerListIBM"));
    vtkgl::TexCoordPointerListIBM = reinterpret_cast<vtkgl::PFNGLTEXCOORDPOINTERLISTIBMPROC>(manager->GetProcAddress("glTexCoordPointerListIBM"));
    vtkgl::VertexPointerListIBM = reinterpret_cast<vtkgl::PFNGLVERTEXPOINTERLISTIBMPROC>(manager->GetProcAddress("glVertexPointerListIBM"));
    return 1 && (vtkgl::ColorPointerListIBM != NULL) && (vtkgl::SecondaryColorPointerListIBM != NULL) && (vtkgl::EdgeFlagPointerListIBM != NULL) && (vtkgl::FogCoordPointerListIBM != NULL) && (vtkgl::IndexPointerListIBM != NULL) && (vtkgl::NormalPointerListIBM != NULL) && (vtkgl::TexCoordPointerListIBM != NULL) && (vtkgl::VertexPointerListIBM != NULL);
    }
  if (strcmp(name, "GL_SGIX_subsample") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_ycrcb_subsample") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_ycrcba") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGI_depth_pass_instrument") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_3DFX_texture_compression_FXT1") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_3DFX_multisample") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_3DFX_tbuffer") == 0)
    {
    vtkgl::TbufferMask3DFX = reinterpret_cast<vtkgl::PFNGLTBUFFERMASK3DFXPROC>(manager->GetProcAddress("glTbufferMask3DFX"));
    return 1 && (vtkgl::TbufferMask3DFX != NULL);
    }
  if (strcmp(name, "GL_EXT_multisample") == 0)
    {
    vtkgl::SampleMaskEXT = reinterpret_cast<vtkgl::PFNGLSAMPLEMASKEXTPROC>(manager->GetProcAddress("glSampleMaskEXT"));
    vtkgl::SamplePatternEXT = reinterpret_cast<vtkgl::PFNGLSAMPLEPATTERNEXTPROC>(manager->GetProcAddress("glSamplePatternEXT"));
    return 1 && (vtkgl::SampleMaskEXT != NULL) && (vtkgl::SamplePatternEXT != NULL);
    }
  if (strcmp(name, "GL_SGIX_vertex_preclip") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_convolution_accuracy") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_resample") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIS_point_line_texgen") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIS_texture_color_mask") == 0)
    {
    vtkgl::TextureColorMaskSGIS = reinterpret_cast<vtkgl::PFNGLTEXTURECOLORMASKSGISPROC>(manager->GetProcAddress("glTextureColorMaskSGIS"));
    return 1 && (vtkgl::TextureColorMaskSGIS != NULL);
    }
  if (strcmp(name, "GL_EXT_texture_env_dot3") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ATI_texture_mirror_once") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_fence") == 0)
    {
    vtkgl::DeleteFencesNV = reinterpret_cast<vtkgl::PFNGLDELETEFENCESNVPROC>(manager->GetProcAddress("glDeleteFencesNV"));
    vtkgl::GenFencesNV = reinterpret_cast<vtkgl::PFNGLGENFENCESNVPROC>(manager->GetProcAddress("glGenFencesNV"));
    vtkgl::IsFenceNV = reinterpret_cast<vtkgl::PFNGLISFENCENVPROC>(manager->GetProcAddress("glIsFenceNV"));
    vtkgl::TestFenceNV = reinterpret_cast<vtkgl::PFNGLTESTFENCENVPROC>(manager->GetProcAddress("glTestFenceNV"));
    vtkgl::GetFenceivNV = reinterpret_cast<vtkgl::PFNGLGETFENCEIVNVPROC>(manager->GetProcAddress("glGetFenceivNV"));
    vtkgl::FinishFenceNV = reinterpret_cast<vtkgl::PFNGLFINISHFENCENVPROC>(manager->GetProcAddress("glFinishFenceNV"));
    vtkgl::SetFenceNV = reinterpret_cast<vtkgl::PFNGLSETFENCENVPROC>(manager->GetProcAddress("glSetFenceNV"));
    return 1 && (vtkgl::DeleteFencesNV != NULL) && (vtkgl::GenFencesNV != NULL) && (vtkgl::IsFenceNV != NULL) && (vtkgl::TestFenceNV != NULL) && (vtkgl::GetFenceivNV != NULL) && (vtkgl::FinishFenceNV != NULL) && (vtkgl::SetFenceNV != NULL);
    }
  if (strcmp(name, "GL_IBM_texture_mirrored_repeat") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_evaluators") == 0)
    {
    vtkgl::MapControlPointsNV = reinterpret_cast<vtkgl::PFNGLMAPCONTROLPOINTSNVPROC>(manager->GetProcAddress("glMapControlPointsNV"));
    vtkgl::MapParameterivNV = reinterpret_cast<vtkgl::PFNGLMAPPARAMETERIVNVPROC>(manager->GetProcAddress("glMapParameterivNV"));
    vtkgl::MapParameterfvNV = reinterpret_cast<vtkgl::PFNGLMAPPARAMETERFVNVPROC>(manager->GetProcAddress("glMapParameterfvNV"));
    vtkgl::GetMapControlPointsNV = reinterpret_cast<vtkgl::PFNGLGETMAPCONTROLPOINTSNVPROC>(manager->GetProcAddress("glGetMapControlPointsNV"));
    vtkgl::GetMapParameterivNV = reinterpret_cast<vtkgl::PFNGLGETMAPPARAMETERIVNVPROC>(manager->GetProcAddress("glGetMapParameterivNV"));
    vtkgl::GetMapParameterfvNV = reinterpret_cast<vtkgl::PFNGLGETMAPPARAMETERFVNVPROC>(manager->GetProcAddress("glGetMapParameterfvNV"));
    vtkgl::GetMapAttribParameterivNV = reinterpret_cast<vtkgl::PFNGLGETMAPATTRIBPARAMETERIVNVPROC>(manager->GetProcAddress("glGetMapAttribParameterivNV"));
    vtkgl::GetMapAttribParameterfvNV = reinterpret_cast<vtkgl::PFNGLGETMAPATTRIBPARAMETERFVNVPROC>(manager->GetProcAddress("glGetMapAttribParameterfvNV"));
    vtkgl::EvalMapsNV = reinterpret_cast<vtkgl::PFNGLEVALMAPSNVPROC>(manager->GetProcAddress("glEvalMapsNV"));
    return 1 && (vtkgl::MapControlPointsNV != NULL) && (vtkgl::MapParameterivNV != NULL) && (vtkgl::MapParameterfvNV != NULL) && (vtkgl::GetMapControlPointsNV != NULL) && (vtkgl::GetMapParameterivNV != NULL) && (vtkgl::GetMapParameterfvNV != NULL) && (vtkgl::GetMapAttribParameterivNV != NULL) && (vtkgl::GetMapAttribParameterfvNV != NULL) && (vtkgl::EvalMapsNV != NULL);
    }
  if (strcmp(name, "GL_NV_packed_depth_stencil") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_register_combiners2") == 0)
    {
    vtkgl::CombinerStageParameterfvNV = reinterpret_cast<vtkgl::PFNGLCOMBINERSTAGEPARAMETERFVNVPROC>(manager->GetProcAddress("glCombinerStageParameterfvNV"));
    vtkgl::GetCombinerStageParameterfvNV = reinterpret_cast<vtkgl::PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC>(manager->GetProcAddress("glGetCombinerStageParameterfvNV"));
    return 1 && (vtkgl::CombinerStageParameterfvNV != NULL) && (vtkgl::GetCombinerStageParameterfvNV != NULL);
    }
  if (strcmp(name, "GL_NV_texture_compression_vtc") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_texture_rectangle") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_texture_shader") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_texture_shader2") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_vertex_array_range2") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_vertex_program") == 0)
    {
    vtkgl::AreProgramsResidentNV = reinterpret_cast<vtkgl::PFNGLAREPROGRAMSRESIDENTNVPROC>(manager->GetProcAddress("glAreProgramsResidentNV"));
    vtkgl::BindProgramNV = reinterpret_cast<vtkgl::PFNGLBINDPROGRAMNVPROC>(manager->GetProcAddress("glBindProgramNV"));
    vtkgl::DeleteProgramsNV = reinterpret_cast<vtkgl::PFNGLDELETEPROGRAMSNVPROC>(manager->GetProcAddress("glDeleteProgramsNV"));
    vtkgl::ExecuteProgramNV = reinterpret_cast<vtkgl::PFNGLEXECUTEPROGRAMNVPROC>(manager->GetProcAddress("glExecuteProgramNV"));
    vtkgl::GenProgramsNV = reinterpret_cast<vtkgl::PFNGLGENPROGRAMSNVPROC>(manager->GetProcAddress("glGenProgramsNV"));
    vtkgl::GetProgramParameterdvNV = reinterpret_cast<vtkgl::PFNGLGETPROGRAMPARAMETERDVNVPROC>(manager->GetProcAddress("glGetProgramParameterdvNV"));
    vtkgl::GetProgramParameterfvNV = reinterpret_cast<vtkgl::PFNGLGETPROGRAMPARAMETERFVNVPROC>(manager->GetProcAddress("glGetProgramParameterfvNV"));
    vtkgl::GetProgramivNV = reinterpret_cast<vtkgl::PFNGLGETPROGRAMIVNVPROC>(manager->GetProcAddress("glGetProgramivNV"));
    vtkgl::GetProgramStringNV = reinterpret_cast<vtkgl::PFNGLGETPROGRAMSTRINGNVPROC>(manager->GetProcAddress("glGetProgramStringNV"));
    vtkgl::GetTrackMatrixivNV = reinterpret_cast<vtkgl::PFNGLGETTRACKMATRIXIVNVPROC>(manager->GetProcAddress("glGetTrackMatrixivNV"));
    vtkgl::GetVertexAttribdvNV = reinterpret_cast<vtkgl::PFNGLGETVERTEXATTRIBDVNVPROC>(manager->GetProcAddress("glGetVertexAttribdvNV"));
    vtkgl::GetVertexAttribfvNV = reinterpret_cast<vtkgl::PFNGLGETVERTEXATTRIBFVNVPROC>(manager->GetProcAddress("glGetVertexAttribfvNV"));
    vtkgl::GetVertexAttribivNV = reinterpret_cast<vtkgl::PFNGLGETVERTEXATTRIBIVNVPROC>(manager->GetProcAddress("glGetVertexAttribivNV"));
    vtkgl::GetVertexAttribPointervNV = reinterpret_cast<vtkgl::PFNGLGETVERTEXATTRIBPOINTERVNVPROC>(manager->GetProcAddress("glGetVertexAttribPointervNV"));
    vtkgl::IsProgramNV = reinterpret_cast<vtkgl::PFNGLISPROGRAMNVPROC>(manager->GetProcAddress("glIsProgramNV"));
    vtkgl::LoadProgramNV = reinterpret_cast<vtkgl::PFNGLLOADPROGRAMNVPROC>(manager->GetProcAddress("glLoadProgramNV"));
    vtkgl::ProgramParameter4dNV = reinterpret_cast<vtkgl::PFNGLPROGRAMPARAMETER4DNVPROC>(manager->GetProcAddress("glProgramParameter4dNV"));
    vtkgl::ProgramParameter4dvNV = reinterpret_cast<vtkgl::PFNGLPROGRAMPARAMETER4DVNVPROC>(manager->GetProcAddress("glProgramParameter4dvNV"));
    vtkgl::ProgramParameter4fNV = reinterpret_cast<vtkgl::PFNGLPROGRAMPARAMETER4FNVPROC>(manager->GetProcAddress("glProgramParameter4fNV"));
    vtkgl::ProgramParameter4fvNV = reinterpret_cast<vtkgl::PFNGLPROGRAMPARAMETER4FVNVPROC>(manager->GetProcAddress("glProgramParameter4fvNV"));
    vtkgl::ProgramParameters4dvNV = reinterpret_cast<vtkgl::PFNGLPROGRAMPARAMETERS4DVNVPROC>(manager->GetProcAddress("glProgramParameters4dvNV"));
    vtkgl::ProgramParameters4fvNV = reinterpret_cast<vtkgl::PFNGLPROGRAMPARAMETERS4FVNVPROC>(manager->GetProcAddress("glProgramParameters4fvNV"));
    vtkgl::RequestResidentProgramsNV = reinterpret_cast<vtkgl::PFNGLREQUESTRESIDENTPROGRAMSNVPROC>(manager->GetProcAddress("glRequestResidentProgramsNV"));
    vtkgl::TrackMatrixNV = reinterpret_cast<vtkgl::PFNGLTRACKMATRIXNVPROC>(manager->GetProcAddress("glTrackMatrixNV"));
    vtkgl::VertexAttribPointerNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBPOINTERNVPROC>(manager->GetProcAddress("glVertexAttribPointerNV"));
    vtkgl::VertexAttrib1dNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB1DNVPROC>(manager->GetProcAddress("glVertexAttrib1dNV"));
    vtkgl::VertexAttrib1dvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB1DVNVPROC>(manager->GetProcAddress("glVertexAttrib1dvNV"));
    vtkgl::VertexAttrib1fNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB1FNVPROC>(manager->GetProcAddress("glVertexAttrib1fNV"));
    vtkgl::VertexAttrib1fvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB1FVNVPROC>(manager->GetProcAddress("glVertexAttrib1fvNV"));
    vtkgl::VertexAttrib1sNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB1SNVPROC>(manager->GetProcAddress("glVertexAttrib1sNV"));
    vtkgl::VertexAttrib1svNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB1SVNVPROC>(manager->GetProcAddress("glVertexAttrib1svNV"));
    vtkgl::VertexAttrib2dNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB2DNVPROC>(manager->GetProcAddress("glVertexAttrib2dNV"));
    vtkgl::VertexAttrib2dvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB2DVNVPROC>(manager->GetProcAddress("glVertexAttrib2dvNV"));
    vtkgl::VertexAttrib2fNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB2FNVPROC>(manager->GetProcAddress("glVertexAttrib2fNV"));
    vtkgl::VertexAttrib2fvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB2FVNVPROC>(manager->GetProcAddress("glVertexAttrib2fvNV"));
    vtkgl::VertexAttrib2sNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB2SNVPROC>(manager->GetProcAddress("glVertexAttrib2sNV"));
    vtkgl::VertexAttrib2svNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB2SVNVPROC>(manager->GetProcAddress("glVertexAttrib2svNV"));
    vtkgl::VertexAttrib3dNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB3DNVPROC>(manager->GetProcAddress("glVertexAttrib3dNV"));
    vtkgl::VertexAttrib3dvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB3DVNVPROC>(manager->GetProcAddress("glVertexAttrib3dvNV"));
    vtkgl::VertexAttrib3fNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB3FNVPROC>(manager->GetProcAddress("glVertexAttrib3fNV"));
    vtkgl::VertexAttrib3fvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB3FVNVPROC>(manager->GetProcAddress("glVertexAttrib3fvNV"));
    vtkgl::VertexAttrib3sNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB3SNVPROC>(manager->GetProcAddress("glVertexAttrib3sNV"));
    vtkgl::VertexAttrib3svNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB3SVNVPROC>(manager->GetProcAddress("glVertexAttrib3svNV"));
    vtkgl::VertexAttrib4dNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4DNVPROC>(manager->GetProcAddress("glVertexAttrib4dNV"));
    vtkgl::VertexAttrib4dvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4DVNVPROC>(manager->GetProcAddress("glVertexAttrib4dvNV"));
    vtkgl::VertexAttrib4fNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4FNVPROC>(manager->GetProcAddress("glVertexAttrib4fNV"));
    vtkgl::VertexAttrib4fvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4FVNVPROC>(manager->GetProcAddress("glVertexAttrib4fvNV"));
    vtkgl::VertexAttrib4sNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4SNVPROC>(manager->GetProcAddress("glVertexAttrib4sNV"));
    vtkgl::VertexAttrib4svNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4SVNVPROC>(manager->GetProcAddress("glVertexAttrib4svNV"));
    vtkgl::VertexAttrib4ubNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4UBNVPROC>(manager->GetProcAddress("glVertexAttrib4ubNV"));
    vtkgl::VertexAttrib4ubvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4UBVNVPROC>(manager->GetProcAddress("glVertexAttrib4ubvNV"));
    vtkgl::VertexAttribs1dvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBS1DVNVPROC>(manager->GetProcAddress("glVertexAttribs1dvNV"));
    vtkgl::VertexAttribs1fvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBS1FVNVPROC>(manager->GetProcAddress("glVertexAttribs1fvNV"));
    vtkgl::VertexAttribs1svNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBS1SVNVPROC>(manager->GetProcAddress("glVertexAttribs1svNV"));
    vtkgl::VertexAttribs2dvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBS2DVNVPROC>(manager->GetProcAddress("glVertexAttribs2dvNV"));
    vtkgl::VertexAttribs2fvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBS2FVNVPROC>(manager->GetProcAddress("glVertexAttribs2fvNV"));
    vtkgl::VertexAttribs2svNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBS2SVNVPROC>(manager->GetProcAddress("glVertexAttribs2svNV"));
    vtkgl::VertexAttribs3dvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBS3DVNVPROC>(manager->GetProcAddress("glVertexAttribs3dvNV"));
    vtkgl::VertexAttribs3fvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBS3FVNVPROC>(manager->GetProcAddress("glVertexAttribs3fvNV"));
    vtkgl::VertexAttribs3svNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBS3SVNVPROC>(manager->GetProcAddress("glVertexAttribs3svNV"));
    vtkgl::VertexAttribs4dvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBS4DVNVPROC>(manager->GetProcAddress("glVertexAttribs4dvNV"));
    vtkgl::VertexAttribs4fvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBS4FVNVPROC>(manager->GetProcAddress("glVertexAttribs4fvNV"));
    vtkgl::VertexAttribs4svNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBS4SVNVPROC>(manager->GetProcAddress("glVertexAttribs4svNV"));
    vtkgl::VertexAttribs4ubvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBS4UBVNVPROC>(manager->GetProcAddress("glVertexAttribs4ubvNV"));
    return 1 && (vtkgl::AreProgramsResidentNV != NULL) && (vtkgl::BindProgramNV != NULL) && (vtkgl::DeleteProgramsNV != NULL) && (vtkgl::ExecuteProgramNV != NULL) && (vtkgl::GenProgramsNV != NULL) && (vtkgl::GetProgramParameterdvNV != NULL) && (vtkgl::GetProgramParameterfvNV != NULL) && (vtkgl::GetProgramivNV != NULL) && (vtkgl::GetProgramStringNV != NULL) && (vtkgl::GetTrackMatrixivNV != NULL) && (vtkgl::GetVertexAttribdvNV != NULL) && (vtkgl::GetVertexAttribfvNV != NULL) && (vtkgl::GetVertexAttribivNV != NULL) && (vtkgl::GetVertexAttribPointervNV != NULL) && (vtkgl::IsProgramNV != NULL) && (vtkgl::LoadProgramNV != NULL) && (vtkgl::ProgramParameter4dNV != NULL) && (vtkgl::ProgramParameter4dvNV != NULL) && (vtkgl::ProgramParameter4fNV != NULL) && (vtkgl::ProgramParameter4fvNV != NULL) && (vtkgl::ProgramParameters4dvNV != NULL) && (vtkgl::ProgramParameters4fvNV != NULL) && (vtkgl::RequestResidentProgramsNV != NULL) && (vtkgl::TrackMatrixNV != NULL) && (vtkgl::VertexAttribPointerNV != NULL) && (vtkgl::VertexAttrib1dNV != NULL) && (vtkgl::VertexAttrib1dvNV != NULL) && (vtkgl::VertexAttrib1fNV != NULL) && (vtkgl::VertexAttrib1fvNV != NULL) && (vtkgl::VertexAttrib1sNV != NULL) && (vtkgl::VertexAttrib1svNV != NULL) && (vtkgl::VertexAttrib2dNV != NULL) && (vtkgl::VertexAttrib2dvNV != NULL) && (vtkgl::VertexAttrib2fNV != NULL) && (vtkgl::VertexAttrib2fvNV != NULL) && (vtkgl::VertexAttrib2sNV != NULL) && (vtkgl::VertexAttrib2svNV != NULL) && (vtkgl::VertexAttrib3dNV != NULL) && (vtkgl::VertexAttrib3dvNV != NULL) && (vtkgl::VertexAttrib3fNV != NULL) && (vtkgl::VertexAttrib3fvNV != NULL) && (vtkgl::VertexAttrib3sNV != NULL) && (vtkgl::VertexAttrib3svNV != NULL) && (vtkgl::VertexAttrib4dNV != NULL) && (vtkgl::VertexAttrib4dvNV != NULL) && (vtkgl::VertexAttrib4fNV != NULL) && (vtkgl::VertexAttrib4fvNV != NULL) && (vtkgl::VertexAttrib4sNV != NULL) && (vtkgl::VertexAttrib4svNV != NULL) && (vtkgl::VertexAttrib4ubNV != NULL) && (vtkgl::VertexAttrib4ubvNV != NULL) && (vtkgl::VertexAttribs1dvNV != NULL) && (vtkgl::VertexAttribs1fvNV != NULL) && (vtkgl::VertexAttribs1svNV != NULL) && (vtkgl::VertexAttribs2dvNV != NULL) && (vtkgl::VertexAttribs2fvNV != NULL) && (vtkgl::VertexAttribs2svNV != NULL) && (vtkgl::VertexAttribs3dvNV != NULL) && (vtkgl::VertexAttribs3fvNV != NULL) && (vtkgl::VertexAttribs3svNV != NULL) && (vtkgl::VertexAttribs4dvNV != NULL) && (vtkgl::VertexAttribs4fvNV != NULL) && (vtkgl::VertexAttribs4svNV != NULL) && (vtkgl::VertexAttribs4ubvNV != NULL);
    }
  if (strcmp(name, "GL_SGIX_texture_coordinate_clamp") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_scalebias_hint") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_OML_interlace") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_OML_subsample") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_OML_resample") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_copy_depth_to_color") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ATI_envmap_bumpmap") == 0)
    {
    vtkgl::TexBumpParameterivATI = reinterpret_cast<vtkgl::PFNGLTEXBUMPPARAMETERIVATIPROC>(manager->GetProcAddress("glTexBumpParameterivATI"));
    vtkgl::TexBumpParameterfvATI = reinterpret_cast<vtkgl::PFNGLTEXBUMPPARAMETERFVATIPROC>(manager->GetProcAddress("glTexBumpParameterfvATI"));
    vtkgl::GetTexBumpParameterivATI = reinterpret_cast<vtkgl::PFNGLGETTEXBUMPPARAMETERIVATIPROC>(manager->GetProcAddress("glGetTexBumpParameterivATI"));
    vtkgl::GetTexBumpParameterfvATI = reinterpret_cast<vtkgl::PFNGLGETTEXBUMPPARAMETERFVATIPROC>(manager->GetProcAddress("glGetTexBumpParameterfvATI"));
    return 1 && (vtkgl::TexBumpParameterivATI != NULL) && (vtkgl::TexBumpParameterfvATI != NULL) && (vtkgl::GetTexBumpParameterivATI != NULL) && (vtkgl::GetTexBumpParameterfvATI != NULL);
    }
  if (strcmp(name, "GL_ATI_fragment_shader") == 0)
    {
    vtkgl::GenFragmentShadersATI = reinterpret_cast<vtkgl::PFNGLGENFRAGMENTSHADERSATIPROC>(manager->GetProcAddress("glGenFragmentShadersATI"));
    vtkgl::BindFragmentShaderATI = reinterpret_cast<vtkgl::PFNGLBINDFRAGMENTSHADERATIPROC>(manager->GetProcAddress("glBindFragmentShaderATI"));
    vtkgl::DeleteFragmentShaderATI = reinterpret_cast<vtkgl::PFNGLDELETEFRAGMENTSHADERATIPROC>(manager->GetProcAddress("glDeleteFragmentShaderATI"));
    vtkgl::BeginFragmentShaderATI = reinterpret_cast<vtkgl::PFNGLBEGINFRAGMENTSHADERATIPROC>(manager->GetProcAddress("glBeginFragmentShaderATI"));
    vtkgl::EndFragmentShaderATI = reinterpret_cast<vtkgl::PFNGLENDFRAGMENTSHADERATIPROC>(manager->GetProcAddress("glEndFragmentShaderATI"));
    vtkgl::PassTexCoordATI = reinterpret_cast<vtkgl::PFNGLPASSTEXCOORDATIPROC>(manager->GetProcAddress("glPassTexCoordATI"));
    vtkgl::SampleMapATI = reinterpret_cast<vtkgl::PFNGLSAMPLEMAPATIPROC>(manager->GetProcAddress("glSampleMapATI"));
    vtkgl::ColorFragmentOp1ATI = reinterpret_cast<vtkgl::PFNGLCOLORFRAGMENTOP1ATIPROC>(manager->GetProcAddress("glColorFragmentOp1ATI"));
    vtkgl::ColorFragmentOp2ATI = reinterpret_cast<vtkgl::PFNGLCOLORFRAGMENTOP2ATIPROC>(manager->GetProcAddress("glColorFragmentOp2ATI"));
    vtkgl::ColorFragmentOp3ATI = reinterpret_cast<vtkgl::PFNGLCOLORFRAGMENTOP3ATIPROC>(manager->GetProcAddress("glColorFragmentOp3ATI"));
    vtkgl::AlphaFragmentOp1ATI = reinterpret_cast<vtkgl::PFNGLALPHAFRAGMENTOP1ATIPROC>(manager->GetProcAddress("glAlphaFragmentOp1ATI"));
    vtkgl::AlphaFragmentOp2ATI = reinterpret_cast<vtkgl::PFNGLALPHAFRAGMENTOP2ATIPROC>(manager->GetProcAddress("glAlphaFragmentOp2ATI"));
    vtkgl::AlphaFragmentOp3ATI = reinterpret_cast<vtkgl::PFNGLALPHAFRAGMENTOP3ATIPROC>(manager->GetProcAddress("glAlphaFragmentOp3ATI"));
    vtkgl::SetFragmentShaderConstantATI = reinterpret_cast<vtkgl::PFNGLSETFRAGMENTSHADERCONSTANTATIPROC>(manager->GetProcAddress("glSetFragmentShaderConstantATI"));
    return 1 && (vtkgl::GenFragmentShadersATI != NULL) && (vtkgl::BindFragmentShaderATI != NULL) && (vtkgl::DeleteFragmentShaderATI != NULL) && (vtkgl::BeginFragmentShaderATI != NULL) && (vtkgl::EndFragmentShaderATI != NULL) && (vtkgl::PassTexCoordATI != NULL) && (vtkgl::SampleMapATI != NULL) && (vtkgl::ColorFragmentOp1ATI != NULL) && (vtkgl::ColorFragmentOp2ATI != NULL) && (vtkgl::ColorFragmentOp3ATI != NULL) && (vtkgl::AlphaFragmentOp1ATI != NULL) && (vtkgl::AlphaFragmentOp2ATI != NULL) && (vtkgl::AlphaFragmentOp3ATI != NULL) && (vtkgl::SetFragmentShaderConstantATI != NULL);
    }
  if (strcmp(name, "GL_ATI_pn_triangles") == 0)
    {
    vtkgl::PNTrianglesiATI = reinterpret_cast<vtkgl::PFNGLPNTRIANGLESIATIPROC>(manager->GetProcAddress("glPNTrianglesiATI"));
    vtkgl::PNTrianglesfATI = reinterpret_cast<vtkgl::PFNGLPNTRIANGLESFATIPROC>(manager->GetProcAddress("glPNTrianglesfATI"));
    return 1 && (vtkgl::PNTrianglesiATI != NULL) && (vtkgl::PNTrianglesfATI != NULL);
    }
  if (strcmp(name, "GL_ATI_vertex_array_object") == 0)
    {
    vtkgl::NewObjectBufferATI = reinterpret_cast<vtkgl::PFNGLNEWOBJECTBUFFERATIPROC>(manager->GetProcAddress("glNewObjectBufferATI"));
    vtkgl::IsObjectBufferATI = reinterpret_cast<vtkgl::PFNGLISOBJECTBUFFERATIPROC>(manager->GetProcAddress("glIsObjectBufferATI"));
    vtkgl::UpdateObjectBufferATI = reinterpret_cast<vtkgl::PFNGLUPDATEOBJECTBUFFERATIPROC>(manager->GetProcAddress("glUpdateObjectBufferATI"));
    vtkgl::GetObjectBufferfvATI = reinterpret_cast<vtkgl::PFNGLGETOBJECTBUFFERFVATIPROC>(manager->GetProcAddress("glGetObjectBufferfvATI"));
    vtkgl::GetObjectBufferivATI = reinterpret_cast<vtkgl::PFNGLGETOBJECTBUFFERIVATIPROC>(manager->GetProcAddress("glGetObjectBufferivATI"));
    vtkgl::FreeObjectBufferATI = reinterpret_cast<vtkgl::PFNGLFREEOBJECTBUFFERATIPROC>(manager->GetProcAddress("glFreeObjectBufferATI"));
    vtkgl::ArrayObjectATI = reinterpret_cast<vtkgl::PFNGLARRAYOBJECTATIPROC>(manager->GetProcAddress("glArrayObjectATI"));
    vtkgl::GetArrayObjectfvATI = reinterpret_cast<vtkgl::PFNGLGETARRAYOBJECTFVATIPROC>(manager->GetProcAddress("glGetArrayObjectfvATI"));
    vtkgl::GetArrayObjectivATI = reinterpret_cast<vtkgl::PFNGLGETARRAYOBJECTIVATIPROC>(manager->GetProcAddress("glGetArrayObjectivATI"));
    vtkgl::VariantArrayObjectATI = reinterpret_cast<vtkgl::PFNGLVARIANTARRAYOBJECTATIPROC>(manager->GetProcAddress("glVariantArrayObjectATI"));
    vtkgl::GetVariantArrayObjectfvATI = reinterpret_cast<vtkgl::PFNGLGETVARIANTARRAYOBJECTFVATIPROC>(manager->GetProcAddress("glGetVariantArrayObjectfvATI"));
    vtkgl::GetVariantArrayObjectivATI = reinterpret_cast<vtkgl::PFNGLGETVARIANTARRAYOBJECTIVATIPROC>(manager->GetProcAddress("glGetVariantArrayObjectivATI"));
    return 1 && (vtkgl::NewObjectBufferATI != NULL) && (vtkgl::IsObjectBufferATI != NULL) && (vtkgl::UpdateObjectBufferATI != NULL) && (vtkgl::GetObjectBufferfvATI != NULL) && (vtkgl::GetObjectBufferivATI != NULL) && (vtkgl::FreeObjectBufferATI != NULL) && (vtkgl::ArrayObjectATI != NULL) && (vtkgl::GetArrayObjectfvATI != NULL) && (vtkgl::GetArrayObjectivATI != NULL) && (vtkgl::VariantArrayObjectATI != NULL) && (vtkgl::GetVariantArrayObjectfvATI != NULL) && (vtkgl::GetVariantArrayObjectivATI != NULL);
    }
  if (strcmp(name, "GL_EXT_vertex_shader") == 0)
    {
    vtkgl::BeginVertexShaderEXT = reinterpret_cast<vtkgl::PFNGLBEGINVERTEXSHADEREXTPROC>(manager->GetProcAddress("glBeginVertexShaderEXT"));
    vtkgl::EndVertexShaderEXT = reinterpret_cast<vtkgl::PFNGLENDVERTEXSHADEREXTPROC>(manager->GetProcAddress("glEndVertexShaderEXT"));
    vtkgl::BindVertexShaderEXT = reinterpret_cast<vtkgl::PFNGLBINDVERTEXSHADEREXTPROC>(manager->GetProcAddress("glBindVertexShaderEXT"));
    vtkgl::GenVertexShadersEXT = reinterpret_cast<vtkgl::PFNGLGENVERTEXSHADERSEXTPROC>(manager->GetProcAddress("glGenVertexShadersEXT"));
    vtkgl::DeleteVertexShaderEXT = reinterpret_cast<vtkgl::PFNGLDELETEVERTEXSHADEREXTPROC>(manager->GetProcAddress("glDeleteVertexShaderEXT"));
    vtkgl::ShaderOp1EXT = reinterpret_cast<vtkgl::PFNGLSHADEROP1EXTPROC>(manager->GetProcAddress("glShaderOp1EXT"));
    vtkgl::ShaderOp2EXT = reinterpret_cast<vtkgl::PFNGLSHADEROP2EXTPROC>(manager->GetProcAddress("glShaderOp2EXT"));
    vtkgl::ShaderOp3EXT = reinterpret_cast<vtkgl::PFNGLSHADEROP3EXTPROC>(manager->GetProcAddress("glShaderOp3EXT"));
    vtkgl::SwizzleEXT = reinterpret_cast<vtkgl::PFNGLSWIZZLEEXTPROC>(manager->GetProcAddress("glSwizzleEXT"));
    vtkgl::WriteMaskEXT = reinterpret_cast<vtkgl::PFNGLWRITEMASKEXTPROC>(manager->GetProcAddress("glWriteMaskEXT"));
    vtkgl::InsertComponentEXT = reinterpret_cast<vtkgl::PFNGLINSERTCOMPONENTEXTPROC>(manager->GetProcAddress("glInsertComponentEXT"));
    vtkgl::ExtractComponentEXT = reinterpret_cast<vtkgl::PFNGLEXTRACTCOMPONENTEXTPROC>(manager->GetProcAddress("glExtractComponentEXT"));
    vtkgl::GenSymbolsEXT = reinterpret_cast<vtkgl::PFNGLGENSYMBOLSEXTPROC>(manager->GetProcAddress("glGenSymbolsEXT"));
    vtkgl::SetInvariantEXT = reinterpret_cast<vtkgl::PFNGLSETINVARIANTEXTPROC>(manager->GetProcAddress("glSetInvariantEXT"));
    vtkgl::SetLocalConstantEXT = reinterpret_cast<vtkgl::PFNGLSETLOCALCONSTANTEXTPROC>(manager->GetProcAddress("glSetLocalConstantEXT"));
    vtkgl::VariantbvEXT = reinterpret_cast<vtkgl::PFNGLVARIANTBVEXTPROC>(manager->GetProcAddress("glVariantbvEXT"));
    vtkgl::VariantsvEXT = reinterpret_cast<vtkgl::PFNGLVARIANTSVEXTPROC>(manager->GetProcAddress("glVariantsvEXT"));
    vtkgl::VariantivEXT = reinterpret_cast<vtkgl::PFNGLVARIANTIVEXTPROC>(manager->GetProcAddress("glVariantivEXT"));
    vtkgl::VariantfvEXT = reinterpret_cast<vtkgl::PFNGLVARIANTFVEXTPROC>(manager->GetProcAddress("glVariantfvEXT"));
    vtkgl::VariantdvEXT = reinterpret_cast<vtkgl::PFNGLVARIANTDVEXTPROC>(manager->GetProcAddress("glVariantdvEXT"));
    vtkgl::VariantubvEXT = reinterpret_cast<vtkgl::PFNGLVARIANTUBVEXTPROC>(manager->GetProcAddress("glVariantubvEXT"));
    vtkgl::VariantusvEXT = reinterpret_cast<vtkgl::PFNGLVARIANTUSVEXTPROC>(manager->GetProcAddress("glVariantusvEXT"));
    vtkgl::VariantuivEXT = reinterpret_cast<vtkgl::PFNGLVARIANTUIVEXTPROC>(manager->GetProcAddress("glVariantuivEXT"));
    vtkgl::VariantPointerEXT = reinterpret_cast<vtkgl::PFNGLVARIANTPOINTEREXTPROC>(manager->GetProcAddress("glVariantPointerEXT"));
    vtkgl::EnableVariantClientStateEXT = reinterpret_cast<vtkgl::PFNGLENABLEVARIANTCLIENTSTATEEXTPROC>(manager->GetProcAddress("glEnableVariantClientStateEXT"));
    vtkgl::DisableVariantClientStateEXT = reinterpret_cast<vtkgl::PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC>(manager->GetProcAddress("glDisableVariantClientStateEXT"));
    vtkgl::BindLightParameterEXT = reinterpret_cast<vtkgl::PFNGLBINDLIGHTPARAMETEREXTPROC>(manager->GetProcAddress("glBindLightParameterEXT"));
    vtkgl::BindMaterialParameterEXT = reinterpret_cast<vtkgl::PFNGLBINDMATERIALPARAMETEREXTPROC>(manager->GetProcAddress("glBindMaterialParameterEXT"));
    vtkgl::BindTexGenParameterEXT = reinterpret_cast<vtkgl::PFNGLBINDTEXGENPARAMETEREXTPROC>(manager->GetProcAddress("glBindTexGenParameterEXT"));
    vtkgl::BindTextureUnitParameterEXT = reinterpret_cast<vtkgl::PFNGLBINDTEXTUREUNITPARAMETEREXTPROC>(manager->GetProcAddress("glBindTextureUnitParameterEXT"));
    vtkgl::BindParameterEXT = reinterpret_cast<vtkgl::PFNGLBINDPARAMETEREXTPROC>(manager->GetProcAddress("glBindParameterEXT"));
    vtkgl::IsVariantEnabledEXT = reinterpret_cast<vtkgl::PFNGLISVARIANTENABLEDEXTPROC>(manager->GetProcAddress("glIsVariantEnabledEXT"));
    vtkgl::GetVariantBooleanvEXT = reinterpret_cast<vtkgl::PFNGLGETVARIANTBOOLEANVEXTPROC>(manager->GetProcAddress("glGetVariantBooleanvEXT"));
    vtkgl::GetVariantIntegervEXT = reinterpret_cast<vtkgl::PFNGLGETVARIANTINTEGERVEXTPROC>(manager->GetProcAddress("glGetVariantIntegervEXT"));
    vtkgl::GetVariantFloatvEXT = reinterpret_cast<vtkgl::PFNGLGETVARIANTFLOATVEXTPROC>(manager->GetProcAddress("glGetVariantFloatvEXT"));
    vtkgl::GetVariantPointervEXT = reinterpret_cast<vtkgl::PFNGLGETVARIANTPOINTERVEXTPROC>(manager->GetProcAddress("glGetVariantPointervEXT"));
    vtkgl::GetInvariantBooleanvEXT = reinterpret_cast<vtkgl::PFNGLGETINVARIANTBOOLEANVEXTPROC>(manager->GetProcAddress("glGetInvariantBooleanvEXT"));
    vtkgl::GetInvariantIntegervEXT = reinterpret_cast<vtkgl::PFNGLGETINVARIANTINTEGERVEXTPROC>(manager->GetProcAddress("glGetInvariantIntegervEXT"));
    vtkgl::GetInvariantFloatvEXT = reinterpret_cast<vtkgl::PFNGLGETINVARIANTFLOATVEXTPROC>(manager->GetProcAddress("glGetInvariantFloatvEXT"));
    vtkgl::GetLocalConstantBooleanvEXT = reinterpret_cast<vtkgl::PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC>(manager->GetProcAddress("glGetLocalConstantBooleanvEXT"));
    vtkgl::GetLocalConstantIntegervEXT = reinterpret_cast<vtkgl::PFNGLGETLOCALCONSTANTINTEGERVEXTPROC>(manager->GetProcAddress("glGetLocalConstantIntegervEXT"));
    vtkgl::GetLocalConstantFloatvEXT = reinterpret_cast<vtkgl::PFNGLGETLOCALCONSTANTFLOATVEXTPROC>(manager->GetProcAddress("glGetLocalConstantFloatvEXT"));
    return 1 && (vtkgl::BeginVertexShaderEXT != NULL) && (vtkgl::EndVertexShaderEXT != NULL) && (vtkgl::BindVertexShaderEXT != NULL) && (vtkgl::GenVertexShadersEXT != NULL) && (vtkgl::DeleteVertexShaderEXT != NULL) && (vtkgl::ShaderOp1EXT != NULL) && (vtkgl::ShaderOp2EXT != NULL) && (vtkgl::ShaderOp3EXT != NULL) && (vtkgl::SwizzleEXT != NULL) && (vtkgl::WriteMaskEXT != NULL) && (vtkgl::InsertComponentEXT != NULL) && (vtkgl::ExtractComponentEXT != NULL) && (vtkgl::GenSymbolsEXT != NULL) && (vtkgl::SetInvariantEXT != NULL) && (vtkgl::SetLocalConstantEXT != NULL) && (vtkgl::VariantbvEXT != NULL) && (vtkgl::VariantsvEXT != NULL) && (vtkgl::VariantivEXT != NULL) && (vtkgl::VariantfvEXT != NULL) && (vtkgl::VariantdvEXT != NULL) && (vtkgl::VariantubvEXT != NULL) && (vtkgl::VariantusvEXT != NULL) && (vtkgl::VariantuivEXT != NULL) && (vtkgl::VariantPointerEXT != NULL) && (vtkgl::EnableVariantClientStateEXT != NULL) && (vtkgl::DisableVariantClientStateEXT != NULL) && (vtkgl::BindLightParameterEXT != NULL) && (vtkgl::BindMaterialParameterEXT != NULL) && (vtkgl::BindTexGenParameterEXT != NULL) && (vtkgl::BindTextureUnitParameterEXT != NULL) && (vtkgl::BindParameterEXT != NULL) && (vtkgl::IsVariantEnabledEXT != NULL) && (vtkgl::GetVariantBooleanvEXT != NULL) && (vtkgl::GetVariantIntegervEXT != NULL) && (vtkgl::GetVariantFloatvEXT != NULL) && (vtkgl::GetVariantPointervEXT != NULL) && (vtkgl::GetInvariantBooleanvEXT != NULL) && (vtkgl::GetInvariantIntegervEXT != NULL) && (vtkgl::GetInvariantFloatvEXT != NULL) && (vtkgl::GetLocalConstantBooleanvEXT != NULL) && (vtkgl::GetLocalConstantIntegervEXT != NULL) && (vtkgl::GetLocalConstantFloatvEXT != NULL);
    }
  if (strcmp(name, "GL_ATI_vertex_streams") == 0)
    {
    vtkgl::VertexStream1sATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM1SATIPROC>(manager->GetProcAddress("glVertexStream1sATI"));
    vtkgl::VertexStream1svATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM1SVATIPROC>(manager->GetProcAddress("glVertexStream1svATI"));
    vtkgl::VertexStream1iATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM1IATIPROC>(manager->GetProcAddress("glVertexStream1iATI"));
    vtkgl::VertexStream1ivATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM1IVATIPROC>(manager->GetProcAddress("glVertexStream1ivATI"));
    vtkgl::VertexStream1fATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM1FATIPROC>(manager->GetProcAddress("glVertexStream1fATI"));
    vtkgl::VertexStream1fvATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM1FVATIPROC>(manager->GetProcAddress("glVertexStream1fvATI"));
    vtkgl::VertexStream1dATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM1DATIPROC>(manager->GetProcAddress("glVertexStream1dATI"));
    vtkgl::VertexStream1dvATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM1DVATIPROC>(manager->GetProcAddress("glVertexStream1dvATI"));
    vtkgl::VertexStream2sATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM2SATIPROC>(manager->GetProcAddress("glVertexStream2sATI"));
    vtkgl::VertexStream2svATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM2SVATIPROC>(manager->GetProcAddress("glVertexStream2svATI"));
    vtkgl::VertexStream2iATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM2IATIPROC>(manager->GetProcAddress("glVertexStream2iATI"));
    vtkgl::VertexStream2ivATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM2IVATIPROC>(manager->GetProcAddress("glVertexStream2ivATI"));
    vtkgl::VertexStream2fATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM2FATIPROC>(manager->GetProcAddress("glVertexStream2fATI"));
    vtkgl::VertexStream2fvATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM2FVATIPROC>(manager->GetProcAddress("glVertexStream2fvATI"));
    vtkgl::VertexStream2dATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM2DATIPROC>(manager->GetProcAddress("glVertexStream2dATI"));
    vtkgl::VertexStream2dvATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM2DVATIPROC>(manager->GetProcAddress("glVertexStream2dvATI"));
    vtkgl::VertexStream3sATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM3SATIPROC>(manager->GetProcAddress("glVertexStream3sATI"));
    vtkgl::VertexStream3svATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM3SVATIPROC>(manager->GetProcAddress("glVertexStream3svATI"));
    vtkgl::VertexStream3iATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM3IATIPROC>(manager->GetProcAddress("glVertexStream3iATI"));
    vtkgl::VertexStream3ivATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM3IVATIPROC>(manager->GetProcAddress("glVertexStream3ivATI"));
    vtkgl::VertexStream3fATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM3FATIPROC>(manager->GetProcAddress("glVertexStream3fATI"));
    vtkgl::VertexStream3fvATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM3FVATIPROC>(manager->GetProcAddress("glVertexStream3fvATI"));
    vtkgl::VertexStream3dATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM3DATIPROC>(manager->GetProcAddress("glVertexStream3dATI"));
    vtkgl::VertexStream3dvATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM3DVATIPROC>(manager->GetProcAddress("glVertexStream3dvATI"));
    vtkgl::VertexStream4sATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM4SATIPROC>(manager->GetProcAddress("glVertexStream4sATI"));
    vtkgl::VertexStream4svATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM4SVATIPROC>(manager->GetProcAddress("glVertexStream4svATI"));
    vtkgl::VertexStream4iATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM4IATIPROC>(manager->GetProcAddress("glVertexStream4iATI"));
    vtkgl::VertexStream4ivATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM4IVATIPROC>(manager->GetProcAddress("glVertexStream4ivATI"));
    vtkgl::VertexStream4fATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM4FATIPROC>(manager->GetProcAddress("glVertexStream4fATI"));
    vtkgl::VertexStream4fvATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM4FVATIPROC>(manager->GetProcAddress("glVertexStream4fvATI"));
    vtkgl::VertexStream4dATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM4DATIPROC>(manager->GetProcAddress("glVertexStream4dATI"));
    vtkgl::VertexStream4dvATI = reinterpret_cast<vtkgl::PFNGLVERTEXSTREAM4DVATIPROC>(manager->GetProcAddress("glVertexStream4dvATI"));
    vtkgl::NormalStream3bATI = reinterpret_cast<vtkgl::PFNGLNORMALSTREAM3BATIPROC>(manager->GetProcAddress("glNormalStream3bATI"));
    vtkgl::NormalStream3bvATI = reinterpret_cast<vtkgl::PFNGLNORMALSTREAM3BVATIPROC>(manager->GetProcAddress("glNormalStream3bvATI"));
    vtkgl::NormalStream3sATI = reinterpret_cast<vtkgl::PFNGLNORMALSTREAM3SATIPROC>(manager->GetProcAddress("glNormalStream3sATI"));
    vtkgl::NormalStream3svATI = reinterpret_cast<vtkgl::PFNGLNORMALSTREAM3SVATIPROC>(manager->GetProcAddress("glNormalStream3svATI"));
    vtkgl::NormalStream3iATI = reinterpret_cast<vtkgl::PFNGLNORMALSTREAM3IATIPROC>(manager->GetProcAddress("glNormalStream3iATI"));
    vtkgl::NormalStream3ivATI = reinterpret_cast<vtkgl::PFNGLNORMALSTREAM3IVATIPROC>(manager->GetProcAddress("glNormalStream3ivATI"));
    vtkgl::NormalStream3fATI = reinterpret_cast<vtkgl::PFNGLNORMALSTREAM3FATIPROC>(manager->GetProcAddress("glNormalStream3fATI"));
    vtkgl::NormalStream3fvATI = reinterpret_cast<vtkgl::PFNGLNORMALSTREAM3FVATIPROC>(manager->GetProcAddress("glNormalStream3fvATI"));
    vtkgl::NormalStream3dATI = reinterpret_cast<vtkgl::PFNGLNORMALSTREAM3DATIPROC>(manager->GetProcAddress("glNormalStream3dATI"));
    vtkgl::NormalStream3dvATI = reinterpret_cast<vtkgl::PFNGLNORMALSTREAM3DVATIPROC>(manager->GetProcAddress("glNormalStream3dvATI"));
    vtkgl::ClientActiveVertexStreamATI = reinterpret_cast<vtkgl::PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC>(manager->GetProcAddress("glClientActiveVertexStreamATI"));
    vtkgl::VertexBlendEnviATI = reinterpret_cast<vtkgl::PFNGLVERTEXBLENDENVIATIPROC>(manager->GetProcAddress("glVertexBlendEnviATI"));
    vtkgl::VertexBlendEnvfATI = reinterpret_cast<vtkgl::PFNGLVERTEXBLENDENVFATIPROC>(manager->GetProcAddress("glVertexBlendEnvfATI"));
    return 1 && (vtkgl::VertexStream1sATI != NULL) && (vtkgl::VertexStream1svATI != NULL) && (vtkgl::VertexStream1iATI != NULL) && (vtkgl::VertexStream1ivATI != NULL) && (vtkgl::VertexStream1fATI != NULL) && (vtkgl::VertexStream1fvATI != NULL) && (vtkgl::VertexStream1dATI != NULL) && (vtkgl::VertexStream1dvATI != NULL) && (vtkgl::VertexStream2sATI != NULL) && (vtkgl::VertexStream2svATI != NULL) && (vtkgl::VertexStream2iATI != NULL) && (vtkgl::VertexStream2ivATI != NULL) && (vtkgl::VertexStream2fATI != NULL) && (vtkgl::VertexStream2fvATI != NULL) && (vtkgl::VertexStream2dATI != NULL) && (vtkgl::VertexStream2dvATI != NULL) && (vtkgl::VertexStream3sATI != NULL) && (vtkgl::VertexStream3svATI != NULL) && (vtkgl::VertexStream3iATI != NULL) && (vtkgl::VertexStream3ivATI != NULL) && (vtkgl::VertexStream3fATI != NULL) && (vtkgl::VertexStream3fvATI != NULL) && (vtkgl::VertexStream3dATI != NULL) && (vtkgl::VertexStream3dvATI != NULL) && (vtkgl::VertexStream4sATI != NULL) && (vtkgl::VertexStream4svATI != NULL) && (vtkgl::VertexStream4iATI != NULL) && (vtkgl::VertexStream4ivATI != NULL) && (vtkgl::VertexStream4fATI != NULL) && (vtkgl::VertexStream4fvATI != NULL) && (vtkgl::VertexStream4dATI != NULL) && (vtkgl::VertexStream4dvATI != NULL) && (vtkgl::NormalStream3bATI != NULL) && (vtkgl::NormalStream3bvATI != NULL) && (vtkgl::NormalStream3sATI != NULL) && (vtkgl::NormalStream3svATI != NULL) && (vtkgl::NormalStream3iATI != NULL) && (vtkgl::NormalStream3ivATI != NULL) && (vtkgl::NormalStream3fATI != NULL) && (vtkgl::NormalStream3fvATI != NULL) && (vtkgl::NormalStream3dATI != NULL) && (vtkgl::NormalStream3dvATI != NULL) && (vtkgl::ClientActiveVertexStreamATI != NULL) && (vtkgl::VertexBlendEnviATI != NULL) && (vtkgl::VertexBlendEnvfATI != NULL);
    }
  if (strcmp(name, "GL_ATI_element_array") == 0)
    {
    vtkgl::ElementPointerATI = reinterpret_cast<vtkgl::PFNGLELEMENTPOINTERATIPROC>(manager->GetProcAddress("glElementPointerATI"));
    vtkgl::DrawElementArrayATI = reinterpret_cast<vtkgl::PFNGLDRAWELEMENTARRAYATIPROC>(manager->GetProcAddress("glDrawElementArrayATI"));
    vtkgl::DrawRangeElementArrayATI = reinterpret_cast<vtkgl::PFNGLDRAWRANGEELEMENTARRAYATIPROC>(manager->GetProcAddress("glDrawRangeElementArrayATI"));
    return 1 && (vtkgl::ElementPointerATI != NULL) && (vtkgl::DrawElementArrayATI != NULL) && (vtkgl::DrawRangeElementArrayATI != NULL);
    }
  if (strcmp(name, "GL_SUN_mesh_array") == 0)
    {
    vtkgl::DrawMeshArraysSUN = reinterpret_cast<vtkgl::PFNGLDRAWMESHARRAYSSUNPROC>(manager->GetProcAddress("glDrawMeshArraysSUN"));
    return 1 && (vtkgl::DrawMeshArraysSUN != NULL);
    }
  if (strcmp(name, "GL_SUN_slice_accum") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_multisample_filter_hint") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_depth_clamp") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_occlusion_query") == 0)
    {
    vtkgl::GenOcclusionQueriesNV = reinterpret_cast<vtkgl::PFNGLGENOCCLUSIONQUERIESNVPROC>(manager->GetProcAddress("glGenOcclusionQueriesNV"));
    vtkgl::DeleteOcclusionQueriesNV = reinterpret_cast<vtkgl::PFNGLDELETEOCCLUSIONQUERIESNVPROC>(manager->GetProcAddress("glDeleteOcclusionQueriesNV"));
    vtkgl::IsOcclusionQueryNV = reinterpret_cast<vtkgl::PFNGLISOCCLUSIONQUERYNVPROC>(manager->GetProcAddress("glIsOcclusionQueryNV"));
    vtkgl::BeginOcclusionQueryNV = reinterpret_cast<vtkgl::PFNGLBEGINOCCLUSIONQUERYNVPROC>(manager->GetProcAddress("glBeginOcclusionQueryNV"));
    vtkgl::EndOcclusionQueryNV = reinterpret_cast<vtkgl::PFNGLENDOCCLUSIONQUERYNVPROC>(manager->GetProcAddress("glEndOcclusionQueryNV"));
    vtkgl::GetOcclusionQueryivNV = reinterpret_cast<vtkgl::PFNGLGETOCCLUSIONQUERYIVNVPROC>(manager->GetProcAddress("glGetOcclusionQueryivNV"));
    vtkgl::GetOcclusionQueryuivNV = reinterpret_cast<vtkgl::PFNGLGETOCCLUSIONQUERYUIVNVPROC>(manager->GetProcAddress("glGetOcclusionQueryuivNV"));
    return 1 && (vtkgl::GenOcclusionQueriesNV != NULL) && (vtkgl::DeleteOcclusionQueriesNV != NULL) && (vtkgl::IsOcclusionQueryNV != NULL) && (vtkgl::BeginOcclusionQueryNV != NULL) && (vtkgl::EndOcclusionQueryNV != NULL) && (vtkgl::GetOcclusionQueryivNV != NULL) && (vtkgl::GetOcclusionQueryuivNV != NULL);
    }
  if (strcmp(name, "GL_NV_point_sprite") == 0)
    {
    vtkgl::PointParameteriNV = reinterpret_cast<vtkgl::PFNGLPOINTPARAMETERINVPROC>(manager->GetProcAddress("glPointParameteriNV"));
    vtkgl::PointParameterivNV = reinterpret_cast<vtkgl::PFNGLPOINTPARAMETERIVNVPROC>(manager->GetProcAddress("glPointParameterivNV"));
    return 1 && (vtkgl::PointParameteriNV != NULL) && (vtkgl::PointParameterivNV != NULL);
    }
  if (strcmp(name, "GL_NV_texture_shader3") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_vertex_program1_1") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_shadow_funcs") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_stencil_two_side") == 0)
    {
    vtkgl::ActiveStencilFaceEXT = reinterpret_cast<vtkgl::PFNGLACTIVESTENCILFACEEXTPROC>(manager->GetProcAddress("glActiveStencilFaceEXT"));
    return 1 && (vtkgl::ActiveStencilFaceEXT != NULL);
    }
  if (strcmp(name, "GL_ATI_text_fragment_shader") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_APPLE_client_storage") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_APPLE_element_array") == 0)
    {
    vtkgl::ElementPointerAPPLE = reinterpret_cast<vtkgl::PFNGLELEMENTPOINTERAPPLEPROC>(manager->GetProcAddress("glElementPointerAPPLE"));
    vtkgl::DrawElementArrayAPPLE = reinterpret_cast<vtkgl::PFNGLDRAWELEMENTARRAYAPPLEPROC>(manager->GetProcAddress("glDrawElementArrayAPPLE"));
    vtkgl::DrawRangeElementArrayAPPLE = reinterpret_cast<vtkgl::PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC>(manager->GetProcAddress("glDrawRangeElementArrayAPPLE"));
    vtkgl::MultiDrawElementArrayAPPLE = reinterpret_cast<vtkgl::PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC>(manager->GetProcAddress("glMultiDrawElementArrayAPPLE"));
    vtkgl::MultiDrawRangeElementArrayAPPLE = reinterpret_cast<vtkgl::PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC>(manager->GetProcAddress("glMultiDrawRangeElementArrayAPPLE"));
    return 1 && (vtkgl::ElementPointerAPPLE != NULL) && (vtkgl::DrawElementArrayAPPLE != NULL) && (vtkgl::DrawRangeElementArrayAPPLE != NULL) && (vtkgl::MultiDrawElementArrayAPPLE != NULL) && (vtkgl::MultiDrawRangeElementArrayAPPLE != NULL);
    }
  if (strcmp(name, "GL_APPLE_fence") == 0)
    {
    vtkgl::GenFencesAPPLE = reinterpret_cast<vtkgl::PFNGLGENFENCESAPPLEPROC>(manager->GetProcAddress("glGenFencesAPPLE"));
    vtkgl::DeleteFencesAPPLE = reinterpret_cast<vtkgl::PFNGLDELETEFENCESAPPLEPROC>(manager->GetProcAddress("glDeleteFencesAPPLE"));
    vtkgl::SetFenceAPPLE = reinterpret_cast<vtkgl::PFNGLSETFENCEAPPLEPROC>(manager->GetProcAddress("glSetFenceAPPLE"));
    vtkgl::IsFenceAPPLE = reinterpret_cast<vtkgl::PFNGLISFENCEAPPLEPROC>(manager->GetProcAddress("glIsFenceAPPLE"));
    vtkgl::TestFenceAPPLE = reinterpret_cast<vtkgl::PFNGLTESTFENCEAPPLEPROC>(manager->GetProcAddress("glTestFenceAPPLE"));
    vtkgl::FinishFenceAPPLE = reinterpret_cast<vtkgl::PFNGLFINISHFENCEAPPLEPROC>(manager->GetProcAddress("glFinishFenceAPPLE"));
    vtkgl::TestObjectAPPLE = reinterpret_cast<vtkgl::PFNGLTESTOBJECTAPPLEPROC>(manager->GetProcAddress("glTestObjectAPPLE"));
    vtkgl::FinishObjectAPPLE = reinterpret_cast<vtkgl::PFNGLFINISHOBJECTAPPLEPROC>(manager->GetProcAddress("glFinishObjectAPPLE"));
    return 1 && (vtkgl::GenFencesAPPLE != NULL) && (vtkgl::DeleteFencesAPPLE != NULL) && (vtkgl::SetFenceAPPLE != NULL) && (vtkgl::IsFenceAPPLE != NULL) && (vtkgl::TestFenceAPPLE != NULL) && (vtkgl::FinishFenceAPPLE != NULL) && (vtkgl::TestObjectAPPLE != NULL) && (vtkgl::FinishObjectAPPLE != NULL);
    }
  if (strcmp(name, "GL_APPLE_vertex_array_object") == 0)
    {
    vtkgl::BindVertexArrayAPPLE = reinterpret_cast<vtkgl::PFNGLBINDVERTEXARRAYAPPLEPROC>(manager->GetProcAddress("glBindVertexArrayAPPLE"));
    vtkgl::DeleteVertexArraysAPPLE = reinterpret_cast<vtkgl::PFNGLDELETEVERTEXARRAYSAPPLEPROC>(manager->GetProcAddress("glDeleteVertexArraysAPPLE"));
    vtkgl::GenVertexArraysAPPLE = reinterpret_cast<vtkgl::PFNGLGENVERTEXARRAYSAPPLEPROC>(manager->GetProcAddress("glGenVertexArraysAPPLE"));
    vtkgl::IsVertexArrayAPPLE = reinterpret_cast<vtkgl::PFNGLISVERTEXARRAYAPPLEPROC>(manager->GetProcAddress("glIsVertexArrayAPPLE"));
    return 1 && (vtkgl::BindVertexArrayAPPLE != NULL) && (vtkgl::DeleteVertexArraysAPPLE != NULL) && (vtkgl::GenVertexArraysAPPLE != NULL) && (vtkgl::IsVertexArrayAPPLE != NULL);
    }
  if (strcmp(name, "GL_APPLE_vertex_array_range") == 0)
    {
    vtkgl::VertexArrayRangeAPPLE = reinterpret_cast<vtkgl::PFNGLVERTEXARRAYRANGEAPPLEPROC>(manager->GetProcAddress("glVertexArrayRangeAPPLE"));
    vtkgl::FlushVertexArrayRangeAPPLE = reinterpret_cast<vtkgl::PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC>(manager->GetProcAddress("glFlushVertexArrayRangeAPPLE"));
    vtkgl::VertexArrayParameteriAPPLE = reinterpret_cast<vtkgl::PFNGLVERTEXARRAYPARAMETERIAPPLEPROC>(manager->GetProcAddress("glVertexArrayParameteriAPPLE"));
    return 1 && (vtkgl::VertexArrayRangeAPPLE != NULL) && (vtkgl::FlushVertexArrayRangeAPPLE != NULL) && (vtkgl::VertexArrayParameteriAPPLE != NULL);
    }
  if (strcmp(name, "GL_APPLE_ycbcr_422") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_S3_s3tc") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ATI_draw_buffers") == 0)
    {
    vtkgl::DrawBuffersATI = reinterpret_cast<vtkgl::PFNGLDRAWBUFFERSATIPROC>(manager->GetProcAddress("glDrawBuffersATI"));
    return 1 && (vtkgl::DrawBuffersATI != NULL);
    }
  if (strcmp(name, "GL_ATI_pixel_format_float") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ATI_texture_env_combine3") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ATI_texture_float") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_float_buffer") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_fragment_program") == 0)
    {
    vtkgl::ProgramNamedParameter4fNV = reinterpret_cast<vtkgl::PFNGLPROGRAMNAMEDPARAMETER4FNVPROC>(manager->GetProcAddress("glProgramNamedParameter4fNV"));
    vtkgl::ProgramNamedParameter4dNV = reinterpret_cast<vtkgl::PFNGLPROGRAMNAMEDPARAMETER4DNVPROC>(manager->GetProcAddress("glProgramNamedParameter4dNV"));
    vtkgl::ProgramNamedParameter4fvNV = reinterpret_cast<vtkgl::PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC>(manager->GetProcAddress("glProgramNamedParameter4fvNV"));
    vtkgl::ProgramNamedParameter4dvNV = reinterpret_cast<vtkgl::PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC>(manager->GetProcAddress("glProgramNamedParameter4dvNV"));
    vtkgl::GetProgramNamedParameterfvNV = reinterpret_cast<vtkgl::PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC>(manager->GetProcAddress("glGetProgramNamedParameterfvNV"));
    vtkgl::GetProgramNamedParameterdvNV = reinterpret_cast<vtkgl::PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC>(manager->GetProcAddress("glGetProgramNamedParameterdvNV"));
    return 1 && (vtkgl::ProgramNamedParameter4fNV != NULL) && (vtkgl::ProgramNamedParameter4dNV != NULL) && (vtkgl::ProgramNamedParameter4fvNV != NULL) && (vtkgl::ProgramNamedParameter4dvNV != NULL) && (vtkgl::GetProgramNamedParameterfvNV != NULL) && (vtkgl::GetProgramNamedParameterdvNV != NULL);
    }
  if (strcmp(name, "GL_NV_half_float") == 0)
    {
    vtkgl::Vertex2hNV = reinterpret_cast<vtkgl::PFNGLVERTEX2HNVPROC>(manager->GetProcAddress("glVertex2hNV"));
    vtkgl::Vertex2hvNV = reinterpret_cast<vtkgl::PFNGLVERTEX2HVNVPROC>(manager->GetProcAddress("glVertex2hvNV"));
    vtkgl::Vertex3hNV = reinterpret_cast<vtkgl::PFNGLVERTEX3HNVPROC>(manager->GetProcAddress("glVertex3hNV"));
    vtkgl::Vertex3hvNV = reinterpret_cast<vtkgl::PFNGLVERTEX3HVNVPROC>(manager->GetProcAddress("glVertex3hvNV"));
    vtkgl::Vertex4hNV = reinterpret_cast<vtkgl::PFNGLVERTEX4HNVPROC>(manager->GetProcAddress("glVertex4hNV"));
    vtkgl::Vertex4hvNV = reinterpret_cast<vtkgl::PFNGLVERTEX4HVNVPROC>(manager->GetProcAddress("glVertex4hvNV"));
    vtkgl::Normal3hNV = reinterpret_cast<vtkgl::PFNGLNORMAL3HNVPROC>(manager->GetProcAddress("glNormal3hNV"));
    vtkgl::Normal3hvNV = reinterpret_cast<vtkgl::PFNGLNORMAL3HVNVPROC>(manager->GetProcAddress("glNormal3hvNV"));
    vtkgl::Color3hNV = reinterpret_cast<vtkgl::PFNGLCOLOR3HNVPROC>(manager->GetProcAddress("glColor3hNV"));
    vtkgl::Color3hvNV = reinterpret_cast<vtkgl::PFNGLCOLOR3HVNVPROC>(manager->GetProcAddress("glColor3hvNV"));
    vtkgl::Color4hNV = reinterpret_cast<vtkgl::PFNGLCOLOR4HNVPROC>(manager->GetProcAddress("glColor4hNV"));
    vtkgl::Color4hvNV = reinterpret_cast<vtkgl::PFNGLCOLOR4HVNVPROC>(manager->GetProcAddress("glColor4hvNV"));
    vtkgl::TexCoord1hNV = reinterpret_cast<vtkgl::PFNGLTEXCOORD1HNVPROC>(manager->GetProcAddress("glTexCoord1hNV"));
    vtkgl::TexCoord1hvNV = reinterpret_cast<vtkgl::PFNGLTEXCOORD1HVNVPROC>(manager->GetProcAddress("glTexCoord1hvNV"));
    vtkgl::TexCoord2hNV = reinterpret_cast<vtkgl::PFNGLTEXCOORD2HNVPROC>(manager->GetProcAddress("glTexCoord2hNV"));
    vtkgl::TexCoord2hvNV = reinterpret_cast<vtkgl::PFNGLTEXCOORD2HVNVPROC>(manager->GetProcAddress("glTexCoord2hvNV"));
    vtkgl::TexCoord3hNV = reinterpret_cast<vtkgl::PFNGLTEXCOORD3HNVPROC>(manager->GetProcAddress("glTexCoord3hNV"));
    vtkgl::TexCoord3hvNV = reinterpret_cast<vtkgl::PFNGLTEXCOORD3HVNVPROC>(manager->GetProcAddress("glTexCoord3hvNV"));
    vtkgl::TexCoord4hNV = reinterpret_cast<vtkgl::PFNGLTEXCOORD4HNVPROC>(manager->GetProcAddress("glTexCoord4hNV"));
    vtkgl::TexCoord4hvNV = reinterpret_cast<vtkgl::PFNGLTEXCOORD4HVNVPROC>(manager->GetProcAddress("glTexCoord4hvNV"));
    vtkgl::MultiTexCoord1hNV = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD1HNVPROC>(manager->GetProcAddress("glMultiTexCoord1hNV"));
    vtkgl::MultiTexCoord1hvNV = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD1HVNVPROC>(manager->GetProcAddress("glMultiTexCoord1hvNV"));
    vtkgl::MultiTexCoord2hNV = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD2HNVPROC>(manager->GetProcAddress("glMultiTexCoord2hNV"));
    vtkgl::MultiTexCoord2hvNV = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD2HVNVPROC>(manager->GetProcAddress("glMultiTexCoord2hvNV"));
    vtkgl::MultiTexCoord3hNV = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD3HNVPROC>(manager->GetProcAddress("glMultiTexCoord3hNV"));
    vtkgl::MultiTexCoord3hvNV = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD3HVNVPROC>(manager->GetProcAddress("glMultiTexCoord3hvNV"));
    vtkgl::MultiTexCoord4hNV = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD4HNVPROC>(manager->GetProcAddress("glMultiTexCoord4hNV"));
    vtkgl::MultiTexCoord4hvNV = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORD4HVNVPROC>(manager->GetProcAddress("glMultiTexCoord4hvNV"));
    vtkgl::FogCoordhNV = reinterpret_cast<vtkgl::PFNGLFOGCOORDHNVPROC>(manager->GetProcAddress("glFogCoordhNV"));
    vtkgl::FogCoordhvNV = reinterpret_cast<vtkgl::PFNGLFOGCOORDHVNVPROC>(manager->GetProcAddress("glFogCoordhvNV"));
    vtkgl::SecondaryColor3hNV = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3HNVPROC>(manager->GetProcAddress("glSecondaryColor3hNV"));
    vtkgl::SecondaryColor3hvNV = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLOR3HVNVPROC>(manager->GetProcAddress("glSecondaryColor3hvNV"));
    vtkgl::VertexWeighthNV = reinterpret_cast<vtkgl::PFNGLVERTEXWEIGHTHNVPROC>(manager->GetProcAddress("glVertexWeighthNV"));
    vtkgl::VertexWeighthvNV = reinterpret_cast<vtkgl::PFNGLVERTEXWEIGHTHVNVPROC>(manager->GetProcAddress("glVertexWeighthvNV"));
    vtkgl::VertexAttrib1hNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB1HNVPROC>(manager->GetProcAddress("glVertexAttrib1hNV"));
    vtkgl::VertexAttrib1hvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB1HVNVPROC>(manager->GetProcAddress("glVertexAttrib1hvNV"));
    vtkgl::VertexAttrib2hNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB2HNVPROC>(manager->GetProcAddress("glVertexAttrib2hNV"));
    vtkgl::VertexAttrib2hvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB2HVNVPROC>(manager->GetProcAddress("glVertexAttrib2hvNV"));
    vtkgl::VertexAttrib3hNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB3HNVPROC>(manager->GetProcAddress("glVertexAttrib3hNV"));
    vtkgl::VertexAttrib3hvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB3HVNVPROC>(manager->GetProcAddress("glVertexAttrib3hvNV"));
    vtkgl::VertexAttrib4hNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4HNVPROC>(manager->GetProcAddress("glVertexAttrib4hNV"));
    vtkgl::VertexAttrib4hvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIB4HVNVPROC>(manager->GetProcAddress("glVertexAttrib4hvNV"));
    vtkgl::VertexAttribs1hvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBS1HVNVPROC>(manager->GetProcAddress("glVertexAttribs1hvNV"));
    vtkgl::VertexAttribs2hvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBS2HVNVPROC>(manager->GetProcAddress("glVertexAttribs2hvNV"));
    vtkgl::VertexAttribs3hvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBS3HVNVPROC>(manager->GetProcAddress("glVertexAttribs3hvNV"));
    vtkgl::VertexAttribs4hvNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBS4HVNVPROC>(manager->GetProcAddress("glVertexAttribs4hvNV"));
    return 1 && (vtkgl::Vertex2hNV != NULL) && (vtkgl::Vertex2hvNV != NULL) && (vtkgl::Vertex3hNV != NULL) && (vtkgl::Vertex3hvNV != NULL) && (vtkgl::Vertex4hNV != NULL) && (vtkgl::Vertex4hvNV != NULL) && (vtkgl::Normal3hNV != NULL) && (vtkgl::Normal3hvNV != NULL) && (vtkgl::Color3hNV != NULL) && (vtkgl::Color3hvNV != NULL) && (vtkgl::Color4hNV != NULL) && (vtkgl::Color4hvNV != NULL) && (vtkgl::TexCoord1hNV != NULL) && (vtkgl::TexCoord1hvNV != NULL) && (vtkgl::TexCoord2hNV != NULL) && (vtkgl::TexCoord2hvNV != NULL) && (vtkgl::TexCoord3hNV != NULL) && (vtkgl::TexCoord3hvNV != NULL) && (vtkgl::TexCoord4hNV != NULL) && (vtkgl::TexCoord4hvNV != NULL) && (vtkgl::MultiTexCoord1hNV != NULL) && (vtkgl::MultiTexCoord1hvNV != NULL) && (vtkgl::MultiTexCoord2hNV != NULL) && (vtkgl::MultiTexCoord2hvNV != NULL) && (vtkgl::MultiTexCoord3hNV != NULL) && (vtkgl::MultiTexCoord3hvNV != NULL) && (vtkgl::MultiTexCoord4hNV != NULL) && (vtkgl::MultiTexCoord4hvNV != NULL) && (vtkgl::FogCoordhNV != NULL) && (vtkgl::FogCoordhvNV != NULL) && (vtkgl::SecondaryColor3hNV != NULL) && (vtkgl::SecondaryColor3hvNV != NULL) && (vtkgl::VertexWeighthNV != NULL) && (vtkgl::VertexWeighthvNV != NULL) && (vtkgl::VertexAttrib1hNV != NULL) && (vtkgl::VertexAttrib1hvNV != NULL) && (vtkgl::VertexAttrib2hNV != NULL) && (vtkgl::VertexAttrib2hvNV != NULL) && (vtkgl::VertexAttrib3hNV != NULL) && (vtkgl::VertexAttrib3hvNV != NULL) && (vtkgl::VertexAttrib4hNV != NULL) && (vtkgl::VertexAttrib4hvNV != NULL) && (vtkgl::VertexAttribs1hvNV != NULL) && (vtkgl::VertexAttribs2hvNV != NULL) && (vtkgl::VertexAttribs3hvNV != NULL) && (vtkgl::VertexAttribs4hvNV != NULL);
    }
  if (strcmp(name, "GL_NV_pixel_data_range") == 0)
    {
    vtkgl::PixelDataRangeNV = reinterpret_cast<vtkgl::PFNGLPIXELDATARANGENVPROC>(manager->GetProcAddress("glPixelDataRangeNV"));
    vtkgl::FlushPixelDataRangeNV = reinterpret_cast<vtkgl::PFNGLFLUSHPIXELDATARANGENVPROC>(manager->GetProcAddress("glFlushPixelDataRangeNV"));
    return 1 && (vtkgl::PixelDataRangeNV != NULL) && (vtkgl::FlushPixelDataRangeNV != NULL);
    }
  if (strcmp(name, "GL_NV_primitive_restart") == 0)
    {
    vtkgl::PrimitiveRestartNV = reinterpret_cast<vtkgl::PFNGLPRIMITIVERESTARTNVPROC>(manager->GetProcAddress("glPrimitiveRestartNV"));
    vtkgl::PrimitiveRestartIndexNV = reinterpret_cast<vtkgl::PFNGLPRIMITIVERESTARTINDEXNVPROC>(manager->GetProcAddress("glPrimitiveRestartIndexNV"));
    return 1 && (vtkgl::PrimitiveRestartNV != NULL) && (vtkgl::PrimitiveRestartIndexNV != NULL);
    }
  if (strcmp(name, "GL_NV_texture_expand_normal") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_vertex_program2") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ATI_map_object_buffer") == 0)
    {
    vtkgl::MapObjectBufferATI = reinterpret_cast<vtkgl::PFNGLMAPOBJECTBUFFERATIPROC>(manager->GetProcAddress("glMapObjectBufferATI"));
    vtkgl::UnmapObjectBufferATI = reinterpret_cast<vtkgl::PFNGLUNMAPOBJECTBUFFERATIPROC>(manager->GetProcAddress("glUnmapObjectBufferATI"));
    return 1 && (vtkgl::MapObjectBufferATI != NULL) && (vtkgl::UnmapObjectBufferATI != NULL);
    }
  if (strcmp(name, "GL_ATI_separate_stencil") == 0)
    {
    vtkgl::StencilOpSeparateATI = reinterpret_cast<vtkgl::PFNGLSTENCILOPSEPARATEATIPROC>(manager->GetProcAddress("glStencilOpSeparateATI"));
    vtkgl::StencilFuncSeparateATI = reinterpret_cast<vtkgl::PFNGLSTENCILFUNCSEPARATEATIPROC>(manager->GetProcAddress("glStencilFuncSeparateATI"));
    return 1 && (vtkgl::StencilOpSeparateATI != NULL) && (vtkgl::StencilFuncSeparateATI != NULL);
    }
  if (strcmp(name, "GL_ATI_vertex_attrib_array_object") == 0)
    {
    vtkgl::VertexAttribArrayObjectATI = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBARRAYOBJECTATIPROC>(manager->GetProcAddress("glVertexAttribArrayObjectATI"));
    vtkgl::GetVertexAttribArrayObjectfvATI = reinterpret_cast<vtkgl::PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC>(manager->GetProcAddress("glGetVertexAttribArrayObjectfvATI"));
    vtkgl::GetVertexAttribArrayObjectivATI = reinterpret_cast<vtkgl::PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC>(manager->GetProcAddress("glGetVertexAttribArrayObjectivATI"));
    return 1 && (vtkgl::VertexAttribArrayObjectATI != NULL) && (vtkgl::GetVertexAttribArrayObjectfvATI != NULL) && (vtkgl::GetVertexAttribArrayObjectivATI != NULL);
    }
  if (strcmp(name, "GL_OES_read_format") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_depth_bounds_test") == 0)
    {
    vtkgl::DepthBoundsEXT = reinterpret_cast<vtkgl::PFNGLDEPTHBOUNDSEXTPROC>(manager->GetProcAddress("glDepthBoundsEXT"));
    return 1 && (vtkgl::DepthBoundsEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_texture_mirror_clamp") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_blend_equation_separate") == 0)
    {
    vtkgl::BlendEquationSeparateEXT = reinterpret_cast<vtkgl::PFNGLBLENDEQUATIONSEPARATEEXTPROC>(manager->GetProcAddress("glBlendEquationSeparateEXT"));
    return 1 && (vtkgl::BlendEquationSeparateEXT != NULL);
    }
  if (strcmp(name, "GL_MESA_pack_invert") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_MESA_ycbcr_texture") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_pixel_buffer_object") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_fragment_program_option") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_fragment_program2") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_vertex_program2_option") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_vertex_program3") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_framebuffer_object") == 0)
    {
    vtkgl::IsRenderbufferEXT = reinterpret_cast<vtkgl::PFNGLISRENDERBUFFEREXTPROC>(manager->GetProcAddress("glIsRenderbufferEXT"));
    vtkgl::BindRenderbufferEXT = reinterpret_cast<vtkgl::PFNGLBINDRENDERBUFFEREXTPROC>(manager->GetProcAddress("glBindRenderbufferEXT"));
    vtkgl::DeleteRenderbuffersEXT = reinterpret_cast<vtkgl::PFNGLDELETERENDERBUFFERSEXTPROC>(manager->GetProcAddress("glDeleteRenderbuffersEXT"));
    vtkgl::GenRenderbuffersEXT = reinterpret_cast<vtkgl::PFNGLGENRENDERBUFFERSEXTPROC>(manager->GetProcAddress("glGenRenderbuffersEXT"));
    vtkgl::RenderbufferStorageEXT = reinterpret_cast<vtkgl::PFNGLRENDERBUFFERSTORAGEEXTPROC>(manager->GetProcAddress("glRenderbufferStorageEXT"));
    vtkgl::GetRenderbufferParameterivEXT = reinterpret_cast<vtkgl::PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC>(manager->GetProcAddress("glGetRenderbufferParameterivEXT"));
    vtkgl::IsFramebufferEXT = reinterpret_cast<vtkgl::PFNGLISFRAMEBUFFEREXTPROC>(manager->GetProcAddress("glIsFramebufferEXT"));
    vtkgl::BindFramebufferEXT = reinterpret_cast<vtkgl::PFNGLBINDFRAMEBUFFEREXTPROC>(manager->GetProcAddress("glBindFramebufferEXT"));
    vtkgl::DeleteFramebuffersEXT = reinterpret_cast<vtkgl::PFNGLDELETEFRAMEBUFFERSEXTPROC>(manager->GetProcAddress("glDeleteFramebuffersEXT"));
    vtkgl::GenFramebuffersEXT = reinterpret_cast<vtkgl::PFNGLGENFRAMEBUFFERSEXTPROC>(manager->GetProcAddress("glGenFramebuffersEXT"));
    vtkgl::CheckFramebufferStatusEXT = reinterpret_cast<vtkgl::PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC>(manager->GetProcAddress("glCheckFramebufferStatusEXT"));
    vtkgl::FramebufferTexture1DEXT = reinterpret_cast<vtkgl::PFNGLFRAMEBUFFERTEXTURE1DEXTPROC>(manager->GetProcAddress("glFramebufferTexture1DEXT"));
    vtkgl::FramebufferTexture2DEXT = reinterpret_cast<vtkgl::PFNGLFRAMEBUFFERTEXTURE2DEXTPROC>(manager->GetProcAddress("glFramebufferTexture2DEXT"));
    vtkgl::FramebufferTexture3DEXT = reinterpret_cast<vtkgl::PFNGLFRAMEBUFFERTEXTURE3DEXTPROC>(manager->GetProcAddress("glFramebufferTexture3DEXT"));
    vtkgl::FramebufferRenderbufferEXT = reinterpret_cast<vtkgl::PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC>(manager->GetProcAddress("glFramebufferRenderbufferEXT"));
    vtkgl::GetFramebufferAttachmentParameterivEXT = reinterpret_cast<vtkgl::PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC>(manager->GetProcAddress("glGetFramebufferAttachmentParameterivEXT"));
    vtkgl::GenerateMipmapEXT = reinterpret_cast<vtkgl::PFNGLGENERATEMIPMAPEXTPROC>(manager->GetProcAddress("glGenerateMipmapEXT"));
    return 1 && (vtkgl::IsRenderbufferEXT != NULL) && (vtkgl::BindRenderbufferEXT != NULL) && (vtkgl::DeleteRenderbuffersEXT != NULL) && (vtkgl::GenRenderbuffersEXT != NULL) && (vtkgl::RenderbufferStorageEXT != NULL) && (vtkgl::GetRenderbufferParameterivEXT != NULL) && (vtkgl::IsFramebufferEXT != NULL) && (vtkgl::BindFramebufferEXT != NULL) && (vtkgl::DeleteFramebuffersEXT != NULL) && (vtkgl::GenFramebuffersEXT != NULL) && (vtkgl::CheckFramebufferStatusEXT != NULL) && (vtkgl::FramebufferTexture1DEXT != NULL) && (vtkgl::FramebufferTexture2DEXT != NULL) && (vtkgl::FramebufferTexture3DEXT != NULL) && (vtkgl::FramebufferRenderbufferEXT != NULL) && (vtkgl::GetFramebufferAttachmentParameterivEXT != NULL) && (vtkgl::GenerateMipmapEXT != NULL);
    }
  if (strcmp(name, "GL_GREMEDY_string_marker") == 0)
    {
    vtkgl::StringMarkerGREMEDY = reinterpret_cast<vtkgl::PFNGLSTRINGMARKERGREMEDYPROC>(manager->GetProcAddress("glStringMarkerGREMEDY"));
    return 1 && (vtkgl::StringMarkerGREMEDY != NULL);
    }
  if (strcmp(name, "GL_EXT_packed_depth_stencil") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_stencil_clear_tag") == 0)
    {
    vtkgl::StencilClearTagEXT = reinterpret_cast<vtkgl::PFNGLSTENCILCLEARTAGEXTPROC>(manager->GetProcAddress("glStencilClearTagEXT"));
    return 1 && (vtkgl::StencilClearTagEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_texture_sRGB") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_framebuffer_blit") == 0)
    {
    vtkgl::BlitFramebufferEXT = reinterpret_cast<vtkgl::PFNGLBLITFRAMEBUFFEREXTPROC>(manager->GetProcAddress("glBlitFramebufferEXT"));
    return 1 && (vtkgl::BlitFramebufferEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_framebuffer_multisample") == 0)
    {
    vtkgl::RenderbufferStorageMultisampleEXT = reinterpret_cast<vtkgl::PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC>(manager->GetProcAddress("glRenderbufferStorageMultisampleEXT"));
    return 1 && (vtkgl::RenderbufferStorageMultisampleEXT != NULL);
    }
  if (strcmp(name, "GL_MESAX_texture_stack") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_timer_query") == 0)
    {
    vtkgl::GetQueryObjecti64vEXT = reinterpret_cast<vtkgl::PFNGLGETQUERYOBJECTI64VEXTPROC>(manager->GetProcAddress("glGetQueryObjecti64vEXT"));
    vtkgl::GetQueryObjectui64vEXT = reinterpret_cast<vtkgl::PFNGLGETQUERYOBJECTUI64VEXTPROC>(manager->GetProcAddress("glGetQueryObjectui64vEXT"));
    return 1 && (vtkgl::GetQueryObjecti64vEXT != NULL) && (vtkgl::GetQueryObjectui64vEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_gpu_program_parameters") == 0)
    {
    vtkgl::ProgramEnvParameters4fvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMENVPARAMETERS4FVEXTPROC>(manager->GetProcAddress("glProgramEnvParameters4fvEXT"));
    vtkgl::ProgramLocalParameters4fvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC>(manager->GetProcAddress("glProgramLocalParameters4fvEXT"));
    return 1 && (vtkgl::ProgramEnvParameters4fvEXT != NULL) && (vtkgl::ProgramLocalParameters4fvEXT != NULL);
    }
  if (strcmp(name, "GL_APPLE_flush_buffer_range") == 0)
    {
    vtkgl::BufferParameteriAPPLE = reinterpret_cast<vtkgl::PFNGLBUFFERPARAMETERIAPPLEPROC>(manager->GetProcAddress("glBufferParameteriAPPLE"));
    vtkgl::FlushMappedBufferRangeAPPLE = reinterpret_cast<vtkgl::PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC>(manager->GetProcAddress("glFlushMappedBufferRangeAPPLE"));
    return 1 && (vtkgl::BufferParameteriAPPLE != NULL) && (vtkgl::FlushMappedBufferRangeAPPLE != NULL);
    }
  if (strcmp(name, "GL_NV_gpu_program4") == 0)
    {
    vtkgl::ProgramLocalParameterI4iNV = reinterpret_cast<vtkgl::PFNGLPROGRAMLOCALPARAMETERI4INVPROC>(manager->GetProcAddress("glProgramLocalParameterI4iNV"));
    vtkgl::ProgramLocalParameterI4ivNV = reinterpret_cast<vtkgl::PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC>(manager->GetProcAddress("glProgramLocalParameterI4ivNV"));
    vtkgl::ProgramLocalParametersI4ivNV = reinterpret_cast<vtkgl::PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC>(manager->GetProcAddress("glProgramLocalParametersI4ivNV"));
    vtkgl::ProgramLocalParameterI4uiNV = reinterpret_cast<vtkgl::PFNGLPROGRAMLOCALPARAMETERI4UINVPROC>(manager->GetProcAddress("glProgramLocalParameterI4uiNV"));
    vtkgl::ProgramLocalParameterI4uivNV = reinterpret_cast<vtkgl::PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC>(manager->GetProcAddress("glProgramLocalParameterI4uivNV"));
    vtkgl::ProgramLocalParametersI4uivNV = reinterpret_cast<vtkgl::PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC>(manager->GetProcAddress("glProgramLocalParametersI4uivNV"));
    vtkgl::ProgramEnvParameterI4iNV = reinterpret_cast<vtkgl::PFNGLPROGRAMENVPARAMETERI4INVPROC>(manager->GetProcAddress("glProgramEnvParameterI4iNV"));
    vtkgl::ProgramEnvParameterI4ivNV = reinterpret_cast<vtkgl::PFNGLPROGRAMENVPARAMETERI4IVNVPROC>(manager->GetProcAddress("glProgramEnvParameterI4ivNV"));
    vtkgl::ProgramEnvParametersI4ivNV = reinterpret_cast<vtkgl::PFNGLPROGRAMENVPARAMETERSI4IVNVPROC>(manager->GetProcAddress("glProgramEnvParametersI4ivNV"));
    vtkgl::ProgramEnvParameterI4uiNV = reinterpret_cast<vtkgl::PFNGLPROGRAMENVPARAMETERI4UINVPROC>(manager->GetProcAddress("glProgramEnvParameterI4uiNV"));
    vtkgl::ProgramEnvParameterI4uivNV = reinterpret_cast<vtkgl::PFNGLPROGRAMENVPARAMETERI4UIVNVPROC>(manager->GetProcAddress("glProgramEnvParameterI4uivNV"));
    vtkgl::ProgramEnvParametersI4uivNV = reinterpret_cast<vtkgl::PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC>(manager->GetProcAddress("glProgramEnvParametersI4uivNV"));
    vtkgl::GetProgramLocalParameterIivNV = reinterpret_cast<vtkgl::PFNGLGETPROGRAMLOCALPARAMETERIIVNVPROC>(manager->GetProcAddress("glGetProgramLocalParameterIivNV"));
    vtkgl::GetProgramLocalParameterIuivNV = reinterpret_cast<vtkgl::PFNGLGETPROGRAMLOCALPARAMETERIUIVNVPROC>(manager->GetProcAddress("glGetProgramLocalParameterIuivNV"));
    vtkgl::GetProgramEnvParameterIivNV = reinterpret_cast<vtkgl::PFNGLGETPROGRAMENVPARAMETERIIVNVPROC>(manager->GetProcAddress("glGetProgramEnvParameterIivNV"));
    vtkgl::GetProgramEnvParameterIuivNV = reinterpret_cast<vtkgl::PFNGLGETPROGRAMENVPARAMETERIUIVNVPROC>(manager->GetProcAddress("glGetProgramEnvParameterIuivNV"));
    return 1 && (vtkgl::ProgramLocalParameterI4iNV != NULL) && (vtkgl::ProgramLocalParameterI4ivNV != NULL) && (vtkgl::ProgramLocalParametersI4ivNV != NULL) && (vtkgl::ProgramLocalParameterI4uiNV != NULL) && (vtkgl::ProgramLocalParameterI4uivNV != NULL) && (vtkgl::ProgramLocalParametersI4uivNV != NULL) && (vtkgl::ProgramEnvParameterI4iNV != NULL) && (vtkgl::ProgramEnvParameterI4ivNV != NULL) && (vtkgl::ProgramEnvParametersI4ivNV != NULL) && (vtkgl::ProgramEnvParameterI4uiNV != NULL) && (vtkgl::ProgramEnvParameterI4uivNV != NULL) && (vtkgl::ProgramEnvParametersI4uivNV != NULL) && (vtkgl::GetProgramLocalParameterIivNV != NULL) && (vtkgl::GetProgramLocalParameterIuivNV != NULL) && (vtkgl::GetProgramEnvParameterIivNV != NULL) && (vtkgl::GetProgramEnvParameterIuivNV != NULL);
    }
  if (strcmp(name, "GL_NV_geometry_program4") == 0)
    {
    vtkgl::ProgramVertexLimitNV = reinterpret_cast<vtkgl::PFNGLPROGRAMVERTEXLIMITNVPROC>(manager->GetProcAddress("glProgramVertexLimitNV"));
    vtkgl::FramebufferTextureEXT = reinterpret_cast<vtkgl::PFNGLFRAMEBUFFERTEXTUREEXTPROC>(manager->GetProcAddress("glFramebufferTextureEXT"));
    vtkgl::FramebufferTextureLayerEXT = reinterpret_cast<vtkgl::PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC>(manager->GetProcAddress("glFramebufferTextureLayerEXT"));
    vtkgl::FramebufferTextureFaceEXT = reinterpret_cast<vtkgl::PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC>(manager->GetProcAddress("glFramebufferTextureFaceEXT"));
    return 1 && (vtkgl::ProgramVertexLimitNV != NULL) && (vtkgl::FramebufferTextureEXT != NULL) && (vtkgl::FramebufferTextureLayerEXT != NULL) && (vtkgl::FramebufferTextureFaceEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_geometry_shader4") == 0)
    {
    vtkgl::ProgramParameteriEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMPARAMETERIEXTPROC>(manager->GetProcAddress("glProgramParameteriEXT"));
    return 1 && (vtkgl::ProgramParameteriEXT != NULL);
    }
  if (strcmp(name, "GL_NV_vertex_program4") == 0)
    {
    vtkgl::VertexAttribI1iEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI1IEXTPROC>(manager->GetProcAddress("glVertexAttribI1iEXT"));
    vtkgl::VertexAttribI2iEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI2IEXTPROC>(manager->GetProcAddress("glVertexAttribI2iEXT"));
    vtkgl::VertexAttribI3iEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI3IEXTPROC>(manager->GetProcAddress("glVertexAttribI3iEXT"));
    vtkgl::VertexAttribI4iEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI4IEXTPROC>(manager->GetProcAddress("glVertexAttribI4iEXT"));
    vtkgl::VertexAttribI1uiEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI1UIEXTPROC>(manager->GetProcAddress("glVertexAttribI1uiEXT"));
    vtkgl::VertexAttribI2uiEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI2UIEXTPROC>(manager->GetProcAddress("glVertexAttribI2uiEXT"));
    vtkgl::VertexAttribI3uiEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI3UIEXTPROC>(manager->GetProcAddress("glVertexAttribI3uiEXT"));
    vtkgl::VertexAttribI4uiEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI4UIEXTPROC>(manager->GetProcAddress("glVertexAttribI4uiEXT"));
    vtkgl::VertexAttribI1ivEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI1IVEXTPROC>(manager->GetProcAddress("glVertexAttribI1ivEXT"));
    vtkgl::VertexAttribI2ivEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI2IVEXTPROC>(manager->GetProcAddress("glVertexAttribI2ivEXT"));
    vtkgl::VertexAttribI3ivEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI3IVEXTPROC>(manager->GetProcAddress("glVertexAttribI3ivEXT"));
    vtkgl::VertexAttribI4ivEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI4IVEXTPROC>(manager->GetProcAddress("glVertexAttribI4ivEXT"));
    vtkgl::VertexAttribI1uivEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI1UIVEXTPROC>(manager->GetProcAddress("glVertexAttribI1uivEXT"));
    vtkgl::VertexAttribI2uivEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI2UIVEXTPROC>(manager->GetProcAddress("glVertexAttribI2uivEXT"));
    vtkgl::VertexAttribI3uivEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI3UIVEXTPROC>(manager->GetProcAddress("glVertexAttribI3uivEXT"));
    vtkgl::VertexAttribI4uivEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI4UIVEXTPROC>(manager->GetProcAddress("glVertexAttribI4uivEXT"));
    vtkgl::VertexAttribI4bvEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI4BVEXTPROC>(manager->GetProcAddress("glVertexAttribI4bvEXT"));
    vtkgl::VertexAttribI4svEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI4SVEXTPROC>(manager->GetProcAddress("glVertexAttribI4svEXT"));
    vtkgl::VertexAttribI4ubvEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI4UBVEXTPROC>(manager->GetProcAddress("glVertexAttribI4ubvEXT"));
    vtkgl::VertexAttribI4usvEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBI4USVEXTPROC>(manager->GetProcAddress("glVertexAttribI4usvEXT"));
    vtkgl::VertexAttribIPointerEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBIPOINTEREXTPROC>(manager->GetProcAddress("glVertexAttribIPointerEXT"));
    vtkgl::GetVertexAttribIivEXT = reinterpret_cast<vtkgl::PFNGLGETVERTEXATTRIBIIVEXTPROC>(manager->GetProcAddress("glGetVertexAttribIivEXT"));
    vtkgl::GetVertexAttribIuivEXT = reinterpret_cast<vtkgl::PFNGLGETVERTEXATTRIBIUIVEXTPROC>(manager->GetProcAddress("glGetVertexAttribIuivEXT"));
    return 1 && (vtkgl::VertexAttribI1iEXT != NULL) && (vtkgl::VertexAttribI2iEXT != NULL) && (vtkgl::VertexAttribI3iEXT != NULL) && (vtkgl::VertexAttribI4iEXT != NULL) && (vtkgl::VertexAttribI1uiEXT != NULL) && (vtkgl::VertexAttribI2uiEXT != NULL) && (vtkgl::VertexAttribI3uiEXT != NULL) && (vtkgl::VertexAttribI4uiEXT != NULL) && (vtkgl::VertexAttribI1ivEXT != NULL) && (vtkgl::VertexAttribI2ivEXT != NULL) && (vtkgl::VertexAttribI3ivEXT != NULL) && (vtkgl::VertexAttribI4ivEXT != NULL) && (vtkgl::VertexAttribI1uivEXT != NULL) && (vtkgl::VertexAttribI2uivEXT != NULL) && (vtkgl::VertexAttribI3uivEXT != NULL) && (vtkgl::VertexAttribI4uivEXT != NULL) && (vtkgl::VertexAttribI4bvEXT != NULL) && (vtkgl::VertexAttribI4svEXT != NULL) && (vtkgl::VertexAttribI4ubvEXT != NULL) && (vtkgl::VertexAttribI4usvEXT != NULL) && (vtkgl::VertexAttribIPointerEXT != NULL) && (vtkgl::GetVertexAttribIivEXT != NULL) && (vtkgl::GetVertexAttribIuivEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_gpu_shader4") == 0)
    {
    vtkgl::GetUniformuivEXT = reinterpret_cast<vtkgl::PFNGLGETUNIFORMUIVEXTPROC>(manager->GetProcAddress("glGetUniformuivEXT"));
    vtkgl::BindFragDataLocationEXT = reinterpret_cast<vtkgl::PFNGLBINDFRAGDATALOCATIONEXTPROC>(manager->GetProcAddress("glBindFragDataLocationEXT"));
    vtkgl::GetFragDataLocationEXT = reinterpret_cast<vtkgl::PFNGLGETFRAGDATALOCATIONEXTPROC>(manager->GetProcAddress("glGetFragDataLocationEXT"));
    vtkgl::Uniform1uiEXT = reinterpret_cast<vtkgl::PFNGLUNIFORM1UIEXTPROC>(manager->GetProcAddress("glUniform1uiEXT"));
    vtkgl::Uniform2uiEXT = reinterpret_cast<vtkgl::PFNGLUNIFORM2UIEXTPROC>(manager->GetProcAddress("glUniform2uiEXT"));
    vtkgl::Uniform3uiEXT = reinterpret_cast<vtkgl::PFNGLUNIFORM3UIEXTPROC>(manager->GetProcAddress("glUniform3uiEXT"));
    vtkgl::Uniform4uiEXT = reinterpret_cast<vtkgl::PFNGLUNIFORM4UIEXTPROC>(manager->GetProcAddress("glUniform4uiEXT"));
    vtkgl::Uniform1uivEXT = reinterpret_cast<vtkgl::PFNGLUNIFORM1UIVEXTPROC>(manager->GetProcAddress("glUniform1uivEXT"));
    vtkgl::Uniform2uivEXT = reinterpret_cast<vtkgl::PFNGLUNIFORM2UIVEXTPROC>(manager->GetProcAddress("glUniform2uivEXT"));
    vtkgl::Uniform3uivEXT = reinterpret_cast<vtkgl::PFNGLUNIFORM3UIVEXTPROC>(manager->GetProcAddress("glUniform3uivEXT"));
    vtkgl::Uniform4uivEXT = reinterpret_cast<vtkgl::PFNGLUNIFORM4UIVEXTPROC>(manager->GetProcAddress("glUniform4uivEXT"));
    return 1 && (vtkgl::GetUniformuivEXT != NULL) && (vtkgl::BindFragDataLocationEXT != NULL) && (vtkgl::GetFragDataLocationEXT != NULL) && (vtkgl::Uniform1uiEXT != NULL) && (vtkgl::Uniform2uiEXT != NULL) && (vtkgl::Uniform3uiEXT != NULL) && (vtkgl::Uniform4uiEXT != NULL) && (vtkgl::Uniform1uivEXT != NULL) && (vtkgl::Uniform2uivEXT != NULL) && (vtkgl::Uniform3uivEXT != NULL) && (vtkgl::Uniform4uivEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_draw_instanced") == 0)
    {
    vtkgl::DrawArraysInstancedEXT = reinterpret_cast<vtkgl::PFNGLDRAWARRAYSINSTANCEDEXTPROC>(manager->GetProcAddress("glDrawArraysInstancedEXT"));
    vtkgl::DrawElementsInstancedEXT = reinterpret_cast<vtkgl::PFNGLDRAWELEMENTSINSTANCEDEXTPROC>(manager->GetProcAddress("glDrawElementsInstancedEXT"));
    return 1 && (vtkgl::DrawArraysInstancedEXT != NULL) && (vtkgl::DrawElementsInstancedEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_packed_float") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_texture_array") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_texture_buffer_object") == 0)
    {
    vtkgl::TexBufferEXT = reinterpret_cast<vtkgl::PFNGLTEXBUFFEREXTPROC>(manager->GetProcAddress("glTexBufferEXT"));
    return 1 && (vtkgl::TexBufferEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_texture_compression_latc") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_texture_compression_rgtc") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_texture_shared_exponent") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_depth_buffer_float") == 0)
    {
    vtkgl::DepthRangedNV = reinterpret_cast<vtkgl::PFNGLDEPTHRANGEDNVPROC>(manager->GetProcAddress("glDepthRangedNV"));
    vtkgl::ClearDepthdNV = reinterpret_cast<vtkgl::PFNGLCLEARDEPTHDNVPROC>(manager->GetProcAddress("glClearDepthdNV"));
    vtkgl::DepthBoundsdNV = reinterpret_cast<vtkgl::PFNGLDEPTHBOUNDSDNVPROC>(manager->GetProcAddress("glDepthBoundsdNV"));
    return 1 && (vtkgl::DepthRangedNV != NULL) && (vtkgl::ClearDepthdNV != NULL) && (vtkgl::DepthBoundsdNV != NULL);
    }
  if (strcmp(name, "GL_NV_fragment_program4") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_framebuffer_multisample_coverage") == 0)
    {
    vtkgl::RenderbufferStorageMultisampleCoverageNV = reinterpret_cast<vtkgl::PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC>(manager->GetProcAddress("glRenderbufferStorageMultisampleCoverageNV"));
    return 1 && (vtkgl::RenderbufferStorageMultisampleCoverageNV != NULL);
    }
  if (strcmp(name, "GL_EXT_framebuffer_sRGB") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_geometry_shader4") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_parameter_buffer_object") == 0)
    {
    vtkgl::ProgramBufferParametersfvNV = reinterpret_cast<vtkgl::PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC>(manager->GetProcAddress("glProgramBufferParametersfvNV"));
    vtkgl::ProgramBufferParametersIivNV = reinterpret_cast<vtkgl::PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC>(manager->GetProcAddress("glProgramBufferParametersIivNV"));
    vtkgl::ProgramBufferParametersIuivNV = reinterpret_cast<vtkgl::PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC>(manager->GetProcAddress("glProgramBufferParametersIuivNV"));
    return 1 && (vtkgl::ProgramBufferParametersfvNV != NULL) && (vtkgl::ProgramBufferParametersIivNV != NULL) && (vtkgl::ProgramBufferParametersIuivNV != NULL);
    }
  if (strcmp(name, "GL_EXT_draw_buffers2") == 0)
    {
    vtkgl::ColorMaskIndexedEXT = reinterpret_cast<vtkgl::PFNGLCOLORMASKINDEXEDEXTPROC>(manager->GetProcAddress("glColorMaskIndexedEXT"));
    vtkgl::GetBooleanIndexedvEXT = reinterpret_cast<vtkgl::PFNGLGETBOOLEANINDEXEDVEXTPROC>(manager->GetProcAddress("glGetBooleanIndexedvEXT"));
    vtkgl::GetIntegerIndexedvEXT = reinterpret_cast<vtkgl::PFNGLGETINTEGERINDEXEDVEXTPROC>(manager->GetProcAddress("glGetIntegerIndexedvEXT"));
    vtkgl::EnableIndexedEXT = reinterpret_cast<vtkgl::PFNGLENABLEINDEXEDEXTPROC>(manager->GetProcAddress("glEnableIndexedEXT"));
    vtkgl::DisableIndexedEXT = reinterpret_cast<vtkgl::PFNGLDISABLEINDEXEDEXTPROC>(manager->GetProcAddress("glDisableIndexedEXT"));
    vtkgl::IsEnabledIndexedEXT = reinterpret_cast<vtkgl::PFNGLISENABLEDINDEXEDEXTPROC>(manager->GetProcAddress("glIsEnabledIndexedEXT"));
    return 1 && (vtkgl::ColorMaskIndexedEXT != NULL) && (vtkgl::GetBooleanIndexedvEXT != NULL) && (vtkgl::GetIntegerIndexedvEXT != NULL) && (vtkgl::EnableIndexedEXT != NULL) && (vtkgl::DisableIndexedEXT != NULL) && (vtkgl::IsEnabledIndexedEXT != NULL);
    }
  if (strcmp(name, "GL_NV_transform_feedback") == 0)
    {
    vtkgl::BeginTransformFeedbackNV = reinterpret_cast<vtkgl::PFNGLBEGINTRANSFORMFEEDBACKNVPROC>(manager->GetProcAddress("glBeginTransformFeedbackNV"));
    vtkgl::EndTransformFeedbackNV = reinterpret_cast<vtkgl::PFNGLENDTRANSFORMFEEDBACKNVPROC>(manager->GetProcAddress("glEndTransformFeedbackNV"));
    vtkgl::TransformFeedbackAttribsNV = reinterpret_cast<vtkgl::PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC>(manager->GetProcAddress("glTransformFeedbackAttribsNV"));
    vtkgl::BindBufferRangeNV = reinterpret_cast<vtkgl::PFNGLBINDBUFFERRANGENVPROC>(manager->GetProcAddress("glBindBufferRangeNV"));
    vtkgl::BindBufferOffsetNV = reinterpret_cast<vtkgl::PFNGLBINDBUFFEROFFSETNVPROC>(manager->GetProcAddress("glBindBufferOffsetNV"));
    vtkgl::BindBufferBaseNV = reinterpret_cast<vtkgl::PFNGLBINDBUFFERBASENVPROC>(manager->GetProcAddress("glBindBufferBaseNV"));
    vtkgl::TransformFeedbackVaryingsNV = reinterpret_cast<vtkgl::PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC>(manager->GetProcAddress("glTransformFeedbackVaryingsNV"));
    vtkgl::ActiveVaryingNV = reinterpret_cast<vtkgl::PFNGLACTIVEVARYINGNVPROC>(manager->GetProcAddress("glActiveVaryingNV"));
    vtkgl::GetVaryingLocationNV = reinterpret_cast<vtkgl::PFNGLGETVARYINGLOCATIONNVPROC>(manager->GetProcAddress("glGetVaryingLocationNV"));
    vtkgl::GetActiveVaryingNV = reinterpret_cast<vtkgl::PFNGLGETACTIVEVARYINGNVPROC>(manager->GetProcAddress("glGetActiveVaryingNV"));
    vtkgl::GetTransformFeedbackVaryingNV = reinterpret_cast<vtkgl::PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC>(manager->GetProcAddress("glGetTransformFeedbackVaryingNV"));
    vtkgl::TransformFeedbackStreamAttribsNV = reinterpret_cast<vtkgl::PFNGLTRANSFORMFEEDBACKSTREAMATTRIBSNVPROC>(manager->GetProcAddress("glTransformFeedbackStreamAttribsNV"));
    return 1 && (vtkgl::BeginTransformFeedbackNV != NULL) && (vtkgl::EndTransformFeedbackNV != NULL) && (vtkgl::TransformFeedbackAttribsNV != NULL) && (vtkgl::BindBufferRangeNV != NULL) && (vtkgl::BindBufferOffsetNV != NULL) && (vtkgl::BindBufferBaseNV != NULL) && (vtkgl::TransformFeedbackVaryingsNV != NULL) && (vtkgl::ActiveVaryingNV != NULL) && (vtkgl::GetVaryingLocationNV != NULL) && (vtkgl::GetActiveVaryingNV != NULL) && (vtkgl::GetTransformFeedbackVaryingNV != NULL) && (vtkgl::TransformFeedbackStreamAttribsNV != NULL);
    }
  if (strcmp(name, "GL_EXT_bindable_uniform") == 0)
    {
    vtkgl::UniformBufferEXT = reinterpret_cast<vtkgl::PFNGLUNIFORMBUFFEREXTPROC>(manager->GetProcAddress("glUniformBufferEXT"));
    vtkgl::GetUniformBufferSizeEXT = reinterpret_cast<vtkgl::PFNGLGETUNIFORMBUFFERSIZEEXTPROC>(manager->GetProcAddress("glGetUniformBufferSizeEXT"));
    vtkgl::GetUniformOffsetEXT = reinterpret_cast<vtkgl::PFNGLGETUNIFORMOFFSETEXTPROC>(manager->GetProcAddress("glGetUniformOffsetEXT"));
    return 1 && (vtkgl::UniformBufferEXT != NULL) && (vtkgl::GetUniformBufferSizeEXT != NULL) && (vtkgl::GetUniformOffsetEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_texture_integer") == 0)
    {
    vtkgl::TexParameterIivEXT = reinterpret_cast<vtkgl::PFNGLTEXPARAMETERIIVEXTPROC>(manager->GetProcAddress("glTexParameterIivEXT"));
    vtkgl::TexParameterIuivEXT = reinterpret_cast<vtkgl::PFNGLTEXPARAMETERIUIVEXTPROC>(manager->GetProcAddress("glTexParameterIuivEXT"));
    vtkgl::GetTexParameterIivEXT = reinterpret_cast<vtkgl::PFNGLGETTEXPARAMETERIIVEXTPROC>(manager->GetProcAddress("glGetTexParameterIivEXT"));
    vtkgl::GetTexParameterIuivEXT = reinterpret_cast<vtkgl::PFNGLGETTEXPARAMETERIUIVEXTPROC>(manager->GetProcAddress("glGetTexParameterIuivEXT"));
    vtkgl::ClearColorIiEXT = reinterpret_cast<vtkgl::PFNGLCLEARCOLORIIEXTPROC>(manager->GetProcAddress("glClearColorIiEXT"));
    vtkgl::ClearColorIuiEXT = reinterpret_cast<vtkgl::PFNGLCLEARCOLORIUIEXTPROC>(manager->GetProcAddress("glClearColorIuiEXT"));
    return 1 && (vtkgl::TexParameterIivEXT != NULL) && (vtkgl::TexParameterIuivEXT != NULL) && (vtkgl::GetTexParameterIivEXT != NULL) && (vtkgl::GetTexParameterIuivEXT != NULL) && (vtkgl::ClearColorIiEXT != NULL) && (vtkgl::ClearColorIuiEXT != NULL);
    }
  if (strcmp(name, "GL_GREMEDY_frame_terminator") == 0)
    {
    vtkgl::FrameTerminatorGREMEDY = reinterpret_cast<vtkgl::PFNGLFRAMETERMINATORGREMEDYPROC>(manager->GetProcAddress("glFrameTerminatorGREMEDY"));
    return 1 && (vtkgl::FrameTerminatorGREMEDY != NULL);
    }
  if (strcmp(name, "GL_NV_conditional_render") == 0)
    {
    vtkgl::BeginConditionalRenderNV = reinterpret_cast<vtkgl::PFNGLBEGINCONDITIONALRENDERNVPROC>(manager->GetProcAddress("glBeginConditionalRenderNV"));
    vtkgl::EndConditionalRenderNV = reinterpret_cast<vtkgl::PFNGLENDCONDITIONALRENDERNVPROC>(manager->GetProcAddress("glEndConditionalRenderNV"));
    return 1 && (vtkgl::BeginConditionalRenderNV != NULL) && (vtkgl::EndConditionalRenderNV != NULL);
    }
  if (strcmp(name, "GL_NV_present_video") == 0)
    {
    vtkgl::PresentFrameKeyedNV = reinterpret_cast<vtkgl::PFNGLPRESENTFRAMEKEYEDNVPROC>(manager->GetProcAddress("glPresentFrameKeyedNV"));
    vtkgl::PresentFrameDualFillNV = reinterpret_cast<vtkgl::PFNGLPRESENTFRAMEDUALFILLNVPROC>(manager->GetProcAddress("glPresentFrameDualFillNV"));
    vtkgl::GetVideoivNV = reinterpret_cast<vtkgl::PFNGLGETVIDEOIVNVPROC>(manager->GetProcAddress("glGetVideoivNV"));
    vtkgl::GetVideouivNV = reinterpret_cast<vtkgl::PFNGLGETVIDEOUIVNVPROC>(manager->GetProcAddress("glGetVideouivNV"));
    vtkgl::GetVideoi64vNV = reinterpret_cast<vtkgl::PFNGLGETVIDEOI64VNVPROC>(manager->GetProcAddress("glGetVideoi64vNV"));
    vtkgl::GetVideoui64vNV = reinterpret_cast<vtkgl::PFNGLGETVIDEOUI64VNVPROC>(manager->GetProcAddress("glGetVideoui64vNV"));
    return 1 && (vtkgl::PresentFrameKeyedNV != NULL) && (vtkgl::PresentFrameDualFillNV != NULL) && (vtkgl::GetVideoivNV != NULL) && (vtkgl::GetVideouivNV != NULL) && (vtkgl::GetVideoi64vNV != NULL) && (vtkgl::GetVideoui64vNV != NULL);
    }
  if (strcmp(name, "GL_EXT_transform_feedback") == 0)
    {
    vtkgl::BeginTransformFeedbackEXT = reinterpret_cast<vtkgl::PFNGLBEGINTRANSFORMFEEDBACKEXTPROC>(manager->GetProcAddress("glBeginTransformFeedbackEXT"));
    vtkgl::EndTransformFeedbackEXT = reinterpret_cast<vtkgl::PFNGLENDTRANSFORMFEEDBACKEXTPROC>(manager->GetProcAddress("glEndTransformFeedbackEXT"));
    vtkgl::BindBufferRangeEXT = reinterpret_cast<vtkgl::PFNGLBINDBUFFERRANGEEXTPROC>(manager->GetProcAddress("glBindBufferRangeEXT"));
    vtkgl::BindBufferOffsetEXT = reinterpret_cast<vtkgl::PFNGLBINDBUFFEROFFSETEXTPROC>(manager->GetProcAddress("glBindBufferOffsetEXT"));
    vtkgl::BindBufferBaseEXT = reinterpret_cast<vtkgl::PFNGLBINDBUFFERBASEEXTPROC>(manager->GetProcAddress("glBindBufferBaseEXT"));
    vtkgl::TransformFeedbackVaryingsEXT = reinterpret_cast<vtkgl::PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC>(manager->GetProcAddress("glTransformFeedbackVaryingsEXT"));
    vtkgl::GetTransformFeedbackVaryingEXT = reinterpret_cast<vtkgl::PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC>(manager->GetProcAddress("glGetTransformFeedbackVaryingEXT"));
    return 1 && (vtkgl::BeginTransformFeedbackEXT != NULL) && (vtkgl::EndTransformFeedbackEXT != NULL) && (vtkgl::BindBufferRangeEXT != NULL) && (vtkgl::BindBufferOffsetEXT != NULL) && (vtkgl::BindBufferBaseEXT != NULL) && (vtkgl::TransformFeedbackVaryingsEXT != NULL) && (vtkgl::GetTransformFeedbackVaryingEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_direct_state_access") == 0)
    {
    vtkgl::ClientAttribDefaultEXT = reinterpret_cast<vtkgl::PFNGLCLIENTATTRIBDEFAULTEXTPROC>(manager->GetProcAddress("glClientAttribDefaultEXT"));
    vtkgl::PushClientAttribDefaultEXT = reinterpret_cast<vtkgl::PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC>(manager->GetProcAddress("glPushClientAttribDefaultEXT"));
    vtkgl::MatrixLoadfEXT = reinterpret_cast<vtkgl::PFNGLMATRIXLOADFEXTPROC>(manager->GetProcAddress("glMatrixLoadfEXT"));
    vtkgl::MatrixLoaddEXT = reinterpret_cast<vtkgl::PFNGLMATRIXLOADDEXTPROC>(manager->GetProcAddress("glMatrixLoaddEXT"));
    vtkgl::MatrixMultfEXT = reinterpret_cast<vtkgl::PFNGLMATRIXMULTFEXTPROC>(manager->GetProcAddress("glMatrixMultfEXT"));
    vtkgl::MatrixMultdEXT = reinterpret_cast<vtkgl::PFNGLMATRIXMULTDEXTPROC>(manager->GetProcAddress("glMatrixMultdEXT"));
    vtkgl::MatrixLoadIdentityEXT = reinterpret_cast<vtkgl::PFNGLMATRIXLOADIDENTITYEXTPROC>(manager->GetProcAddress("glMatrixLoadIdentityEXT"));
    vtkgl::MatrixRotatefEXT = reinterpret_cast<vtkgl::PFNGLMATRIXROTATEFEXTPROC>(manager->GetProcAddress("glMatrixRotatefEXT"));
    vtkgl::MatrixRotatedEXT = reinterpret_cast<vtkgl::PFNGLMATRIXROTATEDEXTPROC>(manager->GetProcAddress("glMatrixRotatedEXT"));
    vtkgl::MatrixScalefEXT = reinterpret_cast<vtkgl::PFNGLMATRIXSCALEFEXTPROC>(manager->GetProcAddress("glMatrixScalefEXT"));
    vtkgl::MatrixScaledEXT = reinterpret_cast<vtkgl::PFNGLMATRIXSCALEDEXTPROC>(manager->GetProcAddress("glMatrixScaledEXT"));
    vtkgl::MatrixTranslatefEXT = reinterpret_cast<vtkgl::PFNGLMATRIXTRANSLATEFEXTPROC>(manager->GetProcAddress("glMatrixTranslatefEXT"));
    vtkgl::MatrixTranslatedEXT = reinterpret_cast<vtkgl::PFNGLMATRIXTRANSLATEDEXTPROC>(manager->GetProcAddress("glMatrixTranslatedEXT"));
    vtkgl::MatrixFrustumEXT = reinterpret_cast<vtkgl::PFNGLMATRIXFRUSTUMEXTPROC>(manager->GetProcAddress("glMatrixFrustumEXT"));
    vtkgl::MatrixOrthoEXT = reinterpret_cast<vtkgl::PFNGLMATRIXORTHOEXTPROC>(manager->GetProcAddress("glMatrixOrthoEXT"));
    vtkgl::MatrixPopEXT = reinterpret_cast<vtkgl::PFNGLMATRIXPOPEXTPROC>(manager->GetProcAddress("glMatrixPopEXT"));
    vtkgl::MatrixPushEXT = reinterpret_cast<vtkgl::PFNGLMATRIXPUSHEXTPROC>(manager->GetProcAddress("glMatrixPushEXT"));
    vtkgl::MatrixLoadTransposefEXT = reinterpret_cast<vtkgl::PFNGLMATRIXLOADTRANSPOSEFEXTPROC>(manager->GetProcAddress("glMatrixLoadTransposefEXT"));
    vtkgl::MatrixLoadTransposedEXT = reinterpret_cast<vtkgl::PFNGLMATRIXLOADTRANSPOSEDEXTPROC>(manager->GetProcAddress("glMatrixLoadTransposedEXT"));
    vtkgl::MatrixMultTransposefEXT = reinterpret_cast<vtkgl::PFNGLMATRIXMULTTRANSPOSEFEXTPROC>(manager->GetProcAddress("glMatrixMultTransposefEXT"));
    vtkgl::MatrixMultTransposedEXT = reinterpret_cast<vtkgl::PFNGLMATRIXMULTTRANSPOSEDEXTPROC>(manager->GetProcAddress("glMatrixMultTransposedEXT"));
    vtkgl::TextureParameterfEXT = reinterpret_cast<vtkgl::PFNGLTEXTUREPARAMETERFEXTPROC>(manager->GetProcAddress("glTextureParameterfEXT"));
    vtkgl::TextureParameterfvEXT = reinterpret_cast<vtkgl::PFNGLTEXTUREPARAMETERFVEXTPROC>(manager->GetProcAddress("glTextureParameterfvEXT"));
    vtkgl::TextureParameteriEXT = reinterpret_cast<vtkgl::PFNGLTEXTUREPARAMETERIEXTPROC>(manager->GetProcAddress("glTextureParameteriEXT"));
    vtkgl::TextureParameterivEXT = reinterpret_cast<vtkgl::PFNGLTEXTUREPARAMETERIVEXTPROC>(manager->GetProcAddress("glTextureParameterivEXT"));
    vtkgl::TextureImage1DEXT = reinterpret_cast<vtkgl::PFNGLTEXTUREIMAGE1DEXTPROC>(manager->GetProcAddress("glTextureImage1DEXT"));
    vtkgl::TextureImage2DEXT = reinterpret_cast<vtkgl::PFNGLTEXTUREIMAGE2DEXTPROC>(manager->GetProcAddress("glTextureImage2DEXT"));
    vtkgl::TextureSubImage1DEXT = reinterpret_cast<vtkgl::PFNGLTEXTURESUBIMAGE1DEXTPROC>(manager->GetProcAddress("glTextureSubImage1DEXT"));
    vtkgl::TextureSubImage2DEXT = reinterpret_cast<vtkgl::PFNGLTEXTURESUBIMAGE2DEXTPROC>(manager->GetProcAddress("glTextureSubImage2DEXT"));
    vtkgl::CopyTextureImage1DEXT = reinterpret_cast<vtkgl::PFNGLCOPYTEXTUREIMAGE1DEXTPROC>(manager->GetProcAddress("glCopyTextureImage1DEXT"));
    vtkgl::CopyTextureImage2DEXT = reinterpret_cast<vtkgl::PFNGLCOPYTEXTUREIMAGE2DEXTPROC>(manager->GetProcAddress("glCopyTextureImage2DEXT"));
    vtkgl::CopyTextureSubImage1DEXT = reinterpret_cast<vtkgl::PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC>(manager->GetProcAddress("glCopyTextureSubImage1DEXT"));
    vtkgl::CopyTextureSubImage2DEXT = reinterpret_cast<vtkgl::PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC>(manager->GetProcAddress("glCopyTextureSubImage2DEXT"));
    vtkgl::GetTextureImageEXT = reinterpret_cast<vtkgl::PFNGLGETTEXTUREIMAGEEXTPROC>(manager->GetProcAddress("glGetTextureImageEXT"));
    vtkgl::GetTextureParameterfvEXT = reinterpret_cast<vtkgl::PFNGLGETTEXTUREPARAMETERFVEXTPROC>(manager->GetProcAddress("glGetTextureParameterfvEXT"));
    vtkgl::GetTextureParameterivEXT = reinterpret_cast<vtkgl::PFNGLGETTEXTUREPARAMETERIVEXTPROC>(manager->GetProcAddress("glGetTextureParameterivEXT"));
    vtkgl::GetTextureLevelParameterfvEXT = reinterpret_cast<vtkgl::PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC>(manager->GetProcAddress("glGetTextureLevelParameterfvEXT"));
    vtkgl::GetTextureLevelParameterivEXT = reinterpret_cast<vtkgl::PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC>(manager->GetProcAddress("glGetTextureLevelParameterivEXT"));
    vtkgl::TextureImage3DEXT = reinterpret_cast<vtkgl::PFNGLTEXTUREIMAGE3DEXTPROC>(manager->GetProcAddress("glTextureImage3DEXT"));
    vtkgl::TextureSubImage3DEXT = reinterpret_cast<vtkgl::PFNGLTEXTURESUBIMAGE3DEXTPROC>(manager->GetProcAddress("glTextureSubImage3DEXT"));
    vtkgl::CopyTextureSubImage3DEXT = reinterpret_cast<vtkgl::PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC>(manager->GetProcAddress("glCopyTextureSubImage3DEXT"));
    vtkgl::MultiTexParameterfEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXPARAMETERFEXTPROC>(manager->GetProcAddress("glMultiTexParameterfEXT"));
    vtkgl::MultiTexParameterfvEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXPARAMETERFVEXTPROC>(manager->GetProcAddress("glMultiTexParameterfvEXT"));
    vtkgl::MultiTexParameteriEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXPARAMETERIEXTPROC>(manager->GetProcAddress("glMultiTexParameteriEXT"));
    vtkgl::MultiTexParameterivEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXPARAMETERIVEXTPROC>(manager->GetProcAddress("glMultiTexParameterivEXT"));
    vtkgl::MultiTexImage1DEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXIMAGE1DEXTPROC>(manager->GetProcAddress("glMultiTexImage1DEXT"));
    vtkgl::MultiTexImage2DEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXIMAGE2DEXTPROC>(manager->GetProcAddress("glMultiTexImage2DEXT"));
    vtkgl::MultiTexSubImage1DEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXSUBIMAGE1DEXTPROC>(manager->GetProcAddress("glMultiTexSubImage1DEXT"));
    vtkgl::MultiTexSubImage2DEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXSUBIMAGE2DEXTPROC>(manager->GetProcAddress("glMultiTexSubImage2DEXT"));
    vtkgl::CopyMultiTexImage1DEXT = reinterpret_cast<vtkgl::PFNGLCOPYMULTITEXIMAGE1DEXTPROC>(manager->GetProcAddress("glCopyMultiTexImage1DEXT"));
    vtkgl::CopyMultiTexImage2DEXT = reinterpret_cast<vtkgl::PFNGLCOPYMULTITEXIMAGE2DEXTPROC>(manager->GetProcAddress("glCopyMultiTexImage2DEXT"));
    vtkgl::CopyMultiTexSubImage1DEXT = reinterpret_cast<vtkgl::PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC>(manager->GetProcAddress("glCopyMultiTexSubImage1DEXT"));
    vtkgl::CopyMultiTexSubImage2DEXT = reinterpret_cast<vtkgl::PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC>(manager->GetProcAddress("glCopyMultiTexSubImage2DEXT"));
    vtkgl::GetMultiTexImageEXT = reinterpret_cast<vtkgl::PFNGLGETMULTITEXIMAGEEXTPROC>(manager->GetProcAddress("glGetMultiTexImageEXT"));
    vtkgl::GetMultiTexParameterfvEXT = reinterpret_cast<vtkgl::PFNGLGETMULTITEXPARAMETERFVEXTPROC>(manager->GetProcAddress("glGetMultiTexParameterfvEXT"));
    vtkgl::GetMultiTexParameterivEXT = reinterpret_cast<vtkgl::PFNGLGETMULTITEXPARAMETERIVEXTPROC>(manager->GetProcAddress("glGetMultiTexParameterivEXT"));
    vtkgl::GetMultiTexLevelParameterfvEXT = reinterpret_cast<vtkgl::PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC>(manager->GetProcAddress("glGetMultiTexLevelParameterfvEXT"));
    vtkgl::GetMultiTexLevelParameterivEXT = reinterpret_cast<vtkgl::PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC>(manager->GetProcAddress("glGetMultiTexLevelParameterivEXT"));
    vtkgl::MultiTexImage3DEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXIMAGE3DEXTPROC>(manager->GetProcAddress("glMultiTexImage3DEXT"));
    vtkgl::MultiTexSubImage3DEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXSUBIMAGE3DEXTPROC>(manager->GetProcAddress("glMultiTexSubImage3DEXT"));
    vtkgl::CopyMultiTexSubImage3DEXT = reinterpret_cast<vtkgl::PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC>(manager->GetProcAddress("glCopyMultiTexSubImage3DEXT"));
    vtkgl::BindMultiTextureEXT = reinterpret_cast<vtkgl::PFNGLBINDMULTITEXTUREEXTPROC>(manager->GetProcAddress("glBindMultiTextureEXT"));
    vtkgl::EnableClientStateIndexedEXT = reinterpret_cast<vtkgl::PFNGLENABLECLIENTSTATEINDEXEDEXTPROC>(manager->GetProcAddress("glEnableClientStateIndexedEXT"));
    vtkgl::DisableClientStateIndexedEXT = reinterpret_cast<vtkgl::PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC>(manager->GetProcAddress("glDisableClientStateIndexedEXT"));
    vtkgl::MultiTexCoordPointerEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXCOORDPOINTEREXTPROC>(manager->GetProcAddress("glMultiTexCoordPointerEXT"));
    vtkgl::MultiTexEnvfEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXENVFEXTPROC>(manager->GetProcAddress("glMultiTexEnvfEXT"));
    vtkgl::MultiTexEnvfvEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXENVFVEXTPROC>(manager->GetProcAddress("glMultiTexEnvfvEXT"));
    vtkgl::MultiTexEnviEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXENVIEXTPROC>(manager->GetProcAddress("glMultiTexEnviEXT"));
    vtkgl::MultiTexEnvivEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXENVIVEXTPROC>(manager->GetProcAddress("glMultiTexEnvivEXT"));
    vtkgl::MultiTexGendEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXGENDEXTPROC>(manager->GetProcAddress("glMultiTexGendEXT"));
    vtkgl::MultiTexGendvEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXGENDVEXTPROC>(manager->GetProcAddress("glMultiTexGendvEXT"));
    vtkgl::MultiTexGenfEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXGENFEXTPROC>(manager->GetProcAddress("glMultiTexGenfEXT"));
    vtkgl::MultiTexGenfvEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXGENFVEXTPROC>(manager->GetProcAddress("glMultiTexGenfvEXT"));
    vtkgl::MultiTexGeniEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXGENIEXTPROC>(manager->GetProcAddress("glMultiTexGeniEXT"));
    vtkgl::MultiTexGenivEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXGENIVEXTPROC>(manager->GetProcAddress("glMultiTexGenivEXT"));
    vtkgl::GetMultiTexEnvfvEXT = reinterpret_cast<vtkgl::PFNGLGETMULTITEXENVFVEXTPROC>(manager->GetProcAddress("glGetMultiTexEnvfvEXT"));
    vtkgl::GetMultiTexEnvivEXT = reinterpret_cast<vtkgl::PFNGLGETMULTITEXENVIVEXTPROC>(manager->GetProcAddress("glGetMultiTexEnvivEXT"));
    vtkgl::GetMultiTexGendvEXT = reinterpret_cast<vtkgl::PFNGLGETMULTITEXGENDVEXTPROC>(manager->GetProcAddress("glGetMultiTexGendvEXT"));
    vtkgl::GetMultiTexGenfvEXT = reinterpret_cast<vtkgl::PFNGLGETMULTITEXGENFVEXTPROC>(manager->GetProcAddress("glGetMultiTexGenfvEXT"));
    vtkgl::GetMultiTexGenivEXT = reinterpret_cast<vtkgl::PFNGLGETMULTITEXGENIVEXTPROC>(manager->GetProcAddress("glGetMultiTexGenivEXT"));
    vtkgl::GetFloatIndexedvEXT = reinterpret_cast<vtkgl::PFNGLGETFLOATINDEXEDVEXTPROC>(manager->GetProcAddress("glGetFloatIndexedvEXT"));
    vtkgl::GetDoubleIndexedvEXT = reinterpret_cast<vtkgl::PFNGLGETDOUBLEINDEXEDVEXTPROC>(manager->GetProcAddress("glGetDoubleIndexedvEXT"));
    vtkgl::GetPointerIndexedvEXT = reinterpret_cast<vtkgl::PFNGLGETPOINTERINDEXEDVEXTPROC>(manager->GetProcAddress("glGetPointerIndexedvEXT"));
    vtkgl::CompressedTextureImage3DEXT = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC>(manager->GetProcAddress("glCompressedTextureImage3DEXT"));
    vtkgl::CompressedTextureImage2DEXT = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC>(manager->GetProcAddress("glCompressedTextureImage2DEXT"));
    vtkgl::CompressedTextureImage1DEXT = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC>(manager->GetProcAddress("glCompressedTextureImage1DEXT"));
    vtkgl::CompressedTextureSubImage3DEXT = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC>(manager->GetProcAddress("glCompressedTextureSubImage3DEXT"));
    vtkgl::CompressedTextureSubImage2DEXT = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC>(manager->GetProcAddress("glCompressedTextureSubImage2DEXT"));
    vtkgl::CompressedTextureSubImage1DEXT = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC>(manager->GetProcAddress("glCompressedTextureSubImage1DEXT"));
    vtkgl::GetCompressedTextureImageEXT = reinterpret_cast<vtkgl::PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC>(manager->GetProcAddress("glGetCompressedTextureImageEXT"));
    vtkgl::CompressedMultiTexImage3DEXT = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC>(manager->GetProcAddress("glCompressedMultiTexImage3DEXT"));
    vtkgl::CompressedMultiTexImage2DEXT = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC>(manager->GetProcAddress("glCompressedMultiTexImage2DEXT"));
    vtkgl::CompressedMultiTexImage1DEXT = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC>(manager->GetProcAddress("glCompressedMultiTexImage1DEXT"));
    vtkgl::CompressedMultiTexSubImage3DEXT = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC>(manager->GetProcAddress("glCompressedMultiTexSubImage3DEXT"));
    vtkgl::CompressedMultiTexSubImage2DEXT = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC>(manager->GetProcAddress("glCompressedMultiTexSubImage2DEXT"));
    vtkgl::CompressedMultiTexSubImage1DEXT = reinterpret_cast<vtkgl::PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC>(manager->GetProcAddress("glCompressedMultiTexSubImage1DEXT"));
    vtkgl::GetCompressedMultiTexImageEXT = reinterpret_cast<vtkgl::PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC>(manager->GetProcAddress("glGetCompressedMultiTexImageEXT"));
    vtkgl::NamedProgramStringEXT = reinterpret_cast<vtkgl::PFNGLNAMEDPROGRAMSTRINGEXTPROC>(manager->GetProcAddress("glNamedProgramStringEXT"));
    vtkgl::NamedProgramLocalParameter4dEXT = reinterpret_cast<vtkgl::PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC>(manager->GetProcAddress("glNamedProgramLocalParameter4dEXT"));
    vtkgl::NamedProgramLocalParameter4dvEXT = reinterpret_cast<vtkgl::PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC>(manager->GetProcAddress("glNamedProgramLocalParameter4dvEXT"));
    vtkgl::NamedProgramLocalParameter4fEXT = reinterpret_cast<vtkgl::PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC>(manager->GetProcAddress("glNamedProgramLocalParameter4fEXT"));
    vtkgl::NamedProgramLocalParameter4fvEXT = reinterpret_cast<vtkgl::PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC>(manager->GetProcAddress("glNamedProgramLocalParameter4fvEXT"));
    vtkgl::GetNamedProgramLocalParameterdvEXT = reinterpret_cast<vtkgl::PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC>(manager->GetProcAddress("glGetNamedProgramLocalParameterdvEXT"));
    vtkgl::GetNamedProgramLocalParameterfvEXT = reinterpret_cast<vtkgl::PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC>(manager->GetProcAddress("glGetNamedProgramLocalParameterfvEXT"));
    vtkgl::GetNamedProgramivEXT = reinterpret_cast<vtkgl::PFNGLGETNAMEDPROGRAMIVEXTPROC>(manager->GetProcAddress("glGetNamedProgramivEXT"));
    vtkgl::GetNamedProgramStringEXT = reinterpret_cast<vtkgl::PFNGLGETNAMEDPROGRAMSTRINGEXTPROC>(manager->GetProcAddress("glGetNamedProgramStringEXT"));
    vtkgl::NamedProgramLocalParameters4fvEXT = reinterpret_cast<vtkgl::PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC>(manager->GetProcAddress("glNamedProgramLocalParameters4fvEXT"));
    vtkgl::NamedProgramLocalParameterI4iEXT = reinterpret_cast<vtkgl::PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC>(manager->GetProcAddress("glNamedProgramLocalParameterI4iEXT"));
    vtkgl::NamedProgramLocalParameterI4ivEXT = reinterpret_cast<vtkgl::PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC>(manager->GetProcAddress("glNamedProgramLocalParameterI4ivEXT"));
    vtkgl::NamedProgramLocalParametersI4ivEXT = reinterpret_cast<vtkgl::PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC>(manager->GetProcAddress("glNamedProgramLocalParametersI4ivEXT"));
    vtkgl::NamedProgramLocalParameterI4uiEXT = reinterpret_cast<vtkgl::PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC>(manager->GetProcAddress("glNamedProgramLocalParameterI4uiEXT"));
    vtkgl::NamedProgramLocalParameterI4uivEXT = reinterpret_cast<vtkgl::PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC>(manager->GetProcAddress("glNamedProgramLocalParameterI4uivEXT"));
    vtkgl::NamedProgramLocalParametersI4uivEXT = reinterpret_cast<vtkgl::PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC>(manager->GetProcAddress("glNamedProgramLocalParametersI4uivEXT"));
    vtkgl::GetNamedProgramLocalParameterIivEXT = reinterpret_cast<vtkgl::PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC>(manager->GetProcAddress("glGetNamedProgramLocalParameterIivEXT"));
    vtkgl::GetNamedProgramLocalParameterIuivEXT = reinterpret_cast<vtkgl::PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC>(manager->GetProcAddress("glGetNamedProgramLocalParameterIuivEXT"));
    vtkgl::TextureParameterIivEXT = reinterpret_cast<vtkgl::PFNGLTEXTUREPARAMETERIIVEXTPROC>(manager->GetProcAddress("glTextureParameterIivEXT"));
    vtkgl::TextureParameterIuivEXT = reinterpret_cast<vtkgl::PFNGLTEXTUREPARAMETERIUIVEXTPROC>(manager->GetProcAddress("glTextureParameterIuivEXT"));
    vtkgl::GetTextureParameterIivEXT = reinterpret_cast<vtkgl::PFNGLGETTEXTUREPARAMETERIIVEXTPROC>(manager->GetProcAddress("glGetTextureParameterIivEXT"));
    vtkgl::GetTextureParameterIuivEXT = reinterpret_cast<vtkgl::PFNGLGETTEXTUREPARAMETERIUIVEXTPROC>(manager->GetProcAddress("glGetTextureParameterIuivEXT"));
    vtkgl::MultiTexParameterIivEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXPARAMETERIIVEXTPROC>(manager->GetProcAddress("glMultiTexParameterIivEXT"));
    vtkgl::MultiTexParameterIuivEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXPARAMETERIUIVEXTPROC>(manager->GetProcAddress("glMultiTexParameterIuivEXT"));
    vtkgl::GetMultiTexParameterIivEXT = reinterpret_cast<vtkgl::PFNGLGETMULTITEXPARAMETERIIVEXTPROC>(manager->GetProcAddress("glGetMultiTexParameterIivEXT"));
    vtkgl::GetMultiTexParameterIuivEXT = reinterpret_cast<vtkgl::PFNGLGETMULTITEXPARAMETERIUIVEXTPROC>(manager->GetProcAddress("glGetMultiTexParameterIuivEXT"));
    vtkgl::ProgramUniform1fEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM1FEXTPROC>(manager->GetProcAddress("glProgramUniform1fEXT"));
    vtkgl::ProgramUniform2fEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM2FEXTPROC>(manager->GetProcAddress("glProgramUniform2fEXT"));
    vtkgl::ProgramUniform3fEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM3FEXTPROC>(manager->GetProcAddress("glProgramUniform3fEXT"));
    vtkgl::ProgramUniform4fEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM4FEXTPROC>(manager->GetProcAddress("glProgramUniform4fEXT"));
    vtkgl::ProgramUniform1iEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM1IEXTPROC>(manager->GetProcAddress("glProgramUniform1iEXT"));
    vtkgl::ProgramUniform2iEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM2IEXTPROC>(manager->GetProcAddress("glProgramUniform2iEXT"));
    vtkgl::ProgramUniform3iEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM3IEXTPROC>(manager->GetProcAddress("glProgramUniform3iEXT"));
    vtkgl::ProgramUniform4iEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM4IEXTPROC>(manager->GetProcAddress("glProgramUniform4iEXT"));
    vtkgl::ProgramUniform1fvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM1FVEXTPROC>(manager->GetProcAddress("glProgramUniform1fvEXT"));
    vtkgl::ProgramUniform2fvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM2FVEXTPROC>(manager->GetProcAddress("glProgramUniform2fvEXT"));
    vtkgl::ProgramUniform3fvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM3FVEXTPROC>(manager->GetProcAddress("glProgramUniform3fvEXT"));
    vtkgl::ProgramUniform4fvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM4FVEXTPROC>(manager->GetProcAddress("glProgramUniform4fvEXT"));
    vtkgl::ProgramUniform1ivEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM1IVEXTPROC>(manager->GetProcAddress("glProgramUniform1ivEXT"));
    vtkgl::ProgramUniform2ivEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM2IVEXTPROC>(manager->GetProcAddress("glProgramUniform2ivEXT"));
    vtkgl::ProgramUniform3ivEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM3IVEXTPROC>(manager->GetProcAddress("glProgramUniform3ivEXT"));
    vtkgl::ProgramUniform4ivEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM4IVEXTPROC>(manager->GetProcAddress("glProgramUniform4ivEXT"));
    vtkgl::ProgramUniformMatrix2fvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC>(manager->GetProcAddress("glProgramUniformMatrix2fvEXT"));
    vtkgl::ProgramUniformMatrix3fvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC>(manager->GetProcAddress("glProgramUniformMatrix3fvEXT"));
    vtkgl::ProgramUniformMatrix4fvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC>(manager->GetProcAddress("glProgramUniformMatrix4fvEXT"));
    vtkgl::ProgramUniformMatrix2x3fvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC>(manager->GetProcAddress("glProgramUniformMatrix2x3fvEXT"));
    vtkgl::ProgramUniformMatrix3x2fvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC>(manager->GetProcAddress("glProgramUniformMatrix3x2fvEXT"));
    vtkgl::ProgramUniformMatrix2x4fvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC>(manager->GetProcAddress("glProgramUniformMatrix2x4fvEXT"));
    vtkgl::ProgramUniformMatrix4x2fvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC>(manager->GetProcAddress("glProgramUniformMatrix4x2fvEXT"));
    vtkgl::ProgramUniformMatrix3x4fvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC>(manager->GetProcAddress("glProgramUniformMatrix3x4fvEXT"));
    vtkgl::ProgramUniformMatrix4x3fvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC>(manager->GetProcAddress("glProgramUniformMatrix4x3fvEXT"));
    vtkgl::ProgramUniform1uiEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM1UIEXTPROC>(manager->GetProcAddress("glProgramUniform1uiEXT"));
    vtkgl::ProgramUniform2uiEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM2UIEXTPROC>(manager->GetProcAddress("glProgramUniform2uiEXT"));
    vtkgl::ProgramUniform3uiEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM3UIEXTPROC>(manager->GetProcAddress("glProgramUniform3uiEXT"));
    vtkgl::ProgramUniform4uiEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM4UIEXTPROC>(manager->GetProcAddress("glProgramUniform4uiEXT"));
    vtkgl::ProgramUniform1uivEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM1UIVEXTPROC>(manager->GetProcAddress("glProgramUniform1uivEXT"));
    vtkgl::ProgramUniform2uivEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM2UIVEXTPROC>(manager->GetProcAddress("glProgramUniform2uivEXT"));
    vtkgl::ProgramUniform3uivEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM3UIVEXTPROC>(manager->GetProcAddress("glProgramUniform3uivEXT"));
    vtkgl::ProgramUniform4uivEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM4UIVEXTPROC>(manager->GetProcAddress("glProgramUniform4uivEXT"));
    vtkgl::NamedBufferDataEXT = reinterpret_cast<vtkgl::PFNGLNAMEDBUFFERDATAEXTPROC>(manager->GetProcAddress("glNamedBufferDataEXT"));
    vtkgl::NamedBufferSubDataEXT = reinterpret_cast<vtkgl::PFNGLNAMEDBUFFERSUBDATAEXTPROC>(manager->GetProcAddress("glNamedBufferSubDataEXT"));
    vtkgl::MapNamedBufferEXT = reinterpret_cast<vtkgl::PFNGLMAPNAMEDBUFFEREXTPROC>(manager->GetProcAddress("glMapNamedBufferEXT"));
    vtkgl::UnmapNamedBufferEXT = reinterpret_cast<vtkgl::PFNGLUNMAPNAMEDBUFFEREXTPROC>(manager->GetProcAddress("glUnmapNamedBufferEXT"));
    vtkgl::MapNamedBufferRangeEXT = reinterpret_cast<vtkgl::PFNGLMAPNAMEDBUFFERRANGEEXTPROC>(manager->GetProcAddress("glMapNamedBufferRangeEXT"));
    vtkgl::FlushMappedNamedBufferRangeEXT = reinterpret_cast<vtkgl::PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC>(manager->GetProcAddress("glFlushMappedNamedBufferRangeEXT"));
    vtkgl::NamedCopyBufferSubDataEXT = reinterpret_cast<vtkgl::PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC>(manager->GetProcAddress("glNamedCopyBufferSubDataEXT"));
    vtkgl::GetNamedBufferParameterivEXT = reinterpret_cast<vtkgl::PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC>(manager->GetProcAddress("glGetNamedBufferParameterivEXT"));
    vtkgl::GetNamedBufferPointervEXT = reinterpret_cast<vtkgl::PFNGLGETNAMEDBUFFERPOINTERVEXTPROC>(manager->GetProcAddress("glGetNamedBufferPointervEXT"));
    vtkgl::GetNamedBufferSubDataEXT = reinterpret_cast<vtkgl::PFNGLGETNAMEDBUFFERSUBDATAEXTPROC>(manager->GetProcAddress("glGetNamedBufferSubDataEXT"));
    vtkgl::TextureBufferEXT = reinterpret_cast<vtkgl::PFNGLTEXTUREBUFFEREXTPROC>(manager->GetProcAddress("glTextureBufferEXT"));
    vtkgl::MultiTexBufferEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXBUFFEREXTPROC>(manager->GetProcAddress("glMultiTexBufferEXT"));
    vtkgl::NamedRenderbufferStorageEXT = reinterpret_cast<vtkgl::PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC>(manager->GetProcAddress("glNamedRenderbufferStorageEXT"));
    vtkgl::GetNamedRenderbufferParameterivEXT = reinterpret_cast<vtkgl::PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC>(manager->GetProcAddress("glGetNamedRenderbufferParameterivEXT"));
    vtkgl::CheckNamedFramebufferStatusEXT = reinterpret_cast<vtkgl::PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC>(manager->GetProcAddress("glCheckNamedFramebufferStatusEXT"));
    vtkgl::NamedFramebufferTexture1DEXT = reinterpret_cast<vtkgl::PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC>(manager->GetProcAddress("glNamedFramebufferTexture1DEXT"));
    vtkgl::NamedFramebufferTexture2DEXT = reinterpret_cast<vtkgl::PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC>(manager->GetProcAddress("glNamedFramebufferTexture2DEXT"));
    vtkgl::NamedFramebufferTexture3DEXT = reinterpret_cast<vtkgl::PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC>(manager->GetProcAddress("glNamedFramebufferTexture3DEXT"));
    vtkgl::NamedFramebufferRenderbufferEXT = reinterpret_cast<vtkgl::PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC>(manager->GetProcAddress("glNamedFramebufferRenderbufferEXT"));
    vtkgl::GetNamedFramebufferAttachmentParameterivEXT = reinterpret_cast<vtkgl::PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC>(manager->GetProcAddress("glGetNamedFramebufferAttachmentParameterivEXT"));
    vtkgl::GenerateTextureMipmapEXT = reinterpret_cast<vtkgl::PFNGLGENERATETEXTUREMIPMAPEXTPROC>(manager->GetProcAddress("glGenerateTextureMipmapEXT"));
    vtkgl::GenerateMultiTexMipmapEXT = reinterpret_cast<vtkgl::PFNGLGENERATEMULTITEXMIPMAPEXTPROC>(manager->GetProcAddress("glGenerateMultiTexMipmapEXT"));
    vtkgl::FramebufferDrawBufferEXT = reinterpret_cast<vtkgl::PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC>(manager->GetProcAddress("glFramebufferDrawBufferEXT"));
    vtkgl::FramebufferDrawBuffersEXT = reinterpret_cast<vtkgl::PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC>(manager->GetProcAddress("glFramebufferDrawBuffersEXT"));
    vtkgl::FramebufferReadBufferEXT = reinterpret_cast<vtkgl::PFNGLFRAMEBUFFERREADBUFFEREXTPROC>(manager->GetProcAddress("glFramebufferReadBufferEXT"));
    vtkgl::GetFramebufferParameterivEXT = reinterpret_cast<vtkgl::PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC>(manager->GetProcAddress("glGetFramebufferParameterivEXT"));
    vtkgl::NamedRenderbufferStorageMultisampleEXT = reinterpret_cast<vtkgl::PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC>(manager->GetProcAddress("glNamedRenderbufferStorageMultisampleEXT"));
    vtkgl::NamedRenderbufferStorageMultisampleCoverageEXT = reinterpret_cast<vtkgl::PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC>(manager->GetProcAddress("glNamedRenderbufferStorageMultisampleCoverageEXT"));
    vtkgl::NamedFramebufferTextureEXT = reinterpret_cast<vtkgl::PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC>(manager->GetProcAddress("glNamedFramebufferTextureEXT"));
    vtkgl::NamedFramebufferTextureLayerEXT = reinterpret_cast<vtkgl::PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC>(manager->GetProcAddress("glNamedFramebufferTextureLayerEXT"));
    vtkgl::NamedFramebufferTextureFaceEXT = reinterpret_cast<vtkgl::PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC>(manager->GetProcAddress("glNamedFramebufferTextureFaceEXT"));
    vtkgl::TextureRenderbufferEXT = reinterpret_cast<vtkgl::PFNGLTEXTURERENDERBUFFEREXTPROC>(manager->GetProcAddress("glTextureRenderbufferEXT"));
    vtkgl::MultiTexRenderbufferEXT = reinterpret_cast<vtkgl::PFNGLMULTITEXRENDERBUFFEREXTPROC>(manager->GetProcAddress("glMultiTexRenderbufferEXT"));
    vtkgl::ProgramUniform1dEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM1DEXTPROC>(manager->GetProcAddress("glProgramUniform1dEXT"));
    vtkgl::ProgramUniform2dEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM2DEXTPROC>(manager->GetProcAddress("glProgramUniform2dEXT"));
    vtkgl::ProgramUniform3dEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM3DEXTPROC>(manager->GetProcAddress("glProgramUniform3dEXT"));
    vtkgl::ProgramUniform4dEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM4DEXTPROC>(manager->GetProcAddress("glProgramUniform4dEXT"));
    vtkgl::ProgramUniform1dvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM1DVEXTPROC>(manager->GetProcAddress("glProgramUniform1dvEXT"));
    vtkgl::ProgramUniform2dvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM2DVEXTPROC>(manager->GetProcAddress("glProgramUniform2dvEXT"));
    vtkgl::ProgramUniform3dvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM3DVEXTPROC>(manager->GetProcAddress("glProgramUniform3dvEXT"));
    vtkgl::ProgramUniform4dvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM4DVEXTPROC>(manager->GetProcAddress("glProgramUniform4dvEXT"));
    vtkgl::ProgramUniformMatrix2dvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC>(manager->GetProcAddress("glProgramUniformMatrix2dvEXT"));
    vtkgl::ProgramUniformMatrix3dvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC>(manager->GetProcAddress("glProgramUniformMatrix3dvEXT"));
    vtkgl::ProgramUniformMatrix4dvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC>(manager->GetProcAddress("glProgramUniformMatrix4dvEXT"));
    vtkgl::ProgramUniformMatrix2x3dvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC>(manager->GetProcAddress("glProgramUniformMatrix2x3dvEXT"));
    vtkgl::ProgramUniformMatrix2x4dvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC>(manager->GetProcAddress("glProgramUniformMatrix2x4dvEXT"));
    vtkgl::ProgramUniformMatrix3x2dvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC>(manager->GetProcAddress("glProgramUniformMatrix3x2dvEXT"));
    vtkgl::ProgramUniformMatrix3x4dvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC>(manager->GetProcAddress("glProgramUniformMatrix3x4dvEXT"));
    vtkgl::ProgramUniformMatrix4x2dvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC>(manager->GetProcAddress("glProgramUniformMatrix4x2dvEXT"));
    vtkgl::ProgramUniformMatrix4x3dvEXT = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC>(manager->GetProcAddress("glProgramUniformMatrix4x3dvEXT"));
    return 1 && (vtkgl::ClientAttribDefaultEXT != NULL) && (vtkgl::PushClientAttribDefaultEXT != NULL) && (vtkgl::MatrixLoadfEXT != NULL) && (vtkgl::MatrixLoaddEXT != NULL) && (vtkgl::MatrixMultfEXT != NULL) && (vtkgl::MatrixMultdEXT != NULL) && (vtkgl::MatrixLoadIdentityEXT != NULL) && (vtkgl::MatrixRotatefEXT != NULL) && (vtkgl::MatrixRotatedEXT != NULL) && (vtkgl::MatrixScalefEXT != NULL) && (vtkgl::MatrixScaledEXT != NULL) && (vtkgl::MatrixTranslatefEXT != NULL) && (vtkgl::MatrixTranslatedEXT != NULL) && (vtkgl::MatrixFrustumEXT != NULL) && (vtkgl::MatrixOrthoEXT != NULL) && (vtkgl::MatrixPopEXT != NULL) && (vtkgl::MatrixPushEXT != NULL) && (vtkgl::MatrixLoadTransposefEXT != NULL) && (vtkgl::MatrixLoadTransposedEXT != NULL) && (vtkgl::MatrixMultTransposefEXT != NULL) && (vtkgl::MatrixMultTransposedEXT != NULL) && (vtkgl::TextureParameterfEXT != NULL) && (vtkgl::TextureParameterfvEXT != NULL) && (vtkgl::TextureParameteriEXT != NULL) && (vtkgl::TextureParameterivEXT != NULL) && (vtkgl::TextureImage1DEXT != NULL) && (vtkgl::TextureImage2DEXT != NULL) && (vtkgl::TextureSubImage1DEXT != NULL) && (vtkgl::TextureSubImage2DEXT != NULL) && (vtkgl::CopyTextureImage1DEXT != NULL) && (vtkgl::CopyTextureImage2DEXT != NULL) && (vtkgl::CopyTextureSubImage1DEXT != NULL) && (vtkgl::CopyTextureSubImage2DEXT != NULL) && (vtkgl::GetTextureImageEXT != NULL) && (vtkgl::GetTextureParameterfvEXT != NULL) && (vtkgl::GetTextureParameterivEXT != NULL) && (vtkgl::GetTextureLevelParameterfvEXT != NULL) && (vtkgl::GetTextureLevelParameterivEXT != NULL) && (vtkgl::TextureImage3DEXT != NULL) && (vtkgl::TextureSubImage3DEXT != NULL) && (vtkgl::CopyTextureSubImage3DEXT != NULL) && (vtkgl::MultiTexParameterfEXT != NULL) && (vtkgl::MultiTexParameterfvEXT != NULL) && (vtkgl::MultiTexParameteriEXT != NULL) && (vtkgl::MultiTexParameterivEXT != NULL) && (vtkgl::MultiTexImage1DEXT != NULL) && (vtkgl::MultiTexImage2DEXT != NULL) && (vtkgl::MultiTexSubImage1DEXT != NULL) && (vtkgl::MultiTexSubImage2DEXT != NULL) && (vtkgl::CopyMultiTexImage1DEXT != NULL) && (vtkgl::CopyMultiTexImage2DEXT != NULL) && (vtkgl::CopyMultiTexSubImage1DEXT != NULL) && (vtkgl::CopyMultiTexSubImage2DEXT != NULL) && (vtkgl::GetMultiTexImageEXT != NULL) && (vtkgl::GetMultiTexParameterfvEXT != NULL) && (vtkgl::GetMultiTexParameterivEXT != NULL) && (vtkgl::GetMultiTexLevelParameterfvEXT != NULL) && (vtkgl::GetMultiTexLevelParameterivEXT != NULL) && (vtkgl::MultiTexImage3DEXT != NULL) && (vtkgl::MultiTexSubImage3DEXT != NULL) && (vtkgl::CopyMultiTexSubImage3DEXT != NULL) && (vtkgl::BindMultiTextureEXT != NULL) && (vtkgl::EnableClientStateIndexedEXT != NULL) && (vtkgl::DisableClientStateIndexedEXT != NULL) && (vtkgl::MultiTexCoordPointerEXT != NULL) && (vtkgl::MultiTexEnvfEXT != NULL) && (vtkgl::MultiTexEnvfvEXT != NULL) && (vtkgl::MultiTexEnviEXT != NULL) && (vtkgl::MultiTexEnvivEXT != NULL) && (vtkgl::MultiTexGendEXT != NULL) && (vtkgl::MultiTexGendvEXT != NULL) && (vtkgl::MultiTexGenfEXT != NULL) && (vtkgl::MultiTexGenfvEXT != NULL) && (vtkgl::MultiTexGeniEXT != NULL) && (vtkgl::MultiTexGenivEXT != NULL) && (vtkgl::GetMultiTexEnvfvEXT != NULL) && (vtkgl::GetMultiTexEnvivEXT != NULL) && (vtkgl::GetMultiTexGendvEXT != NULL) && (vtkgl::GetMultiTexGenfvEXT != NULL) && (vtkgl::GetMultiTexGenivEXT != NULL) && (vtkgl::GetFloatIndexedvEXT != NULL) && (vtkgl::GetDoubleIndexedvEXT != NULL) && (vtkgl::GetPointerIndexedvEXT != NULL) && (vtkgl::CompressedTextureImage3DEXT != NULL) && (vtkgl::CompressedTextureImage2DEXT != NULL) && (vtkgl::CompressedTextureImage1DEXT != NULL) && (vtkgl::CompressedTextureSubImage3DEXT != NULL) && (vtkgl::CompressedTextureSubImage2DEXT != NULL) && (vtkgl::CompressedTextureSubImage1DEXT != NULL) && (vtkgl::GetCompressedTextureImageEXT != NULL) && (vtkgl::CompressedMultiTexImage3DEXT != NULL) && (vtkgl::CompressedMultiTexImage2DEXT != NULL) && (vtkgl::CompressedMultiTexImage1DEXT != NULL) && (vtkgl::CompressedMultiTexSubImage3DEXT != NULL) && (vtkgl::CompressedMultiTexSubImage2DEXT != NULL) && (vtkgl::CompressedMultiTexSubImage1DEXT != NULL) && (vtkgl::GetCompressedMultiTexImageEXT != NULL) && (vtkgl::NamedProgramStringEXT != NULL) && (vtkgl::NamedProgramLocalParameter4dEXT != NULL) && (vtkgl::NamedProgramLocalParameter4dvEXT != NULL) && (vtkgl::NamedProgramLocalParameter4fEXT != NULL) && (vtkgl::NamedProgramLocalParameter4fvEXT != NULL) && (vtkgl::GetNamedProgramLocalParameterdvEXT != NULL) && (vtkgl::GetNamedProgramLocalParameterfvEXT != NULL) && (vtkgl::GetNamedProgramivEXT != NULL) && (vtkgl::GetNamedProgramStringEXT != NULL) && (vtkgl::NamedProgramLocalParameters4fvEXT != NULL) && (vtkgl::NamedProgramLocalParameterI4iEXT != NULL) && (vtkgl::NamedProgramLocalParameterI4ivEXT != NULL) && (vtkgl::NamedProgramLocalParametersI4ivEXT != NULL) && (vtkgl::NamedProgramLocalParameterI4uiEXT != NULL) && (vtkgl::NamedProgramLocalParameterI4uivEXT != NULL) && (vtkgl::NamedProgramLocalParametersI4uivEXT != NULL) && (vtkgl::GetNamedProgramLocalParameterIivEXT != NULL) && (vtkgl::GetNamedProgramLocalParameterIuivEXT != NULL) && (vtkgl::TextureParameterIivEXT != NULL) && (vtkgl::TextureParameterIuivEXT != NULL) && (vtkgl::GetTextureParameterIivEXT != NULL) && (vtkgl::GetTextureParameterIuivEXT != NULL) && (vtkgl::MultiTexParameterIivEXT != NULL) && (vtkgl::MultiTexParameterIuivEXT != NULL) && (vtkgl::GetMultiTexParameterIivEXT != NULL) && (vtkgl::GetMultiTexParameterIuivEXT != NULL) && (vtkgl::ProgramUniform1fEXT != NULL) && (vtkgl::ProgramUniform2fEXT != NULL) && (vtkgl::ProgramUniform3fEXT != NULL) && (vtkgl::ProgramUniform4fEXT != NULL) && (vtkgl::ProgramUniform1iEXT != NULL) && (vtkgl::ProgramUniform2iEXT != NULL) && (vtkgl::ProgramUniform3iEXT != NULL) && (vtkgl::ProgramUniform4iEXT != NULL) && (vtkgl::ProgramUniform1fvEXT != NULL) && (vtkgl::ProgramUniform2fvEXT != NULL) && (vtkgl::ProgramUniform3fvEXT != NULL) && (vtkgl::ProgramUniform4fvEXT != NULL) && (vtkgl::ProgramUniform1ivEXT != NULL) && (vtkgl::ProgramUniform2ivEXT != NULL) && (vtkgl::ProgramUniform3ivEXT != NULL) && (vtkgl::ProgramUniform4ivEXT != NULL) && (vtkgl::ProgramUniformMatrix2fvEXT != NULL) && (vtkgl::ProgramUniformMatrix3fvEXT != NULL) && (vtkgl::ProgramUniformMatrix4fvEXT != NULL) && (vtkgl::ProgramUniformMatrix2x3fvEXT != NULL) && (vtkgl::ProgramUniformMatrix3x2fvEXT != NULL) && (vtkgl::ProgramUniformMatrix2x4fvEXT != NULL) && (vtkgl::ProgramUniformMatrix4x2fvEXT != NULL) && (vtkgl::ProgramUniformMatrix3x4fvEXT != NULL) && (vtkgl::ProgramUniformMatrix4x3fvEXT != NULL) && (vtkgl::ProgramUniform1uiEXT != NULL) && (vtkgl::ProgramUniform2uiEXT != NULL) && (vtkgl::ProgramUniform3uiEXT != NULL) && (vtkgl::ProgramUniform4uiEXT != NULL) && (vtkgl::ProgramUniform1uivEXT != NULL) && (vtkgl::ProgramUniform2uivEXT != NULL) && (vtkgl::ProgramUniform3uivEXT != NULL) && (vtkgl::ProgramUniform4uivEXT != NULL) && (vtkgl::NamedBufferDataEXT != NULL) && (vtkgl::NamedBufferSubDataEXT != NULL) && (vtkgl::MapNamedBufferEXT != NULL) && (vtkgl::UnmapNamedBufferEXT != NULL) && (vtkgl::MapNamedBufferRangeEXT != NULL) && (vtkgl::FlushMappedNamedBufferRangeEXT != NULL) && (vtkgl::NamedCopyBufferSubDataEXT != NULL) && (vtkgl::GetNamedBufferParameterivEXT != NULL) && (vtkgl::GetNamedBufferPointervEXT != NULL) && (vtkgl::GetNamedBufferSubDataEXT != NULL) && (vtkgl::TextureBufferEXT != NULL) && (vtkgl::MultiTexBufferEXT != NULL) && (vtkgl::NamedRenderbufferStorageEXT != NULL) && (vtkgl::GetNamedRenderbufferParameterivEXT != NULL) && (vtkgl::CheckNamedFramebufferStatusEXT != NULL) && (vtkgl::NamedFramebufferTexture1DEXT != NULL) && (vtkgl::NamedFramebufferTexture2DEXT != NULL) && (vtkgl::NamedFramebufferTexture3DEXT != NULL) && (vtkgl::NamedFramebufferRenderbufferEXT != NULL) && (vtkgl::GetNamedFramebufferAttachmentParameterivEXT != NULL) && (vtkgl::GenerateTextureMipmapEXT != NULL) && (vtkgl::GenerateMultiTexMipmapEXT != NULL) && (vtkgl::FramebufferDrawBufferEXT != NULL) && (vtkgl::FramebufferDrawBuffersEXT != NULL) && (vtkgl::FramebufferReadBufferEXT != NULL) && (vtkgl::GetFramebufferParameterivEXT != NULL) && (vtkgl::NamedRenderbufferStorageMultisampleEXT != NULL) && (vtkgl::NamedRenderbufferStorageMultisampleCoverageEXT != NULL) && (vtkgl::NamedFramebufferTextureEXT != NULL) && (vtkgl::NamedFramebufferTextureLayerEXT != NULL) && (vtkgl::NamedFramebufferTextureFaceEXT != NULL) && (vtkgl::TextureRenderbufferEXT != NULL) && (vtkgl::MultiTexRenderbufferEXT != NULL) && (vtkgl::ProgramUniform1dEXT != NULL) && (vtkgl::ProgramUniform2dEXT != NULL) && (vtkgl::ProgramUniform3dEXT != NULL) && (vtkgl::ProgramUniform4dEXT != NULL) && (vtkgl::ProgramUniform1dvEXT != NULL) && (vtkgl::ProgramUniform2dvEXT != NULL) && (vtkgl::ProgramUniform3dvEXT != NULL) && (vtkgl::ProgramUniform4dvEXT != NULL) && (vtkgl::ProgramUniformMatrix2dvEXT != NULL) && (vtkgl::ProgramUniformMatrix3dvEXT != NULL) && (vtkgl::ProgramUniformMatrix4dvEXT != NULL) && (vtkgl::ProgramUniformMatrix2x3dvEXT != NULL) && (vtkgl::ProgramUniformMatrix2x4dvEXT != NULL) && (vtkgl::ProgramUniformMatrix3x2dvEXT != NULL) && (vtkgl::ProgramUniformMatrix3x4dvEXT != NULL) && (vtkgl::ProgramUniformMatrix4x2dvEXT != NULL) && (vtkgl::ProgramUniformMatrix4x3dvEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_vertex_array_bgra") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_texture_swizzle") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_explicit_multisample") == 0)
    {
    vtkgl::GetMultisamplefvNV = reinterpret_cast<vtkgl::PFNGLGETMULTISAMPLEFVNVPROC>(manager->GetProcAddress("glGetMultisamplefvNV"));
    vtkgl::SampleMaskIndexedNV = reinterpret_cast<vtkgl::PFNGLSAMPLEMASKINDEXEDNVPROC>(manager->GetProcAddress("glSampleMaskIndexedNV"));
    vtkgl::TexRenderbufferNV = reinterpret_cast<vtkgl::PFNGLTEXRENDERBUFFERNVPROC>(manager->GetProcAddress("glTexRenderbufferNV"));
    return 1 && (vtkgl::GetMultisamplefvNV != NULL) && (vtkgl::SampleMaskIndexedNV != NULL) && (vtkgl::TexRenderbufferNV != NULL);
    }
  if (strcmp(name, "GL_NV_transform_feedback2") == 0)
    {
    vtkgl::BindTransformFeedbackNV = reinterpret_cast<vtkgl::PFNGLBINDTRANSFORMFEEDBACKNVPROC>(manager->GetProcAddress("glBindTransformFeedbackNV"));
    vtkgl::DeleteTransformFeedbacksNV = reinterpret_cast<vtkgl::PFNGLDELETETRANSFORMFEEDBACKSNVPROC>(manager->GetProcAddress("glDeleteTransformFeedbacksNV"));
    vtkgl::GenTransformFeedbacksNV = reinterpret_cast<vtkgl::PFNGLGENTRANSFORMFEEDBACKSNVPROC>(manager->GetProcAddress("glGenTransformFeedbacksNV"));
    vtkgl::IsTransformFeedbackNV = reinterpret_cast<vtkgl::PFNGLISTRANSFORMFEEDBACKNVPROC>(manager->GetProcAddress("glIsTransformFeedbackNV"));
    vtkgl::PauseTransformFeedbackNV = reinterpret_cast<vtkgl::PFNGLPAUSETRANSFORMFEEDBACKNVPROC>(manager->GetProcAddress("glPauseTransformFeedbackNV"));
    vtkgl::ResumeTransformFeedbackNV = reinterpret_cast<vtkgl::PFNGLRESUMETRANSFORMFEEDBACKNVPROC>(manager->GetProcAddress("glResumeTransformFeedbackNV"));
    vtkgl::DrawTransformFeedbackNV = reinterpret_cast<vtkgl::PFNGLDRAWTRANSFORMFEEDBACKNVPROC>(manager->GetProcAddress("glDrawTransformFeedbackNV"));
    return 1 && (vtkgl::BindTransformFeedbackNV != NULL) && (vtkgl::DeleteTransformFeedbacksNV != NULL) && (vtkgl::GenTransformFeedbacksNV != NULL) && (vtkgl::IsTransformFeedbackNV != NULL) && (vtkgl::PauseTransformFeedbackNV != NULL) && (vtkgl::ResumeTransformFeedbackNV != NULL) && (vtkgl::DrawTransformFeedbackNV != NULL);
    }
  if (strcmp(name, "GL_ATI_meminfo") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_AMD_performance_monitor") == 0)
    {
    vtkgl::GetPerfMonitorGroupsAMD = reinterpret_cast<vtkgl::PFNGLGETPERFMONITORGROUPSAMDPROC>(manager->GetProcAddress("glGetPerfMonitorGroupsAMD"));
    vtkgl::GetPerfMonitorCountersAMD = reinterpret_cast<vtkgl::PFNGLGETPERFMONITORCOUNTERSAMDPROC>(manager->GetProcAddress("glGetPerfMonitorCountersAMD"));
    vtkgl::GetPerfMonitorGroupStringAMD = reinterpret_cast<vtkgl::PFNGLGETPERFMONITORGROUPSTRINGAMDPROC>(manager->GetProcAddress("glGetPerfMonitorGroupStringAMD"));
    vtkgl::GetPerfMonitorCounterStringAMD = reinterpret_cast<vtkgl::PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC>(manager->GetProcAddress("glGetPerfMonitorCounterStringAMD"));
    vtkgl::GetPerfMonitorCounterInfoAMD = reinterpret_cast<vtkgl::PFNGLGETPERFMONITORCOUNTERINFOAMDPROC>(manager->GetProcAddress("glGetPerfMonitorCounterInfoAMD"));
    vtkgl::GenPerfMonitorsAMD = reinterpret_cast<vtkgl::PFNGLGENPERFMONITORSAMDPROC>(manager->GetProcAddress("glGenPerfMonitorsAMD"));
    vtkgl::DeletePerfMonitorsAMD = reinterpret_cast<vtkgl::PFNGLDELETEPERFMONITORSAMDPROC>(manager->GetProcAddress("glDeletePerfMonitorsAMD"));
    vtkgl::SelectPerfMonitorCountersAMD = reinterpret_cast<vtkgl::PFNGLSELECTPERFMONITORCOUNTERSAMDPROC>(manager->GetProcAddress("glSelectPerfMonitorCountersAMD"));
    vtkgl::BeginPerfMonitorAMD = reinterpret_cast<vtkgl::PFNGLBEGINPERFMONITORAMDPROC>(manager->GetProcAddress("glBeginPerfMonitorAMD"));
    vtkgl::EndPerfMonitorAMD = reinterpret_cast<vtkgl::PFNGLENDPERFMONITORAMDPROC>(manager->GetProcAddress("glEndPerfMonitorAMD"));
    vtkgl::GetPerfMonitorCounterDataAMD = reinterpret_cast<vtkgl::PFNGLGETPERFMONITORCOUNTERDATAAMDPROC>(manager->GetProcAddress("glGetPerfMonitorCounterDataAMD"));
    return 1 && (vtkgl::GetPerfMonitorGroupsAMD != NULL) && (vtkgl::GetPerfMonitorCountersAMD != NULL) && (vtkgl::GetPerfMonitorGroupStringAMD != NULL) && (vtkgl::GetPerfMonitorCounterStringAMD != NULL) && (vtkgl::GetPerfMonitorCounterInfoAMD != NULL) && (vtkgl::GenPerfMonitorsAMD != NULL) && (vtkgl::DeletePerfMonitorsAMD != NULL) && (vtkgl::SelectPerfMonitorCountersAMD != NULL) && (vtkgl::BeginPerfMonitorAMD != NULL) && (vtkgl::EndPerfMonitorAMD != NULL) && (vtkgl::GetPerfMonitorCounterDataAMD != NULL);
    }
  if (strcmp(name, "GL_AMD_texture_texture4") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_AMD_vertex_shader_tesselator") == 0)
    {
    vtkgl::TessellationFactorAMD = reinterpret_cast<vtkgl::PFNGLTESSELLATIONFACTORAMDPROC>(manager->GetProcAddress("glTessellationFactorAMD"));
    vtkgl::TessellationModeAMD = reinterpret_cast<vtkgl::PFNGLTESSELLATIONMODEAMDPROC>(manager->GetProcAddress("glTessellationModeAMD"));
    return 1 && (vtkgl::TessellationFactorAMD != NULL) && (vtkgl::TessellationModeAMD != NULL);
    }
  if (strcmp(name, "GL_EXT_provoking_vertex") == 0)
    {
    vtkgl::ProvokingVertexEXT = reinterpret_cast<vtkgl::PFNGLPROVOKINGVERTEXEXTPROC>(manager->GetProcAddress("glProvokingVertexEXT"));
    return 1 && (vtkgl::ProvokingVertexEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_texture_snorm") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_AMD_draw_buffers_blend") == 0)
    {
    vtkgl::BlendFuncIndexedAMD = reinterpret_cast<vtkgl::PFNGLBLENDFUNCINDEXEDAMDPROC>(manager->GetProcAddress("glBlendFuncIndexedAMD"));
    vtkgl::BlendFuncSeparateIndexedAMD = reinterpret_cast<vtkgl::PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC>(manager->GetProcAddress("glBlendFuncSeparateIndexedAMD"));
    vtkgl::BlendEquationIndexedAMD = reinterpret_cast<vtkgl::PFNGLBLENDEQUATIONINDEXEDAMDPROC>(manager->GetProcAddress("glBlendEquationIndexedAMD"));
    vtkgl::BlendEquationSeparateIndexedAMD = reinterpret_cast<vtkgl::PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC>(manager->GetProcAddress("glBlendEquationSeparateIndexedAMD"));
    return 1 && (vtkgl::BlendFuncIndexedAMD != NULL) && (vtkgl::BlendFuncSeparateIndexedAMD != NULL) && (vtkgl::BlendEquationIndexedAMD != NULL) && (vtkgl::BlendEquationSeparateIndexedAMD != NULL);
    }
  if (strcmp(name, "GL_APPLE_texture_range") == 0)
    {
    vtkgl::TextureRangeAPPLE = reinterpret_cast<vtkgl::PFNGLTEXTURERANGEAPPLEPROC>(manager->GetProcAddress("glTextureRangeAPPLE"));
    vtkgl::GetTexParameterPointervAPPLE = reinterpret_cast<vtkgl::PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC>(manager->GetProcAddress("glGetTexParameterPointervAPPLE"));
    return 1 && (vtkgl::TextureRangeAPPLE != NULL) && (vtkgl::GetTexParameterPointervAPPLE != NULL);
    }
  if (strcmp(name, "GL_APPLE_float_pixels") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_APPLE_vertex_program_evaluators") == 0)
    {
    vtkgl::EnableVertexAttribAPPLE = reinterpret_cast<vtkgl::PFNGLENABLEVERTEXATTRIBAPPLEPROC>(manager->GetProcAddress("glEnableVertexAttribAPPLE"));
    vtkgl::DisableVertexAttribAPPLE = reinterpret_cast<vtkgl::PFNGLDISABLEVERTEXATTRIBAPPLEPROC>(manager->GetProcAddress("glDisableVertexAttribAPPLE"));
    vtkgl::IsVertexAttribEnabledAPPLE = reinterpret_cast<vtkgl::PFNGLISVERTEXATTRIBENABLEDAPPLEPROC>(manager->GetProcAddress("glIsVertexAttribEnabledAPPLE"));
    vtkgl::MapVertexAttrib1dAPPLE = reinterpret_cast<vtkgl::PFNGLMAPVERTEXATTRIB1DAPPLEPROC>(manager->GetProcAddress("glMapVertexAttrib1dAPPLE"));
    vtkgl::MapVertexAttrib1fAPPLE = reinterpret_cast<vtkgl::PFNGLMAPVERTEXATTRIB1FAPPLEPROC>(manager->GetProcAddress("glMapVertexAttrib1fAPPLE"));
    vtkgl::MapVertexAttrib2dAPPLE = reinterpret_cast<vtkgl::PFNGLMAPVERTEXATTRIB2DAPPLEPROC>(manager->GetProcAddress("glMapVertexAttrib2dAPPLE"));
    vtkgl::MapVertexAttrib2fAPPLE = reinterpret_cast<vtkgl::PFNGLMAPVERTEXATTRIB2FAPPLEPROC>(manager->GetProcAddress("glMapVertexAttrib2fAPPLE"));
    return 1 && (vtkgl::EnableVertexAttribAPPLE != NULL) && (vtkgl::DisableVertexAttribAPPLE != NULL) && (vtkgl::IsVertexAttribEnabledAPPLE != NULL) && (vtkgl::MapVertexAttrib1dAPPLE != NULL) && (vtkgl::MapVertexAttrib1fAPPLE != NULL) && (vtkgl::MapVertexAttrib2dAPPLE != NULL) && (vtkgl::MapVertexAttrib2fAPPLE != NULL);
    }
  if (strcmp(name, "GL_APPLE_aux_depth_stencil") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_APPLE_object_purgeable") == 0)
    {
    vtkgl::ObjectPurgeableAPPLE = reinterpret_cast<vtkgl::PFNGLOBJECTPURGEABLEAPPLEPROC>(manager->GetProcAddress("glObjectPurgeableAPPLE"));
    vtkgl::ObjectUnpurgeableAPPLE = reinterpret_cast<vtkgl::PFNGLOBJECTUNPURGEABLEAPPLEPROC>(manager->GetProcAddress("glObjectUnpurgeableAPPLE"));
    vtkgl::GetObjectParameterivAPPLE = reinterpret_cast<vtkgl::PFNGLGETOBJECTPARAMETERIVAPPLEPROC>(manager->GetProcAddress("glGetObjectParameterivAPPLE"));
    return 1 && (vtkgl::ObjectPurgeableAPPLE != NULL) && (vtkgl::ObjectUnpurgeableAPPLE != NULL) && (vtkgl::GetObjectParameterivAPPLE != NULL);
    }
  if (strcmp(name, "GL_APPLE_row_bytes") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_APPLE_rgb_422") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_video_capture") == 0)
    {
    vtkgl::BeginVideoCaptureNV = reinterpret_cast<vtkgl::PFNGLBEGINVIDEOCAPTURENVPROC>(manager->GetProcAddress("glBeginVideoCaptureNV"));
    vtkgl::BindVideoCaptureStreamBufferNV = reinterpret_cast<vtkgl::PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC>(manager->GetProcAddress("glBindVideoCaptureStreamBufferNV"));
    vtkgl::BindVideoCaptureStreamTextureNV = reinterpret_cast<vtkgl::PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC>(manager->GetProcAddress("glBindVideoCaptureStreamTextureNV"));
    vtkgl::EndVideoCaptureNV = reinterpret_cast<vtkgl::PFNGLENDVIDEOCAPTURENVPROC>(manager->GetProcAddress("glEndVideoCaptureNV"));
    vtkgl::GetVideoCaptureivNV = reinterpret_cast<vtkgl::PFNGLGETVIDEOCAPTUREIVNVPROC>(manager->GetProcAddress("glGetVideoCaptureivNV"));
    vtkgl::GetVideoCaptureStreamivNV = reinterpret_cast<vtkgl::PFNGLGETVIDEOCAPTURESTREAMIVNVPROC>(manager->GetProcAddress("glGetVideoCaptureStreamivNV"));
    vtkgl::GetVideoCaptureStreamfvNV = reinterpret_cast<vtkgl::PFNGLGETVIDEOCAPTURESTREAMFVNVPROC>(manager->GetProcAddress("glGetVideoCaptureStreamfvNV"));
    vtkgl::GetVideoCaptureStreamdvNV = reinterpret_cast<vtkgl::PFNGLGETVIDEOCAPTURESTREAMDVNVPROC>(manager->GetProcAddress("glGetVideoCaptureStreamdvNV"));
    vtkgl::VideoCaptureNV = reinterpret_cast<vtkgl::PFNGLVIDEOCAPTURENVPROC>(manager->GetProcAddress("glVideoCaptureNV"));
    vtkgl::VideoCaptureStreamParameterivNV = reinterpret_cast<vtkgl::PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC>(manager->GetProcAddress("glVideoCaptureStreamParameterivNV"));
    vtkgl::VideoCaptureStreamParameterfvNV = reinterpret_cast<vtkgl::PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC>(manager->GetProcAddress("glVideoCaptureStreamParameterfvNV"));
    vtkgl::VideoCaptureStreamParameterdvNV = reinterpret_cast<vtkgl::PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC>(manager->GetProcAddress("glVideoCaptureStreamParameterdvNV"));
    return 1 && (vtkgl::BeginVideoCaptureNV != NULL) && (vtkgl::BindVideoCaptureStreamBufferNV != NULL) && (vtkgl::BindVideoCaptureStreamTextureNV != NULL) && (vtkgl::EndVideoCaptureNV != NULL) && (vtkgl::GetVideoCaptureivNV != NULL) && (vtkgl::GetVideoCaptureStreamivNV != NULL) && (vtkgl::GetVideoCaptureStreamfvNV != NULL) && (vtkgl::GetVideoCaptureStreamdvNV != NULL) && (vtkgl::VideoCaptureNV != NULL) && (vtkgl::VideoCaptureStreamParameterivNV != NULL) && (vtkgl::VideoCaptureStreamParameterfvNV != NULL) && (vtkgl::VideoCaptureStreamParameterdvNV != NULL);
    }
  if (strcmp(name, "GL_NV_copy_image") == 0)
    {
    vtkgl::CopyImageSubDataNV = reinterpret_cast<vtkgl::PFNGLCOPYIMAGESUBDATANVPROC>(manager->GetProcAddress("glCopyImageSubDataNV"));
    return 1 && (vtkgl::CopyImageSubDataNV != NULL);
    }
  if (strcmp(name, "GL_EXT_separate_shader_objects") == 0)
    {
    vtkgl::UseShaderProgramEXT = reinterpret_cast<vtkgl::PFNGLUSESHADERPROGRAMEXTPROC>(manager->GetProcAddress("glUseShaderProgramEXT"));
    vtkgl::ActiveProgramEXT = reinterpret_cast<vtkgl::PFNGLACTIVEPROGRAMEXTPROC>(manager->GetProcAddress("glActiveProgramEXT"));
    vtkgl::CreateShaderProgramEXT = reinterpret_cast<vtkgl::PFNGLCREATESHADERPROGRAMEXTPROC>(manager->GetProcAddress("glCreateShaderProgramEXT"));
    return 1 && (vtkgl::UseShaderProgramEXT != NULL) && (vtkgl::ActiveProgramEXT != NULL) && (vtkgl::CreateShaderProgramEXT != NULL);
    }
  if (strcmp(name, "GL_NV_parameter_buffer_object2") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_shader_buffer_load") == 0)
    {
    vtkgl::MakeBufferResidentNV = reinterpret_cast<vtkgl::PFNGLMAKEBUFFERRESIDENTNVPROC>(manager->GetProcAddress("glMakeBufferResidentNV"));
    vtkgl::MakeBufferNonResidentNV = reinterpret_cast<vtkgl::PFNGLMAKEBUFFERNONRESIDENTNVPROC>(manager->GetProcAddress("glMakeBufferNonResidentNV"));
    vtkgl::IsBufferResidentNV = reinterpret_cast<vtkgl::PFNGLISBUFFERRESIDENTNVPROC>(manager->GetProcAddress("glIsBufferResidentNV"));
    vtkgl::MakeNamedBufferResidentNV = reinterpret_cast<vtkgl::PFNGLMAKENAMEDBUFFERRESIDENTNVPROC>(manager->GetProcAddress("glMakeNamedBufferResidentNV"));
    vtkgl::MakeNamedBufferNonResidentNV = reinterpret_cast<vtkgl::PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC>(manager->GetProcAddress("glMakeNamedBufferNonResidentNV"));
    vtkgl::IsNamedBufferResidentNV = reinterpret_cast<vtkgl::PFNGLISNAMEDBUFFERRESIDENTNVPROC>(manager->GetProcAddress("glIsNamedBufferResidentNV"));
    vtkgl::GetBufferParameterui64vNV = reinterpret_cast<vtkgl::PFNGLGETBUFFERPARAMETERUI64VNVPROC>(manager->GetProcAddress("glGetBufferParameterui64vNV"));
    vtkgl::GetNamedBufferParameterui64vNV = reinterpret_cast<vtkgl::PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC>(manager->GetProcAddress("glGetNamedBufferParameterui64vNV"));
    vtkgl::GetIntegerui64vNV = reinterpret_cast<vtkgl::PFNGLGETINTEGERUI64VNVPROC>(manager->GetProcAddress("glGetIntegerui64vNV"));
    vtkgl::Uniformui64NV = reinterpret_cast<vtkgl::PFNGLUNIFORMUI64NVPROC>(manager->GetProcAddress("glUniformui64NV"));
    vtkgl::Uniformui64vNV = reinterpret_cast<vtkgl::PFNGLUNIFORMUI64VNVPROC>(manager->GetProcAddress("glUniformui64vNV"));
    vtkgl::GetUniformui64vNV = reinterpret_cast<vtkgl::PFNGLGETUNIFORMUI64VNVPROC>(manager->GetProcAddress("glGetUniformui64vNV"));
    vtkgl::ProgramUniformui64NV = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMUI64NVPROC>(manager->GetProcAddress("glProgramUniformui64NV"));
    vtkgl::ProgramUniformui64vNV = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORMUI64VNVPROC>(manager->GetProcAddress("glProgramUniformui64vNV"));
    return 1 && (vtkgl::MakeBufferResidentNV != NULL) && (vtkgl::MakeBufferNonResidentNV != NULL) && (vtkgl::IsBufferResidentNV != NULL) && (vtkgl::MakeNamedBufferResidentNV != NULL) && (vtkgl::MakeNamedBufferNonResidentNV != NULL) && (vtkgl::IsNamedBufferResidentNV != NULL) && (vtkgl::GetBufferParameterui64vNV != NULL) && (vtkgl::GetNamedBufferParameterui64vNV != NULL) && (vtkgl::GetIntegerui64vNV != NULL) && (vtkgl::Uniformui64NV != NULL) && (vtkgl::Uniformui64vNV != NULL) && (vtkgl::GetUniformui64vNV != NULL) && (vtkgl::ProgramUniformui64NV != NULL) && (vtkgl::ProgramUniformui64vNV != NULL);
    }
  if (strcmp(name, "GL_NV_vertex_buffer_unified_memory") == 0)
    {
    vtkgl::BufferAddressRangeNV = reinterpret_cast<vtkgl::PFNGLBUFFERADDRESSRANGENVPROC>(manager->GetProcAddress("glBufferAddressRangeNV"));
    vtkgl::VertexFormatNV = reinterpret_cast<vtkgl::PFNGLVERTEXFORMATNVPROC>(manager->GetProcAddress("glVertexFormatNV"));
    vtkgl::NormalFormatNV = reinterpret_cast<vtkgl::PFNGLNORMALFORMATNVPROC>(manager->GetProcAddress("glNormalFormatNV"));
    vtkgl::ColorFormatNV = reinterpret_cast<vtkgl::PFNGLCOLORFORMATNVPROC>(manager->GetProcAddress("glColorFormatNV"));
    vtkgl::IndexFormatNV = reinterpret_cast<vtkgl::PFNGLINDEXFORMATNVPROC>(manager->GetProcAddress("glIndexFormatNV"));
    vtkgl::TexCoordFormatNV = reinterpret_cast<vtkgl::PFNGLTEXCOORDFORMATNVPROC>(manager->GetProcAddress("glTexCoordFormatNV"));
    vtkgl::EdgeFlagFormatNV = reinterpret_cast<vtkgl::PFNGLEDGEFLAGFORMATNVPROC>(manager->GetProcAddress("glEdgeFlagFormatNV"));
    vtkgl::SecondaryColorFormatNV = reinterpret_cast<vtkgl::PFNGLSECONDARYCOLORFORMATNVPROC>(manager->GetProcAddress("glSecondaryColorFormatNV"));
    vtkgl::FogCoordFormatNV = reinterpret_cast<vtkgl::PFNGLFOGCOORDFORMATNVPROC>(manager->GetProcAddress("glFogCoordFormatNV"));
    vtkgl::VertexAttribFormatNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBFORMATNVPROC>(manager->GetProcAddress("glVertexAttribFormatNV"));
    vtkgl::VertexAttribIFormatNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBIFORMATNVPROC>(manager->GetProcAddress("glVertexAttribIFormatNV"));
    vtkgl::GetIntegerui64i_vNV = reinterpret_cast<vtkgl::PFNGLGETINTEGERUI64I_VNVPROC>(manager->GetProcAddress("glGetIntegerui64i_vNV"));
    return 1 && (vtkgl::BufferAddressRangeNV != NULL) && (vtkgl::VertexFormatNV != NULL) && (vtkgl::NormalFormatNV != NULL) && (vtkgl::ColorFormatNV != NULL) && (vtkgl::IndexFormatNV != NULL) && (vtkgl::TexCoordFormatNV != NULL) && (vtkgl::EdgeFlagFormatNV != NULL) && (vtkgl::SecondaryColorFormatNV != NULL) && (vtkgl::FogCoordFormatNV != NULL) && (vtkgl::VertexAttribFormatNV != NULL) && (vtkgl::VertexAttribIFormatNV != NULL) && (vtkgl::GetIntegerui64i_vNV != NULL);
    }
  if (strcmp(name, "GL_NV_texture_barrier") == 0)
    {
    vtkgl::TextureBarrierNV = reinterpret_cast<vtkgl::PFNGLTEXTUREBARRIERNVPROC>(manager->GetProcAddress("glTextureBarrierNV"));
    return 1 && (vtkgl::TextureBarrierNV != NULL);
    }
  if (strcmp(name, "GL_AMD_shader_stencil_export") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_AMD_seamless_cubemap_per_texture") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_AMD_conservative_depth") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_shader_image_load_store") == 0)
    {
    vtkgl::BindImageTextureEXT = reinterpret_cast<vtkgl::PFNGLBINDIMAGETEXTUREEXTPROC>(manager->GetProcAddress("glBindImageTextureEXT"));
    vtkgl::MemoryBarrierEXT = reinterpret_cast<vtkgl::PFNGLMEMORYBARRIEREXTPROC>(manager->GetProcAddress("glMemoryBarrierEXT"));
    return 1 && (vtkgl::BindImageTextureEXT != NULL) && (vtkgl::MemoryBarrierEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_vertex_attrib_64bit") == 0)
    {
    vtkgl::VertexAttribL1dEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL1DEXTPROC>(manager->GetProcAddress("glVertexAttribL1dEXT"));
    vtkgl::VertexAttribL2dEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL2DEXTPROC>(manager->GetProcAddress("glVertexAttribL2dEXT"));
    vtkgl::VertexAttribL3dEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL3DEXTPROC>(manager->GetProcAddress("glVertexAttribL3dEXT"));
    vtkgl::VertexAttribL4dEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL4DEXTPROC>(manager->GetProcAddress("glVertexAttribL4dEXT"));
    vtkgl::VertexAttribL1dvEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL1DVEXTPROC>(manager->GetProcAddress("glVertexAttribL1dvEXT"));
    vtkgl::VertexAttribL2dvEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL2DVEXTPROC>(manager->GetProcAddress("glVertexAttribL2dvEXT"));
    vtkgl::VertexAttribL3dvEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL3DVEXTPROC>(manager->GetProcAddress("glVertexAttribL3dvEXT"));
    vtkgl::VertexAttribL4dvEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL4DVEXTPROC>(manager->GetProcAddress("glVertexAttribL4dvEXT"));
    vtkgl::VertexAttribLPointerEXT = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBLPOINTEREXTPROC>(manager->GetProcAddress("glVertexAttribLPointerEXT"));
    vtkgl::GetVertexAttribLdvEXT = reinterpret_cast<vtkgl::PFNGLGETVERTEXATTRIBLDVEXTPROC>(manager->GetProcAddress("glGetVertexAttribLdvEXT"));
    vtkgl::VertexArrayVertexAttribLOffsetEXT = reinterpret_cast<vtkgl::PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC>(manager->GetProcAddress("glVertexArrayVertexAttribLOffsetEXT"));
    return 1 && (vtkgl::VertexAttribL1dEXT != NULL) && (vtkgl::VertexAttribL2dEXT != NULL) && (vtkgl::VertexAttribL3dEXT != NULL) && (vtkgl::VertexAttribL4dEXT != NULL) && (vtkgl::VertexAttribL1dvEXT != NULL) && (vtkgl::VertexAttribL2dvEXT != NULL) && (vtkgl::VertexAttribL3dvEXT != NULL) && (vtkgl::VertexAttribL4dvEXT != NULL) && (vtkgl::VertexAttribLPointerEXT != NULL) && (vtkgl::GetVertexAttribLdvEXT != NULL) && (vtkgl::VertexArrayVertexAttribLOffsetEXT != NULL);
    }
  if (strcmp(name, "GL_NV_gpu_program5") == 0)
    {
    vtkgl::ProgramSubroutineParametersuivNV = reinterpret_cast<vtkgl::PFNGLPROGRAMSUBROUTINEPARAMETERSUIVNVPROC>(manager->GetProcAddress("glProgramSubroutineParametersuivNV"));
    vtkgl::GetProgramSubroutineParameteruivNV = reinterpret_cast<vtkgl::PFNGLGETPROGRAMSUBROUTINEPARAMETERUIVNVPROC>(manager->GetProcAddress("glGetProgramSubroutineParameteruivNV"));
    return 1 && (vtkgl::ProgramSubroutineParametersuivNV != NULL) && (vtkgl::GetProgramSubroutineParameteruivNV != NULL);
    }
  if (strcmp(name, "GL_NV_gpu_shader5") == 0)
    {
    vtkgl::Uniform1i64NV = reinterpret_cast<vtkgl::PFNGLUNIFORM1I64NVPROC>(manager->GetProcAddress("glUniform1i64NV"));
    vtkgl::Uniform2i64NV = reinterpret_cast<vtkgl::PFNGLUNIFORM2I64NVPROC>(manager->GetProcAddress("glUniform2i64NV"));
    vtkgl::Uniform3i64NV = reinterpret_cast<vtkgl::PFNGLUNIFORM3I64NVPROC>(manager->GetProcAddress("glUniform3i64NV"));
    vtkgl::Uniform4i64NV = reinterpret_cast<vtkgl::PFNGLUNIFORM4I64NVPROC>(manager->GetProcAddress("glUniform4i64NV"));
    vtkgl::Uniform1i64vNV = reinterpret_cast<vtkgl::PFNGLUNIFORM1I64VNVPROC>(manager->GetProcAddress("glUniform1i64vNV"));
    vtkgl::Uniform2i64vNV = reinterpret_cast<vtkgl::PFNGLUNIFORM2I64VNVPROC>(manager->GetProcAddress("glUniform2i64vNV"));
    vtkgl::Uniform3i64vNV = reinterpret_cast<vtkgl::PFNGLUNIFORM3I64VNVPROC>(manager->GetProcAddress("glUniform3i64vNV"));
    vtkgl::Uniform4i64vNV = reinterpret_cast<vtkgl::PFNGLUNIFORM4I64VNVPROC>(manager->GetProcAddress("glUniform4i64vNV"));
    vtkgl::Uniform1ui64NV = reinterpret_cast<vtkgl::PFNGLUNIFORM1UI64NVPROC>(manager->GetProcAddress("glUniform1ui64NV"));
    vtkgl::Uniform2ui64NV = reinterpret_cast<vtkgl::PFNGLUNIFORM2UI64NVPROC>(manager->GetProcAddress("glUniform2ui64NV"));
    vtkgl::Uniform3ui64NV = reinterpret_cast<vtkgl::PFNGLUNIFORM3UI64NVPROC>(manager->GetProcAddress("glUniform3ui64NV"));
    vtkgl::Uniform4ui64NV = reinterpret_cast<vtkgl::PFNGLUNIFORM4UI64NVPROC>(manager->GetProcAddress("glUniform4ui64NV"));
    vtkgl::Uniform1ui64vNV = reinterpret_cast<vtkgl::PFNGLUNIFORM1UI64VNVPROC>(manager->GetProcAddress("glUniform1ui64vNV"));
    vtkgl::Uniform2ui64vNV = reinterpret_cast<vtkgl::PFNGLUNIFORM2UI64VNVPROC>(manager->GetProcAddress("glUniform2ui64vNV"));
    vtkgl::Uniform3ui64vNV = reinterpret_cast<vtkgl::PFNGLUNIFORM3UI64VNVPROC>(manager->GetProcAddress("glUniform3ui64vNV"));
    vtkgl::Uniform4ui64vNV = reinterpret_cast<vtkgl::PFNGLUNIFORM4UI64VNVPROC>(manager->GetProcAddress("glUniform4ui64vNV"));
    vtkgl::GetUniformi64vNV = reinterpret_cast<vtkgl::PFNGLGETUNIFORMI64VNVPROC>(manager->GetProcAddress("glGetUniformi64vNV"));
    vtkgl::ProgramUniform1i64NV = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM1I64NVPROC>(manager->GetProcAddress("glProgramUniform1i64NV"));
    vtkgl::ProgramUniform2i64NV = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM2I64NVPROC>(manager->GetProcAddress("glProgramUniform2i64NV"));
    vtkgl::ProgramUniform3i64NV = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM3I64NVPROC>(manager->GetProcAddress("glProgramUniform3i64NV"));
    vtkgl::ProgramUniform4i64NV = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM4I64NVPROC>(manager->GetProcAddress("glProgramUniform4i64NV"));
    vtkgl::ProgramUniform1i64vNV = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM1I64VNVPROC>(manager->GetProcAddress("glProgramUniform1i64vNV"));
    vtkgl::ProgramUniform2i64vNV = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM2I64VNVPROC>(manager->GetProcAddress("glProgramUniform2i64vNV"));
    vtkgl::ProgramUniform3i64vNV = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM3I64VNVPROC>(manager->GetProcAddress("glProgramUniform3i64vNV"));
    vtkgl::ProgramUniform4i64vNV = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM4I64VNVPROC>(manager->GetProcAddress("glProgramUniform4i64vNV"));
    vtkgl::ProgramUniform1ui64NV = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM1UI64NVPROC>(manager->GetProcAddress("glProgramUniform1ui64NV"));
    vtkgl::ProgramUniform2ui64NV = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM2UI64NVPROC>(manager->GetProcAddress("glProgramUniform2ui64NV"));
    vtkgl::ProgramUniform3ui64NV = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM3UI64NVPROC>(manager->GetProcAddress("glProgramUniform3ui64NV"));
    vtkgl::ProgramUniform4ui64NV = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM4UI64NVPROC>(manager->GetProcAddress("glProgramUniform4ui64NV"));
    vtkgl::ProgramUniform1ui64vNV = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM1UI64VNVPROC>(manager->GetProcAddress("glProgramUniform1ui64vNV"));
    vtkgl::ProgramUniform2ui64vNV = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM2UI64VNVPROC>(manager->GetProcAddress("glProgramUniform2ui64vNV"));
    vtkgl::ProgramUniform3ui64vNV = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM3UI64VNVPROC>(manager->GetProcAddress("glProgramUniform3ui64vNV"));
    vtkgl::ProgramUniform4ui64vNV = reinterpret_cast<vtkgl::PFNGLPROGRAMUNIFORM4UI64VNVPROC>(manager->GetProcAddress("glProgramUniform4ui64vNV"));
    return 1 && (vtkgl::Uniform1i64NV != NULL) && (vtkgl::Uniform2i64NV != NULL) && (vtkgl::Uniform3i64NV != NULL) && (vtkgl::Uniform4i64NV != NULL) && (vtkgl::Uniform1i64vNV != NULL) && (vtkgl::Uniform2i64vNV != NULL) && (vtkgl::Uniform3i64vNV != NULL) && (vtkgl::Uniform4i64vNV != NULL) && (vtkgl::Uniform1ui64NV != NULL) && (vtkgl::Uniform2ui64NV != NULL) && (vtkgl::Uniform3ui64NV != NULL) && (vtkgl::Uniform4ui64NV != NULL) && (vtkgl::Uniform1ui64vNV != NULL) && (vtkgl::Uniform2ui64vNV != NULL) && (vtkgl::Uniform3ui64vNV != NULL) && (vtkgl::Uniform4ui64vNV != NULL) && (vtkgl::GetUniformi64vNV != NULL) && (vtkgl::ProgramUniform1i64NV != NULL) && (vtkgl::ProgramUniform2i64NV != NULL) && (vtkgl::ProgramUniform3i64NV != NULL) && (vtkgl::ProgramUniform4i64NV != NULL) && (vtkgl::ProgramUniform1i64vNV != NULL) && (vtkgl::ProgramUniform2i64vNV != NULL) && (vtkgl::ProgramUniform3i64vNV != NULL) && (vtkgl::ProgramUniform4i64vNV != NULL) && (vtkgl::ProgramUniform1ui64NV != NULL) && (vtkgl::ProgramUniform2ui64NV != NULL) && (vtkgl::ProgramUniform3ui64NV != NULL) && (vtkgl::ProgramUniform4ui64NV != NULL) && (vtkgl::ProgramUniform1ui64vNV != NULL) && (vtkgl::ProgramUniform2ui64vNV != NULL) && (vtkgl::ProgramUniform3ui64vNV != NULL) && (vtkgl::ProgramUniform4ui64vNV != NULL);
    }
  if (strcmp(name, "GL_NV_shader_buffer_store") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_tessellation_program5") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_vertex_attrib_integer_64bit") == 0)
    {
    vtkgl::VertexAttribL1i64NV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL1I64NVPROC>(manager->GetProcAddress("glVertexAttribL1i64NV"));
    vtkgl::VertexAttribL2i64NV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL2I64NVPROC>(manager->GetProcAddress("glVertexAttribL2i64NV"));
    vtkgl::VertexAttribL3i64NV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL3I64NVPROC>(manager->GetProcAddress("glVertexAttribL3i64NV"));
    vtkgl::VertexAttribL4i64NV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL4I64NVPROC>(manager->GetProcAddress("glVertexAttribL4i64NV"));
    vtkgl::VertexAttribL1i64vNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL1I64VNVPROC>(manager->GetProcAddress("glVertexAttribL1i64vNV"));
    vtkgl::VertexAttribL2i64vNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL2I64VNVPROC>(manager->GetProcAddress("glVertexAttribL2i64vNV"));
    vtkgl::VertexAttribL3i64vNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL3I64VNVPROC>(manager->GetProcAddress("glVertexAttribL3i64vNV"));
    vtkgl::VertexAttribL4i64vNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL4I64VNVPROC>(manager->GetProcAddress("glVertexAttribL4i64vNV"));
    vtkgl::VertexAttribL1ui64NV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL1UI64NVPROC>(manager->GetProcAddress("glVertexAttribL1ui64NV"));
    vtkgl::VertexAttribL2ui64NV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL2UI64NVPROC>(manager->GetProcAddress("glVertexAttribL2ui64NV"));
    vtkgl::VertexAttribL3ui64NV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL3UI64NVPROC>(manager->GetProcAddress("glVertexAttribL3ui64NV"));
    vtkgl::VertexAttribL4ui64NV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL4UI64NVPROC>(manager->GetProcAddress("glVertexAttribL4ui64NV"));
    vtkgl::VertexAttribL1ui64vNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL1UI64VNVPROC>(manager->GetProcAddress("glVertexAttribL1ui64vNV"));
    vtkgl::VertexAttribL2ui64vNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL2UI64VNVPROC>(manager->GetProcAddress("glVertexAttribL2ui64vNV"));
    vtkgl::VertexAttribL3ui64vNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL3UI64VNVPROC>(manager->GetProcAddress("glVertexAttribL3ui64vNV"));
    vtkgl::VertexAttribL4ui64vNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBL4UI64VNVPROC>(manager->GetProcAddress("glVertexAttribL4ui64vNV"));
    vtkgl::GetVertexAttribLi64vNV = reinterpret_cast<vtkgl::PFNGLGETVERTEXATTRIBLI64VNVPROC>(manager->GetProcAddress("glGetVertexAttribLi64vNV"));
    vtkgl::GetVertexAttribLui64vNV = reinterpret_cast<vtkgl::PFNGLGETVERTEXATTRIBLUI64VNVPROC>(manager->GetProcAddress("glGetVertexAttribLui64vNV"));
    vtkgl::VertexAttribLFormatNV = reinterpret_cast<vtkgl::PFNGLVERTEXATTRIBLFORMATNVPROC>(manager->GetProcAddress("glVertexAttribLFormatNV"));
    return 1 && (vtkgl::VertexAttribL1i64NV != NULL) && (vtkgl::VertexAttribL2i64NV != NULL) && (vtkgl::VertexAttribL3i64NV != NULL) && (vtkgl::VertexAttribL4i64NV != NULL) && (vtkgl::VertexAttribL1i64vNV != NULL) && (vtkgl::VertexAttribL2i64vNV != NULL) && (vtkgl::VertexAttribL3i64vNV != NULL) && (vtkgl::VertexAttribL4i64vNV != NULL) && (vtkgl::VertexAttribL1ui64NV != NULL) && (vtkgl::VertexAttribL2ui64NV != NULL) && (vtkgl::VertexAttribL3ui64NV != NULL) && (vtkgl::VertexAttribL4ui64NV != NULL) && (vtkgl::VertexAttribL1ui64vNV != NULL) && (vtkgl::VertexAttribL2ui64vNV != NULL) && (vtkgl::VertexAttribL3ui64vNV != NULL) && (vtkgl::VertexAttribL4ui64vNV != NULL) && (vtkgl::GetVertexAttribLi64vNV != NULL) && (vtkgl::GetVertexAttribLui64vNV != NULL) && (vtkgl::VertexAttribLFormatNV != NULL);
    }
  if (strcmp(name, "GL_NV_multisample_coverage") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_AMD_name_gen_delete") == 0)
    {
    vtkgl::GenNamesAMD = reinterpret_cast<vtkgl::PFNGLGENNAMESAMDPROC>(manager->GetProcAddress("glGenNamesAMD"));
    vtkgl::DeleteNamesAMD = reinterpret_cast<vtkgl::PFNGLDELETENAMESAMDPROC>(manager->GetProcAddress("glDeleteNamesAMD"));
    vtkgl::IsNameAMD = reinterpret_cast<vtkgl::PFNGLISNAMEAMDPROC>(manager->GetProcAddress("glIsNameAMD"));
    return 1 && (vtkgl::GenNamesAMD != NULL) && (vtkgl::DeleteNamesAMD != NULL) && (vtkgl::IsNameAMD != NULL);
    }
  if (strcmp(name, "GL_AMD_debug_output") == 0)
    {
    vtkgl::DebugMessageEnableAMD = reinterpret_cast<vtkgl::PFNGLDEBUGMESSAGEENABLEAMDPROC>(manager->GetProcAddress("glDebugMessageEnableAMD"));
    vtkgl::DebugMessageInsertAMD = reinterpret_cast<vtkgl::PFNGLDEBUGMESSAGEINSERTAMDPROC>(manager->GetProcAddress("glDebugMessageInsertAMD"));
    vtkgl::DebugMessageCallbackAMD = reinterpret_cast<vtkgl::PFNGLDEBUGMESSAGECALLBACKAMDPROC>(manager->GetProcAddress("glDebugMessageCallbackAMD"));
    vtkgl::GetDebugMessageLogAMD = reinterpret_cast<vtkgl::PFNGLGETDEBUGMESSAGELOGAMDPROC>(manager->GetProcAddress("glGetDebugMessageLogAMD"));
    return 1 && (vtkgl::DebugMessageEnableAMD != NULL) && (vtkgl::DebugMessageInsertAMD != NULL) && (vtkgl::DebugMessageCallbackAMD != NULL) && (vtkgl::GetDebugMessageLogAMD != NULL);
    }
  if (strcmp(name, "GL_NV_vdpau_interop") == 0)
    {
    vtkgl::VDPAUInitNV = reinterpret_cast<vtkgl::PFNGLVDPAUINITNVPROC>(manager->GetProcAddress("glVDPAUInitNV"));
    vtkgl::VDPAUFiniNV = reinterpret_cast<vtkgl::PFNGLVDPAUFININVPROC>(manager->GetProcAddress("glVDPAUFiniNV"));
    vtkgl::VDPAURegisterVideoSurfaceNV = reinterpret_cast<vtkgl::PFNGLVDPAUREGISTERVIDEOSURFACENVPROC>(manager->GetProcAddress("glVDPAURegisterVideoSurfaceNV"));
    vtkgl::VDPAURegisterOutputSurfaceNV = reinterpret_cast<vtkgl::PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC>(manager->GetProcAddress("glVDPAURegisterOutputSurfaceNV"));
    vtkgl::VDPAUIsSurfaceNV = reinterpret_cast<vtkgl::PFNGLVDPAUISSURFACENVPROC>(manager->GetProcAddress("glVDPAUIsSurfaceNV"));
    vtkgl::VDPAUUnregisterSurfaceNV = reinterpret_cast<vtkgl::PFNGLVDPAUUNREGISTERSURFACENVPROC>(manager->GetProcAddress("glVDPAUUnregisterSurfaceNV"));
    vtkgl::VDPAUGetSurfaceivNV = reinterpret_cast<vtkgl::PFNGLVDPAUGETSURFACEIVNVPROC>(manager->GetProcAddress("glVDPAUGetSurfaceivNV"));
    vtkgl::VDPAUSurfaceAccessNV = reinterpret_cast<vtkgl::PFNGLVDPAUSURFACEACCESSNVPROC>(manager->GetProcAddress("glVDPAUSurfaceAccessNV"));
    vtkgl::VDPAUMapSurfacesNV = reinterpret_cast<vtkgl::PFNGLVDPAUMAPSURFACESNVPROC>(manager->GetProcAddress("glVDPAUMapSurfacesNV"));
    vtkgl::VDPAUUnmapSurfacesNV = reinterpret_cast<vtkgl::PFNGLVDPAUUNMAPSURFACESNVPROC>(manager->GetProcAddress("glVDPAUUnmapSurfacesNV"));
    return 1 && (vtkgl::VDPAUInitNV != NULL) && (vtkgl::VDPAUFiniNV != NULL) && (vtkgl::VDPAURegisterVideoSurfaceNV != NULL) && (vtkgl::VDPAURegisterOutputSurfaceNV != NULL) && (vtkgl::VDPAUIsSurfaceNV != NULL) && (vtkgl::VDPAUUnregisterSurfaceNV != NULL) && (vtkgl::VDPAUGetSurfaceivNV != NULL) && (vtkgl::VDPAUSurfaceAccessNV != NULL) && (vtkgl::VDPAUMapSurfacesNV != NULL) && (vtkgl::VDPAUUnmapSurfacesNV != NULL);
    }
  if (strcmp(name, "GL_AMD_transform_feedback3_lines_triangles") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_texture_select") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_INGR_blend_func_separate") == 0)
    {
    vtkgl::BlendFuncSeparateINGR = reinterpret_cast<vtkgl::PFNGLBLENDFUNCSEPARATEINGRPROC>(manager->GetProcAddress("glBlendFuncSeparateINGR"));
    return 1 && (vtkgl::BlendFuncSeparateINGR != NULL);
    }
  if (strcmp(name, "GL_SGIX_depth_pass_instrument") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_igloo_interface") == 0)
    {
    vtkgl::IglooInterfaceSGIX = reinterpret_cast<vtkgl::PFNGLIGLOOINTERFACESGIXPROC>(manager->GetProcAddress("glIglooInterfaceSGIX"));
    return 1 && (vtkgl::IglooInterfaceSGIX != NULL);
    }
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_VERSION_1_3") == 0)
    {
    vtkglX::GetFBConfigs = reinterpret_cast<vtkglX::PFNGLXGETFBCONFIGSPROC>(manager->GetProcAddress("glXGetFBConfigs"));
    vtkglX::ChooseFBConfig = reinterpret_cast<vtkglX::PFNGLXCHOOSEFBCONFIGPROC>(manager->GetProcAddress("glXChooseFBConfig"));
    vtkglX::GetFBConfigAttrib = reinterpret_cast<vtkglX::PFNGLXGETFBCONFIGATTRIBPROC>(manager->GetProcAddress("glXGetFBConfigAttrib"));
    vtkglX::GetVisualFromFBConfig = reinterpret_cast<vtkglX::PFNGLXGETVISUALFROMFBCONFIGPROC>(manager->GetProcAddress("glXGetVisualFromFBConfig"));
    vtkglX::CreateWindow = reinterpret_cast<vtkglX::PFNGLXCREATEWINDOWPROC>(manager->GetProcAddress("glXCreateWindow"));
    vtkglX::DestroyWindow = reinterpret_cast<vtkglX::PFNGLXDESTROYWINDOWPROC>(manager->GetProcAddress("glXDestroyWindow"));
    vtkglX::CreatePixmap = reinterpret_cast<vtkglX::PFNGLXCREATEPIXMAPPROC>(manager->GetProcAddress("glXCreatePixmap"));
    vtkglX::DestroyPixmap = reinterpret_cast<vtkglX::PFNGLXDESTROYPIXMAPPROC>(manager->GetProcAddress("glXDestroyPixmap"));
    vtkglX::CreatePbuffer = reinterpret_cast<vtkglX::PFNGLXCREATEPBUFFERPROC>(manager->GetProcAddress("glXCreatePbuffer"));
    vtkglX::DestroyPbuffer = reinterpret_cast<vtkglX::PFNGLXDESTROYPBUFFERPROC>(manager->GetProcAddress("glXDestroyPbuffer"));
    vtkglX::QueryDrawable = reinterpret_cast<vtkglX::PFNGLXQUERYDRAWABLEPROC>(manager->GetProcAddress("glXQueryDrawable"));
    vtkglX::CreateNewContext = reinterpret_cast<vtkglX::PFNGLXCREATENEWCONTEXTPROC>(manager->GetProcAddress("glXCreateNewContext"));
    vtkglX::MakeContextCurrent = reinterpret_cast<vtkglX::PFNGLXMAKECONTEXTCURRENTPROC>(manager->GetProcAddress("glXMakeContextCurrent"));
    vtkglX::GetCurrentReadDrawable = reinterpret_cast<vtkglX::PFNGLXGETCURRENTREADDRAWABLEPROC>(manager->GetProcAddress("glXGetCurrentReadDrawable"));
    vtkglX::GetCurrentDisplay = reinterpret_cast<vtkglX::PFNGLXGETCURRENTDISPLAYPROC>(manager->GetProcAddress("glXGetCurrentDisplay"));
    vtkglX::QueryContext = reinterpret_cast<vtkglX::PFNGLXQUERYCONTEXTPROC>(manager->GetProcAddress("glXQueryContext"));
    vtkglX::SelectEvent = reinterpret_cast<vtkglX::PFNGLXSELECTEVENTPROC>(manager->GetProcAddress("glXSelectEvent"));
    vtkglX::GetSelectedEvent = reinterpret_cast<vtkglX::PFNGLXGETSELECTEDEVENTPROC>(manager->GetProcAddress("glXGetSelectedEvent"));
    return 1 && (vtkglX::GetFBConfigs != NULL) && (vtkglX::ChooseFBConfig != NULL) && (vtkglX::GetFBConfigAttrib != NULL) && (vtkglX::GetVisualFromFBConfig != NULL) && (vtkglX::CreateWindow != NULL) && (vtkglX::DestroyWindow != NULL) && (vtkglX::CreatePixmap != NULL) && (vtkglX::DestroyPixmap != NULL) && (vtkglX::CreatePbuffer != NULL) && (vtkglX::DestroyPbuffer != NULL) && (vtkglX::QueryDrawable != NULL) && (vtkglX::CreateNewContext != NULL) && (vtkglX::MakeContextCurrent != NULL) && (vtkglX::GetCurrentReadDrawable != NULL) && (vtkglX::GetCurrentDisplay != NULL) && (vtkglX::QueryContext != NULL) && (vtkglX::SelectEvent != NULL) && (vtkglX::GetSelectedEvent != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_VERSION_1_4") == 0)
    {
    vtkglX::GetProcAddress = reinterpret_cast<vtkglX::PFNGLXGETPROCADDRESSPROC>(manager->GetProcAddress("glXGetProcAddress"));
    return 1 && (vtkglX::GetProcAddress != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_ARB_multisample") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_ARB_vertex_buffer_object") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_ARB_fbconfig_float") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_ARB_framebuffer_sRGB") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_ARB_create_context") == 0)
    {
    vtkglX::CreateContextAttribsARB = reinterpret_cast<vtkglX::PFNGLXCREATECONTEXTATTRIBSARBPROC>(manager->GetProcAddress("glXCreateContextAttribsARB"));
    return 1 && (vtkglX::CreateContextAttribsARB != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_ARB_create_context_profile") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_ARB_create_context_robustness") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGIS_multisample") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_EXT_visual_info") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGI_swap_control") == 0)
    {
    vtkglX::SwapIntervalSGI = reinterpret_cast<vtkglX::PFNGLXSWAPINTERVALSGIPROC>(manager->GetProcAddress("glXSwapIntervalSGI"));
    return 1 && (vtkglX::SwapIntervalSGI != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGI_video_sync") == 0)
    {
    vtkglX::GetVideoSyncSGI = reinterpret_cast<vtkglX::PFNGLXGETVIDEOSYNCSGIPROC>(manager->GetProcAddress("glXGetVideoSyncSGI"));
    vtkglX::WaitVideoSyncSGI = reinterpret_cast<vtkglX::PFNGLXWAITVIDEOSYNCSGIPROC>(manager->GetProcAddress("glXWaitVideoSyncSGI"));
    return 1 && (vtkglX::GetVideoSyncSGI != NULL) && (vtkglX::WaitVideoSyncSGI != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGI_make_current_read") == 0)
    {
    vtkglX::MakeCurrentReadSGI = reinterpret_cast<vtkglX::PFNGLXMAKECURRENTREADSGIPROC>(manager->GetProcAddress("glXMakeCurrentReadSGI"));
    vtkglX::GetCurrentReadDrawableSGI = reinterpret_cast<vtkglX::PFNGLXGETCURRENTREADDRAWABLESGIPROC>(manager->GetProcAddress("glXGetCurrentReadDrawableSGI"));
    return 1 && (vtkglX::MakeCurrentReadSGI != NULL) && (vtkglX::GetCurrentReadDrawableSGI != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_EXT_visual_rating") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_EXT_import_context") == 0)
    {
    vtkglX::GetCurrentDisplayEXT = reinterpret_cast<vtkglX::PFNGLXGETCURRENTDISPLAYEXTPROC>(manager->GetProcAddress("glXGetCurrentDisplayEXT"));
    vtkglX::QueryContextInfoEXT = reinterpret_cast<vtkglX::PFNGLXQUERYCONTEXTINFOEXTPROC>(manager->GetProcAddress("glXQueryContextInfoEXT"));
    vtkglX::GetContextIDEXT = reinterpret_cast<vtkglX::PFNGLXGETCONTEXTIDEXTPROC>(manager->GetProcAddress("glXGetContextIDEXT"));
    vtkglX::ImportContextEXT = reinterpret_cast<vtkglX::PFNGLXIMPORTCONTEXTEXTPROC>(manager->GetProcAddress("glXImportContextEXT"));
    vtkglX::FreeContextEXT = reinterpret_cast<vtkglX::PFNGLXFREECONTEXTEXTPROC>(manager->GetProcAddress("glXFreeContextEXT"));
    return 1 && (vtkglX::GetCurrentDisplayEXT != NULL) && (vtkglX::QueryContextInfoEXT != NULL) && (vtkglX::GetContextIDEXT != NULL) && (vtkglX::ImportContextEXT != NULL) && (vtkglX::FreeContextEXT != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGIX_fbconfig") == 0)
    {
    vtkglX::GetFBConfigAttribSGIX = reinterpret_cast<vtkglX::PFNGLXGETFBCONFIGATTRIBSGIXPROC>(manager->GetProcAddress("glXGetFBConfigAttribSGIX"));
    vtkglX::ChooseFBConfigSGIX = reinterpret_cast<vtkglX::PFNGLXCHOOSEFBCONFIGSGIXPROC>(manager->GetProcAddress("glXChooseFBConfigSGIX"));
    vtkglX::CreateGLXPixmapWithConfigSGIX = reinterpret_cast<vtkglX::PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC>(manager->GetProcAddress("glXCreateGLXPixmapWithConfigSGIX"));
    vtkglX::CreateContextWithConfigSGIX = reinterpret_cast<vtkglX::PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC>(manager->GetProcAddress("glXCreateContextWithConfigSGIX"));
    vtkglX::GetVisualFromFBConfigSGIX = reinterpret_cast<vtkglX::PFNGLXGETVISUALFROMFBCONFIGSGIXPROC>(manager->GetProcAddress("glXGetVisualFromFBConfigSGIX"));
    vtkglX::GetFBConfigFromVisualSGIX = reinterpret_cast<vtkglX::PFNGLXGETFBCONFIGFROMVISUALSGIXPROC>(manager->GetProcAddress("glXGetFBConfigFromVisualSGIX"));
    return 1 && (vtkglX::GetFBConfigAttribSGIX != NULL) && (vtkglX::ChooseFBConfigSGIX != NULL) && (vtkglX::CreateGLXPixmapWithConfigSGIX != NULL) && (vtkglX::CreateContextWithConfigSGIX != NULL) && (vtkglX::GetVisualFromFBConfigSGIX != NULL) && (vtkglX::GetFBConfigFromVisualSGIX != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGIX_pbuffer") == 0)
    {
    vtkglX::CreateGLXPbufferSGIX = reinterpret_cast<vtkglX::PFNGLXCREATEGLXPBUFFERSGIXPROC>(manager->GetProcAddress("glXCreateGLXPbufferSGIX"));
    vtkglX::DestroyGLXPbufferSGIX = reinterpret_cast<vtkglX::PFNGLXDESTROYGLXPBUFFERSGIXPROC>(manager->GetProcAddress("glXDestroyGLXPbufferSGIX"));
    vtkglX::QueryGLXPbufferSGIX = reinterpret_cast<vtkglX::PFNGLXQUERYGLXPBUFFERSGIXPROC>(manager->GetProcAddress("glXQueryGLXPbufferSGIX"));
    vtkglX::SelectEventSGIX = reinterpret_cast<vtkglX::PFNGLXSELECTEVENTSGIXPROC>(manager->GetProcAddress("glXSelectEventSGIX"));
    vtkglX::GetSelectedEventSGIX = reinterpret_cast<vtkglX::PFNGLXGETSELECTEDEVENTSGIXPROC>(manager->GetProcAddress("glXGetSelectedEventSGIX"));
    return 1 && (vtkglX::CreateGLXPbufferSGIX != NULL) && (vtkglX::DestroyGLXPbufferSGIX != NULL) && (vtkglX::QueryGLXPbufferSGIX != NULL) && (vtkglX::SelectEventSGIX != NULL) && (vtkglX::GetSelectedEventSGIX != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGI_cushion") == 0)
    {
    vtkglX::CushionSGI = reinterpret_cast<vtkglX::PFNGLXCUSHIONSGIPROC>(manager->GetProcAddress("glXCushionSGI"));
    return 1 && (vtkglX::CushionSGI != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGIX_video_resize") == 0)
    {
    vtkglX::BindChannelToWindowSGIX = reinterpret_cast<vtkglX::PFNGLXBINDCHANNELTOWINDOWSGIXPROC>(manager->GetProcAddress("glXBindChannelToWindowSGIX"));
    vtkglX::ChannelRectSGIX = reinterpret_cast<vtkglX::PFNGLXCHANNELRECTSGIXPROC>(manager->GetProcAddress("glXChannelRectSGIX"));
    vtkglX::QueryChannelRectSGIX = reinterpret_cast<vtkglX::PFNGLXQUERYCHANNELRECTSGIXPROC>(manager->GetProcAddress("glXQueryChannelRectSGIX"));
    vtkglX::QueryChannelDeltasSGIX = reinterpret_cast<vtkglX::PFNGLXQUERYCHANNELDELTASSGIXPROC>(manager->GetProcAddress("glXQueryChannelDeltasSGIX"));
    vtkglX::ChannelRectSyncSGIX = reinterpret_cast<vtkglX::PFNGLXCHANNELRECTSYNCSGIXPROC>(manager->GetProcAddress("glXChannelRectSyncSGIX"));
    return 1 && (vtkglX::BindChannelToWindowSGIX != NULL) && (vtkglX::ChannelRectSGIX != NULL) && (vtkglX::QueryChannelRectSGIX != NULL) && (vtkglX::QueryChannelDeltasSGIX != NULL) && (vtkglX::ChannelRectSyncSGIX != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGIX_swap_group") == 0)
    {
    vtkglX::JoinSwapGroupSGIX = reinterpret_cast<vtkglX::PFNGLXJOINSWAPGROUPSGIXPROC>(manager->GetProcAddress("glXJoinSwapGroupSGIX"));
    return 1 && (vtkglX::JoinSwapGroupSGIX != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGIX_swap_barrier") == 0)
    {
    vtkglX::BindSwapBarrierSGIX = reinterpret_cast<vtkglX::PFNGLXBINDSWAPBARRIERSGIXPROC>(manager->GetProcAddress("glXBindSwapBarrierSGIX"));
    vtkglX::QueryMaxSwapBarriersSGIX = reinterpret_cast<vtkglX::PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC>(manager->GetProcAddress("glXQueryMaxSwapBarriersSGIX"));
    return 1 && (vtkglX::BindSwapBarrierSGIX != NULL) && (vtkglX::QueryMaxSwapBarriersSGIX != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGIS_blended_overlay") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGIS_shared_multisample") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SUN_get_transparent_index") == 0)
    {
    vtkglX::GetTransparentIndexSUN = reinterpret_cast<vtkglX::PFNGLXGETTRANSPARENTINDEXSUNPROC>(manager->GetProcAddress("glXGetTransparentIndexSUN"));
    return 1 && (vtkglX::GetTransparentIndexSUN != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_3DFX_multisample") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_MESA_copy_sub_buffer") == 0)
    {
    vtkglX::CopySubBufferMESA = reinterpret_cast<vtkglX::PFNGLXCOPYSUBBUFFERMESAPROC>(manager->GetProcAddress("glXCopySubBufferMESA"));
    return 1 && (vtkglX::CopySubBufferMESA != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_MESA_pixmap_colormap") == 0)
    {
    vtkglX::CreateGLXPixmapMESA = reinterpret_cast<vtkglX::PFNGLXCREATEGLXPIXMAPMESAPROC>(manager->GetProcAddress("glXCreateGLXPixmapMESA"));
    return 1 && (vtkglX::CreateGLXPixmapMESA != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_MESA_release_buffers") == 0)
    {
    vtkglX::ReleaseBuffersMESA = reinterpret_cast<vtkglX::PFNGLXRELEASEBUFFERSMESAPROC>(manager->GetProcAddress("glXReleaseBuffersMESA"));
    return 1 && (vtkglX::ReleaseBuffersMESA != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_MESA_set_3dfx_mode") == 0)
    {
    vtkglX::Set3DfxModeMESA = reinterpret_cast<vtkglX::PFNGLXSET3DFXMODEMESAPROC>(manager->GetProcAddress("glXSet3DfxModeMESA"));
    return 1 && (vtkglX::Set3DfxModeMESA != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGIX_visual_select_group") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_OML_swap_method") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_OML_sync_control") == 0)
    {
    vtkglX::GetSyncValuesOML = reinterpret_cast<vtkglX::PFNGLXGETSYNCVALUESOMLPROC>(manager->GetProcAddress("glXGetSyncValuesOML"));
    vtkglX::GetMscRateOML = reinterpret_cast<vtkglX::PFNGLXGETMSCRATEOMLPROC>(manager->GetProcAddress("glXGetMscRateOML"));
    vtkglX::SwapBuffersMscOML = reinterpret_cast<vtkglX::PFNGLXSWAPBUFFERSMSCOMLPROC>(manager->GetProcAddress("glXSwapBuffersMscOML"));
    vtkglX::WaitForMscOML = reinterpret_cast<vtkglX::PFNGLXWAITFORMSCOMLPROC>(manager->GetProcAddress("glXWaitForMscOML"));
    vtkglX::WaitForSbcOML = reinterpret_cast<vtkglX::PFNGLXWAITFORSBCOMLPROC>(manager->GetProcAddress("glXWaitForSbcOML"));
    return 1 && (vtkglX::GetSyncValuesOML != NULL) && (vtkglX::GetMscRateOML != NULL) && (vtkglX::SwapBuffersMscOML != NULL) && (vtkglX::WaitForMscOML != NULL) && (vtkglX::WaitForSbcOML != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_NV_float_buffer") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_MESA_agp_offset") == 0)
    {
    vtkglX::GetAGPOffsetMESA = reinterpret_cast<vtkglX::PFNGLXGETAGPOFFSETMESAPROC>(manager->GetProcAddress("glXGetAGPOffsetMESA"));
    return 1 && (vtkglX::GetAGPOffsetMESA != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_EXT_fbconfig_packed_float") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_EXT_framebuffer_sRGB") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_EXT_texture_from_pixmap") == 0)
    {
    vtkglX::BindTexImageEXT = reinterpret_cast<vtkglX::PFNGLXBINDTEXIMAGEEXTPROC>(manager->GetProcAddress("glXBindTexImageEXT"));
    vtkglX::ReleaseTexImageEXT = reinterpret_cast<vtkglX::PFNGLXRELEASETEXIMAGEEXTPROC>(manager->GetProcAddress("glXReleaseTexImageEXT"));
    return 1 && (vtkglX::BindTexImageEXT != NULL) && (vtkglX::ReleaseTexImageEXT != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_NV_present_video") == 0)
    {
    vtkglX::EnumerateVideoDevicesNV = reinterpret_cast<vtkglX::PFNGLXENUMERATEVIDEODEVICESNVPROC>(manager->GetProcAddress("glXEnumerateVideoDevicesNV"));
    vtkglX::BindVideoDeviceNV = reinterpret_cast<vtkglX::PFNGLXBINDVIDEODEVICENVPROC>(manager->GetProcAddress("glXBindVideoDeviceNV"));
    return 1 && (vtkglX::EnumerateVideoDevicesNV != NULL) && (vtkglX::BindVideoDeviceNV != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_NV_video_out") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_NV_swap_group") == 0)
    {
    vtkglX::JoinSwapGroupNV = reinterpret_cast<vtkglX::PFNGLXJOINSWAPGROUPNVPROC>(manager->GetProcAddress("glXJoinSwapGroupNV"));
    vtkglX::BindSwapBarrierNV = reinterpret_cast<vtkglX::PFNGLXBINDSWAPBARRIERNVPROC>(manager->GetProcAddress("glXBindSwapBarrierNV"));
    vtkglX::QuerySwapGroupNV = reinterpret_cast<vtkglX::PFNGLXQUERYSWAPGROUPNVPROC>(manager->GetProcAddress("glXQuerySwapGroupNV"));
    vtkglX::QueryMaxSwapGroupsNV = reinterpret_cast<vtkglX::PFNGLXQUERYMAXSWAPGROUPSNVPROC>(manager->GetProcAddress("glXQueryMaxSwapGroupsNV"));
    vtkglX::QueryFrameCountNV = reinterpret_cast<vtkglX::PFNGLXQUERYFRAMECOUNTNVPROC>(manager->GetProcAddress("glXQueryFrameCountNV"));
    vtkglX::ResetFrameCountNV = reinterpret_cast<vtkglX::PFNGLXRESETFRAMECOUNTNVPROC>(manager->GetProcAddress("glXResetFrameCountNV"));
    return 1 && (vtkglX::JoinSwapGroupNV != NULL) && (vtkglX::BindSwapBarrierNV != NULL) && (vtkglX::QuerySwapGroupNV != NULL) && (vtkglX::QueryMaxSwapGroupsNV != NULL) && (vtkglX::QueryFrameCountNV != NULL) && (vtkglX::ResetFrameCountNV != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_NV_video_capture") == 0)
    {
    vtkglX::BindVideoCaptureDeviceNV = reinterpret_cast<vtkglX::PFNGLXBINDVIDEOCAPTUREDEVICENVPROC>(manager->GetProcAddress("glXBindVideoCaptureDeviceNV"));
    vtkglX::EnumerateVideoCaptureDevicesNV = reinterpret_cast<vtkglX::PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC>(manager->GetProcAddress("glXEnumerateVideoCaptureDevicesNV"));
    vtkglX::LockVideoCaptureDeviceNV = reinterpret_cast<vtkglX::PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC>(manager->GetProcAddress("glXLockVideoCaptureDeviceNV"));
    vtkglX::QueryVideoCaptureDeviceNV = reinterpret_cast<vtkglX::PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC>(manager->GetProcAddress("glXQueryVideoCaptureDeviceNV"));
    vtkglX::ReleaseVideoCaptureDeviceNV = reinterpret_cast<vtkglX::PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC>(manager->GetProcAddress("glXReleaseVideoCaptureDeviceNV"));
    return 1 && (vtkglX::BindVideoCaptureDeviceNV != NULL) && (vtkglX::EnumerateVideoCaptureDevicesNV != NULL) && (vtkglX::LockVideoCaptureDeviceNV != NULL) && (vtkglX::QueryVideoCaptureDeviceNV != NULL) && (vtkglX::ReleaseVideoCaptureDeviceNV != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_EXT_swap_control") == 0)
    {
    vtkglX::SwapIntervalEXT = reinterpret_cast<vtkglX::PFNGLXSWAPINTERVALEXTPROC>(manager->GetProcAddress("glXSwapIntervalEXT"));
    return 1 && (vtkglX::SwapIntervalEXT != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_NV_copy_image") == 0)
    {
    vtkglX::CopyImageSubDataNV = reinterpret_cast<vtkglX::PFNGLXCOPYIMAGESUBDATANVPROC>(manager->GetProcAddress("glXCopyImageSubDataNV"));
    return 1 && (vtkglX::CopyImageSubDataNV != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_INTEL_swap_event") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_NV_multisample_coverage") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_AMD_gpu_association") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_EXT_create_context_es2_profile") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_NV_video_output") == 0)
    {
    vtkglX::GetVideoDeviceNV = reinterpret_cast<vtkglX::PFNGLXGETVIDEODEVICENVPROC>(manager->GetProcAddress("glXGetVideoDeviceNV"));
    vtkglX::ReleaseVideoDeviceNV = reinterpret_cast<vtkglX::PFNGLXRELEASEVIDEODEVICENVPROC>(manager->GetProcAddress("glXReleaseVideoDeviceNV"));
    vtkglX::BindVideoImageNV = reinterpret_cast<vtkglX::PFNGLXBINDVIDEOIMAGENVPROC>(manager->GetProcAddress("glXBindVideoImageNV"));
    vtkglX::ReleaseVideoImageNV = reinterpret_cast<vtkglX::PFNGLXRELEASEVIDEOIMAGENVPROC>(manager->GetProcAddress("glXReleaseVideoImageNV"));
    vtkglX::SendPbufferToVideoNV = reinterpret_cast<vtkglX::PFNGLXSENDPBUFFERTOVIDEONVPROC>(manager->GetProcAddress("glXSendPbufferToVideoNV"));
    vtkglX::GetVideoInfoNV = reinterpret_cast<vtkglX::PFNGLXGETVIDEOINFONVPROC>(manager->GetProcAddress("glXGetVideoInfoNV"));
    return 1 && (vtkglX::GetVideoDeviceNV != NULL) && (vtkglX::ReleaseVideoDeviceNV != NULL) && (vtkglX::BindVideoImageNV != NULL) && (vtkglX::ReleaseVideoImageNV != NULL) && (vtkglX::SendPbufferToVideoNV != NULL) && (vtkglX::GetVideoInfoNV != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_ARB_buffer_region") == 0)
    {
    vtkwgl::CreateBufferRegionARB = reinterpret_cast<vtkwgl::PFNWGLCREATEBUFFERREGIONARBPROC>(manager->GetProcAddress("wglCreateBufferRegionARB"));
    vtkwgl::DeleteBufferRegionARB = reinterpret_cast<vtkwgl::PFNWGLDELETEBUFFERREGIONARBPROC>(manager->GetProcAddress("wglDeleteBufferRegionARB"));
    vtkwgl::SaveBufferRegionARB = reinterpret_cast<vtkwgl::PFNWGLSAVEBUFFERREGIONARBPROC>(manager->GetProcAddress("wglSaveBufferRegionARB"));
    vtkwgl::RestoreBufferRegionARB = reinterpret_cast<vtkwgl::PFNWGLRESTOREBUFFERREGIONARBPROC>(manager->GetProcAddress("wglRestoreBufferRegionARB"));
    return 1 && (vtkwgl::CreateBufferRegionARB != NULL) && (vtkwgl::DeleteBufferRegionARB != NULL) && (vtkwgl::SaveBufferRegionARB != NULL) && (vtkwgl::RestoreBufferRegionARB != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_ARB_multisample") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_ARB_extensions_string") == 0)
    {
    vtkwgl::GetExtensionsStringARB = reinterpret_cast<vtkwgl::PFNWGLGETEXTENSIONSSTRINGARBPROC>(manager->GetProcAddress("wglGetExtensionsStringARB"));
    return 1 && (vtkwgl::GetExtensionsStringARB != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_ARB_pixel_format") == 0)
    {
    vtkwgl::GetPixelFormatAttribivARB = reinterpret_cast<vtkwgl::PFNWGLGETPIXELFORMATATTRIBIVARBPROC>(manager->GetProcAddress("wglGetPixelFormatAttribivARB"));
    vtkwgl::GetPixelFormatAttribfvARB = reinterpret_cast<vtkwgl::PFNWGLGETPIXELFORMATATTRIBFVARBPROC>(manager->GetProcAddress("wglGetPixelFormatAttribfvARB"));
    vtkwgl::ChoosePixelFormatARB = reinterpret_cast<vtkwgl::PFNWGLCHOOSEPIXELFORMATARBPROC>(manager->GetProcAddress("wglChoosePixelFormatARB"));
    return 1 && (vtkwgl::GetPixelFormatAttribivARB != NULL) && (vtkwgl::GetPixelFormatAttribfvARB != NULL) && (vtkwgl::ChoosePixelFormatARB != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_ARB_make_current_read") == 0)
    {
    vtkwgl::MakeContextCurrentARB = reinterpret_cast<vtkwgl::PFNWGLMAKECONTEXTCURRENTARBPROC>(manager->GetProcAddress("wglMakeContextCurrentARB"));
    vtkwgl::GetCurrentReadDCARB = reinterpret_cast<vtkwgl::PFNWGLGETCURRENTREADDCARBPROC>(manager->GetProcAddress("wglGetCurrentReadDCARB"));
    return 1 && (vtkwgl::MakeContextCurrentARB != NULL) && (vtkwgl::GetCurrentReadDCARB != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_ARB_pbuffer") == 0)
    {
    vtkwgl::CreatePbufferARB = reinterpret_cast<vtkwgl::PFNWGLCREATEPBUFFERARBPROC>(manager->GetProcAddress("wglCreatePbufferARB"));
    vtkwgl::GetPbufferDCARB = reinterpret_cast<vtkwgl::PFNWGLGETPBUFFERDCARBPROC>(manager->GetProcAddress("wglGetPbufferDCARB"));
    vtkwgl::ReleasePbufferDCARB = reinterpret_cast<vtkwgl::PFNWGLRELEASEPBUFFERDCARBPROC>(manager->GetProcAddress("wglReleasePbufferDCARB"));
    vtkwgl::DestroyPbufferARB = reinterpret_cast<vtkwgl::PFNWGLDESTROYPBUFFERARBPROC>(manager->GetProcAddress("wglDestroyPbufferARB"));
    vtkwgl::QueryPbufferARB = reinterpret_cast<vtkwgl::PFNWGLQUERYPBUFFERARBPROC>(manager->GetProcAddress("wglQueryPbufferARB"));
    return 1 && (vtkwgl::CreatePbufferARB != NULL) && (vtkwgl::GetPbufferDCARB != NULL) && (vtkwgl::ReleasePbufferDCARB != NULL) && (vtkwgl::DestroyPbufferARB != NULL) && (vtkwgl::QueryPbufferARB != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_ARB_render_texture") == 0)
    {
    vtkwgl::BindTexImageARB = reinterpret_cast<vtkwgl::PFNWGLBINDTEXIMAGEARBPROC>(manager->GetProcAddress("wglBindTexImageARB"));
    vtkwgl::ReleaseTexImageARB = reinterpret_cast<vtkwgl::PFNWGLRELEASETEXIMAGEARBPROC>(manager->GetProcAddress("wglReleaseTexImageARB"));
    vtkwgl::SetPbufferAttribARB = reinterpret_cast<vtkwgl::PFNWGLSETPBUFFERATTRIBARBPROC>(manager->GetProcAddress("wglSetPbufferAttribARB"));
    return 1 && (vtkwgl::BindTexImageARB != NULL) && (vtkwgl::ReleaseTexImageARB != NULL) && (vtkwgl::SetPbufferAttribARB != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_ARB_pixel_format_float") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_ARB_create_context") == 0)
    {
    vtkwgl::CreateContextAttribsARB = reinterpret_cast<vtkwgl::PFNWGLCREATECONTEXTATTRIBSARBPROC>(manager->GetProcAddress("wglCreateContextAttribsARB"));
    return 1 && (vtkwgl::CreateContextAttribsARB != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_EXT_make_current_read") == 0)
    {
    vtkwgl::MakeContextCurrentEXT = reinterpret_cast<vtkwgl::PFNWGLMAKECONTEXTCURRENTEXTPROC>(manager->GetProcAddress("wglMakeContextCurrentEXT"));
    vtkwgl::GetCurrentReadDCEXT = reinterpret_cast<vtkwgl::PFNWGLGETCURRENTREADDCEXTPROC>(manager->GetProcAddress("wglGetCurrentReadDCEXT"));
    return 1 && (vtkwgl::MakeContextCurrentEXT != NULL) && (vtkwgl::GetCurrentReadDCEXT != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_EXT_pixel_format") == 0)
    {
    vtkwgl::GetPixelFormatAttribivEXT = reinterpret_cast<vtkwgl::PFNWGLGETPIXELFORMATATTRIBIVEXTPROC>(manager->GetProcAddress("wglGetPixelFormatAttribivEXT"));
    vtkwgl::GetPixelFormatAttribfvEXT = reinterpret_cast<vtkwgl::PFNWGLGETPIXELFORMATATTRIBFVEXTPROC>(manager->GetProcAddress("wglGetPixelFormatAttribfvEXT"));
    vtkwgl::ChoosePixelFormatEXT = reinterpret_cast<vtkwgl::PFNWGLCHOOSEPIXELFORMATEXTPROC>(manager->GetProcAddress("wglChoosePixelFormatEXT"));
    return 1 && (vtkwgl::GetPixelFormatAttribivEXT != NULL) && (vtkwgl::GetPixelFormatAttribfvEXT != NULL) && (vtkwgl::ChoosePixelFormatEXT != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_EXT_pbuffer") == 0)
    {
    vtkwgl::CreatePbufferEXT = reinterpret_cast<vtkwgl::PFNWGLCREATEPBUFFEREXTPROC>(manager->GetProcAddress("wglCreatePbufferEXT"));
    vtkwgl::GetPbufferDCEXT = reinterpret_cast<vtkwgl::PFNWGLGETPBUFFERDCEXTPROC>(manager->GetProcAddress("wglGetPbufferDCEXT"));
    vtkwgl::ReleasePbufferDCEXT = reinterpret_cast<vtkwgl::PFNWGLRELEASEPBUFFERDCEXTPROC>(manager->GetProcAddress("wglReleasePbufferDCEXT"));
    vtkwgl::DestroyPbufferEXT = reinterpret_cast<vtkwgl::PFNWGLDESTROYPBUFFEREXTPROC>(manager->GetProcAddress("wglDestroyPbufferEXT"));
    vtkwgl::QueryPbufferEXT = reinterpret_cast<vtkwgl::PFNWGLQUERYPBUFFEREXTPROC>(manager->GetProcAddress("wglQueryPbufferEXT"));
    return 1 && (vtkwgl::CreatePbufferEXT != NULL) && (vtkwgl::GetPbufferDCEXT != NULL) && (vtkwgl::ReleasePbufferDCEXT != NULL) && (vtkwgl::DestroyPbufferEXT != NULL) && (vtkwgl::QueryPbufferEXT != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_EXT_depth_float") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_3DFX_multisample") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_EXT_multisample") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_I3D_digital_video_control") == 0)
    {
    vtkwgl::GetDigitalVideoParametersI3D = reinterpret_cast<vtkwgl::PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC>(manager->GetProcAddress("wglGetDigitalVideoParametersI3D"));
    vtkwgl::SetDigitalVideoParametersI3D = reinterpret_cast<vtkwgl::PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC>(manager->GetProcAddress("wglSetDigitalVideoParametersI3D"));
    return 1 && (vtkwgl::GetDigitalVideoParametersI3D != NULL) && (vtkwgl::SetDigitalVideoParametersI3D != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_I3D_gamma") == 0)
    {
    vtkwgl::GetGammaTableParametersI3D = reinterpret_cast<vtkwgl::PFNWGLGETGAMMATABLEPARAMETERSI3DPROC>(manager->GetProcAddress("wglGetGammaTableParametersI3D"));
    vtkwgl::SetGammaTableParametersI3D = reinterpret_cast<vtkwgl::PFNWGLSETGAMMATABLEPARAMETERSI3DPROC>(manager->GetProcAddress("wglSetGammaTableParametersI3D"));
    vtkwgl::GetGammaTableI3D = reinterpret_cast<vtkwgl::PFNWGLGETGAMMATABLEI3DPROC>(manager->GetProcAddress("wglGetGammaTableI3D"));
    vtkwgl::SetGammaTableI3D = reinterpret_cast<vtkwgl::PFNWGLSETGAMMATABLEI3DPROC>(manager->GetProcAddress("wglSetGammaTableI3D"));
    return 1 && (vtkwgl::GetGammaTableParametersI3D != NULL) && (vtkwgl::SetGammaTableParametersI3D != NULL) && (vtkwgl::GetGammaTableI3D != NULL) && (vtkwgl::SetGammaTableI3D != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_I3D_genlock") == 0)
    {
    vtkwgl::EnableGenlockI3D = reinterpret_cast<vtkwgl::PFNWGLENABLEGENLOCKI3DPROC>(manager->GetProcAddress("wglEnableGenlockI3D"));
    vtkwgl::DisableGenlockI3D = reinterpret_cast<vtkwgl::PFNWGLDISABLEGENLOCKI3DPROC>(manager->GetProcAddress("wglDisableGenlockI3D"));
    vtkwgl::IsEnabledGenlockI3D = reinterpret_cast<vtkwgl::PFNWGLISENABLEDGENLOCKI3DPROC>(manager->GetProcAddress("wglIsEnabledGenlockI3D"));
    vtkwgl::GenlockSourceI3D = reinterpret_cast<vtkwgl::PFNWGLGENLOCKSOURCEI3DPROC>(manager->GetProcAddress("wglGenlockSourceI3D"));
    vtkwgl::GetGenlockSourceI3D = reinterpret_cast<vtkwgl::PFNWGLGETGENLOCKSOURCEI3DPROC>(manager->GetProcAddress("wglGetGenlockSourceI3D"));
    vtkwgl::GenlockSourceEdgeI3D = reinterpret_cast<vtkwgl::PFNWGLGENLOCKSOURCEEDGEI3DPROC>(manager->GetProcAddress("wglGenlockSourceEdgeI3D"));
    vtkwgl::GetGenlockSourceEdgeI3D = reinterpret_cast<vtkwgl::PFNWGLGETGENLOCKSOURCEEDGEI3DPROC>(manager->GetProcAddress("wglGetGenlockSourceEdgeI3D"));
    vtkwgl::GenlockSampleRateI3D = reinterpret_cast<vtkwgl::PFNWGLGENLOCKSAMPLERATEI3DPROC>(manager->GetProcAddress("wglGenlockSampleRateI3D"));
    vtkwgl::GetGenlockSampleRateI3D = reinterpret_cast<vtkwgl::PFNWGLGETGENLOCKSAMPLERATEI3DPROC>(manager->GetProcAddress("wglGetGenlockSampleRateI3D"));
    vtkwgl::GenlockSourceDelayI3D = reinterpret_cast<vtkwgl::PFNWGLGENLOCKSOURCEDELAYI3DPROC>(manager->GetProcAddress("wglGenlockSourceDelayI3D"));
    vtkwgl::GetGenlockSourceDelayI3D = reinterpret_cast<vtkwgl::PFNWGLGETGENLOCKSOURCEDELAYI3DPROC>(manager->GetProcAddress("wglGetGenlockSourceDelayI3D"));
    vtkwgl::QueryGenlockMaxSourceDelayI3D = reinterpret_cast<vtkwgl::PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC>(manager->GetProcAddress("wglQueryGenlockMaxSourceDelayI3D"));
    return 1 && (vtkwgl::EnableGenlockI3D != NULL) && (vtkwgl::DisableGenlockI3D != NULL) && (vtkwgl::IsEnabledGenlockI3D != NULL) && (vtkwgl::GenlockSourceI3D != NULL) && (vtkwgl::GetGenlockSourceI3D != NULL) && (vtkwgl::GenlockSourceEdgeI3D != NULL) && (vtkwgl::GetGenlockSourceEdgeI3D != NULL) && (vtkwgl::GenlockSampleRateI3D != NULL) && (vtkwgl::GetGenlockSampleRateI3D != NULL) && (vtkwgl::GenlockSourceDelayI3D != NULL) && (vtkwgl::GetGenlockSourceDelayI3D != NULL) && (vtkwgl::QueryGenlockMaxSourceDelayI3D != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_I3D_image_buffer") == 0)
    {
    vtkwgl::CreateImageBufferI3D = reinterpret_cast<vtkwgl::PFNWGLCREATEIMAGEBUFFERI3DPROC>(manager->GetProcAddress("wglCreateImageBufferI3D"));
    vtkwgl::DestroyImageBufferI3D = reinterpret_cast<vtkwgl::PFNWGLDESTROYIMAGEBUFFERI3DPROC>(manager->GetProcAddress("wglDestroyImageBufferI3D"));
    vtkwgl::AssociateImageBufferEventsI3D = reinterpret_cast<vtkwgl::PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC>(manager->GetProcAddress("wglAssociateImageBufferEventsI3D"));
    vtkwgl::ReleaseImageBufferEventsI3D = reinterpret_cast<vtkwgl::PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC>(manager->GetProcAddress("wglReleaseImageBufferEventsI3D"));
    return 1 && (vtkwgl::CreateImageBufferI3D != NULL) && (vtkwgl::DestroyImageBufferI3D != NULL) && (vtkwgl::AssociateImageBufferEventsI3D != NULL) && (vtkwgl::ReleaseImageBufferEventsI3D != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_I3D_swap_frame_lock") == 0)
    {
    vtkwgl::EnableFrameLockI3D = reinterpret_cast<vtkwgl::PFNWGLENABLEFRAMELOCKI3DPROC>(manager->GetProcAddress("wglEnableFrameLockI3D"));
    vtkwgl::DisableFrameLockI3D = reinterpret_cast<vtkwgl::PFNWGLDISABLEFRAMELOCKI3DPROC>(manager->GetProcAddress("wglDisableFrameLockI3D"));
    vtkwgl::IsEnabledFrameLockI3D = reinterpret_cast<vtkwgl::PFNWGLISENABLEDFRAMELOCKI3DPROC>(manager->GetProcAddress("wglIsEnabledFrameLockI3D"));
    vtkwgl::QueryFrameLockMasterI3D = reinterpret_cast<vtkwgl::PFNWGLQUERYFRAMELOCKMASTERI3DPROC>(manager->GetProcAddress("wglQueryFrameLockMasterI3D"));
    return 1 && (vtkwgl::EnableFrameLockI3D != NULL) && (vtkwgl::DisableFrameLockI3D != NULL) && (vtkwgl::IsEnabledFrameLockI3D != NULL) && (vtkwgl::QueryFrameLockMasterI3D != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_NV_render_depth_texture") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_NV_render_texture_rectangle") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_ATI_pixel_format_float") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_NV_float_buffer") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_3DL_stereo_control") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_EXT_pixel_format_packed_float") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_EXT_framebuffer_sRGB") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_NV_present_video") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_NV_video_out") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_NV_swap_group") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_EXT_display_color_table") == 0)
    {
    vtkwgl::CreateDisplayColorTableEXT = reinterpret_cast<vtkwgl::PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC>(manager->GetProcAddress("wglCreateDisplayColorTableEXT"));
    vtkwgl::LoadDisplayColorTableEXT = reinterpret_cast<vtkwgl::PFNWGLLOADDISPLAYCOLORTABLEEXTPROC>(manager->GetProcAddress("wglLoadDisplayColorTableEXT"));
    vtkwgl::BindDisplayColorTableEXT = reinterpret_cast<vtkwgl::PFNWGLBINDDISPLAYCOLORTABLEEXTPROC>(manager->GetProcAddress("wglBindDisplayColorTableEXT"));
    vtkwgl::DestroyDisplayColorTableEXT = reinterpret_cast<vtkwgl::PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC>(manager->GetProcAddress("wglDestroyDisplayColorTableEXT"));
    return 1 && (vtkwgl::CreateDisplayColorTableEXT != NULL) && (vtkwgl::LoadDisplayColorTableEXT != NULL) && (vtkwgl::BindDisplayColorTableEXT != NULL) && (vtkwgl::DestroyDisplayColorTableEXT != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_EXT_extensions_string") == 0)
    {
    vtkwgl::GetExtensionsStringEXT = reinterpret_cast<vtkwgl::PFNWGLGETEXTENSIONSSTRINGEXTPROC>(manager->GetProcAddress("wglGetExtensionsStringEXT"));
    return 1 && (vtkwgl::GetExtensionsStringEXT != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_EXT_swap_control") == 0)
    {
    vtkwgl::SwapIntervalEXT = reinterpret_cast<vtkwgl::PFNWGLSWAPINTERVALEXTPROC>(manager->GetProcAddress("wglSwapIntervalEXT"));
    vtkwgl::GetSwapIntervalEXT = reinterpret_cast<vtkwgl::PFNWGLGETSWAPINTERVALEXTPROC>(manager->GetProcAddress("wglGetSwapIntervalEXT"));
    return 1 && (vtkwgl::SwapIntervalEXT != NULL) && (vtkwgl::GetSwapIntervalEXT != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_NV_vertex_array_range") == 0)
    {
    vtkwgl::AllocateMemoryNV = reinterpret_cast<vtkwgl::PFNWGLALLOCATEMEMORYNVPROC>(manager->GetProcAddress("wglAllocateMemoryNV"));
    vtkwgl::FreeMemoryNV = reinterpret_cast<vtkwgl::PFNWGLFREEMEMORYNVPROC>(manager->GetProcAddress("wglFreeMemoryNV"));
    return 1 && (vtkwgl::AllocateMemoryNV != NULL) && (vtkwgl::FreeMemoryNV != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_OML_sync_control") == 0)
    {
    vtkwgl::GetSyncValuesOML = reinterpret_cast<vtkwgl::PFNWGLGETSYNCVALUESOMLPROC>(manager->GetProcAddress("wglGetSyncValuesOML"));
    vtkwgl::GetMscRateOML = reinterpret_cast<vtkwgl::PFNWGLGETMSCRATEOMLPROC>(manager->GetProcAddress("wglGetMscRateOML"));
    vtkwgl::SwapBuffersMscOML = reinterpret_cast<vtkwgl::PFNWGLSWAPBUFFERSMSCOMLPROC>(manager->GetProcAddress("wglSwapBuffersMscOML"));
    vtkwgl::SwapLayerBuffersMscOML = reinterpret_cast<vtkwgl::PFNWGLSWAPLAYERBUFFERSMSCOMLPROC>(manager->GetProcAddress("wglSwapLayerBuffersMscOML"));
    vtkwgl::WaitForMscOML = reinterpret_cast<vtkwgl::PFNWGLWAITFORMSCOMLPROC>(manager->GetProcAddress("wglWaitForMscOML"));
    vtkwgl::WaitForSbcOML = reinterpret_cast<vtkwgl::PFNWGLWAITFORSBCOMLPROC>(manager->GetProcAddress("wglWaitForSbcOML"));
    return 1 && (vtkwgl::GetSyncValuesOML != NULL) && (vtkwgl::GetMscRateOML != NULL) && (vtkwgl::SwapBuffersMscOML != NULL) && (vtkwgl::SwapLayerBuffersMscOML != NULL) && (vtkwgl::WaitForMscOML != NULL) && (vtkwgl::WaitForSbcOML != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_I3D_swap_frame_usage") == 0)
    {
    vtkwgl::GetFrameUsageI3D = reinterpret_cast<vtkwgl::PFNWGLGETFRAMEUSAGEI3DPROC>(manager->GetProcAddress("wglGetFrameUsageI3D"));
    vtkwgl::BeginFrameTrackingI3D = reinterpret_cast<vtkwgl::PFNWGLBEGINFRAMETRACKINGI3DPROC>(manager->GetProcAddress("wglBeginFrameTrackingI3D"));
    vtkwgl::EndFrameTrackingI3D = reinterpret_cast<vtkwgl::PFNWGLENDFRAMETRACKINGI3DPROC>(manager->GetProcAddress("wglEndFrameTrackingI3D"));
    vtkwgl::QueryFrameTrackingI3D = reinterpret_cast<vtkwgl::PFNWGLQUERYFRAMETRACKINGI3DPROC>(manager->GetProcAddress("wglQueryFrameTrackingI3D"));
    return 1 && (vtkwgl::GetFrameUsageI3D != NULL) && (vtkwgl::BeginFrameTrackingI3D != NULL) && (vtkwgl::EndFrameTrackingI3D != NULL) && (vtkwgl::QueryFrameTrackingI3D != NULL);
    }
#endif
  vtkGenericWarningMacro(<< "Nothing known about extension " << name
                         << ".  vtkgl may need to be updated.");
  return 0;
}

const char *vtkgl::GLVersionExtensionsString()
{
  return "GL_VERSION_1_2 GL_VERSION_1_2_DEPRECATED GL_VERSION_1_3 GL_VERSION_1_3_DEPRECATED GL_VERSION_1_4 GL_VERSION_1_4_DEPRECATED GL_VERSION_1_5 GL_VERSION_1_5_DEPRECATED GL_VERSION_2_0 GL_VERSION_2_0_DEPRECATED GL_VERSION_2_1 GL_VERSION_2_1_DEPRECATED GL_VERSION_3_0 GL_VERSION_3_0_DEPRECATED GL_VERSION_3_1 GL_VERSION_3_2 GL_VERSION_3_3 GL_VERSION_4_0 GL_VERSION_4_1 ";
}

const char *vtkgl::GLXVersionExtensionsString()
{
  return "GLX_VERSION_1_3 GLX_VERSION_1_4 ";
}
