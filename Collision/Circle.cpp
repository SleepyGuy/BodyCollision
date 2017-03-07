#include "Circle.h"
#include <math.h>

namespace Figure {

	Circle::Circle(float x, float y, float r)
	{
		m_x = x;
		m_y = y;
		m_radius = r;
	}

	bool Circle::Intersects(Circle rhs) {

		float diff_x = m_x - rhs.m_x;
		float diff_y = m_y - rhs.m_y;

		float DistanceCenter = sqrt(diff_x * diff_x + diff_y * diff_y);

		float DistanceRadius = m_radius + rhs.m_radius;

		return DistanceRadius >= DistanceCenter;

	}
};