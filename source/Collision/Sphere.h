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
		Sphere(stingray_math::Vec3* position, double radius, 
		       stingray_renderer::Material* material);
		~Sphere();

		double trace(stingray_renderer::Ray* ray);
	private:
		stingray_math::Vec3* m_position;
		double m_radius;
	}
}

#endif
