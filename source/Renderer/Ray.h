#ifndef STINGRAY_RENDERER_RAY_H
#define STINGRAY_RENDERER_RAY_H

#include <Math/Vec3.h>

namespace stingray_renderer
{
	public class Ray
	{
	public:
		Ray(stingray_math::Vec3* origin, stingray_math::Vec3* direction, double range);
		~Ray();
	private:
		stingray_math::Vec3* m_origin;
		stingray_math::Vec3* m_direction;
		double m_range;
	}
}

#endif
