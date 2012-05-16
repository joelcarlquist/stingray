
#include <Math/Vec3.h>

using namespace stingray_math;

Vec3::Vec3(double s) : Vec3(s,s,s)
{
}
Vec3::Vec3(double x, double, y, double z)
{
	val[0] = x;
	val[1] = y;
	val[2] = z;
}
Vec3::~Vec3()
{
}
