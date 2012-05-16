#ifndef STINGRAY_RENDERER_MATERIAL_H
#define STINGRAY_RENDERER_MATERIAL_H

namespace stingray
{
	namespace math
	{
		class Vec4;
	}
	namespace renderer
	{
		class Material
		{
		public:
			Material(math::Vec4* color, double refraction, double reflection);
			~Material();

		private:
			math::Vec4* m_color;
			double m_refraction;
			double m_reflection;
		};
	}
}

#endif
