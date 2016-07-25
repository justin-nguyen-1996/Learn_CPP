/*
 * Author:  Justin Nguyen
 * Created: 7/24/2016
 */

#include <iostream>
#include "Point2d.h"

void Point2d::print() const {
	std::cout << "(" << m_x << ", " << m_y << ")" << "\n";
}

int main() {
	Point2d point1;
	Point2d point2(3.0, 4.0);
	point1.print();
	point2.print();
}


