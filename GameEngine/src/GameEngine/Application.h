#pragma once

#include "core.h"

namespace gameengine {
	class GAMEENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}

