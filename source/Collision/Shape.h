#ifndef STINGRAY_COLLISION_SHAPE_H
#define STINGRAY_COLLISION_SHAPE_H

namespace stingray_renderer
{
	class Material;
	class Ray;
}
namespace stingray_math
{
	class Vec3;
}
namespace stingray_collision
{
	class Shape
	{
	public:
		Shape(stingray_math::Vec3* position, stingray_renderer::Material* material);
		~Shape();

		virtual double trace(stingray_renderer::Ray* ray) = 0;
	private:
		stingray_renderer::Material* m_material;
		stingray_math::Vec3* m_position;
	};
}

#endif
