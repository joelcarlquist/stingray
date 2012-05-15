#ifndef STINGRAY_RENDERER_MATERIAL_H
#define STINGRAY_RENDERER_MATERIAL_H

#include <Math/Vec4.h>

namespace stingray_renderer
{
	public class Material
	{
	public:
		Material(stingray_math::Vec4* color, double refraction, double reflection);
		~Material();

	private:
		stingray_math::Vec4* m_color;
		double m_refraction;
		double m_reflection;
	};
}

#endif
