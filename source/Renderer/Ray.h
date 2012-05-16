#ifndef STINGRAY_RENDERER_RAY_H
#define STINGRAY_RENDERER_RAY_H

namespace stingray
{
	namespace math
	{
		class Vec3;
	}
	namespace renderer
	{
		class Ray
		{
		public:
			Ray(math::Vec3* origin, math::Vec3* direction, double range);
			~Ray();
		private:
			math::Vec3* m_origin;
			math::Vec3* m_direction;
			double m_range;
		};
	}
}

#endif
