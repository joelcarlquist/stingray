#ifndef STINGRAY_SCENE_SCENE_H
#define STINGRAY_SCENE_SCENE_H

#include <vector>
#include <string>

namespace stingray
{
	namespace renderer
	{
		class Image;
		class LightingController;
	}
	
	namespace scene
	{
		class Camera;
		class ForceField;
		class LightSource;
		class Shape;
		class Broadphase;

		class Scene
		{
		public:
			Scene();
			~Scene();

			// returns 0 if success
			// returns 1 if there was an issue with the file
			int loadSceneFromFile(std::string path);

			// Returns 0 if success
			// returns 1 not all parameters required was set
			int lightScene();
			renderer::Image* getImageFromScene();
		private:
			void addShape(stingray_collision::Shape* shape);
			void setCamera(Camera* camera);
			
			void setLightingType(const std::string& lightingType);
			void setBroadphaseType(const std::string& broadphaseType);
			void setRayTracerGranularity(const std::string& granularity);
			void setResolution(unsigned int width, unsigned int height);

			std::vector<collision::Shape*>* m_shapes;
			std::vector<ForceField*> m_forceFields;
			std::vector<LightSource*> m_lightSources;
			Camera* m_camera;
			Broadphase* m_broadphase;
			renderer::LightingController* m_lighting;
			unsigned int m_granularity;
			unsigned int m_width, m_height;
		};
	}
}

#endif
