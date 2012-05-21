#include <Scene/Scene.h>

#include <Scene/Sphere.h>
#include <Renderer/Material.h>
#include <Math/constants.h>
#include <Math/Vec3.h>
#include <Math/Vec4.h>

using namespace stingray;
using namespace stingray::scene;

Scene::Scene() : m_camera(NULL), m_broadphase(NULL), m_lighting(NULL)
{
	m_shapes = new std::vector<Shape*>();
}

Scene::~Scene()
{
	for(
		std::vector<Shape*>::iterator it=m_shapes->begin(),end=m_shapes->end();
		it!=end;
		++it)
	{
		delete *it;
	}
	delete m_shapes;
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
		setRayTracerGranularity("1-1");
		setResolution(800, 600);
	}
	// Non-default scene is not supported
	else
	{
		std::cerr << "DON'T TRY TO LOAD NON-DEFAULT SCENES, JACKASS"  << std::endln;
		return 1;
	}
	
	return 0;
}

int Scene::lightScene()
{
	if (!m_camera)
	{
		std::cerr << "No camera found" << std::endln;
		return 1;
	}
	if (!m_broadphase)
	{
		std::cerr << "No broadphase found" << std::endln;
		return 1;
	}
	if (!m_lighting)
	{
		std::cerr << "No lighting found" << std::endln;
		return 1;
	}
	
	m_lighting->doLight();
	
	return 0;
}
renderer::Image* getImageFromScene()
{
	Image* image = new Image(m_width, m_height);
	for (int i = 0; i < m_width; i++)
	{
		for(int j = 0; j < m_height; j++)
		{
			if (m_granularity == 1)
			{
				image->setColor(i,j,RayTracer::sendColorRay(scene, new Ray(/* camera stuff here */)));
			}
		}
	}
	return image;
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

void Scene::setRayTracerGranularity(char std::string& granularity)
{
	if (granularity == "1-1"  || granularity == "")
	{
		m_granularity = 1;
	}
}

void Scene::setResolution(unsigned int width, unsigned int height)
{
	m_width = width;
	m_height = height;
}

