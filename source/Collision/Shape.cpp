#include <Collision/Shape.h>

using namespace stingray_collision;

Shape::Shape(stingray_math::Vec3* position, stingray_renderer::Material* material) :
	m_position(position),
	m_material(material)
{
}

Shape::~Shape()
{
}

