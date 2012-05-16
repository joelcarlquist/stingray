#ifndef STINGRAY_MATH_MATRIX4X4_H
#define STINGRAY_MATH_MATRIX4X4_H

namespace stingray
{
	namespace math
	{
		class Matrix4x4
		{
		public:
			// Make identity-matrix
			Matrix4x4();
		private:
			double[16] val;
		};
	}
}

#endif