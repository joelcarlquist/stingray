#include <Scene/DummyBroadphase.h>

using namespace stingray;
using namespace stingray::scene;

std::vector<Shape*>* DummyBroadphase::doBroadphase(renderer::Ray*)
{
	if (m_scene)
	{
		return new std::vector<Shape*>(m_scene->getShapes());
	}
	else
	{
		return NULL;
	}
}

void DummyBroadphase::setupBroadphase()
{

}