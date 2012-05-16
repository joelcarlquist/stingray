#ifndef STINGRAY_SCENE_SCENE_H
#define STINGRAY_SCENE_SCENE_H

#include <Scene/ForceField.h>
#include <Scene/LightSource.h>
#include <Scene/Camera.h>
#include <vector>

#include <Collision/Shape.h>
#include <Renderer/Image.h>


namespace stingray_scene
{
	public class Scene
	{
	public:
		Scene();
		~Scene();

		void loadSceneFromFile(std::string path);

		void lightScene();
		stingray_renderer::Image* getImageFromScene();
	private:
		AddShape(stingray_collision::Shape* shape);
		SetCamera(Camera* camera);

		std::vector<stingray_collision::Shape*> m_shapes;
		std::vector<ForceField*> m_forceFields;
		std::vector<LightSource*> m_lightSources;
		Camera* m_camera;
	};
}

#endif
