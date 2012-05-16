#ifndef STINGRAY_COLLISION_SPHERE_H
#define STINGRAY_COLLISION_SPHERE_H

#include <Collision/Shape.h>


namespace stingray
{
	namespace scene
	{
		class Sphere : public Shape
		{
		public:
			Sphere(math::Vec3* position, renderer::Material* material, double radius);
			~Sphere();

			double trace(renderer::Ray* ray);
		private:
			double m_radius;
		};
	}
}

#endif
