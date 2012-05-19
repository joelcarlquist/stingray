#include <Scene/Scene.h>

#include <Scene/Sphere.h>
#include <Renderer/Material.h>
#include <Math/constants.h>
#include <Math/Vec3.h>
#include <Math/Vec4.h>

using namespace stingray;
using namespace stingray::scene;

Scene::Scene() : m_camera(NULL)
{
	m_shapes = new std::vector<Shape*>();
}

Scene::~Scene()
{
	for(Shape* shape in m_shapes)
	{
		delete shape;
	}
	delete m_shapes;
}

int Scene::lightScene()
{
	if (!camera)
	{
		std::cerr << "No camera found" << std::endln;
		return 1;
	}
	
	return 0;
}

int Scene::loadSceneFromFile(std::string path)
{
	// Load default scene
	if (path == "")
	{
		addShape(new Sphere(new math::Vec3(0.0, 0.0, 0.0), 
		                    new renderer::Material(
							   new math::Vec4(1.0, 0.0, 0.0, 0.0), 0.0, 0.0),
		                    1.0));
		addShape(new Sphere(new math::Vec3(0.0, 1.5, 1.5), 
							new renderer::Material(
							   new math::Vec4(0.0, 1.0, 0.0, 0.0), 0.0, 0.0),
		                    0.5));
		setCamera(new Camera(new math::Vec3(-1.5, -1.5, -1.5), 
		                     new math::Vec3(1.0, 1.0, 1.0), 
							 1.5 * math::pi));
		setLightingType("no-lighting");
		setBroadphaseType("no-broadphase");
	}
	// Non-default scene is not supported
	else
	{
		std::cerr << "DON'T TRY TO LOAD NON-DEFAULT SCENES, JACKASS"  << std::endln;
		return 1;
	}
	
	return 0;
}

void Scene::addShape(Shape* shape)
{
	m_shapes->push_back(shape);
}

void Scene::setCamera(Camera* camera)
{
	m_camera = camera;
}

void Scene::setBroadphaseType(const std::string& broadphaseType)
{
	m_broadphase = Broadphase::CreateBroadphase(broadphaseType);
	m_broadphase->setScene(this);
}

void Scene::setLightingType(const std::string& lightingType)
{
	m_lighting = renderer::LightingController::CreateLightingController(lightingType);
	m_lighting->setScene(this);
}

