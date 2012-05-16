#include <Collision/Shape.h>

#include <Renderer/Material.h>
#include <Math/Vec3.h>

using namespace stingray;
using namespace stingray::scene;

Shape::Shape(math::Vec3* position, renderer::Material* material) :
	m_position(position),
	m_material(material)
{
}

Shape::~Shape()
{
}

