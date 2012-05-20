#ifndef STINGRAY_RENDERER_LIGHTINGCONTROLLER_H
#define STINGRAY_RENDERER_LIGHTINGCONTROLLER_H

namespace stingray
{
	namespace scene
	{
		class Scene;
		class CollisionInfo;
	}
	
	namespace math
	{
		class Vec4;
	}
	
	namespace renderer
	{
		class LightingController
		{
		public:
			void setScene(scene::Scene* scene);
			void doLight() = 0;
			math::Vec3* getColorAt(scene::CollisionInfo* collision) = 0;
		protected:
			scene::Scene* m_scene;
		
		public:
			static LightingController* CreateLightingController(const std::string& lightingControllerType);
		};
	}
}
#endif