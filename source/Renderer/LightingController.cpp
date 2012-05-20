#include <Renderer/LightingController.h>

using namespace stingray;
using namespace stingray::renderer;

void LightingController::setScene(Scene* scene)
{
	m_scene = scene;
}

LightingController* LightingController::CreateLightingController(const std::string& lightingControllerType)
{
	// TODO: No internet right now. Does this work in c++?
	if (lightingControllerType == "no-lighting" || lightingControllerType == "")
	{
		return new DummyLightingController();
	}
	else
	{
		std::cerr << "Unknown lighting type" << std::endln;
		return NULL;
	}
}