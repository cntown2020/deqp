/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 *
 * Generated from Khronos EGL API description (egl.xml) revision 32725.
 */
#define EGL_PBUFFER_BIT										0x0001
#define EGL_PIXMAP_BIT										0x0002
#define EGL_WINDOW_BIT										0x0004
#define EGL_VG_COLORSPACE_LINEAR_BIT						0x0020
#define EGL_VG_ALPHA_FORMAT_PRE_BIT							0x0040
#define EGL_LOCK_SURFACE_BIT_KHR							0x0080
#define EGL_OPTIMAL_FORMAT_BIT_KHR							0x0100
#define EGL_MULTISAMPLE_RESOLVE_BOX_BIT						0x0200
#define EGL_SWAP_BEHAVIOR_PRESERVED_BIT						0x0400
#define EGL_MUTABLE_RENDER_BUFFER_BIT_KHR					0x1000
#define EGL_OPENGL_ES_BIT									0x0001
#define EGL_OPENVG_BIT										0x0002
#define EGL_OPENGL_ES2_BIT									0x0004
#define EGL_OPENGL_BIT										0x0008
#define EGL_OPENGL_ES3_BIT									0x00000040
#define EGL_OPENGL_ES3_BIT_KHR								0x00000040
#define EGL_READ_SURFACE_BIT_KHR							0x0001
#define EGL_WRITE_SURFACE_BIT_KHR							0x0002
#define EGL_SYNC_FLUSH_COMMANDS_BIT							0x0001
#define EGL_SYNC_FLUSH_COMMANDS_BIT_KHR						0x0001
#define EGL_CONTEXT_OPENGL_DEBUG_BIT_KHR					0x00000001
#define EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE_BIT_KHR		0x00000002
#define EGL_CONTEXT_OPENGL_ROBUST_ACCESS_BIT_KHR			0x00000004
#define EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT					0x00000001
#define EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT_KHR				0x00000001
#define EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT		0x00000002
#define EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT_KHR	0x00000002
#define EGL_FALSE											0
#define EGL_TRUE											1
#define EGL_DONT_CARE										((eglw::EGLint)-1)
#define EGL_UNKNOWN											((eglw::EGLint)-1)
#define EGL_NO_CONTEXT										((eglw::EGLContext)0)
#define EGL_NO_DISPLAY										((eglw::EGLDisplay)0)
#define EGL_NO_IMAGE										((eglw::EGLImage)0)
#define EGL_NO_IMAGE_KHR									((eglw::EGLImageKHR)0)
#define EGL_DEFAULT_DISPLAY									((eglw::EGLNativeDisplayType)0)
#define EGL_NO_SURFACE										((eglw::EGLSurface)0)
#define EGL_NO_SYNC											((eglw::EGLSync)0)
#define EGL_NO_SYNC_KHR										((eglw::EGLSyncKHR)0)
#define EGL_DISPLAY_SCALING									10000
#define EGL_FOREVER											0xFFFFFFFFFFFFFFFFull
#define EGL_FOREVER_KHR										0xFFFFFFFFFFFFFFFFull
#define EGL_SUCCESS											0x3000
#define EGL_NOT_INITIALIZED									0x3001
#define EGL_BAD_ACCESS										0x3002
#define EGL_BAD_ALLOC										0x3003
#define EGL_BAD_ATTRIBUTE									0x3004
#define EGL_BAD_CONFIG										0x3005
#define EGL_BAD_CONTEXT										0x3006
#define EGL_BAD_CURRENT_SURFACE								0x3007
#define EGL_BAD_DISPLAY										0x3008
#define EGL_BAD_MATCH										0x3009
#define EGL_BAD_NATIVE_PIXMAP								0x300A
#define EGL_BAD_NATIVE_WINDOW								0x300B
#define EGL_BAD_PARAMETER									0x300C
#define EGL_BAD_SURFACE										0x300D
#define EGL_CONTEXT_LOST									0x300E
#define EGL_BUFFER_SIZE										0x3020
#define EGL_ALPHA_SIZE										0x3021
#define EGL_BLUE_SIZE										0x3022
#define EGL_GREEN_SIZE										0x3023
#define EGL_RED_SIZE										0x3024
#define EGL_DEPTH_SIZE										0x3025
#define EGL_STENCIL_SIZE									0x3026
#define EGL_CONFIG_CAVEAT									0x3027
#define EGL_CONFIG_ID										0x3028
#define EGL_LEVEL											0x3029
#define EGL_MAX_PBUFFER_HEIGHT								0x302A
#define EGL_MAX_PBUFFER_PIXELS								0x302B
#define EGL_MAX_PBUFFER_WIDTH								0x302C
#define EGL_NATIVE_RENDERABLE								0x302D
#define EGL_NATIVE_VISUAL_ID								0x302E
#define EGL_NATIVE_VISUAL_TYPE								0x302F
#define EGL_SAMPLES											0x3031
#define EGL_SAMPLE_BUFFERS									0x3032
#define EGL_SURFACE_TYPE									0x3033
#define EGL_TRANSPARENT_TYPE								0x3034
#define EGL_TRANSPARENT_BLUE_VALUE							0x3035
#define EGL_TRANSPARENT_GREEN_VALUE							0x3036
#define EGL_TRANSPARENT_RED_VALUE							0x3037
#define EGL_NONE											0x3038
#define EGL_BIND_TO_TEXTURE_RGB								0x3039
#define EGL_BIND_TO_TEXTURE_RGBA							0x303A
#define EGL_MIN_SWAP_INTERVAL								0x303B
#define EGL_MAX_SWAP_INTERVAL								0x303C
#define EGL_LUMINANCE_SIZE									0x303D
#define EGL_ALPHA_MASK_SIZE									0x303E
#define EGL_COLOR_BUFFER_TYPE								0x303F
#define EGL_RENDERABLE_TYPE									0x3040
#define EGL_MATCH_NATIVE_PIXMAP								0x3041
#define EGL_CONFORMANT										0x3042
#define EGL_MATCH_FORMAT_KHR								0x3043
#define EGL_SLOW_CONFIG										0x3050
#define EGL_NON_CONFORMANT_CONFIG							0x3051
#define EGL_TRANSPARENT_RGB									0x3052
#define EGL_VENDOR											0x3053
#define EGL_VERSION											0x3054
#define EGL_EXTENSIONS										0x3055
#define EGL_HEIGHT											0x3056
#define EGL_WIDTH											0x3057
#define EGL_LARGEST_PBUFFER									0x3058
#define EGL_DRAW											0x3059
#define EGL_READ											0x305A
#define EGL_CORE_NATIVE_ENGINE								0x305B
#define EGL_NO_TEXTURE										0x305C
#define EGL_TEXTURE_RGB										0x305D
#define EGL_TEXTURE_RGBA									0x305E
#define EGL_TEXTURE_2D										0x305F
#define EGL_TEXTURE_FORMAT									0x3080
#define EGL_TEXTURE_TARGET									0x3081
#define EGL_MIPMAP_TEXTURE									0x3082
#define EGL_MIPMAP_LEVEL									0x3083
#define EGL_BACK_BUFFER										0x3084
#define EGL_SINGLE_BUFFER									0x3085
#define EGL_RENDER_BUFFER									0x3086
#define EGL_COLORSPACE										0x3087
#define EGL_COLORSPACE										0x3087
#define EGL_ALPHA_FORMAT									0x3088
#define EGL_ALPHA_FORMAT									0x3088
#define EGL_COLORSPACE_sRGB									0x3089
#define EGL_GL_COLORSPACE_SRGB								0x3089
#define EGL_VG_COLORSPACE_sRGB								0x3089
#define EGL_COLORSPACE_LINEAR								0x308A
#define EGL_GL_COLORSPACE_LINEAR							0x308A
#define EGL_VG_COLORSPACE_LINEAR							0x308A
#define EGL_ALPHA_FORMAT_NONPRE								0x308B
#define EGL_ALPHA_FORMAT_NONPRE								0x308B
#define EGL_ALPHA_FORMAT_PRE								0x308C
#define EGL_ALPHA_FORMAT_PRE								0x308C
#define EGL_CLIENT_APIS										0x308D
#define EGL_RGB_BUFFER										0x308E
#define EGL_LUMINANCE_BUFFER								0x308F
#define EGL_HORIZONTAL_RESOLUTION							0x3090
#define EGL_VERTICAL_RESOLUTION								0x3091
#define EGL_PIXEL_ASPECT_RATIO								0x3092
#define EGL_SWAP_BEHAVIOR									0x3093
#define EGL_BUFFER_PRESERVED								0x3094
#define EGL_BUFFER_DESTROYED								0x3095
#define EGL_OPENVG_IMAGE									0x3096
#define EGL_CONTEXT_CLIENT_TYPE								0x3097
#define EGL_CONTEXT_CLIENT_VERSION							0x3098
#define EGL_CONTEXT_MAJOR_VERSION							0x3098
#define EGL_CONTEXT_MAJOR_VERSION_KHR						0x3098
#define EGL_MULTISAMPLE_RESOLVE								0x3099
#define EGL_MULTISAMPLE_RESOLVE_DEFAULT						0x309A
#define EGL_MULTISAMPLE_RESOLVE_BOX							0x309B
#define EGL_CL_EVENT_HANDLE									0x309C
#define EGL_GL_COLORSPACE									0x309D
#define EGL_OPENGL_ES_API									0x30A0
#define EGL_OPENVG_API										0x30A1
#define EGL_OPENGL_API										0x30A2
#define EGL_GL_TEXTURE_2D									0x30B1
#define EGL_GL_TEXTURE_2D_KHR								0x30B1
#define EGL_GL_TEXTURE_3D									0x30B2
#define EGL_GL_TEXTURE_3D_KHR								0x30B2
#define EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_X					0x30B3
#define EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_X_KHR				0x30B3
#define EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_X					0x30B4
#define EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_X_KHR				0x30B4
#define EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Y					0x30B5
#define EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Y_KHR				0x30B5
#define EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y					0x30B6
#define EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_KHR				0x30B6
#define EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Z					0x30B7
#define EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Z_KHR				0x30B7
#define EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z					0x30B8
#define EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_KHR				0x30B8
#define EGL_GL_RENDERBUFFER									0x30B9
#define EGL_GL_RENDERBUFFER_KHR								0x30B9
#define EGL_GL_TEXTURE_LEVEL								0x30BC
#define EGL_GL_TEXTURE_LEVEL_KHR							0x30BC
#define EGL_GL_TEXTURE_ZOFFSET								0x30BD
#define EGL_GL_TEXTURE_ZOFFSET_KHR							0x30BD
#define EGL_CONTEXT_OPENGL_ROBUST_ACCESS_EXT				0x30BF
#define EGL_FORMAT_RGB_565_EXACT_KHR						0x30C0
#define EGL_FORMAT_RGB_565_KHR								0x30C1
#define EGL_FORMAT_RGBA_8888_EXACT_KHR						0x30C2
#define EGL_FORMAT_RGBA_8888_KHR							0x30C3
#define EGL_MAP_PRESERVE_PIXELS_KHR							0x30C4
#define EGL_LOCK_USAGE_HINT_KHR								0x30C5
#define EGL_BITMAP_POINTER_KHR								0x30C6
#define EGL_BITMAP_PITCH_KHR								0x30C7
#define EGL_BITMAP_ORIGIN_KHR								0x30C8
#define EGL_BITMAP_PIXEL_RED_OFFSET_KHR						0x30C9
#define EGL_BITMAP_PIXEL_GREEN_OFFSET_KHR					0x30CA
#define EGL_BITMAP_PIXEL_BLUE_OFFSET_KHR					0x30CB
#define EGL_BITMAP_PIXEL_ALPHA_OFFSET_KHR					0x30CC
#define EGL_BITMAP_PIXEL_LUMINANCE_OFFSET_KHR				0x30CD
#define EGL_LOWER_LEFT_KHR									0x30CE
#define EGL_UPPER_LEFT_KHR									0x30CF
#define EGL_IMAGE_PRESERVED									0x30D2
#define EGL_IMAGE_PRESERVED_KHR								0x30D2
#define EGL_SYNC_PRIOR_COMMANDS_COMPLETE					0x30F0
#define EGL_SYNC_PRIOR_COMMANDS_COMPLETE_KHR				0x30F0
#define EGL_SYNC_STATUS										0x30F1
#define EGL_SYNC_STATUS_KHR									0x30F1
#define EGL_SIGNALED										0x30F2
#define EGL_SIGNALED_KHR									0x30F2
#define EGL_UNSIGNALED										0x30F3
#define EGL_UNSIGNALED_KHR									0x30F3
#define EGL_TIMEOUT_EXPIRED									0x30F5
#define EGL_TIMEOUT_EXPIRED_KHR								0x30F5
#define EGL_CONDITION_SATISFIED								0x30F6
#define EGL_CONDITION_SATISFIED_KHR							0x30F6
#define EGL_SYNC_TYPE										0x30F7
#define EGL_SYNC_TYPE_KHR									0x30F7
#define EGL_SYNC_CONDITION									0x30F8
#define EGL_SYNC_CONDITION_KHR								0x30F8
#define EGL_SYNC_FENCE										0x30F9
#define EGL_SYNC_FENCE_KHR									0x30F9
#define EGL_SYNC_REUSABLE_KHR								0x30FA
#define EGL_CONTEXT_MINOR_VERSION							0x30FB
#define EGL_CONTEXT_MINOR_VERSION_KHR						0x30FB
#define EGL_CONTEXT_FLAGS_KHR								0x30FC
#define EGL_CONTEXT_OPENGL_PROFILE_MASK						0x30FD
#define EGL_CONTEXT_OPENGL_PROFILE_MASK_KHR					0x30FD
#define EGL_SYNC_CL_EVENT									0x30FE
#define EGL_SYNC_CL_EVENT_COMPLETE							0x30FF
#define EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY_EXT	0x3138
#define EGL_BUFFER_AGE_KHR									0x313D
#define EGL_BUFFER_AGE_EXT									0x313D
#define EGL_NATIVE_BUFFER_ANDROID							0x3140
#define EGL_CONTEXT_OPENGL_DEBUG							0x31B0
#define EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE				0x31B1
#define EGL_CONTEXT_OPENGL_ROBUST_ACCESS					0x31B2
#define EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY_KHR	0x31BD
#define EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY_KHR	0x31BD
#define EGL_NO_RESET_NOTIFICATION							0x31BE
#define EGL_NO_RESET_NOTIFICATION_KHR						0x31BE
#define EGL_NO_RESET_NOTIFICATION_EXT						0x31BE
#define EGL_LOSE_CONTEXT_ON_RESET							0x31BF
#define EGL_LOSE_CONTEXT_ON_RESET_KHR						0x31BF
#define EGL_LOSE_CONTEXT_ON_RESET_EXT						0x31BF
#define EGL_PLATFORM_X11_EXT								0x31D5
#define EGL_PLATFORM_X11_SCREEN_EXT							0x31D6
#define EGL_PLATFORM_GBM_KHR								0x31D7
#define EGL_PLATFORM_GBM_MESA								0x31D7
#define EGL_PLATFORM_WAYLAND_KHR							0x31D8
#define EGL_YUV_BUFFER_EXT									0x3300
#define EGL_YUV_ORDER_EXT									0x3301
#define EGL_YUV_ORDER_YUV_EXT								0x3302
#define EGL_YUV_ORDER_YVU_EXT								0x3303
#define EGL_YUV_ORDER_YUYV_EXT								0x3304
#define EGL_YUV_ORDER_UYVY_EXT								0x3305
#define EGL_YUV_ORDER_YVYU_EXT								0x3306
#define EGL_YUV_ORDER_VYUY_EXT								0x3307
#define EGL_YUV_ORDER_AYUV_EXT								0x3308
#define EGL_YUV_CSC_STANDARD_EXT							0x330A
#define EGL_YUV_CSC_STANDARD_601_EXT						0x330B
#define EGL_YUV_CSC_STANDARD_709_EXT						0x330C
#define EGL_YUV_CSC_STANDARD_2020_EXT						0x330D
#define EGL_YUV_NUMBER_OF_PLANES_EXT						0x3311
#define EGL_YUV_SUBSAMPLE_EXT								0x3312
#define EGL_YUV_SUBSAMPLE_4_2_0_EXT							0x3313
#define EGL_YUV_SUBSAMPLE_4_2_2_EXT							0x3314
#define EGL_YUV_SUBSAMPLE_4_4_4_EXT							0x3315
#define EGL_YUV_DEPTH_RANGE_EXT								0x3317
#define EGL_YUV_DEPTH_RANGE_LIMITED_EXT						0x3318
#define EGL_YUV_DEPTH_RANGE_FULL_EXT						0x3319
#define EGL_YUV_PLANE_BPP_EXT								0x331A
#define EGL_YUV_PLANE_BPP_0_EXT								0x331B
#define EGL_YUV_PLANE_BPP_8_EXT								0x331C
#define EGL_YUV_PLANE_BPP_10_EXT							0x331D
