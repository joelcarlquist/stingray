
#include <Math/Vec3.h>

using namespace stingray_math;

Vec3::Vec3(double s)
{
	m_val[0] = m_val[1] = m_val[2] = s;
}
Vec3::Vec3(double x, double y, double z)
{
	m_val[0] = x;
	m_val[1] = y;
	m_val[2] = z;
}
Vec3::~Vec3()
{
}
