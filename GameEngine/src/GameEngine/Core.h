#pragma once

#ifdef GE_PLATFORM_WINDOWS
	#ifdef GE_BUILD_DLL
		#define GAMEENGINE_API _declspec(dllexport)
	#else
		#define GAMEENGINE_API _declspec(dllimport)
	#endif
#else
	#error GameEngine only support Windows!
#endif
