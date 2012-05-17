#ifndef STINGRAY_RENDERER_DUMMYLIGHTINGCONTROLLER_H
#define STINGRAY_RENDERER_DUMMYLIGHTINGCONTROLLER_H

#include <Renderer/LightingController.h>

namespace stingray
{
	namespace renderer
	{
		class DummyLightingController: public LightingController
		{
		public:
			void doLight();
			math::Vec4* getColorAt(scene::CollisionInfo* collision);
		};
	}
}

#endif