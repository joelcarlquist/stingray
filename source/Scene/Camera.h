#ifndef STINGRAY_SCENE_CAMERA_H
#define STINGRAY_SCENE_CAMERA_H

#include <Math/Vec3.h>

namespace stingray
{
	namespace math
	{
		class Matrix4x4;
	}
	namespace scene
	{
		class Camera
		{
		public:
			Camera(math::Matrix4x4* frame, double viewAngle);
			~Camera();

		private:
			math::Matrix4x4* m_frame;
			double m_viewAngle;
		};
	}
}

#endif
