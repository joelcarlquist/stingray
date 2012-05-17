#include <Renderer/DummyLightingController.h>

using namespace stingray;
using namespace stingray::renderer;

void DummyLightingController::doLight()
{

}

math::Vec3* DummyLightingController::getColorAt(scene::CollisionInfo* collision)
{
	if (!collision || !(collision->getShape()) || !(collision->getShape()->getMaterial()))
		return NULL;
	return collision->getShape()->getMaterial()->getColor().RGB();
}