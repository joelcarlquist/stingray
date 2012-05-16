#ifndef STINGRAY_MATH_VEC3_H
#define STINGRAY_MATH_VEC3_H

namespace stingray_math
{
	public class Vec3
	{
	public:
		Vec3();
		Vec3(double s);
		Vec3(double x, double, y, double z);
		~Vec3();

		double x() { return m_val[0]; }
		double y() { return m_val[1]; }
		double z() { return m_val[2]; }

		void x(double x) { m_val[0] = x; }
		void y(double y) { m_val[1] = y; }
		void z(double z) { m_val[2] = z; }

	private:
		double[3] m_val;
	}
}

#endif
