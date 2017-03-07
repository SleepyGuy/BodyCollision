#pragma once
#ifndef _CIRCLE_H_
#define _CIRCLE_H_

namespace Figure {

	class Circle {

	public:
		bool Intersects(Circle rhs);
		Circle(float x, float y, float r);
		float m_radius;
		float m_x;
		float m_y;
	private:


	};
};

#endif // !_CIRCLE_H_