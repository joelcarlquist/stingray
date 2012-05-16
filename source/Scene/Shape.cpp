#include <Collision/Shape.h>

#include <Renderer/Material.h>
#include <Math/Vec3.h>

using namespace stingray;
using namespace stingray::scene;

Shape::Shape(math::Matrix4x4* transformation, renderer::Material* material) :
	m_transformation(transformation),
	m_material(material)
{
}

Shape::~Shape()
{
}

