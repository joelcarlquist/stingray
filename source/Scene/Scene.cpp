#include <Scene/Scene.h>

#include <Scene/Sphere.h>
#include <Renderer/Material.h>
#include <Math/constants.h>
#include <Math/Vec3.h>
#include <Math/Vec4.h>

using namespace stingray;
using namespace stingray::scene;

Scene::Scene() : m_camera(nullptr)
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
		AddShape(new Sphere(new math::Vec3(0.0, 0.0, 0.0), 
		                    new renderer::Material(
							   new math::Vec4(1.0, 0.0, 0.0, 0.0), 0.0, 0.0),
		                    1.0));
		AddShape(new Sphere(new math::Vec3(0.0, 1.5, 1.5), 
							new renderer::Material(
							   new math::Vec4(0.0, 1.0, 0.0, 0.0), 0.0, 0.0),
		                    0.5));
		SetCamera(new Camera(new math::Vec3(-1.5, -1.5, -1.5), 
		                     new math::Vec3(1.0, 1.0, 1.0), 
							 1.5 * math::pi));
	}
	// Non-default scene is not supported
	else
	{
		std::cerr << "DON'T TRY TO LOAD NON-DEFAULT SCENES, JACKASS"  << std::endln;
	}
}

