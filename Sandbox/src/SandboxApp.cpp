#include <GameEngine.h>

class Sandbox : public gameengine::Application
{
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

gameengine::Application* CreateApplication() {
	return new Sandbox();
}