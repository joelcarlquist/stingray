#ifndef STINGRAY_COLLISION_SPHERE_H
#define STINGRAY_COLLISION_SPHERE_H

#include <Scene/Shape.h>


namespace stingray
{
	namespace scene
	{
		class Sphere : public Shape
		{
		public:
			Sphere(math::Matrix4x4* transformation, renderer::Material* material, double radius);
			~Sphere();

			double trace(renderer::Ray* ray);
		private:
			double m_radius;
		};
	}
}

#endif
