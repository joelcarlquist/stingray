#include <Scene/Broadphase.h>

using namespace stingray;
using namespace stingray::scene;

Broadphase::Broadphase()
{
	m_scene = NULL;
}

void Broadphase::setScene(Scene* scene)
{
	m_scene = scene;
}

Broadphase* Broadphase::CreateBroadphase(const std::string& broadphaseType)
{
	if (broadphaseType == "no-broadphase" || broadphaseType == "")
	{
		return new DummyBroadphase();
	}
	else
	{
		std::cerr << "Unknown broadphase type" << std::endln;
		return NULL;
	}
}