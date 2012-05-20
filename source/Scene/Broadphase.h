#ifndef STINGRAY_SCENE_BROADPHASE_H
#define STINGRAY_SCENE_BROADPHASE_H

namespace stingray
{
	namespace renderer
	{
		class Ray;
	}
	
	namespace scene
	{
		class Shape;
		class Scene;
		
		class Broadphase
		{
		public:
			std::vector<Shape*>* doBroadphase(renderer::Ray* ray) = 0;
			
			void setupBroadphase() = 0;
			
			void setScene(Scene* scene);
		protected:
			Broadphase();
			
			Scene* m_scene;
			
		public:
			static Broadphase* CreateBroadphase(const std::string& broadphaseID);
		};
	}
}

#endif