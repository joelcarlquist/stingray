#ifndef STINGRAY_COLLISION_SHAPE_H
#define STINGRAY_COLLISION_SHAPE_H


namespace stingray
{
	namespace renderer
	{
		class Material;
		class Ray;
	}
	namespace math
	{
		class Vec3;
	}
	
	namespace scene
	{
		class Shape
		{
		public:
			Shape(math::Vec3* position, renderer::Material* material);
			~Shape();

			virtual double trace(renderer::Ray* ray) = 0;
		private:
			renderer::Material* m_material;
			math::Vec3* m_position;
		};
	}
}

#endif
