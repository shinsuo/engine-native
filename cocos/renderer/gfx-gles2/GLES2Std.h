#ifndef __CC_GFXGLES2_GLES2_STD_H__
#define __CC_GFXGLES2_GLES2_STD_H__

#include <Core.h>

#if (CC_PLATFORM == CC_PLATFORM_WINDOWS)
#	ifdef CC_GLES2_EXPORTS
#		define CC_GLES2_API __declspec(dllexport)
#	else
#		define CC_GLES2_API __declspec(dllimport)
#	endif
#else
#	define CC_GLES2_API
#endif

#endif