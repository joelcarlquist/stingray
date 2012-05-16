#ifndef STINGRAY_SCENE_CAMERA_H
#define STINGRAY_SCENE_CAMERA_H

#include <Math/Vec3.h>

namespace stingray
{
	namespace scene
	{
		class Camera
		{
		public:
			Camera(stingray_math::Vec3* origin, stingray_math::Vec3* direction, double viewAngle);
			~Camera();

		private:
			stingray_math::Vec3* m_origin;
			stingray_math::Vec3* m_direction;
			double m_viewAngle;
		};
	}
}

#endif
