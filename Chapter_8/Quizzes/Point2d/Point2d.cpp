/*
 * Author:  Justin Nguyen
 * Created: 7/24/2016
 */

#include <iostream>
#include <cmath>
#include "Point2d.h"

void Point2d::print() const {
	std::cout << "(" << m_x << ", " << m_y << ")" << "\n";
}

double Point2d::distanceTo(Point2d& point2) const {
	double x_diff = m_x - point2.getX();
	double x_diff_squared = pow(x_diff, 2);
	
	double y_diff = m_y - point2.getY();
	double y_diff-squared = pow(y_diff, 2);
	
	return sqrt(x_diff_squared, y_diff_squared);
}

int main() {
	Point2d point1;
	Point2d point2(3.0, 4.0);
	
	std::cout << "point 1: "; point1.print();
	std::cout << "point 2: "; point2.print();
	
	std::cout << "distance from point 1 to point 2: "
			  << point1.distanceTo(point2) << "\n";
}


