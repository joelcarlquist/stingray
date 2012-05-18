#ifndef STINGRAY_MATH_VEC4_H
#define STINGRAY_MATH_VEC4_H

namespace stingray
{
	namespace math
	{
		class Vec4
		{
		public:
			Vec4();
			Vec4(double s);
			Vec4(double x, double y, double z, double w);
			~Vec4();

			double x() { return m_val[0]; }
			double y() { return m_val[1]; }
			double z() { return m_val[2]; }
			double w() { return m_val[3]; }

			void x(double x) { m_val[0] = x; }
			void y(double y) { m_val[1] = y; }
			void z(double z) { m_val[2] = z; }
			void w(double w) { m_val[3] = w; }

		private:
			double m_val[4];
		};
	}
}

#endif

