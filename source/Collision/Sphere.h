#ifndef STINGRAY_COLLISION_SPHERE_H
#define STINGRAY_COLLISION_SPHERE_H

#include <Collision/Shape.h>
i
#include <Math/Vec3.h>

#include <Renderer/Ray.h>
#include <Renderer/Material.h>

namespace stingray_collision
{
	public class Sphere : public Shape
	{
	public:
		Sphere(stingray_math::Vec3* position, stingray_renderer::Material* material, double radius);
		~Sphere();

		double trace(stingray_renderer::Ray* ray);
	private:
		double m_radius;
	}
}

#endif
