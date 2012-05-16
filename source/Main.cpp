
#include <Renderer/Image.h>
#include <Scene/Scene.h>

using namespace stingray_scene;

int main(int argc, char** argv)
{
	stingray_scene::Scene* scene = new Scene();
	if (argc > 1)
	{
		scene->loadSceneFromFile(std::string(argv[1]));
	}
	else
	{
		scene->loadSceneFromFile(std::string(""));
	}

	scene->lightScene();
	stingray_renderer::Image* image = scene->getImageFromScene();
	if (argc > 2)
	{
		image->store(std::string(argv[2]));
	}
	else
	{
		image->store(std::string("temp.png");
	}
	delete image;
	delete scene;
}
