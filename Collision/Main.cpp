#pragma once
#include "Circle.h"
#include <iostream>

int main() {

	Figure::Circle c1(5, 5, 5);
	Figure::Circle c2(3, 3, 5);

	// Intersects

	if (c1.m_x + c1.m_radius + c2.m_radius > c2.m_x
		&& c1.m_x < c2.m_x + c1.m_radius + c2.m_radius
		&& c1.m_y + c1.m_radius + c2.m_radius > c2.m_y
		&& c1.m_y < c2.m_y + c1.m_radius + c2.m_radius)
		std::cout << "Axis overlap" << std::endl;
	else
		std::cout << "Axis don't overlap" << std::endl;

	return 0;
}