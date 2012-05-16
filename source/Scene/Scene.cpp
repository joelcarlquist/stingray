#include <Scene/Scene.h>

#include <Collision/Sphere.h>
#include <Renderer/Material.h>
#include <Math/constants.h>

using namespace stingray_math;
using namespace stingray_scene;
using namespace stingray_renderer;

Scene::Scene()
{

}

Scene::~Scene()
{

}

void Scene::loadSceneFromFile(std::string path)
{
	// Load default scene
	if (path == "")
	{
		AddShape(new Sphere(new Vec3(0.0, 0.0, 0.0), 
		                    new Material(
							   new Vec4(1.0, 0.0, 0.0, 0.0), 0.0, 0.0),
		                    1.0));
		AddShape(new Sphere(new Vec3(0.0, 1.5, 1.5), 
							new Material(
							   new Vec4(0.0, 1.0, 0.0, 0.0), 0.0, 0.0),
		                    0.5));
		SetCamera(new Camera(new Vec3(-1.5, -1.5, -1.5), 
		                     new Vec3(1.0, 1.0, 1.0), 
							 1.5 * pi));
	}
	// Non-default scene is not supported
	else
	{
		std::cerr << "DON'T TRY TO LOAD NON-DEFAULT SCENES, JACKASS"  << std::endln;
	}
}

