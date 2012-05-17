#ifndef STINGRAY_SCENE_DUMMYBROADPHASE_H
#define STINGRAY_SCENE_DUMMYBROADPHASE_H

#include <Scene/Broadphase.h>

namespace stingray
{
	namespace scene
	{
		class DummyBroadphase: public Broadphase
		{
		public:
			std::vector<Shape*>* doBroadphase(renderer::Ray* ray);
			void setupBroadphase();
		};
	}
}

#endif