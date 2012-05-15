#ifndef STINGRAY_COLLISION_SHAPE_H
#define STINGRAY_COLLISION_SHAPE_H

#include <Renderer/Ray.h>

namespace stingray_collision
{
	public class Shape
	{
	public:
		Shape(stingray_renderer::Material* material);
		~Shape();

		double trace(stingray_renderer::Ray* ray) = 0;
	private:
		stingray_renderer::Material* m_material;
	};
}

#endif
