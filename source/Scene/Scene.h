#ifndef STINGRAY_SCENE_SCENE_H
#define STINGRAY_SCENE_SCENE_H

#include <vector>
#include <string>

namespace stingray
{
	namespace renderer
	{
		class Image;
	}
	
	namespace scene
	{
		class Camera;
		class ForceField;
		class LightSource;
		class Shape;

		class Scene
		{
		public:
			Scene();
			~Scene();

			void loadSceneFromFile(std::string path);

			void lightScene();
			renderer::Image* getImageFromScene();
		private:
			void AddShape(Shape* shape);
			void SetCamera(Camera* camera);

			std::vector<Shape*> m_shapes;
			std::vector<ForceField*> m_forceFields;
			std::vector<LightSource*> m_lightSources;
			Camera* m_camera;
		};
	}
}

#endif
