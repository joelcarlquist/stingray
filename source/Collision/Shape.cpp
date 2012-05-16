#include <Collision/Shape.h>

#include <Renderer/Material.h>
#include <Math/Vec3.h>

using namespace stingray_collision;
using namespace stingray_renderer;
using namespace stingray_math;

Shape::Shape(Vec3* position, Material* material) :
	m_position(position),
	m_material(material)
{
}

Shape::~Shape()
{
}

