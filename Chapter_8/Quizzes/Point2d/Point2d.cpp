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

double Point2d::distanceTo(const Point2d& point2) const {
	double x_diff = m_x - point2.m_x;
	double x_diff_squared = pow(x_diff, 2);
	
	double y_diff = m_y - point2.m_y;
	double y_diff_squared = pow(y_diff, 2);
	
	return sqrt(x_diff_squared + y_diff_squared);
}

double distanceFrom(Point2d& p1, Point2d& p2) {
	return p1.distanceTo(p2);
}

int main() {
	Point2d point1;
	Point2d point2(3.0, 4.0);
	
	std::cout << "point 1: "; point1.print();
	std::cout << "point 2: "; point2.print();
	
	std::cout << "distance from point 1 to point 2: "
			  << point1.distanceTo(point2) << "\n";
			  
	std::cout << "distance from point 1 to point 2: "
			  << distanceFrom(point1, point2) << "\n";
}


