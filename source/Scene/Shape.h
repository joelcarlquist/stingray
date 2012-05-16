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
		class Matrix4x4;
	}
	
	namespace scene
	{
		class Shape
		{
		public:
			Shape(math::Matrix4x4* transformation, renderer::Material* material);
			~Shape();

			virtual double trace(renderer::Ray* ray) = 0;
		private:
			renderer::Material* m_material;
			math::Matrix4x4* m_transformation;
		};
	}
}

#endif
